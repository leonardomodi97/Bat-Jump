//
// Created by leonardo on 14/06/17.
//

#ifndef BAT_JUMP_PROJECT_BULLET_H
#define BAT_JUMP_PROJECT_BULLET_H


#include "GameObject.h"

class Bullet : public GameObject{
public:
    Bullet(bool isShotbyPl, double x, double y, bool magicB = false);
    int damage();
    void move() override ;
    virtual void onCollision(GameObject &gameObject) override;

private:
    bool magic;
    bool isShotbyPl;
};


#endif //BAT_JUMP_PROJECT_BULLET_H
