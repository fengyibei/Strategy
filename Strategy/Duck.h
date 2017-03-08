#ifndef _DUCK_H_
#define _DUCK_H_

#include "FlyBehavior.h"
#include <memory>

class Duck {
public:
    Duck(FlyBehavior *fb);
	void performFly();
    void setFlyBehavior(FlyBehavior *fb);

private:
    std::unique_ptr<FlyBehavior> fb_;
};

class MallardDuck : public Duck {
public:
    MallardDuck(FlyBehavior *fb);
};

class RedheadDuck : public Duck {
public:
    RedheadDuck(FlyBehavior *fb);
};

class RubberDuck : public Duck {
public:
    RubberDuck(FlyBehavior *fb);
};

#endif

