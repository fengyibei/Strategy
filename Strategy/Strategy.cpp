#include <iostream>
#include "Duck.h"

using namespace std;

void main()
{
	shared_ptr<FlyBehavior> pfWings = make_shared<FlyWithWings>();
	shared_ptr<FlyBehavior> pfNo = make_shared<FlyNoWay>();
	shared_ptr<FlyBehavior> pfRocket = make_shared<FlyWithRocket>();

//	FlyBehavior* pfB3 = new FlyWithRocket;

	shared_ptr<Duck> pDuck = make_shared<MallardDuck>(pfWings);
	pDuck->performFly();

	pDuck->setFlyBehavior(pfNo);
	pDuck->performFly();

	pDuck->setFlyBehavior(pfRocket);
	pDuck->performFly();

}
