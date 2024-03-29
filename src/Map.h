#ifndef MAP_H
#define MAP_H

#include "Game.h"

class Map {
  public:
    Map();
    ~Map();

    void LoadMap();
    void DrawMap();

  private:
    SDL_Rect src, dest;

    SDL_Texture* dirt;
    SDL_Texture* grass;
    SDL_Texture* water;

    int map[20, 25];
};

#endif