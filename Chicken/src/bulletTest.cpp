#include <assert.h>
#include "Bullet.h"

void test_bullet_creation() {
    Bullet bullet;
    assert(bullet.get_type() == Bullet::NONE);
    assert(bullet.isMove() == false);
    assert(bullet.get_x_val() == 0);
    assert(bullet.get_y_val() == 0);
}

void test_bullet_type() {
    Bullet bullet;
    bullet.set_type(Bullet::LAZER);
    assert(bullet.get_type() == Bullet::LAZER);
    bullet.set_type(Bullet::SPHERE);
    assert(bullet.get_type() == Bullet::SPHERE);
}

void test_bullet_move() {
    Bullet bullet;
    bullet.setMove(true);
    bullet.set_x_val(10);
    bullet.set_y_val(20);
    bullet.handleMove(100, 100);
    assert(bullet.rect_.x == 0);
    assert(bullet.rect_.y == -20);
    bullet.handleMove(5, 5);
    assert(bullet.isMove() == false);
}

int main() {
    test_bullet_creation();
    test_bullet_type();
    test_bullet_move();
    return 0;
}
