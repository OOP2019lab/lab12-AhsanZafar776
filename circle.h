#pragma once
#include"shape.h"
class circle:public shape
{
	float radius;
public:
	float area();
	circle(float r ,string clr);
	~circle();
};
