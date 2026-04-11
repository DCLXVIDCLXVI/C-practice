#include<iostream>
using namespace std;
class A{
	public:
	int a,b;
	int c;
	int d;
	A(int m,int n){
		a=m,b=n;
	}
	void perimeter(){
		c=(a+b)*2;
		cout<<c<<endl;
	}
	void area(){
		d=a*b;
		cout<<d<<endl;
	}
};
int main (){
	A one(3,4);
	one.perimeter();
	one.area();
	return 0;
} 
