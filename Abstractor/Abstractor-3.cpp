#include<iostream>
#include<string.h>
using namespace std;
class user{
	private:
		int a;
	public:
		int b;
	protected:
		int c;
};
class sub:protected user{
	public:
		void show(){
			c=670;
			cout<<"protected : "<<c<<endl;
		}
};
int main(){
	user obj1;
	sub obj2;
	obj1.b=456;
	cout<<"public : "<<obj1.b<<endl;  
	obj2.show(); 
	return 0;
}
