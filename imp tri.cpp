#pragma once
#include "triangle.h"

triangle::triangle(float b,float h,string clr):shape("triangle",clr)
{
	base=b;
	height=h;
}
float triangle::area()
{
	float area=0;
	area=(base*height)/2;
	return area;
}
triangle::~triangle()
{ cout << "~ triangle () called."<<endl;  
}