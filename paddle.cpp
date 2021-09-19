#include <iostream>
#include "paddle.h"

Paddle::Paddle()
    : dx(0)
    , rect(QRect(0, 0, 100, 20)) {
    image.load(":/images/paddle.png");
    resetState();
}

Paddle::~Paddle() {
    std::cout << "Paddle deleted\n";
}

void Paddle::setDx(const int x) {
    dx = x;
}

void Paddle::move() {
    auto x = rect.x() + dx;
    auto y = rect.top();
    rect.moveTo(x, y);
}

void Paddle::resetState() {
    rect.moveTo(INITIAL_X, INITIAL_Y);
}

QRect Paddle::getRect() const {
    return rect;
}

QImage& Paddle::getImage() {
    return image;
}
