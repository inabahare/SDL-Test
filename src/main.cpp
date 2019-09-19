#include <SDL2/SDL.h>

int main() {
  SDL_Window* win = SDL_CreateWindow("Game", 
                                     SDL_WINDOWPOS_CENTERED, 
                                     SDL_WINDOWPOS_CENTERED, 
                                     800, 
                                     600, 
                                     0);

  while (1)
    ;

  return 0;
}