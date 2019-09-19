#include <iostream>
#include "Game.h"


int main(int argc, char* args[]) {
  Game* game = new Game();

  game->Init("Cool Game", 
             SDL_WINDOWPOS_CENTERED, 
             SDL_WINDOWPOS_CENTERED, 
             800, 
             600, 
             false);

  while (game->IsRunning())
  {
    game->HandleEvents();
    game->Update();
    game->Render();
  }

  game->Clean();
  return 0;
}