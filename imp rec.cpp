#pragma once
#include"rectangle.h"

rectangle::rectangle(float h, float w,string clr):shape("rectangle",clr)
{
	height=h;
	width=w;

}
float rectangle::area()
{
	float area=0;
	area=width*height;
	return area;

}
rectangle::~rectangle()
{ cout << "~rectangle() called."<<endl;   
}