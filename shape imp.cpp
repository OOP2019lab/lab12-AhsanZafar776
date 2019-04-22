#pragma once

#include"shape.h"

shape::shape( string t,string clr)
{
	type = t;
	color=clr;
}
shape::shape(string clr)
{
	color=clr;
}
float shape::area()
{
	float area=0;
	area=0;
	return area;
}
shape::~shape()
{ cout << "~shape() called."<<endl; 	
}