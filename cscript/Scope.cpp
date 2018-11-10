#include "Scope.h"



void Scope::assign(string varName, string value)
{

}

Scope::Scope()
{
}


Scope::~Scope()
{
}

void Scope::setPosition(int newPos)
{
	position = newPos;
}

int Scope::getPosition()
{
	return position;
}

void Scope::incrPos()
{
	position += 1;
}
