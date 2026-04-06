#include <iostream>
using namespace std;
class Sample {
public:
	int v;
	Sample(int n ){
		if ( n > 10 ) v = n + 2;
		else v = n + 4;
	}
	Sample(){ v = 5;} 
	Sample& operator=(const Sample& s) {
    return *this;
}
	
};
void PrintAndDouble(Sample o)
{
	cout << o.v; 
	cout << endl;
}
int main()
{
	Sample a(5);
	Sample b = a;
	PrintAndDouble(b);
	Sample c = 20;
	PrintAndDouble(c);
	Sample d;
	d = a;
	cout << d.v;
	return 0;
}
