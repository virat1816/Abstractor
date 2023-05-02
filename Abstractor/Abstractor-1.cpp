#include<iostream>
#include<string.h>
using namespace std;
class car{
	public:
		virtual void start()=0;
};
class BMW : public car{
	public:
	void start(){
	cout<<"Car is locked."<<endl;
	}
};
int main(){
	BMW obj;
	obj.start();

	return 0;
}
