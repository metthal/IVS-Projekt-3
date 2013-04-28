#include "shared.h"
#include "main.h"
#include "operations.h"

extern Buttons buttonsData[ML_CALC_BUTTONS_MAX];

void RegisterSignals(App *app)
{
    g_signal_connect(app->mainWindow, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    g_signal_connect(app->mainWindow, "key-release-event", G_CALLBACK(KeyPressed), (gpointer)app);

    for (int i = 0; i < ML_CALC_BUTTONS_MAX; ++i)
        g_signal_connect(GTK_WIDGET(app->buttons[i]), "clicked", G_CALLBACK(buttonsData[i].buttonClicked), (gpointer)app);
}

int Init(App **app)
{
    *app = malloc(sizeof(App));
    if (*app == NULL)
        return 0;

    (*app)->step = STEP_WAIT_FIRST_NUMBER;
    (*app)->buffer = malloc(256);
    (*app)->buffer[0] = '0';
    (*app)->buffer[1] = 0; 

    gtk_init(NULL, NULL);

    GtkBuilder *builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "src/ml_calc/calc.glade", NULL); //* @todo calc.glade bude v /usr/share po instalacii */

    (*app)->mainWindow = GTK_WINDOW(gtk_builder_get_object(builder, "mainWindow"));
    (*app)->textView = GTK_TEXT_VIEW(gtk_builder_get_object(builder, "textView"));

    gtk_text_buffer_set_text(gtk_text_view_get_buffer((*app)->textView), (*app)->buffer, -1);

    for (int i = 0; i < ML_CALC_BUTTONS_MAX; ++i)
        (*app)->buttons[i] = GTK_BUTTON(gtk_builder_get_object(builder, buttonsData[i].buttonName));

    g_object_unref(G_OBJECT(builder));
    gtk_widget_show(GTK_WIDGET((*app)->mainWindow));

    RegisterSignals(*app);
    return 1;
}

int main(int argc, char *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    App *app = NULL;
    if (!Init(&app))
        return 1;

    gtk_main();

    free(app->buffer);
    free(app);
    return 0;
}