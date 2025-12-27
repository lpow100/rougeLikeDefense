#ifndef TOWERS_HPP
#define TOWERS_HPP

#include "raylib.h"
#include "raymath.h"

enum Element {
    none, fire, ice, earth, air, electricity
};

#define FIRE_COLOR Color{207, 70, 45,255}
#define ICE_COLOR Color{47, 87, 173,255}
#define EARTH_COLOR Color{120, 90, 25,255}
#define AIR_COLOR Color{212, 225, 255,255}
#define ELECTRIC_COLOR Color{139, 162, 214,255}
Color ElementalColor(Element element);

#define TOWER_SIZE (Vector2){50,50}

class Tower {
    public:
        Tower(Element element1, Element element2, Vector2 pos);
        //void Update();
        void Draw();

    private:
        Element element1;
        Element element2;
        Vector2 pos;
};

#endif