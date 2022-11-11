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

#undef RAYGUI_IMPLEMENTATION
#include "raygui.h"

#include <string.h>     // Required for: strcpy()

#ifndef GUI_SOUND-SETTINGS_H
#define GUI_SOUND-SETTINGS_H

typedef struct {
    float Slider001Value;

    

} GuiSound-settingsState;

#ifdef __cplusplus
extern "C" {            // Prevents name mangling of functions
#endif


GuiSound-settingsState InitGuiSound-settings(void);
void GuiSound-settings(GuiSound-settingsState *state);

static void VolumeLevel();

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

    state.Slider001Value = 0.0f;

    // Custom variables initialization

    return state;
}


void GuiSound-settings(GuiSound-settingsState *state)
{
    GuiGroupBox((Rectangle){ 528, 152, 192, 96 }, "Sound Settings");
    state->Slider001Value = GuiSlider((Rectangle){ 576, 192, 112, 16 }, "Volume", NULL, state->Slider001Value, 0, 100);
}

//Sets the volume level based on a slider bar float value input
static void VolumeLevel()
{
    // TODO: Implement control logic

}

#endif // GUI_SOUND-SETTINGS_IMPLEMENTATION
