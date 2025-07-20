#include <raylib.h>

int main(int argc, char* argv[]) {
    const int width = 800;
    const int height = 450;
    
    InitWindow(width, height, "Simile-Study: Отрисовка графов");
    
    while(!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawCircle(GetScreenWidth()/2, GetScreenHeight()/2, 50, MAROON);
        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}
