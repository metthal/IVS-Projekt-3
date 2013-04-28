#ifndef ML_OPERATIONS_H
#define ML_OPERATIONS_H

#include "shared.h"

enum Steps
{
    STEP_WAIT_FIRST_NUMBER           =0,
    STEP_FIRST_NUMBER,
    STEP_WAIT_SECOND_NUMBER,
    STEP_SECOND_NUMBER,
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
void ButtonMultiply_Clicked(GtkButton *button, App *app);
void ButtonDivide_Clicked(GtkButton *button, App *app);
void ButtonPower_Clicked(GtkButton *button, App *app);
void ButtonLn_Clicked(GtkButton *button, App *app);
void ButtonAbs_Clicked(GtkButton *button, App *app);
void ButtonDecimal_Clicked(GtkButton *button, App *app);
void ButtonRoot_Clicked(GtkButton *button, App *app);
void ButtonFactorial_Clicked(GtkButton *button, App *app);
void ButtonExp_Clicked(GtkButton *button, App *app);
void ButtonExec_Clicked(GtkButton *button, App *app);
void ButtonC_Clicked(GtkButton *button, App *app);
void ButtonAc_Clicked(GtkButton *button, App *app);
void ButtonSign_Clicked(GtkButton *button, App *app);
void ButtonRound_Clicked(GtkButton* button, App* app);
void ButtonSq_Clicked(GtkButton *button, App *app);
void ButtonInv_Clicked(GtkButton *button, App *app);

#endif