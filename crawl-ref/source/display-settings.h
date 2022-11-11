/*******************************************************************************************
*
*   Display-settings v1.0.0 - Tool Description
*
*   MODULE USAGE:
*       #define GUI_DISPLAY-SETTINGS_IMPLEMENTATION
*       #include "gui_display-settings.h"
*
*       INIT: GuiDisplay-settingsState state = InitGuiDisplay-settings();
*       DRAW: GuiDisplay-settings(&state);
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

#ifndef GUI_DISPLAY-SETTINGS_H
#define GUI_DISPLAY-SETTINGS_H

typedef struct {
    bool TextBox001EditMode;
    char TextBox001Text[128];
    int ToggleGroup002Active;
    bool TextBox003EditMode;
    char TextBox003Text[128];
    float Slider004Value;
    float Slider005Value;
    bool CheckBoxEx006Checked;

    // Custom state variables (depend on development software)
    // NOTE: This variables should be added manually if required

} GuiDisplay-settingsState;

#ifdef __cplusplus
extern "C" {            // Prevents name mangling of functions
#endif


GuiDisplay-settingsState InitGuiDisplay-settings(void);
void GuiDisplay-settings(GuiDisplay-settingsState *state);

static void MenuColor();
static void ViewpointSize();
static void ColorblideMode();

#ifdef __cplusplus
}
#endif

#endif // GUI_DISPLAY-SETTINGS_H


#if defined(GUI_DISPLAY-SETTINGS_IMPLEMENTATION)

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
GuiDisplay-settingsState InitGuiDisplay-settings(void)
{
    GuiDisplay-settingsState state = { 0 };

    state.TextBox001EditMode = false;
    strcpy(state.TextBox001Text, "Menu Color");
    state.ToggleGroup002Active = 0;
    state.TextBox003EditMode = false;
    strcpy(state.TextBox003Text, "Viewpoint Size");
    state.Slider004Value = 0.0f;
    state.Slider005Value = 0.0f;
    state.CheckBoxEx006Checked = false;

    // Custom variables initialization

    return state;
}

void GuiDisplay-settings(GuiDisplay-settingsState *state)
{
    GuiGroupBox((Rectangle){ 416, 144, 320, 256 }, "Display Settings");
    if (GuiTextBox((Rectangle){ 520, 168, 120, 24 }, state->TextBox001Text, 128, state->TextBox001EditMode)) state->TextBox001EditMode = !state->TextBox001EditMode;
    state->ToggleGroup002Active = GuiToggleGroup((Rectangle){ 512, 200, 40, 24 }, "Red; Green; Blue", state->ToggleGroup002Active);
    if (GuiTextBox((Rectangle){ 520, 248, 120, 24 }, state->TextBox003Text, 128, state->TextBox003EditMode)) state->TextBox003EditMode = !state->TextBox003EditMode;
    state->Slider004Value = GuiSlider((Rectangle){ 520, 280, 120, 16 }, "Height", NULL, state->Slider004Value, 0, 100);
    state->Slider005Value = GuiSlider((Rectangle){ 520, 304, 120, 16 }, "Width", NULL, state->Slider005Value, 0, 100);
    state->CheckBoxEx006Checked = GuiCheckBox((Rectangle){ 528, 344, 24, 24 }, "Colorblind Mode", state->CheckBoxEx006Checked);
}

//Changes the golor based on a three button toggle
static void MenuColor()
{


}

//Changes the viewpoint size based on a slier bar for height and width
static void ViewpointSize()
{


}

//Toggles colorblind mode based on a check box
static void ColorblideMode()
{


}

#endif // GUI_DISPLAY-SETTINGS_IMPLEMENTATION
