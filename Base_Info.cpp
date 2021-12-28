#include<iostream>
using namespace std;
class Basic_info
{
public:
string name,rollno,gender;
void getdata()
{
cout<<"enter student data 1.name 2.rollno 3.gender "<<endl;
cin>>name>>rollno>>gender;
}
void display()
{
cout<<"student data "<<"name :"<<name<<""<<"rollno :"<<rollno<<""<<"gender :"<<gender<<""<<endl;
}
};
class Physical_fit :public Basic_info
{
public:
string height,weight;
void getdata()
{
cout<<"enter student height and weight "<<endl;
cin>>height>>weight;
}
void display()
{
cout<<name<<"height is :"<<height<<""<<name<<"weight :"<<weight;
}
};
int main()
{
	Basic_info obj;
	Physical_fit obj1;
	obj.name;
	obj.rollno;
	obj.gender;
	obj1.height;
	obj1.weight;
	obj.getdata();
	obj1.getdata();
	obj.display();
	obj1.display();
	return 0;
}
