#include "Function_Global.h"

SDL_Surface *SDLFunctionGlobal::load_image(SDL_Window *window, std::string filename)
{
    SDL_Surface *loadImage = NULL;
    SDL_Surface *optimiserImage = NULL;
    loadImage = IMG_Load(filename.c_str());
    if (loadImage)
    {
        if(window == NULL) return loadImage;

        optimiserImage = SDL_ConvertSurfaceFormat(loadImage, SDL_GetWindowPixelFormat(window), 0);
        SDL_FreeSurface(loadImage);

        // effacer background d'image
        if (filename == "images/egg.png")
        {
            Uint32 color_key1 = SDL_MapRGB(optimiserImage->format, 0x22, 0x3E, 0x4A);
            SDL_SetColorKey(optimiserImage, SDL_TRUE, color_key1);
        }

        if (optimiserImage)
        {
            Uint32 color_key2 = SDL_MapRGB(optimiserImage->format, 0, 0xFF, 0xFF);
            SDL_SetColorKey(optimiserImage, SDL_TRUE, color_key2);
        }
    }
    return optimiserImage;
}
void SDLFunctionGlobal::AppliquerSurface(SDL_Surface *src, SDL_Surface *des, int x, int y)
{
    SDL_Rect offset;
    offset.x = x;
    offset.y = y;
    SDL_BlitSurface(src, NULL, des, &offset);
}
// animation explode
void SDLFunctionGlobal::AppliquerSurfaceClip(SDL_Surface *src, SDL_Surface *des, SDL_Rect *clip, int x, int y)
{
    SDL_Rect offset;
    offset.x = x;
    offset.y = y;
    SDL_BlitSurface(src, clip, des, &offset);
}
void SDLFunctionGlobal::CleanUp()
{
    SDL_FreeSurface(g_screen);
    SDL_FreeSurface(g_bkground);
}

// verifier collision

bool SDLFunctionGlobal::CheckCollision(const SDL_Rect &objet_1, const SDL_Rect &objet_2)
{
    int left1, left2;
    int right1, right2;
    int top1, top2;
    int bottom1, bottom2;

    left1 = objet_1.x;
    right1 = objet_1.x + objet_1.w;
    top1 = objet_1.y;
    bottom1 = objet_1.y + objet_1.h;

    left2 = objet_2.x;
    right2 = objet_2.x + objet_2.w;
    top2 = objet_2.y;
    bottom2 = objet_2.y + objet_2.h;
    // case 1 : objet 1 > objet 2
    if (left1 > left2 && left1 < right2)
    {
        if (top1 > top2 && top1 < bottom2)
        {
            return true;
        }
        else if (bottom1 > top2 && bottom1 < bottom2)
        {
            return true;
        }
    }
    if (right1 > left2 && right1 < right2)
    {
        if (top1 > top2 && top1 < bottom2)
        {
            return true;
        }
        else if (bottom1 > top2 && bottom1 < bottom2)
        {
            return true;
        }
    }
    // case 2 : objet 1 < objet 2

    if (left1 < left2 && right1 > left2)
    {
        if (top1 < top2 && bottom1 > top2)
        {
            return true;
        }
        else if (top1 < bottom2 && bottom1 > bottom2)
        {
            return true;
        }
    }
    if (left1 < right2 && right1 > right2)
    {
        if (top1 < top2 && bottom1 > top2)
        {
            return true;
        }
        else if (top1 < bottom1 && bottom1 > bottom2)
        {
            return true;
        }
    }
    //case 3 objet 1 = objet 2 
    if(top1 == top2 && bottom1 == bottom2 && right1 == right2) {
        return true;
    }
    else return false;
}