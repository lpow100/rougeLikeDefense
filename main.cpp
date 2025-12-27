#include "raylib.h"
#include "towers.hpp"
#include "entites.hpp"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib");

    Tower myTower(ice,fire,{400,225});

    Entity bullet()

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(GRAY);

        myTower.Draw();

        EndDrawing();
    }

    CloseWindow(); 

    return 0;
}
