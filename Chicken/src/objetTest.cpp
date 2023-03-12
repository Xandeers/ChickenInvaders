#include <iostream>
#include <cassert>
#include <SDL2/SDL.h>
#include "Base_Objet.h"

int main() {
    SDL_Init(SDL_INIT_VIDEO);

    // Create a SDL window
    SDL_Window* window = SDL_CreateWindow("Unit test", SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);

    // Create a SDL surface for the window
    SDL_Surface* screen_surface = SDL_GetWindowSurface(window);

    // Create a BaseObjet instance
    BaseObjet objet;

    // Load an image
    bool success = objet.loadImg(window, "image.png");
    assert(success && "Failed to load image");

    // Set the position of the object
    objet.rect_.x = 100;
    objet.rect_.y = 100;

    // Display the object
    objet.show(screen_surface);
    SDL_UpdateWindowSurface(window);

    // Wait for a key press
    SDL_Event event;
    bool quit = false;
    while (!quit) {
        SDL_WaitEvent(&event);
        if (event.type == SDL_QUIT) {
            quit = true;
        }
    }

    // Destroy the window and quit SDL
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
