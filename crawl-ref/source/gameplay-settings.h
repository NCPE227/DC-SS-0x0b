/*******************************************************************************************
*
*   Sound-settings v1.0.0 - Tool Description
*
*   MODULE USAGE:
*       #define GUI_SOUND-SETTINGS_IMPLEMENTATION
*       #include "gui_sound-settings.h"
*
*       INIT: GuiSound-settingsState state = InitGuiSound-settings();
*       DRAW: GuiSound-settings(&state);
*
*   LICENSE: Propietary License
*
*   Copyright (c) 2022 raylib technologies. All Rights Reserved.
*
*   Unauthorized copying of this file, via any medium is strictly prohibited
*   This project is proprietary and confidential unless the owner allows
*   usage in any other form by expresely written permission.
*
**********************************************************************************************/

#include "raylib.h"

// WARNING: raygui implementation is expected to be defined before including this header
#undef RAYGUI_IMPLEMENTATION
#include "raygui.h"

#include <string.h>     // Required for: strcpy()

#ifndef GUI_SOUND-SETTINGS_H
#define GUI_SOUND-SETTINGS_H

typedef struct {
    bool WindowBox000Active;
    bool CheckBoxEx001Checked;
    bool CheckBoxEx002Checked;

    // Custom state variables (depend on development software)
    // NOTE: This variables should be added manually if required

} GuiSound-settingsState;

#ifdef __cplusplus
extern "C" {            // Prevents name mangling of functions
#endif


GuiSound-settingsState InitGuiSound-settings(void);
void GuiSound-settings(GuiSound-settingsState *state);

static void JewelryPrompt();
static void EasyUnequip();

#ifdef __cplusplus
}
#endif

#endif // GUI_SOUND-SETTINGS_H


#if defined(GUI_SOUND-SETTINGS_IMPLEMENTATION)

#include "raygui.h"

//----------------------------------------------------------------------------------
// Global Variables Definition
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Internal Module Functions Definition
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Module Functions Definition
//----------------------------------------------------------------------------------
GuiSound-settingsState InitGuiSound-settings(void)
{
    GuiSound-settingsState state = { 0 };

    state.WindowBox000Active = true;
    state.CheckBoxEx001Checked = false;
    state.CheckBoxEx002Checked = false;

    // Custom variables initialization

    return state;
}


void GuiSound-settings(GuiSound-settingsState *state)
{
    if (state->WindowBox000Active)
    {
        state->WindowBox000Active = !GuiWindowBox((Rectangle){ 424, 192, 264, 160 }, "Gameplay Settings");
        state->CheckBoxEx001Checked = GuiCheckBox((Rectangle){ 456, 240, 24, 24 }, "jewelry_prompt", state->CheckBoxEx001Checked);
        state->CheckBoxEx002Checked = GuiCheckBox((Rectangle){ 456, 288, 24, 24 }, "easy_unequip", state->CheckBoxEx002Checked);
    }
}

//Has a check box toggle to control activation
static void JewelryPrompt()
{
    // TODO: Implement control logic
}

//Has a check box toggle to control activation
static void EasyUnequip()
{
    // TODO: Implement control logic
}


#endif // GUI_SOUND-SETTINGS_IMPLEMENTATION
