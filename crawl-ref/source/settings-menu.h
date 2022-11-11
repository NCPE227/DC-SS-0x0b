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
    bool SettingsWindow;

    // Custom state variables (depend on development software)
    // NOTE: This variables should be added manually if required

} SettingsMenu;

#ifdef __cplusplus
extern "C" {            // Prevents name mangling of functions
#endif


inline int windowWidth = 24;
inline int windowHeight = 168;

SettingsMenu InitGuiLayoutName(void);
void GuiLayoutName(SettingsMenu *state);
static void ResumeGame();
static void SaveFile();
static void LoadFile();
static void DisplaySettings();
static void GameSettings();
static void SoundSettings();
static void ExitGame();

#ifdef __cplusplus
}
#endif

#endif // GUI_LAYOUT_NAME_H

//Implement button functionality for our settings menu to open its sub menus, load or save a game, and return to the game by
//closing out the menu
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

    state.SettingsWindow = true;

    // Custom variables initialization

    return state;
}

//Close settings menu and return to the game
static void ResumeGame()
{
    WindowShouldClose();
}

//Write a save file to a chosen location
static void SaveFile()
{
    // TODO: Implement control logic
}

//Load a save file from a chosen location
static void LoadFile()
{
    // TODO: Implement control logic
}

//Open a submenu containing a few display settings
static void DisplaySettings()
{
    initWindow(windowWidth, windowHeight, "Display Settings")
}

//Open a submenu containing a few game settings
static void GameSettings()
{
   initWindow(windowWidth, windowHeight, "Game Settings")
}

//Open a submenu containing a few sound settings
static void SoundSettings()
{
    initWindow(windowWidth, windowHeight, "Sound Settings")
}

//Exit the game and return to desktop
static void ExitGame() 
{
    //maybe add a message box that asks if you're sure you want to exit
    exit(0);
}

#endif // GUI_LAYOUT_NAME_IMPLEMENTATION
