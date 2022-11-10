/*******************************************************************************************
*
*   LayoutName v1.0.0 - Tool Description
*
*   MODULE USAGE:
*       #define GUI_LAYOUT_NAME_IMPLEMENTATION
*       #include "gui_layout_name.h"
*
*       INIT: GuiLayoutNameState state = InitGuiLayoutName();
*       DRAW: GuiLayoutName(&state);
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

#ifndef GUI_LAYOUT_NAME_H
#define GUI_LAYOUT_NAME_H

typedef struct {
    // Define anchors
    Vector2 anchor01;            // ANCHOR ID:1
    
    // Define controls variables
    bool WindowBox000Active;            // WindowBox: WindowBox000

    // Define rectangles
    Rectangle layoutRecs[7];

    // Custom state variables (depend on development software)
    // NOTE: This variables should be added manually if required

} GuiLayoutNameState;

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
GuiLayoutNameState InitGuiLayoutName(void);
void GuiLayoutName(GuiLayoutNameState *state);
static void Button001();                // Button: Button001 logic
static void Button002();                // Button: Button002 logic
static void Load Game();                // Button: Load Game logic
static void Button004();                // Button: Button004 logic
static void Button005();                // Button: Button005 logic
static void Button006();                // Button: Button006 logic

#ifdef __cplusplus
}
#endif

#endif // GUI_LAYOUT_NAME_H

/***********************************************************************************
*
*   GUI_LAYOUT_NAME IMPLEMENTATION
*
************************************************************************************/
#if defined(GUI_LAYOUT_NAME_IMPLEMENTATION)

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
GuiLayoutNameState InitGuiLayoutName(void)
{
    GuiLayoutNameState state = { 0 };

    // Init anchors
    state.anchor01 = (Vector2){ 504, 144 };            // ANCHOR ID:1
    
    // Initilize controls variables
    state.WindowBox000Active = true;            // WindowBox: WindowBox000

    // Init controls rectangles
    state.layoutRecs[0] = (Rectangle){ 504, 144, 168, 336 };// WindowBox: WindowBox000
    state.layoutRecs[1] = (Rectangle){ 528, 192, 120, 24 };// Button: Button001
    state.layoutRecs[2] = (Rectangle){ 528, 240, 120, 24 };// Button: Button002
    state.layoutRecs[3] = (Rectangle){ 528, 288, 120, 24 };// Button: Load Game
    state.layoutRecs[4] = (Rectangle){ 528, 336, 120, 24 };// Button: Button004
    state.layoutRecs[5] = (Rectangle){ 528, 384, 120, 24 };// Button: Button005
    state.layoutRecs[6] = (Rectangle){ 528, 432, 120, 24 };// Button: Button006

    // Custom variables initialization

    return state;
}
// Button: Button001 logic
static void Button001()
{
    // TODO: Implement control logic
}
// Button: Button002 logic
static void Button002()
{
    // TODO: Implement control logic
}
// Button: Load Game logic
static void Load Game()
{
    // TODO: Implement control logic
}
// Button: Button004 logic
static void Button004()
{
    // TODO: Implement control logic
}
// Button: Button005 logic
static void Button005()
{
    // TODO: Implement control logic
}
// Button: Button006 logic
static void Button006()
{
    // TODO: Implement control logic
}


void GuiLayoutName(GuiLayoutNameState *state)
{
    // Const text
    const char *WindowBox000Text = "Options Menu";    // WINDOWBOX: WindowBox000
    const char *Button001Text = "Resume";    // BUTTON: Button001
    const char *Button002Text = "Save Game";    // BUTTON: Button002
    const char *Load GameText = "Load Game";    // BUTTON: Load Game
    const char *Button004Text = "Display Settings";    // BUTTON: Button004
    const char *Button005Text = "Game Settings";    // BUTTON: Button005
    const char *Button006Text = "Sound Settings";    // BUTTON: Button006
    
    // Draw controls
    if (state->WindowBox000Active)
    {
        state->WindowBox000Active = !GuiWindowBox(state->layoutRecs[0], WindowBox000Text);
        if (GuiButton(state->layoutRecs[1], Button001Text)) Button001(); 
        if (GuiButton(state->layoutRecs[2], Button002Text)) Button002(); 
        if (GuiButton(state->layoutRecs[3], Load GameText)) Load Game(); 
        if (GuiButton(state->layoutRecs[4], Button004Text)) Button004(); 
        if (GuiButton(state->layoutRecs[5], Button005Text)) Button005(); 
        if (GuiButton(state->layoutRecs[6], Button006Text)) Button006(); 
    }
}

#endif // GUI_LAYOUT_NAME_IMPLEMENTATION
