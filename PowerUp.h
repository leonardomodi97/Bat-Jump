//
// Created by leonardo on 08/06/17.
//

#ifndef BAT_JUMP_PROJECT_POWERUP_H
#define BAT_JUMP_PROJECT_POWERUP_H


#include "GameObject.h"


class PowerUp : public GameObject {
public:
    PowerUp(std::string typeP);
    void move() override ;
    virtual void onCollision(GameObject &gameObject) override;

private:
    std::string typeP;

};


#endif //BAT_JUMP_PROJECT_POWERUP_H
