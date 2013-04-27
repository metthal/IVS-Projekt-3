#ifndef ML_OPERATIONS_H
#define ML_OPERATIONS_H

#include "shared.h"

enum Steps
{
    STEP_FIRST_NUMBER       = 0,
    STEP_WAIT_FOR_NEW,
    STEP_NEW_NUMBER
};

typedef struct
{
    const char *buttonName;
    void (*buttonClicked)(GtkButton *button, App *app);
} Buttons;

gchar* gtk_text_buffer_get_whole_text(GtkTextBuffer *buffer);
double StrToDouble(const char *str);

gboolean KeyPressed(GtkWidget *widget, GdkEventKey *event, App *app);

void Button0_Clicked(GtkButton *button, App *app);
void Button1_Clicked(GtkButton *button, App *app);
void Button2_Clicked(GtkButton *button, App *app);
void Button3_Clicked(GtkButton *button, App *app);
void Button4_Clicked(GtkButton *button, App *app);
void Button5_Clicked(GtkButton *button, App *app);
void Button6_Clicked(GtkButton *button, App *app);
void Button7_Clicked(GtkButton *button, App *app);
void Button8_Clicked(GtkButton *button, App *app);
void Button9_Clicked(GtkButton *button, App *app);
void ButtonAdd_Clicked(GtkButton *button, App *app);
void ButtonSubtract_Clicked(GtkButton *button, App *app);

#endif