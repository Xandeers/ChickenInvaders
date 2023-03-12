#ifndef BASE_OBJET_H_
#define BASE_OBJET_H_
#include "Function_Global.h"
#include <SDL2/SDL.h>
class BaseObjet
{
public:
    BaseObjet();
    ~BaseObjet();
    void show(SDL_Surface *des);
    bool loadImg(SDL_Window *window,const char *filename);
    void setRect(const int &x, const int &y)
    {
        rect_.x = x;
        rect_.y = y;
    };

    SDL_Rect getRect() const
    {
        return rect_;
    };
    SDL_Surface *getObjet()
    {
        return p_objet_;
    };
    SDL_Rect rect_;
    SDL_Surface *p_objet_;
};

#endif // BASE_OBJET_H_