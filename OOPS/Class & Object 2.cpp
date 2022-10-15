#include<iostream>
using namespace std ;
class student
{
	public:
	string name;
	int id;
	void classprint( )
	{
			cout<<"Student name "<<name<<endl;
			cout<<"Student I'd "<<id<<endl;
	}
	student (string n,int i)
	{
		name=n;
		id=i;
	}
};
int main ( )
{
	student s1=student ("Pankaj",98);
    s1.classprint();
    student s2=student ("Hritik",67);
    s1.classprint();
    student s3=student ("Rahul",129);
    s1.classprint();
}