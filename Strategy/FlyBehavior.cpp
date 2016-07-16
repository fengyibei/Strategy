#include <iostream>
#include "FlyBehavior.h"

void FlyWithWings::fly() 
{	
	std::cout << "I am flying !" << std::endl;
}

void FlyNoWay::fly()
{	
	std::cout << "I cannot fly !" << std::endl;
}

void FlyWithRocket::fly()
{	
	std::cout << "I am flying with a rocket !" << std::endl;
}

