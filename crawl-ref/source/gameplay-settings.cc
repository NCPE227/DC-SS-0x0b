#include "gameplay-settings.h"

int main()
{
    
    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "sound-settings");

   
    bool WindowBox000Active = true;
    bool CheckBoxEx001Checked = false;
    bool CheckBoxEx002Checked = false;
    

    SetTargetFPS(60);
    

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
       
        BeginDrawing();

            ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR))); 

           
            if (WindowBox000Active)
            {
                WindowBox000Active = !GuiWindowBox((Rectangle){ 424, 192, 264, 160 }, "Gameplay Settings");

                // TODO: Attach functions to the boolean toggle boxes once function are written in header
                CheckBoxEx001Checked = GuiCheckBox((Rectangle){ 456, 240, 24, 24 }, "jewelry_prompt", CheckBoxEx001Checked);
                CheckBoxEx002Checked = GuiCheckBox((Rectangle){ 456, 288, 24, 24 }, "easy_unequip", CheckBoxEx002Checked);
            }
            

        EndDrawing();
        
    }

  
    CloseWindow();        // Close window and OpenGL context
    

    return 0;
}

