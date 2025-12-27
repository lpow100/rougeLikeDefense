#ifndef ENTITES_HPP
#define ENTITES_HPP

#include "raylib.h"

class Entity {
    public:
        Entity();
    private:
        Vector2 pos;
        Vector2 velocity;
        Vector2 size;
        float rotation;
        Texture2D sprite;
};

#endif