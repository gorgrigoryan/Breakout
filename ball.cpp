#include <iostream>
#include "ball.h"

Ball::Ball()
    : xdir(1)
    , ydir(-1)
    , rect(QRect(0, 0, 10, 10)) {
    image.load(":/images/ball.png");
    resetState();
}

Ball::~Ball() {
    std::cout << "Ball deleted\n";
}

void Ball::resetState() {
    rect.moveTo(INITIAL_X, INITIAL_Y); 
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

void Ball::setXDir(const int x) {
    xdir = x;
}

void Ball::setYDir(const int y) {
    ydir = y;
}

int Ball::getXDir() const {
    return xdir;
}

int Ball::getYDir() const {
    return ydir;
}

QRect Ball::getRect() const {
    return rect;
}

QImage& Ball::getImage() {
    return image;
}
