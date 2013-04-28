#include "operations.h"
#include "ml_math.h"
#include <string.h>

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
    { "but_ml_AC", &ButtonAc_Clicked },
    { "but_ml_sign", &ButtonSign_Clicked },
    { "but_ml_round", &ButtonRound_Clicked },
    { "but_ml_sq", &ButtonSq_Clicked },
    { "but_ml_inv", &ButtonInv_Clicked },
    
};

void CharReplace(char *str, const char* substr, char replace)
{
    char *new_str = strstr(str, substr);
    if (!new_str)
        return;

    *new_str = replace;
    CharReplace(new_str + 1, substr, replace);
}

void PrintDouble(char *buffer, double number)
{
    sprintf(buffer, "%.10g", number);
    CharReplace(buffer, ",", '.');
}

double StrToDouble(char *str)
{
    return g_ascii_strtod(str, NULL);
}

gboolean KeyPressed(GtkWidget *widget, GdkEventKey *event, App *app)
{
    UNUSED(widget);

    int key = gdk_keyval_to_unicode(event->keyval);
    int buttonId = -1;

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    
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
            if (strlen(str) >= MAX_DIGITS)
                return FALSE;
            
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
        case 13:
        case 0:  
            buttonId = ML_CALC_BUTTON_EXEC;
            break;
        case '.':
            buttonId = ML_CALC_BUTTON_DECIMAL;
            break;
        case 127:
            buttonId = ML_CALC_BUTTON_AC;
            break;
        case 27:
        case 8:
            buttonId = ML_CALC_BUTTON_C;
            break;
        default:
            return FALSE;
    }

    buttonsData[buttonId].buttonClicked(NULL, app);
    return FALSE;
}

void Button0_Clicked(GtkButton *button, App *app)
{
    UNUSED(button);

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

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

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

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

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

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

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

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

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

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

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

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

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

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

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

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

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

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

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

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
        app->storedNum = ml_add(app->storedNum,StrToDouble(str));
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
    app->last_operation= &ButtonAdd_Clicked;
}

void ButtonSubtract_Clicked(GtkButton *button, App *app)
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
        app->storedNum = ml_subtract(app->storedNum,StrToDouble(str));
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
    app->last_operation= &ButtonSubtract_Clicked;
}

void ButtonMultiply_Clicked(GtkButton* button, App* app)
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
        app->storedNum = ml_multiply(app->storedNum,StrToDouble(str));
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
    app->last_operation= &ButtonMultiply_Clicked;   
}

void ButtonDivide_Clicked(GtkButton* button, App* app)
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
        app->storedNum = ml_divide(app->storedNum,StrToDouble(str));
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
    app->last_operation= &ButtonDivide_Clicked;
}

void ButtonPower_Clicked(GtkButton* button, App* app)
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
        app->storedNum = ml_power(app->storedNum,StrToDouble(str));
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
    app->last_operation= &ButtonPower_Clicked;
}

void ButtonLn_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    
    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (app->step <= STEP_FIRST_NUMBER)
    {
        app->storedNum = ml_ln(StrToDouble(str));
        app->step = STEP_WAIT_FIRST_NUMBER;
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
}

void ButtonAbs_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    
    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (app->step <= STEP_FIRST_NUMBER)
    {
        app->storedNum = ml_abs(StrToDouble(str));
        app->step = STEP_WAIT_FIRST_NUMBER;
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
}

void ButtonExp_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    
    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (app->step <= STEP_FIRST_NUMBER)
    {
        app->storedNum = ml_exp(StrToDouble(str));
        app->step = STEP_WAIT_FIRST_NUMBER;
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
}

void ButtonRoot_Clicked(GtkButton* button, App* app)
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
        app->storedNum = ml_root(app->storedNum,StrToDouble(str));
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
    app->last_operation= &ButtonRoot_Clicked;
}

void ButtonFactorial_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    
    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (app->step <= STEP_FIRST_NUMBER)
    {
        app->storedNum = ml_factorial(StrToDouble(str));
        app->step = STEP_WAIT_FIRST_NUMBER;
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
}

void ButtonDecimal_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);

    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (strlen(str) > MAX_DIGITS) return;

    if (strstr(str, ".") != NULL) return;

    if (app->step == STEP_FIRST_NUMBER || app->step == STEP_SECOND_NUMBER)
    {
        gtk_text_buffer_insert_at_cursor(gtk_text_view_get_buffer(app->textView), ".", -1);
    }
}

void ButtonExec_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    if(app->last_operation == NULL)
        return;

    app->last_operation(NULL, app);
    app->last_operation = NULL;
    app->step = STEP_WAIT_FIRST_NUMBER;
}

void ButtonC_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    if (app->step == STEP_SECOND_NUMBER)
    {
        app->step = STEP_WAIT_SECOND_NUMBER;
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "0", -1);
    }
    else
    {
        app->step= STEP_WAIT_FIRST_NUMBER;
        sprintf(app->buffer, "%.10g", app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    
}

void ButtonAc_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    app->storedNum = 0;
    app->step = STEP_WAIT_FIRST_NUMBER;
    gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), "0", -1);
}

void ButtonSign_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    
    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (app->step <= STEP_FIRST_NUMBER)
    {
        app->storedNum = ml_change_sign(StrToDouble(str));
        app->step = STEP_WAIT_FIRST_NUMBER;
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
}

void ButtonRound_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    
    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (app->step <= STEP_FIRST_NUMBER)
    {
        app->storedNum = ml_round(StrToDouble(str));
        app->step = STEP_WAIT_FIRST_NUMBER;
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
}

void ButtonSq_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    
    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (app->step <= STEP_FIRST_NUMBER)
    {
        app->storedNum = ml_power(StrToDouble(str),2);
        app->step = STEP_WAIT_FIRST_NUMBER;
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
}

void ButtonInv_Clicked(GtkButton* button, App* app)
{
    UNUSED(button);
    
    char *str = gtk_text_buffer_get_whole_text(gtk_text_view_get_buffer(app->textView));
    if (app->step <= STEP_FIRST_NUMBER)
    {
        app->storedNum = ml_invert(StrToDouble(str));
        app->step = STEP_WAIT_FIRST_NUMBER;
        PrintDouble(app->buffer, app->storedNum);
        gtk_text_buffer_set_text(gtk_text_view_get_buffer(app->textView), app->buffer, -1);
    }
    else
        return;
}

gchar* gtk_text_buffer_get_whole_text(GtkTextBuffer *buffer)
{
    GtkTextIter start, end;
    gtk_text_buffer_get_bounds(buffer, &start, &end);
    return gtk_text_buffer_get_text(buffer, &start, &end, TRUE);
}
