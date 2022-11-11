
#include "display-settings.h"



int main()
{
    
    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Display Settings");

    
    bool TextBox001EditMode = false;
    char TextBox001Text[128] = "Menu Color";
    int ToggleGroup002Active = 0;
    bool TextBox003EditMode = false;
    char TextBox003Text[128] = "Viewpoint Size";
    float Slider004Value = 0.0f;
    float Slider005Value = 0.0f;
    bool CheckBoxEx006Checked = false;
    

    SetTargetFPS(60);
    

    
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        
        
        // TODO: Implement required update logic
        

        
        
        BeginDrawing();

            ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR))); 

            // raygui: controls drawing
            
            GuiGroupBox((Rectangle){ 416, 144, 320, 256 }, "Display Settings");
            if (GuiTextBox((Rectangle){ 520, 168, 120, 24 }, TextBox001Text, 128, TextBox001EditMode)) TextBox001EditMode = !TextBox001EditMode;
            ToggleGroup002Active = GuiToggleGroup((Rectangle){ 512, 200, 40, 24 }, "Red; Green; Blue", ToggleGroup002Active);
            if (GuiTextBox((Rectangle){ 520, 248, 120, 24 }, TextBox003Text, 128, TextBox003EditMode)) TextBox003EditMode = !TextBox003EditMode;
            Slider004Value = GuiSlider((Rectangle){ 520, 280, 120, 16 }, "Height", NULL, Slider004Value, 0, 100);
            Slider005Value = GuiSlider((Rectangle){ 520, 304, 120, 16 }, "Width", NULL, Slider005Value, 0, 100);
            CheckBoxEx006Checked = GuiCheckBox((Rectangle){ 528, 344, 24, 24 }, "Colorblind Mode", CheckBoxEx006Checked);
            

        EndDrawing();
        
    }

    
    CloseWindow();     
    

    return 0;
}

