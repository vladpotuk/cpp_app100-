#ifndef SANTA_H
#define SANTA_H

class Santa {
public:
    Santa();
    void move();
    bool isGameOver() const;
    int getX() const;
    int getY() const;
    int getLives() const;
    void decreaseLives();
    bool hasDeliveredAllPresents() const;

private:
    int x;
    int y;
    int lives;
    int presentsDelivered;
    const int totalPresents;
};

#endif // SANTA_H
