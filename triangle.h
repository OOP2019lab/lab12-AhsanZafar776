#pragma once
#include"shape.h"
using namespace std;

class triangle:public shape
{
float base;
float height;
public:
	float area();
	triangle(float b,float h,string clr);
	~triangle();
};
