#include<iostream>
#include<cstring>

using namespace std;

class student{
	public:
		string name,addr;
		int age;
		
		student()
		{
			name="unknown";
			addr="-";
			age=0;
		}
		void setinfo(string n, int ag)
		{
			getline(cin,name);
			cin>> age;
		}
		void setinfo(string n, string a, int ag)
		{
			getline(cin,name);
			getline(cin,addr);
			cin>> age;
		}
		void getinfo(string n, int ag)
		{
			cout << "Name: "<< name<<endl;
			cout<< "age: "<< age<<endl;
		}
		void getinfo(string n, string a, int ag)
		{
			cout<< "name: "<< name<< endl;
			cout << "Age: "<< age<< endl;
			cout << "Address: "<< addr<< endl;
		}
};

int main()
{
	int x;
	cout << "Enter no of students \n";
	cin>> x;
	student s[x];
	string name,addr;
	int i,age;
	
	for(i=0;i<x;i++)
	{
		cout << "Enter name and address \n";
		s[i].setinfo(name,age);
	}
	
	for(i=0;i<x;i++)
	{
		s[i].getinfo(name,age);
	}
	
	for(i=0;i<x;i++)
	{
		cout << "Enter name,address and age \n";
		s[i].setinfo(name,addr,age);
	}
	
	for(i=0;i<x;i++)
	{
		s[i].getinfo(name,addr,age);
	}
	return 0;
}
