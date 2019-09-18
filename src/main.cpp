#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>

int main() {
  SDL_Init(SDL_INIT_VIDEO);

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