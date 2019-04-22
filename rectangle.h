#pragma once
#include"shape.h"

class rectangle:public shape
{

private:
	float height;
	float width;
public:
	float area();
	rectangle(float h,float w, string clr);
	~rectangle();

};
