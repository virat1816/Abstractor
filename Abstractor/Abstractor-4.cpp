#include<iostream>
#include<string.h>
using namespace std;
class user{
	public:
	virtual float calculate() = 0;
};
class area:public user{
	public:
		float calculate(){
		  float area_circle;
		  float area_triangle;
		  float area_rectangle;

		  float b=7.8;
		  float h=8;
		  float r=3;

		  area_circle=3.14*r*r;
		  area_triangle=(b*h)/2;
		  area_rectangle=b*h;

		  cout<<"area of circle : "<<area_circle<<endl;
		  cout<<"area of triangle : "<<area_triangle<<endl;
		  cout<<"area of rectangle : "<<area_rectangle<<endl;

		  return area_circle;
		}
};
int main(){

	area obj;
	obj.calculate();

	return 0;
}
