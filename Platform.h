//
// Created by leonardo on 14/06/17.
//

#ifndef BAT_JUMP_PROJECT_PLATFORM_H
#define BAT_JUMP_PROJECT_PLATFORM_H


#include "GameObject.h"

class Platform : public GameObject{
public:
    Platform(int boost = 1, bool broken = false);
    void move() override ;
    virtual void onCollision(GameObject &gameObject) override;

    bool isBroken() const;

    void setBroken(bool broken);

    int getBoost() const;

    void setBoost(int boost);

private:
    bool broken;
    int boost;

};


#endif //BAT_JUMP_PROJECT_PLATFORM_H
