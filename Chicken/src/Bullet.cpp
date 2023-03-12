#include "Bullet.h"

Bullet ::Bullet(){
    rect_.x = 0 ; 
    rect_.y = 0 ;
    x_val_ = 0 ;
    y_val_  = 0 ;
    is_move_ = false ;
    bullet_type_ = NONE;
}

Bullet ::~Bullet(){}
void Bullet::handleMove(const int &x_border, const int &y_border){
    rect_.y -= y_val_;
    if(rect_.y > y_border || rect_.y < 0) {
        is_move_ = false;
    }
}
void Bullet::handleMoveOfThreat() {
    rect_.y += y_val_;
    if(rect_.y > SCREEN_HEIGHT) {
        is_move_ = false;
    }
}
void Bullet::handleInputAction(SDL_Event events) {

}