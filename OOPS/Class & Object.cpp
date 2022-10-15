#include<iostream>
using namespace std ;
class student
{
	public:
	string name;
	int id;
};
int main ( )
{
	student s1;
	cin>>s1.name;
	cin>>s1.id;
	cout<<"Student name "<<s1.name<<endl;		cout<<"Student I'd "<<s1.id;
}