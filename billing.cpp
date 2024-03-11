#include<iostream>
#include<fstream>

using namespace std;

class shopping{
	private :
		int pcode;
		float price;
		float dis;
		string pname;
		
	public: 
		void menu();
		void adminstrator();
		void buyer(); 
		void add();
		void edit();
		void rem();
		void list();
		void receipt();
			
};

void shopping :: menu(){
	m:
	int choice;
	string email,password;
	
	cout<<"\t\t\t\t_______________________\n ";
	cout<<"\t\t\t\t                       \n ";
	cout<<"\t\t\t\t 	Supermarket Main Menu       \n ";
	cout<<"\t\t\t\t                       \n ";
	cout<<"\t\t\t\t_______________________\n ";
	cout<<"\t\t\t\t                       \n ";
	cout<<"\t\t\t\t	|    1)Adminstrator    |\n";	
	cout<<"\t\t\t\t	|    2)Buyer		   |\n";
	cout<<"\t\t\t\t	|    3)Exit			   |\n";
	cout<<"\t\t\t\t                        \n ";	
	cout<<"\n\t\t\t 	Please select!	   \n ";
	cin>>choice;
	
	switch(choice){
		case 1:{
			
			cout<< "\t\t\t Please Login \n";
			cout<< "Enter Email\n";
			cin>>email;
			cout<<"Enter Password\n";
			cin>>password;
			
			if(email = omer@gmail.com && password = "12345");
			{
				adminstrator();
			}else{
				cout<<"Invalid email or password \n";
			}
			break;
		}
		case 2:
			{
				buyer();
			}
		case 3:
			{
				exit(0);
			}
		default:{
			cout<<"Please select from the given options \n";
			
		}	
	}
	goto m;	
}
void shopping :: adminstrator(){
	m:
	int choice;
	cout << "\n\t\t\t Adminstrator menu";
	cout << "\n1)Add the product|";
	cout << "\n2)Modify the product";
	cout << "\n3)Delete the product";
	cout << "\n4)Back to Main Menu";
	cout<< "\n\t\t\t";
	cout<< "Please enter your choice ";
	cin>>choice;
	
	switch(choice){
		case 1:
			add();
			break;
		
		case 2:
			edit();
			break;
		
		case 3:
			rem();
			break;
		
		case 4:
			menu();
			break;
		
		default:
			cout<<"Invalid choice, please enter a valid input.\n";
	}
	goto m;
}
void shopping::buyer(){
	int choice;
	cout<<"\t\t\t  Buyer \n";
	cout<<"			\n";
	cout<<"1)Buy products\n";
	cout"2) Go back\n";
	
	cout<<"Enter your choice\n";
	cin>>choice;
	
	switch(choice){
		case 1:
			receipt();
			break;
		case 2:
			menu();
		default: 
			cout<<"Invalid choice";
	}
	goto m;	
}

void shopping::add(){
	fstream data;
	int c;
	int token =0;
	float p;
	float d;
	string n;
}


