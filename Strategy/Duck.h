#ifndef _DUCK_H_
#define _DUCK_H_

#include "FlyBehavior.h"
#include <memory>

class Duck {
public:
    Duck(FlyBehavior *pfB);
    void performFly();
    void setFlyBehavior(FlyBehavior *pfB);

private:
    std::unique_ptr<FlyBehavior> _pfB;
};

class MallardDuck : public Duck {
public:
    MallardDuck(FlyBehavior *pfB);
};

class RedheadDuck : public Duck {
public:
    RedheadDuck(FlyBehavior *pfB);
};

class RubberDuck : public Duck {
public:
    RubberDuck(FlyBehavior *pfB);
};

#endif
