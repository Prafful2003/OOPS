#include<iostream>
using namespace std ;
class father
{
	public:
	int age=50;
};
class son: public father 
{
	public:
	int age1=12;
};
	int main ( )
{
	son s1;
	cout<<"Child age is "<<s1.age1<<endl<<"Father age is "<<s1.age<<endl;
}