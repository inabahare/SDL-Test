#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Game.h"

class GameObject {
  public:
    GameObject(const char* textureSheet, SDL_Renderer* renderer, int x, int y);
    ~GameObject();

    void Render();
    void Update();
  private:
    int x;
    int y;

    SDL_Texture* objectTexture;
    SDL_Rect srcRect, destRect;
};

#endif