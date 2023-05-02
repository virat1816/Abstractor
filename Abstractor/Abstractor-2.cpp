#include<iostream>
#include<string.h>
using namespace std;
class Parent {
	public:
   virtual void childdetails(){
   	cout<<"parent"<<endl;	
	}
};
class child : public Parent {
	public:
	 void childdetails(){
	 	cout<<"Child detail"<<endl;
	 }
};
int main(){
	child ans;
	Parent done;
	Parent *obj;
	obj=&ans;
	obj->childdetails();

	return 0;
}
