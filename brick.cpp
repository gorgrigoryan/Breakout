#include "brick.h"

Brick::Brick(int x, int y) {
    image.load("brick.png");
    destroyed = false;
    rect = image.rect();
    rect.translate(x, y);
}

Brick::~Brick() {
    std::cout << "Brick deleted\n";
}

QRect Brick::getRect() {
    return rect;
}

void Brick::setRect(const QRect newRect) {
    rect = newRect;
}

QImage& Brick::getImage() {
    return image;
}

bool Brick::isDestroyed() {
    return destroyed;
}

void Brick::setDestroyed(const bool destroyValue) {
    destroyed = destroyValue;
}
