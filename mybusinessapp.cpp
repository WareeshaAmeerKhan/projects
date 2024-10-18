#include<iostream>
#include<windows.h>
#include<string.h>

using namespace std;

string username;
string password;
string animal1,animal2,animal3;
string breed1,breed2,breed3;
char sex1,sex2,sex3;
int age1,age2,age3;
int weight1,weight2,weight3;
int price1,price2,price3;

void header()
{
cout<<"       ::::::     :::     ::  ::            :::      ::    ::    ::::::     ::     ::    :::   ::       ::::::        :::    ::::::   ::::::"<<endl;
cout<<"       ::   ::   :: ::    :: ::            :: ::     :::   ::      ::       :::   :::   :: ::  ::      ::            :: ::   ::  ::   ::  ::"<<endl;
cout<<"       ::::::   :::::::   ::::            :::::::    :: :: ::      ::       :::: ::::  ::::::: ::       :::::       :::::::  ::::::   ::::::"<<endl;
cout<<"       ::       ::   ::   :: ::           ::   ::    ::   :::      ::       :: ::: ::  ::   :: ::           ::      ::   ::  ::       ::    "<<endl;
cout<<"       ::       ::   ::   ::  ::          ::   ::    ::    ::    ::::::     ::  :  ::  ::   :: ::::::  ::::::       ::   ::  ::       ::    "<<endl;
cout<<endl<<endl;
}
void signup()
{
	string confirm;

	cout<<"Set Username: ";
	cin>>username;
	cout<<"Set Password: ";
	cin>>password;
	cout<<"Confirm Password: ";
	cin>>confirm;
	
	while(confirm!=password)
	{
		cout<<"Password doesn't match, \n Confirm again: ";
		cin>>confirm;
	}

	cout<<"Your account is created!";
}
		

void login()
{
	string name,passkey;

	cout<<"Enter Username: ";
	cin>>name;
	cout<<"Enter Password: ";
	cin>>passkey;

	if(name==username && passkey==password)
	{
		cout<<"You have successfully logged in!"<<endl;
	}
	else
	{
	   while(name!=username || passkey!=password)
		{
		cout<<"Wrong Username or Password!   Enter again!"<<endl;
		cout<<"Enter Username: ";
		cin>>name;
		cout<<"Enter Password: ";
		cin>>passkey;
		}
	   cout<<endl;
	   cout<<"You have successfully logged in!"<<endl;
	}		
}

void admin()
{
	cout<<endl<<endl;
	cout<<"              **       ****      **   **     ***      **   *          "<<endl;
	cout<<"             *  *      *   *     * * * *      *       * *  *          "<<endl;
	cout<<"             ****      *   *     *  *  *      *       *  * *          "<<endl;
	cout<<"             *  *      ****      *     *     ***      *   **          "<<endl;
	
	cout<<"Register your animals!"<<endl<<endl;

	cout<<"Enter type of animal 1: ";
	cin>>animal1;
	cout<<"Enter its breed: ";
	cin>>breed1;
	cout<<"Enter its sex(f/m): ";
	cin>>sex1;
	cout<<"Enter its age(in months): ";
	cin>>age1;
	cout<<"Enter its weight(in kg): ";
	cin>>weight1;
	cout<<"Enter your demand(in PKR): ";
	cin>>price1;

	cout<<"Enter type of animal 2: ";
	cin>>animal2;
	cout<<"Enter its breed: ";
	cin>>breed2;
	cout<<"Enter its sex(f/m): ";
	cin>>sex2;
	cout<<"Enter its age(in months): ";
	cin>>age2;
	cout<<"Enter its weight(in kg): ";
	cin>>weight2;
	cout<<"Enter your demand(in PKR): ";
	cin>>price2;

	cout<<"Enter type of animal 3: ";
	cin>>animal3;
	cout<<"Enter its breed: ";
	cin>>breed3;
	cout<<"Enter its sex(f/m): ";
	cin>>sex3;
	cout<<"Enter its age(in months): ";
	cin>>age3;
	cout<<"Enter its weight(in kg): ";
	cin>>weight3;
	cout<<"Enter your demand(in PKR): ";
	cin>>price3;
	cout<<endl;
}

string stock()
{
	string table;

	cout<<"STOCK INFORMATION"<<endl<<endl;
	cout<<"Animal_Type"<<"\t"<<"Breed"<<"\t"<<"Sex"<<"\t"<<"Age"<<"\t"<<"Weight"<<"\t"<<"Price"<<endl; 
	cout<<animal1<<"\t\t"<<breed1<<"\t"<<sex1<<"\t"<<age1<<"\t"<<weight1<<"\t"<<price1<<endl;
	cout<<animal2<<"\t\t"<<breed2<<"\t"<<sex2<<"\t"<<age2<<"\t"<<weight2<<"\t"<<price2<<endl;
	cout<<animal3<<"\t\t"<<breed3<<"\t"<<sex3<<"\t"<<age3<<"\t"<<weight3<<"\t"<<price3<<endl;
}


int main()
{
	int n;


	system("cls");
	header();
	cout<<"Enter 1 to create an account as Admin..\nEnter 2 to exit.."<<endl;
	cin>>n;
	
	if(n==1)
	{
		signup();
		Sleep(1000);
		system("cls");
		header();

		cout<<"Enter 1 to login..\n Enter 2 to exit.."<<endl;
		cin>>n;

		if(n==1)
		{
			login();
			Sleep(1000);
			system("cls");
			header();
			admin();
			Sleep(1000);
			system("cls");
			header();
			string STOCK=stock();
			cout<<STOCK<<endl<<endl;
			cout<<"Enter 1 to contact customer..\n Enter 2 to exit.."<<endl;
			cin>>n;
			if(n==1)
			{
				Sleep(5000);
				system("cls");
				header();
				cout<<"Finding Customer......"<<endl;
			}
			else if(n==2)
			{
				system("cls");
			}
			
		}
		else if(n==2)
		{
			system("cls");
		}
	}
	else if(n==2)
	{
		system("cls");
	}
}
