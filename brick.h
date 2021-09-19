#ifndef BRICK_H
#define BRICK_H

#include <QImage>
#include <QRect>

class Brick {
public:
    Brick(const int, const int);
    ~Brick();

    bool isDestroyed() const;
    void setDestroyed(const bool);
    QRect getRect() const;
    void setRect(const QRect&);
    QImage& getImage();
private:
    QImage image;
    QRect rect;
    bool destroyed;
};

#endif // BRICK_H
