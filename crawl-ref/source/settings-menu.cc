#include "settings-menu.h"

int main() 
{
    int screenWidth = 24;
    int screenHeight = 168;

    InitWindow(screenWidth, screenHeight, "Settings Menu");
    SetExitKey(KEY_ESCAPE); //same key we use to open the menu

    bool exitWindow = false;

    while (!exitWindow) 
    {
        exitWindow = WindowShouldClose();

        if (IsKeyPressed(KEY_ESCAPE)) exitWindow = true;

        //Everything we want to show up on screen will be placed between the begin and end drawing functions
        BeginDrawing();

        if (GuiButton((Rectangle){ 528, 192, 120, 24 }, "Resume")) ResumeGame(); 
        if (GuiButton((Rectangle){ 528, 240, 120, 24 }, "Save Game")) SaveFile(); 
        if (GuiButton((Rectangle){ 528, 288, 120, 24 }, "Load Game")) LoadFile(); 
        if (GuiButton((Rectangle){ 528, 336, 120, 24 }, "Display Settings")) DisplaySettings(); 
        if (GuiButton((Rectangle){ 528, 384, 120, 24 }, "Game Settings")) GameSettings(); 
        if (GuiButton((Rectangle){ 528, 432, 120, 24 }, "Sound Settings")) SoundSettings();
        if (GuiButton((Rectangle){ 528, 480, 120, 24 }, "Exit Game")) ExitGame();  

        EndDrawing();
    }

    CloseWindow();
}