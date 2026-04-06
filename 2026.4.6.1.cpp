/*
四年平均成绩不一定为整数
输入数据为一行，包括：
姓名,年龄,学号,第一学年平均成绩,第二学年平均成绩,第三学年平均成绩,第四学年平均成绩。
其中姓名为由字母和空格组成的字符串（输入保证姓名不超过20个字符，并且空格不会出现在字符串两端），年龄、学号和学年平均成绩均为非负整数。信息之间用逗号隔开。
输出
输出一行数据，包括：
姓名,年龄,学号,四年平均成绩。
信息之间用逗号隔开。
样例输入
Tom Hanks,18,7817,80,80,90,70
样例输出
Tom Hanks,18,7817,80
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
	private:
	char name[20];
	int age,ID;
	int score1,score2,score3,score4;
	double average; 
	public:
	void input(){
		int i=0;
		char ch;
		while(cin.get(ch)&&ch!=','){
			name[i++]=ch;
		}
		name[i]='\0';
		
		cin>>age;
		cin.get();
		
		cin>>ID;
		cin.get();
		
		cin>>score1;
		cin.get();
		cin>>score2;
		cin.get();
		cin>>score3;
		cin.get();
		cin>>score4;
		cin.get();
		
		
	}
	void calculate(){
		average=(score1+score2+score3+score4)/4.0;
	}
	void output(){
		cout<< name <<","<< age <<","<< ID <<","<< average ;
	}
	
};

int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}


