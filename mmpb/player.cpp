#include "player.h"
#include"Entity.h"
#include<QVector2D>
Player::Player()
{

}


Player::Player(int x,int y,QString &name)
{
    position.setX(x);
    position.setY(y);
    pixmap.load(name);
}

void Player::update()
{
    position += speed * velocity;

}
void Player::draw(QPainter *painter)
{
    painter->drawPixmap(position.toPoint(),pixmap);
}


