#include <iostream>
#include "brick.h"

Brick::Brick(const int x, const int y) {
    image.load("brick.png");
    destroyed = false;
    rect = QRect(0, 0, 40, 10);
    rect.translate(x, y);
}

Brick::~Brick() {
    std::cout << "Brick deleted\n";
}

QRect Brick::getRect() const {
    return rect;
}

void Brick::setRect(const QRect& newRect) {
    rect = newRect;
}

QImage& Brick::getImage() {
    return image;
}

bool Brick::isDestroyed() const {
    return destroyed;
}

void Brick::setDestroyed(const bool destroyValue) {
    destroyed = destroyValue;
}
