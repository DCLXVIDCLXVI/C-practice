#include<iostream>
using namespace std;
class A{
	public:
	int a,b;
	int c;
	int d;
	/*A(int m,int n){
		a=m,b=n;
	}
	*/
	void perimeter(int a,int b){
		c=(a+b)*2;
		cout<<c<<endl;
	}
	void area(int a ,int b){
		d=a*b;
		cout<<d<<endl;
	}
};
int main (){
	A one;
	one.perimeter(3,4);
	one.area(3,4);
	return 0;
} 
