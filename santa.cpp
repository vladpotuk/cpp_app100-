#include "santa.h"

Santa::Santa() : x(0), y(0), lives(3), presentsDelivered(0), totalPresents(10) {}

void Santa::move() {
    // ����� ���� �����
}

bool Santa::isGameOver() const {
    // �������� ����� ���������� ���
    return false;
}

int Santa::getX() const {
    return x;
}

int Santa::getY() const {
    return y;
}

int Santa::getLives() const {
    return lives;
}

void Santa::decreaseLives() {
    lives--;
}

bool Santa::hasDeliveredAllPresents() const {
    return presentsDelivered == totalPresents;
}
