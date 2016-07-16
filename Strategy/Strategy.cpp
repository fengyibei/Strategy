#include <iostream>
#include "Duck.h"

void main()
{
	std::shared_ptr<FlyBehavior> pfWings = std::make_shared<FlyWithWings>();
	std::shared_ptr<FlyBehavior> pfNo = std::make_shared<FlyNoWay>();
	std::shared_ptr<FlyBehavior> pfRocket = std::make_shared<FlyWithRocket>();

	std::shared_ptr<Duck> pDuck = std::make_shared<MallardDuck>(pfWings);
	pDuck->performFly();

	pDuck->setFlyBehavior(pfNo);
	pDuck->performFly();

	pDuck->setFlyBehavior(pfRocket);
	pDuck->performFly();

}
