#include "header/player.h"

Player::Player()
{}

int Player::point() const
{
    return m_point;
}

void Player::removePoint(int point)
{
    m_point -= point;
    emit pointChanged(m_point);
    emit failed();
}

void Player::addPoint(int point)
{
    m_point += point;
    emit pointChanged(m_point);
    emit success();
}
