#ifndef _DUCK_H_
#define _DUCK_H_

#include "FlyBehavior.h"
#include <memory>

class Duck {
public:
	Duck(std::shared_ptr<FlyBehavior> pflyBehavior);
	void performFly();
	void setFlyBehavior(std::shared_ptr<FlyBehavior> pflyBehavior);
private:
	std::shared_ptr<FlyBehavior> _pfB;
};

class MallardDuck : public Duck {
public:
	MallardDuck(std::shared_ptr<FlyBehavior> pflyBehavior);
};

class RedheadDuck : public Duck {
public:
	RedheadDuck(std::shared_ptr<FlyBehavior> pflyBehavior);
};

class RubberDuck : public Duck {
public:
	RubberDuck(std::shared_ptr<FlyBehavior> pflyBehavior);
};

#endif