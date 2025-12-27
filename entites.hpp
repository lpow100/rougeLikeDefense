#ifndef ENTITES_HPP
#define ENTITES_HPP

#include "raylib.h"
#include "raymath.h"

#define VELOCITY_DECAY 0.001f

class Entity {
    public:
        Entity(Vector2 pos, Vector2 velocity, Vector2 size, float rotation, Texture2D sprite);
        void Draw();
        void Update();
    private:
        Vector2 pos;
        Vector2 velocity;
        Vector2 size;
        float rotation;
        Texture2D sprite;
};

#endif