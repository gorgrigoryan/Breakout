#ifndef BALL_H
#define BALL_H

#include <QImage>
#include <QRect>

class Ball {
public:
    Ball();
    ~Ball();

    void resetState();
    void autoMove();
    void setXDir(const int);
    void setYDir(const int);
    int getXDir() const;
    int getYDir() const;
    QRect getRect() const;
    QImage& getImage();
private:
    int xdir;
    int ydir;
    QImage image;
    QRect rect;
    static const int INITIAL_X = 230;
    static const int INITIAL_Y = 355;
    static const int RIGHT_EDGE = 300;
};

#endif // BALL_H
