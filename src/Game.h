#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

class Game {
  public:
    Game();
    ~Game();

    void Init(const char* title, int xPos, int yPost, int height, int width, bool fullScreen);
    void HandleEvents();
    void Update();
    void Render();
    void Clean();

    bool IsRunning();

  private:
    int counter = 0;
    bool isRunning;
    SDL_Window* window;
    SDL_Renderer* renderer;
};

#endif