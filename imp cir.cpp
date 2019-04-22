#pragma once
#include"circle.h"

circle::circle(float r,string clr):shape("circle",clr)
{
	radius=r;

}
float circle::area()
{
	float area=0;
	area=3.14*pow(radius,2);
	return area;
}
circle::~circle()  
{ cout << "~ circle () called."<<endl;  	
}