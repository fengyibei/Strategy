#ifndef _DUCK_H_
#define _DUCK_H_

#include "FlyBehavior.h"
#include <memory>

class Duck {
public:
	Duck(const std::shared_ptr<FlyBehavior> &);
	void performFly();
	void setFlyBehavior(const std::shared_ptr<FlyBehavior> &);
private:
	std::shared_ptr<FlyBehavior> _pfB;
};

class MallardDuck : public Duck {
public:
	MallardDuck(const std::shared_ptr<FlyBehavior> &);
};

class RedheadDuck : public Duck {
public:
	RedheadDuck(const std::shared_ptr<FlyBehavior> &);
};

class RubberDuck : public Duck {
public:
	RubberDuck(const std::shared_ptr<FlyBehavior> &);
};

#endif
