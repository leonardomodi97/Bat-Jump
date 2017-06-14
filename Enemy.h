//
// Created by leonardo on 14/06/17.
//

#ifndef BAT_JUMP_PROJECT_ENEMY_H
#define BAT_JUMP_PROJECT_ENEMY_H


#include "GameObject.h"
#include "Bullet.h"

class Enemy : public GameObject {
public:
    Enemy(int h, int lvl, int dp, double x, double y);
    void shoot(bool magicBullet=false);
    virtual void move() override ;
    void animation();
    virtual void onCollision(GameObject &gameObject) override;

    int getHp() const;

    void setHp(int hp);

    int getLevel() const;

    void setLevel(int level);

    int getDeathPoints() const;

    void setDeathPoints(int deathPoints);

private:
    int hp;
    int level;
    int deathPoints;

};


#endif //BAT_JUMP_PROJECT_ENEMY_H
