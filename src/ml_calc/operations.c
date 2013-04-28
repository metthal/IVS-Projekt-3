#include "operations.h"
#include "ml_math.h"

Buttons buttonsData[ML_CALC_BUTTONS_MAX] =
{
    { "but_ml_0", &Button0_Clicked },
    { "but_ml_1", &Button1_Clicked },
    { "but_ml_2", &Button2_Clicked },
    { "but_ml_3", &Button3_Clicked },
    { "but_ml_4", &Button4_Clicked },
    { "but_ml_5", &Button5_Clicked },
    { "but_ml_6", &Button6_Clicked },
    { "but_ml_7", &Button7_Clicked },
    { "but_ml_8", &Button8_Clicked },
    { "but_ml_9", &Button9_Clicked },
    { "but_ml_add", &ButtonAdd_Clicked },
    { "but_ml_subtract", &ButtonSubtract_Clicked },
    { "but_ml_multiply", &ButtonMultiply_Clicked },
    { "but_ml_divide", &ButtonDivide_Clicked },
    { "but_ml_power", &ButtonPower_Clicked },
    { "but_ml_ln", &ButtonLn_Clicked },
    { "but_ml_abs", &ButtonAbs_Clicked },
    { "but_ml_decimal", &ButtonDecimal_Clicked },
    { "but_ml_root", &ButtonRoot_Clicked },
    { "but_ml_factorial", &ButtonFactorial_Clicked },
    { "but_ml_exp", &ButtonExp_Clicked },
    { "but_ml_exec", &ButtonExec_Clicked },
    { "but_ml_C", &ButtonC_Clicked },
    { "but_ml_Ce", &ButtonCe_Clicked },
    
};

double StrToDouble(const char *str)
{
    return strtod(str, NULL);
}

gboolean KeyPressed(GtkWidget *widget, GdkEventKey *event, App *app)
{
    UNUSED(widget);

    int key = gdk_keyval_to_unicode(event->keyval);
    int buttonId = -1;

    switch (key)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            buttonId = key - '0';
            break;
        case '+':
            buttonId = ML_CALC_BUTTON_ADD;
            break;
        case '-':
            buttonId = ML_CALC_BUTTON_SUBTRACT;
            break;
        case '*':
            buttonId = ML_CALC_BUTTON_MULTIPLY;
            break;
        case '/':
            buttonId = ML_CALC_BUTTON_DIVIDE;
            break;
        case '=':
            buttonId = ML_CALC_BUTTON_EXEC;
        default:
            return FALSE;
    }

    buttonsData[buttonId].buttonClicked(NULL, app);
    return FALSE;
}

void Button0_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    if (app->step == STEP_WAIT_FIRST_NUMBER || app->step == STEP_WAIT_SECOND_NUMBER)
    {
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "", -1);
        app->step++;
    }

    gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), "0", 1);
}

void Button1_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    if (app->step == STEP_WAIT_FIRST_NUMBER || app->step == STEP_WAIT_SECOND_NUMBER)
    {
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "", -1);
        app->step++;
    }

    gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), "1", 1);
}

void Button2_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    if (app->step == STEP_WAIT_FIRST_NUMBER || app->step == STEP_WAIT_SECOND_NUMBER)
    {
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "", -1);
        app->step++;
    }
    
    gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), "2", 1);
}

void Button3_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    if (app->step == STEP_WAIT_FIRST_NUMBER || app->step == STEP_WAIT_SECOND_NUMBER)
    {
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "", -1);
        app->step++;
    }
    
    gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), "3", 1);
}

void Button4_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    if (app->step == STEP_WAIT_FIRST_NUMBER || app->step == STEP_WAIT_SECOND_NUMBER)
    {
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "", -1);
        app->step++;
    }
    
    gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), "4", 1);
}

void Button5_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    if (app->step == STEP_WAIT_FIRST_NUMBER || app->step == STEP_WAIT_SECOND_NUMBER)
    {
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "", -1);
        app->step++;
    }
    
    gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), "5", 1);
}

void Button6_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    if (app->step == STEP_WAIT_FIRST_NUMBER || app->step == STEP_WAIT_SECOND_NUMBER)
    {
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "", -1);
        app->step++;
    }
    
    gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), "6", 1);
}

void Button7_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    if (app->step == STEP_WAIT_FIRST_NUMBER || app->step == STEP_WAIT_SECOND_NUMBER)
    {
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "", -1);
        app->step++;
    }
    
    gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), "7", 1);
}

void Button8_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    if (app->step == STEP_WAIT_FIRST_NUMBER || app->step == STEP_WAIT_SECOND_NUMBER)
    {
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "", -1);
        app->step++;
    }
    
    gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), "8", 1);
}

void Button9_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    if (app->step == STEP_WAIT_FIRST_NUMBER || app->step == STEP_WAIT_SECOND_NUMBER)
    {
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "", -1);
        app->step++;
    }
    
    gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), "9", 1);
}

void ButtonAdd_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);
    
    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));

    if (app->step <= STEP_FIRST_NUMBER)
    {
        app->storedNum = StrToDouble(str);
        app->step = STEP_WAIT_SECOND_NUMBER;
    }
    else if (app->step == STEP_SECOND_NUMBER)
    {
        app->step = STEP_WAIT_SECOND_NUMBER;
        app->storedNum = app->storedNum + StrToDouble(str); // operacia ml_add
        sprintf(app->buffer, "%.10g", app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
    app->last_operation= &ButtonAdd_Clicked;
}

void ButtonSubtract_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);
    UNUSED(app);
}

void ButtonMultiply_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    UNUSED(app);
}

void ButtonDivide_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    UNUSED(app);
}

void ButtonPower_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    UNUSED(app);

}

void ButtonLn_Clicked(GtkButton* button, App* app)
{
     UNUSED(button);
     UNUSED(app);
}

void ButtonAbs_Clicked(GtkButton* button, App* app)
{
     UNUSED(button);
     UNUSED(app);
}

void ButtonExp_Clicked(GtkButton* button, App* app)
{
     UNUSED(button);
     UNUSED(app);
}

void ButtonRoot_Clicked(GtkButton* button, App* app)
{
     UNUSED(button);
     UNUSED(app);
}

void ButtonFactorial_Clicked(GtkButton* button, App* app)
{
     UNUSED(button);
     UNUSED(app);
}

void ButtonDecimal_Clicked(GtkButton* button, App* app)
{
     UNUSED(button);
     UNUSED(app);
}

void ButtonExec_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    //char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    app->last_operation(NULL, app);
    app->step = STEP_WAIT_FIRST_NUMBER;
}

void ButtonC_Clicked(GtkButton* button, App* app)
{

}

void ButtonCe_Clicked(GtkButton* button, App* app)
{

}


gchar* gtk_text_buffer_get_whole_text(GtkTextBuffer *buffer)
{
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    return gtk_text_buffer_get_text(buffer, &start, &end, TRUE);
}