#include "towers.hpp"

Color ElementalColor(Element element) {
    switch (element) {
        case fire:        return FIRE_COLOR;     break;
        case ice:         return ICE_COLOR;      break;
        case earth:       return EARTH_COLOR;    break;
        case air:         return AIR_COLOR;      break;
        case electricity: return ELECTRIC_COLOR; break;
        
        default:          return PINK;           break;
    }
}

Tower::Tower(Element element1, Element element2, Vector2 pos):pos(pos),element1(element1),element2(element2) {
}

void Tower::Draw() {
    Vector2 adjustedPos = Vector2Subtract(pos,Vector2Scale(TOWER_SIZE,0.5f));
    DrawTriangle(adjustedPos,{adjustedPos.x,adjustedPos.y+TOWER_SIZE.y},{adjustedPos.x+TOWER_SIZE.x,adjustedPos.y},ElementalColor(element1));
    DrawTriangle({adjustedPos.x,adjustedPos.y+TOWER_SIZE.y},Vector2Add(adjustedPos,TOWER_SIZE),{adjustedPos.x+TOWER_SIZE.x,adjustedPos.y},ElementalColor(element2));
}
