#include "Map.h"
#include "TextureManager.h"

Map::Map() {
  dirt = TextureManager::LoadTexture("assets/dirt.png");
  grass = TextureManager::LoadTexture("assets/grass.png");
  water = TextureManager::LoadTexture("assets/water.png");
}

void Map::LoadMap() {

}

void Map::DrawMap() {

}