#ifndef ML_SHARED_H
#define ML_SHARED_H

#include <gtk/gtk.h>
#include <stdlib.h>

#define UNUSED(var)             (void)var

enum ML_CalcButtons
{
    ML_CALC_BUTTON_0            = 0,
    ML_CALC_BUTTON_1,
    ML_CALC_BUTTON_2,
    ML_CALC_BUTTON_3,
    ML_CALC_BUTTON_4,
    ML_CALC_BUTTON_5,
    ML_CALC_BUTTON_6,
    ML_CALC_BUTTON_7,
    ML_CALC_BUTTON_8,
    ML_CALC_BUTTON_9,
    ML_CALC_BUTTON_ADD,
    ML_CALC_BUTTON_SUBTRACT,
    ML_CALC_BUTTON_MULTIPLY,
    ML_CALC_BUTTON_DIVIDE,
    ML_CALC_BUTTON_POWER,
    ML_CALC_BUTTON_LN,
    ML_CALC_BUTTON_ABS,
    ML_CALC_BUTTON_DECIMAL,
    ML_CALC_BUTTON_ROOT,
    ML_CALC_BUTTON_FACTORIAL,
    ML_CALC_BUTTON_EXP,
    ML_CALC_BUTTON_EXEC,
    ML_CALC_BUUTON_C,
    ML_CALC_BUTTON_AC,
    ML_CALC_BUTTONS_MAX
};

typedef struct struct_app
{
    GtkWindow *mainWindow;
    GtkTextView *textView;
    GtkButton *buttons[ML_CALC_BUTTONS_MAX];

    double storedNum;
    int step;

    gchar *buffer;
    
    void (*last_operation)(GtkButton *button, struct struct_app *app);
} App;

#endif