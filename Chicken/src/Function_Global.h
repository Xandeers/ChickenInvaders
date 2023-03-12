//les functions qui tous les autres classes vont utiliser
#ifndef COMMON_FUNCTION_H_
#define COMMON_FUNCTION_H_

#include <SDL2/SDL.h>
#include <string>
// #include <Windows.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>


const int BACKGROUND_h = 3350;
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 680;
const int SCREEN_BPP = 32;
const int NUM_THREAT = 3;
const int SPEED_PLAYER = 8;
const int NUM_LIVES = 3;
const int START_XPOS_PLAYER = SCREEN_WIDTH/2;
const int START_YPOS_PLAYER = SCREEN_HEIGHT - 100;

static SDL_Surface *g_screen = NULL;
static SDL_Surface *g_bkground = NULL;
static SDL_Event g_event;

// sonds

static Mix_Music* g_sound_fire[3];
static Mix_Music* g_sound_explo[2];

namespace SDLFunctionGlobal { 
    SDL_Surface* load_image(SDL_Window *window,std::string filename);
    void AppliquerSurface(SDL_Surface* src, SDL_Surface* des, int x, int y );
    void AppliquerSurfaceClip(SDL_Surface* src, SDL_Surface* des, SDL_Rect* clip, int x, int y);
    void CleanUp();
    bool CheckCollision(const SDL_Rect &objet_1,const SDL_Rect &objet_2);
}

#endif