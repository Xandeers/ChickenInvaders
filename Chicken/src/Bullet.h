#ifndef BULLET_H_
#define BULLET_H_
#include <SDL2/SDL.h>
#include "Base_Objet.h"
#define WIDTH_LAZER 35
#define HEIGHT_LAZER 5
#define WIDTH_SPHERE 10
#define HEIGHT_SPHERE 10

class Bullet : public BaseObjet
{
public:
    enum BulletType
    {
        NONE = 0,
        LAZER = 1,
        SPHERE = 2
    };
    Bullet();
    ~Bullet();
    void handleInputAction(SDL_Event events);
    void handleMove(const int &x_border, const int &y_border);
    void handleMoveOfThreat();

    int get_type() const
    {
        return bullet_type_;
    }
    void set_type(const int &type)
    {
        bullet_type_ = type;
    }
    bool isMove() const
    {
        return is_move_;
    }
    void setMove(bool is_Move)
    {
        is_move_ = is_Move;
    }
    void setWidthHeight(const int &width, const int &height)
    {
        rect_.w = width;
        rect_.h = height;
    }
    void set_x_val(const int &val)
    {
        x_val_ = val;
    }
    void set_y_val(const int &val)
    {
        y_val_ = val;
    }
    int get_x_val() const
    {
        return x_val_;
    }
    int get_y_val() const
    {
        return y_val_;
    }

private:
    int x_val_;
    int y_val_;
    bool is_move_;
    int bullet_type_;
};

#endif // BULLET_H_