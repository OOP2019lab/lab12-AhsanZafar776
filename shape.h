#pragma once
#include<iostream>
#include<string>
using namespace std;


class shape
{
protected:
	string type;
public:
	virtual float area();
	string color;
	shape(string t,string clr);
	shape(string clr);
	virtual ~shape();

};
