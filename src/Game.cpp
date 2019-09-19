#include "Game.h"

Game::Game() {}
Game::~Game() {}

void Game::Init(const char* title, int xPos, int yPos, int height, int width, bool fullScreen) 
{
  int flags = 0;
  if (fullScreen)
    flags = SDL_WINDOW_FULLSCREEN;

  if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
  {
    std::cout << "Subsystem initialized" << std::endl;
    window = SDL_CreateWindow(title,
                              xPos,
                              yPos,
                              height,
                              width,
                              flags);

    if (window)
      std::cout << "Window created" << std::endl;

    renderer = SDL_CreateRenderer(window, -1, 0);

    if (renderer) {
      SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
      std::cout << "Renderer created" << std::endl;
    }
    
    isRunning = true;
  }
  else
    isRunning = false;
}

void Game::HandleEvents() 
{
  SDL_Event event;
  SDL_PollEvent(&event);

  switch (event.type)
  {
    case SDL_QUIT:
      isRunning = false;
      break;
    default:
      break;
  }
};

// Update our objects
void Game::Update() 
{

};

// Display our objects
void Game::Render() 
{
  SDL_RenderClear(renderer);
  // Render stuff
  SDL_RenderPresent(renderer);
};

void Game::Clean() 
{
  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  SDL_Quit();
  std::cout << "Thanks for playing" << std::endl;
};

bool Game::IsRunning() 
{
  return isRunning;
};

