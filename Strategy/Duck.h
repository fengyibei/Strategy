#ifndef _DUCK_H_
#define _DUCK_H_

#include "FlyBehavior.h"
#include <memory>

class Duck {
public:
//	void swim();
	Duck(std::shared_ptr<FlyBehavior> pflyBehavior);

	void performFly();
	void setFlyBehavior(std::shared_ptr<FlyBehavior> pflyBehavior);
private:
	std::shared_ptr<FlyBehavior> _pfB;
	void swim();
};

class MallardDuck : public Duck {
public:
	MallardDuck(std::shared_ptr<FlyBehavior> pflyBehavior);
//	void display(); // adding virtual is OK but not necessary
};

class RedheadDuck : public Duck {
public:
	RedheadDuck(std::shared_ptr<FlyBehavior> pflyBehavior);
//	void display(); // adding virtual is OK but not necessary
};

class RubberDuck : public Duck {
public:
	RubberDuck(std::shared_ptr<FlyBehavior> pflyBehavior);
//	void display(); // adding virtual is OK but not necessary
};

#endif