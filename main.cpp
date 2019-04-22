#include"shape.h"
#include"triangle.h"
#include"rectangle.h"
#include"circle.h"

int sumArea( shape &s1,shape & s2)
{
	int  area= s1.area()+s2.area();
	return area;
}

int main()
{
	triangle t1(1.0,9.0,"Red");
	circle c1(2, "Blue");
	rectangle r1(6,2, "Orange");
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;

	shape *sptr1= &t1;
	shape &sref=r1;
	cout<< sptr1->area()<<endl;
	cout<< sptr1->color<<endl;
	cout<< sref.color<<endl;
	cout<< sref.area()<<endl;

	shape s1("Purple");

	cout<<sumArea(t1,c1)<<endl;
	cout<<sumArea(s1,r1)<<endl;
	cout<<sumArea(s1,t1)<<endl;


	int a,count=0;
	shape *shapesarray[5];
	cout<<"1 for triangle, 2 for rectangel,3 for circel"<<endl;
	cin>>a;


	if(a==1)
	{ 

		int base=0,height=0;
		string c;
		cout<<"height"<<endl;
		cin>>height;
		cout<<"base"<<endl;
		cin>>base;
		cout<<"color"<<endl;
		cin>>c;
		triangle t2(base, height,c);
		shapesarray[count]= new triangle (t2);
		count++;
	}

	else if(a==2)
	{

		int width=0,height=0;
		string c;
		cout<<"height"<<endl;
		cin>>height;
		cout<<"width"<<endl;
		cin>>width;
		cout<<"color"<<endl;
		cin>>c;
		rectangle r2( height,width,c);
		shapesarray[count]= new rectangle (r2);
		count++;
	}

	else if(a==3)
	{

		int r=0;
		string c;
		cout<<"radius"<<endl;
		cin>>r;
		cout<<"color"<<endl;
		cin>>c;
		circle c2( r,c);
		shapesarray[count]= new circle (c2);
		count++;


		
	}
	for(int i=0;i<count;i++)
	{
     cout<<shapesarray[i]->area()<<endl;
	}
	for(int i=0;i<count;i++)
		delete  shapesarray[i];

}