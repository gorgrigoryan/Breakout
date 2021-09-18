#include "ball.h"

Ball::Ball() {
    image.load("ball.png");
    rect = image.rect();
}

void Ball::resetState() {
    xdir = INITIAL_X;
    ydir = INITIAL_Y;
}

void Ball::autoMove() {
    rect.translate(xdir, ydir);

    if (rect.left() == 0) {
        xdir = 1;
    }

    if (rect.right() == RIGHT_EDGE) {
        xdir = -1;
    }

    if (rect.top() == 0) {
        ydir = 1;
    }
}

void Ball::setXdir(int) {
    xdir = x;
}

void Ball::setYDir(int y) {
    ydir = y;
}

int Ball::getXDir() {
    return xdir;
}

int Ball::getYDir() {
    return ydir;
}

QRect Ball::getRect() {
    return rect;
}

QImage& Ball::getImage() {
    return image;
}
