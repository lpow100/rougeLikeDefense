#include "entites.hpp"

Entity::Entity(Vector2 pos, Vector2 velocity, Vector2 size, float rotation, Texture2D sprite):
 pos(pos),velocity(velocity),size(size),rotation(rotation),sprite(sprite) {}

void Entity::Draw() {
    DrawTexturePro(sprite,{0,0,(float) sprite.width,(float) sprite.height},{pos.x,pos.y,size.x,size.y},{0,0},rotation,WHITE);
}

void Entity::Update() {
    pos = Vector2Add(pos,Vector2Scale(velocity,GetFrameTime()));
    velocity = Vector2SubtractValue(velocity,VELOCITY_DECAY*GetFrameTime());
}
