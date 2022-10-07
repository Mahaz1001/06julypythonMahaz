#include<iostream>
#include<cstring>
using namespace std;

class A
{
	public:
		char state[10];
		char city[10];
		
		void displayA()
		{
		cout<<"-----------welcome to SBI--------------"<<endl;
		cout<<"select state"<<endl;
		cout<<"Gujarat"<<endl;
		cout<<"Maharashtra"<<endl;
		cout<<"Rajasthan"<<endl;
		cout<<"MP"<<endl;
		cin>>state;
		
		cout<<"welcome to "<<state;
		cout<<"SBI"<<endl;
		
		cout<<"select City"<<endl;
		cin>>city;
		cout<<"welcome to "<<city;
		cout<<"SBI"<<endl;
		
	    }
};

class B : public A
{
	public:
		char username[20];
		char password[20];
		
		void displayB()
		{
			cout<<"Login"<<endl;
			cout<<"Enter Username"<<endl;
			gets(username);
			cout<<"Enter Password"<<endl;
			cin>>password;
			
		}
};

class C : public A
{
	public:
		char name[30];
		char address[100];
		char type[10];
		int dob;
		int aadhar;
		
		
		void displayC()
		{
			cout<<"please fill the below for registration"<<endl;
			cout<<"Enter Name"<<endl;
			gets(name);
			cout<<"Enter DOB"<<endl;
			cin>>dob;
			cout<<"Enter aadhar no"<<endl;
			cin>>aadhar;
			cout<<"Enter Adress"<<endl;
			gets(address);
			cout<<"Enter Account type"<<endl;
			cin>>type;
			
			cout<<"successfully registered"<<endl;
			cout<<"---------Your bank details are below---------"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"DOB: "<<dob<<endl;
			cout<<"Aadhar no: "<<aadhar<<endl;
			cout<<"Address: "<<address<<endl;
			cout<<"Account type: "<<type<<endl;
			cout<<"Account No: 123456"<<endl;
			cout<<"IFSC Code: ABC321"<<endl;
			
		}
	
};
class D : public A
{
	public:
		int choice;
		
		void displayD()
		{
			cout<<"login successful"<<endl;
			cout<<"Menu"<<endl;
			cout<<"1 - debit"<<endl;
			cout<<"2 - credit"<<endl;
			cout<<"3 - view balance"<<endl;
			cout<<"4 - logout"<<endl;
			cout<<"Enter choice"<<endl;
			cin>>choice;
		}
};

int main()
{
	B obj1;
	C obj2;
	D obj3;
	int c;
	
	obj1.displayA();
	
	cout<<"Are you a registered user?"<<endl;
		cout<<"1 - yes"<<endl;
		cout<<"2 - NO"<<endl;
		cin>>c;
		if(c==1)
		{
			obj1.displayB();
		}
		else if(c==2)
		{
			obj2.displayC();
			obj3.displayD();
		}
		else
		{
			cout<<"Invalid choice";
		}
	return 0;
}
