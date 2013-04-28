/**
 * @file ml_math.h
 * 
 * @brief Hlavickovy soubor matematicke knihovny
 * 
 * @author Lukas Vrabec
 *
 * @date 28.4.2013
 */

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

/**
 * @fn gchar* gtk_text_buffer_get_whole_text(GtkTextBuffer *buffer)              <<< opravit/dodelat
 *
 * @brief
 * 
 * @param buffer 
 * 
 * @return 
 */
gchar* gtk_text_buffer_get_whole_text(GtkTextBuffer *buffer);

/**
 * @fn StrToDouble(const char *str)
 *
 * @brief Prevod retezce na desetinne cislo
 * 
 * @param str Zdrojovy retezec, ktery se bude prevadet na cislo
 * 
 * @return Ziskane desetinnec cislo
 */
double StrToDouble(const char *str);

/**
 * @fn gboolean KeyPressed(GtkWidget *widget, GdkEventKey *event, App *app)      <<< opravit/dodelat
 *
 * @brief Fuknce volana po kazdem stisku klavesy. Zjisti, jaka klavesa byla
 * stiknuta a zavola prislusnou obsluznou fuknci.
 * 
 * @param widget
 *
 * @param event
 *
 * @param app
 * 
 * @return vzdy FALSE, kvuli zachovani handleru tlacitek
 */
gboolean KeyPressed(GtkWidget *widget, GdkEventKey *event, App *app);

/**
 * @fn void Button0_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida cislo 0 za posledni misto vstupu kalkulacky.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void Button0_Clicked(GtkButton *button, App *app);

/**
 * @fn void Button1_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida cislo 1 za posledni misto vstupu kalkulacky.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void Button1_Clicked(GtkButton *button, App *app);

/**
 * @fn void Button2_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida cislo 2 za posledni misto vstupu kalkulacky.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void Button2_Clicked(GtkButton *button, App *app);

/**
 * @fn void Button3_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida cislo 3 za posledni misto vstupu kalkulacky.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void Button3_Clicked(GtkButton *button, App *app);

/**
 * @fn void Button4_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida cislo 4 za posledni misto vstupu kalkulacky.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void Button4_Clicked(GtkButton *button, App *app);

/**
 * @fn void Button5_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida cislo 5 za posledni misto vstupu kalkulacky.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void Button5_Clicked(GtkButton *button, App *app);

/**
 * @fn void Button6_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida cislo 6 za posledni misto vstupu kalkulacky.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void Button6_Clicked(GtkButton *button, App *app);

/**
 * @fn void Button7_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida cislo 7 za posledni misto vstupu kalkulacky.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void Button7_Clicked(GtkButton *button, App *app);

/**
 * @fn void Button8_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida cislo 8 za posledni misto vstupu kalkulacky.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void Button8_Clicked(GtkButton *button, App *app);

/**
 * @fn void Button9_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida cislo 9 za posledni misto vstupu kalkulacky.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void Button9_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonAdd_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani po prvnim zadanem cislu toto cislo ulozi do pameti a nastavi
 * stav na cekani na druhe zadane cislo. Pri volani po druhem zadanem cislu z nich
 * vypocita soucet a nastavi stav na cekani na dalsi zadane cislo.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonAdd_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonSubtract_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani po prvnim zadanem cislu toto cislo ulozi do pameti a nastavi
 * stav na cekani na druhe zadane cislo. Pri volani po druhem zadanem cislu z nich
 * vypocita rozdil a nastavi stav na cekani na dalsi zadane cislo.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonSubtract_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonMultiply_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani po prvnim zadanem cislu toto cislo ulozi do pameti a nastavi
 * stav na cekani na druhe zadane cislo. Pri volani po druhem zadanem cislu z nich
 * vypocita nasobek a nastavi stav na cekani na dalsi zadane cislo.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonMultiply_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonDivide_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani po prvnim zadanem cislu toto cislo ulozi do pameti a nastavi
 * stav na cekani na druhe zadane cislo. Pri volani po druhem zadanem cislu z nich
 * vypocita podil a nastavi stav na cekani na dalsi zadane cislo.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonDivide_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonPower_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani po prvnim zadanem cislu toto cislo ulozi do pameti a nastavi
 * stav na cekani na druhe zadane cislo. Pri volani po druhem zadanem cislu vypocita
 * hodnotu vyrazu x^a, kde x je prvni zadane cislo a a druhe zadane cislo. A nastavi
 * stav cekani na dalsi zadane cislo, ktere se pak pouzije jako exponent.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonPower_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonLn_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani vypocita prirozeny logaritmus aktualniho cisla
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonLn_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonAbs_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani vypocita absolutniho hodnotu aktualniho cisla
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonAbs_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonDecimal_Clicked(GtkButton *button, App *app)
 *
 * @brief Prida oddelovac desetinnych mist za posledni misto vstupu kalkulacky
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonDecimal_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonRoot_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani po prvnim zadanem cislu toto cislo ulozi do pameti a nastavi
 * stav na cekani na druhe zadane cislo. Pri volani po druhem zadanem cislu vypocita
 * a-tou odmocninu x, kde x je prvni zadane cislo a a druhe zadane cislo.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonRoot_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonRound_Clicked(GtkButton* button, App* app)
 *
 * @brief Pri volani vypocita faktorial aktualniho cisla
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonFactorial_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonExp_Clicked(GtkButton *button, App *app)
 *
 * @brief Vypocita hodnotnu e^x, kde e je Eulerovo cislo a x je aktualni cislo
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonExp_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonExec_Clicked(GtkButton *button, App *app)
 *
 * @brief Provede vypocet zadaneho vyrazu.
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonExec_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonC_Clicked(GtkButton *button, App *app)
 * 
 * @todo Toto se jeste musi dodelat
 */
void ButtonC_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonAc_Clicked(GtkButton *button, App *app)
 * 
 * @todo Toto se jeste musi dodelat
 */
void ButtonAc_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonSign_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani zmeni znamenko aktualniho cisla
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonSign_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonRound_Clicked(GtkButton* button, App* app)
 *
 * @brief Pri volani zaokrouhli hodnotu aktualniho cisla
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonRound_Clicked(GtkButton* button, App* app);

/**
 * @fn void ButtonSq_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani umocni na druhou hodnotu aktualniho cisla
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonSq_Clicked(GtkButton *button, App *app);

/**
 * @fn void ButtonInv_Clicked(GtkButton *button, App *app)
 *
 * @brief Pri volani vypocita prevracenou hodnotu aktualniho cisla
 * 
 * @param button Tlacitko, ktere bylo stisknuto
 *
 * @param app Ukazatel na strukturu, ve ktere jsou potrebna data aplikace
 */
void ButtonInv_Clicked(GtkButton *button, App *app);

#endif
