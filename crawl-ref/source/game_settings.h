/*******************************************************************************************
*
*   GameSettings v1.0.0 - Tool Description
*
*   MODULE USAGE:
*       #define GUI_GAME_SETTINGS_IMPLEMENTATION
*       #include "gui_game_settings.h"
*
*       INIT: GuiGameSettingsState state = InitGuiGameSettings();
*       DRAW: GuiGameSettings(&state);
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

#ifndef GUI_GAME_SETTINGS_H
#define GUI_GAME_SETTINGS_H

typedef struct {
    // Define anchors
    Vector2 anchor01;            // ANCHOR ID:1
    Vector2 anchor02;            // ANCHOR ID:2
    
    // Define controls variables
    bool Toggle000Active;            // Toggle: Toggle000
    bool Toggle001Active;            // Toggle: Toggle001
    bool WindowBox002Active;            // WindowBox: WindowBox002

    // Define rectangles
    Rectangle layoutRecs[3];

    // Custom state variables (depend on development software)
    // NOTE: This variables should be added manually if required

} GuiGameSettingsState;

#ifdef __cplusplus
extern "C" {            // Prevents name mangling of functions
#endif

//----------------------------------------------------------------------------------
// Defines and Macros
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Types and Structures Definition
//----------------------------------------------------------------------------------
// ...

//----------------------------------------------------------------------------------
// Module Functions Declaration
//----------------------------------------------------------------------------------
GuiGameSettingsState InitGuiGameSettings(void);
void GuiGameSettings(GuiGameSettingsState *state);


#ifdef __cplusplus
}
#endif

#endif // GUI_GAME_SETTINGS_H

/***********************************************************************************
*
*   GUI_GAME_SETTINGS IMPLEMENTATION
*
************************************************************************************/
#if defined(GUI_GAME_SETTINGS_IMPLEMENTATION)

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
GuiGameSettingsState InitGuiGameSettings(void)
{
    GuiGameSettingsState state = { 0 };

    // Init anchors
    state.anchor01 = (Vector2){ 480, 96 };            // ANCHOR ID:1
    state.anchor02 = (Vector2){ 480, 96 };            // ANCHOR ID:2
    
    // Initilize controls variables
    state.Toggle000Active = true;            // Toggle: Toggle000
    state.Toggle001Active = true;            // Toggle: Toggle001
    state.WindowBox002Active = true;            // WindowBox: WindowBox002

    // Init controls rectangles
    state.layoutRecs[0] = (Rectangle){ 528, 168, 144, 32 };// Toggle: Toggle000
    state.layoutRecs[1] = (Rectangle){ 528, 216, 144, 32 };// Toggle: Toggle001
    state.layoutRecs[2] = (Rectangle){ state.anchor02.x + 0, state.anchor02.y + 0, 240, 240 };// WindowBox: WindowBox002

    // Custom variables initialization

    return state;
}


void GuiGameSettings(GuiGameSettingsState *state)
{
    // Const text
    const char *Toggle000Text = "Toggle jewelry_prompt";    // TOGGLE: Toggle000
    const char *Toggle001Text = "Toggle easy_unequip";    // TOGGLE: Toggle001
    const char *WindowBox002Text = "Game Settings";    // WINDOWBOX: WindowBox002
    
    // Draw controls
    if (state->WindowBox002Active)
    {
        state->WindowBox002Active = !GuiWindowBox(state->layoutRecs[2], WindowBox002Text);
    }
    state->Toggle000Active = GuiToggle(state->layoutRecs[0], Toggle000Text, state->Toggle000Active);
    state->Toggle001Active = GuiToggle(state->layoutRecs[1], Toggle001Text, state->Toggle001Active);
}

#endif // GUI_GAME_SETTINGS_IMPLEMENTATION
