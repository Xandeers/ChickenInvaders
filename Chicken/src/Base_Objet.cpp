#include "Base_Objet.h"
#include "Function_Global.h"
#include <SDL2/SDL.h>
BaseObjet::BaseObjet()
{
    rect_.x = 0;
    rect_.y = 0;
    p_objet_ = NULL;
}
BaseObjet::~BaseObjet() {
    if(p_objet_ != NULL) {
        SDL_FreeSurface(p_objet_);
    }
}

bool BaseObjet::loadImg(SDL_Window *window, const char* filename) {
    p_objet_ = SDLFunctionGlobal::load_image(window,filename);
    if(p_objet_ == NULL) {
        return false;
    }
    return true;
}
void BaseObjet::show(SDL_Surface* des) {
    if(p_objet_!=NULL) {
        SDLFunctionGlobal::AppliquerSurface(p_objet_, des, rect_.x, rect_.y);
    }
}