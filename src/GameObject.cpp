#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* textureSheet, 
                       SDL_Renderer* renderer,
                       int x,
                       int y) {
  objectTexture = TextureManager::LoadTexture(textureSheet);

  this->x = x;
  this->y = y;
}

GameObject::~GameObject() {

}

void GameObject::Update() {
  x++;
  y++;

  srcRect.h = 32;
  srcRect.w = 32 * 2;
  srcRect.x = 0;
  srcRect.y = 0;

  destRect.x = x;
  destRect.y = y;
  destRect.w = srcRect.w;
  destRect.h = srcRect.h;
}

void GameObject::Render() {
  SDL_RenderCopy(Game::renderer, objectTexture, &srcRect, &destRect);
}