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
    ML_CALC_BUTTONS_MAX
};

typedef struct
{
    GtkWindow *mainWindow;
    GtkTextView *textView;
    GtkButton *buttons[ML_CALC_BUTTONS_MAX];

    double storedNum;
    int step;

    gchar *buffer;
} App;

#endif