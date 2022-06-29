#include<iostream>
#include<fstream>
using namespace std;
class Appointment{
	private:
		int chooseopt;
		int choosecate;
		string city;
		string chooseDr;
	public:
		void menu(){
			cout<<"\n\n\n\t\t\t\t\t *********** Doctors Appointment ***********";
			cout<<"\n\n\t\t\t\t\t\t 1.Book an Appointment ";
			cout<<"\n\n\t\t\t\t\t\t 2.Exit ";
			cout<<"\n\n\t\t\t\t\t\t Select One option: ";
			cin>>chooseopt;
			system("cls");
			if(chooseopt==1)
			{
				system("cls");
			    cout<<"\n\n\n\t\t\t\t\t ************ Categories ***********";
			    cout<<"\n\n\t\t\t\t\t 1. Dermatologist ";
			    cout<<"\n\n\t\t\t\t\t 2. Child Specialist ";
			    cout<<"\n\n\t\t\t\t\t 3. Cardiologist ";
			    cout<<"\n\n\t\t\t\t\t 4. General Physician ";
			    cout<<"\n\n\t\t\t\t\t 5. Gynecologist ";
			    cout<<"\n\n\t\t\t\t\t 6. Urologist ";
			    cout<<"\n\n\t\t\t\t\t\t  Choose one Category: ";
			    cin>>choosecate;
			    City();
			}
			else if(chooseopt==2)
			{
				system("cls");
				cout<<"\n\t\t\t\t ThankYou for your time!";
			}
			else
			{
			    cout<<"\n\t\t\t\t Please Enter valid input like 1 or 2. ";
			    menu();
			}
		}
	void City(){
			system("cls");
			cout<<"\n\n\n\t\t\t\t\t**********Cities**********";
			cout<<"\n\n\t\t\t\t\t\t Peshawar. ";
			cout<<"\n\n\t\t\t\t\t\t Lahore. ";
			cout<<"\n\n\t\t\t\t\t\t Islamabad. ";
			cout<<"\n\n\t\t\t\t\t\t Karachi. ";
			cout<<"\n\n\t\t\t\t\t\t Select City (in words).";
			cin>>city;
			Dr_details();
	}
	void Dr_details()
	{
		system("cls");
		int num;
		char num1;
		string line;
		cout<<endl;
		cout<<endl;
		if (city=="Peshawar"|| city=="peshawar")
		{
			back:
			system("cls");
			cout<<"\n\n \t\t\t\t *******1. Dr Irfan Mughal *******";
			cout<<"\n\n \t\t\t\t *******2. Dr Furqan Aziz *******";
			cout<<"\n\n \t\t\t\t *******3. Dr Rubina Nazz *******";
			cout<<"\n\n\t\t\t\t Select Number to go to Doctor's Profile: ";
			cin>>num;
			if (num==1)
			{
			   
	
	            ifstream in("PeshDr1.txt");

		     while(!in.eof())
	               {
	    			 	getline(in,line);
	   					cout<<"\n \t\t\t\t"<<line<<endl;
					}	
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Irfan Mughal. Thankyou for using our service!";
				}
				else{
					goto back;
				}	
			}
			else if(num==2){
				ifstream in("PeshDr2.txt");

		     while(!in.eof())
	               {
	    			 	getline(in,line);
	   					cout<<"\n \t\t\t\t"<<line<<endl;
				   }
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Furqan Aziz. Thankyou for using our service!";
				}
				else{
					goto back;
				}
			}
			else if(num==3)
			{
				ifstream in("PeshDr3.txt");

		     while(!in.eof())
	            {
	    			getline(in,line);
	   				cout<<"\n \t\t\t\t"<<line<<endl;
				}
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Rubina Nazz. Thankyou for using our service!";
				}
				else{
					goto back;
				}	
			}
		}
		else if (city=="Lahore"|| city=="lahore")
		{
			back1:
			system("cls");	
			cout<<"\n\n \t\t\t\t *******1. Dr Hisham Qureshi *******";
			cout<<"\n\n \t\t\t\t *******2. Dr Hassaan Naveed *******";
			cout<<"\n\n \t\t\t\t *******3. Dr Rimsha Awan ******* ";
			cout<<"\n\n\t\t\t\t Select Number to go to Doctor's Profile: ";
			cin>>num;
			if (num==1)
			{
			   
	
	            ifstream in("LahDr1.txt");

		     while(!in.eof())
	               {
	    			 	getline(in,line);
	   					cout<<"\n \t\t\t\t"<<line<<endl;
					}	
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Hisham Qureshi. Thankyou for using our service!";
				}
				else{
					goto back1;
				}	
			}
			else if(num==2){
				ifstream in("LahDr2.txt");

		     while(!in.eof())
	               {
	    			 	getline(in,line);
	   					cout<<"\n \t\t\t\t"<<line<<endl;
				   }
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Hassaan Naveed. Thankyou for using our service!";
				}
				else{
					goto back1;
				}
			}
			else if(num==3)
			{
				ifstream in("LahDr3.txt");

		     while(!in.eof())
	            {
	    			getline(in,line);
	   				cout<<"\n \t\t\t\t"<<line<<endl;
				}
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Rimsha Awan. Thankyou for using our service!";
				}
				else{
					goto back1;
				}	
			}
		}
		else if (city =="Karachi"|| city == "karachi")
		{
			back2:
			system("cls");	
			cout<<"\n\n \t\t\t\t *******1. Dr Kamran *******";
			cout<<"\n\n \t\t\t\t *******2. Dr Mughni *******";
			cout<<"\n\n \t\t\t\t *******3. Dr Laiba Amjad ******* ";
			cout<<"\n\n\t\t\t\t Select Number to go to Doctor's Profile: ";
			cin>>num;
			if (num==1)
			{
			   
	
	            ifstream in("KarDr1.txt");

		     while(!in.eof())
	               {
	    			 	getline(in,line);
	   					cout<<"\n \t\t\t\t"<<line<<endl;
					}	
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Kamran. Thankyou for using our service!";
				}
				else{
					goto back2;
				}	
			}
			else if(num==2){
				ifstream in("KarDr2.txt");

		     while(!in.eof())
	               {
	    			 	getline(in,line);
	   					cout<<"\n \t\t\t\t"<<line<<endl;
				   }
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Mughni. Thankyou for using our service!";
				}
				else{
					goto back2;
				}
			}
			else if(num==3)
			{
				ifstream in("KarDr3.txt");

		     while(!in.eof())
	            {
	    			getline(in,line);
	   				cout<<"\n \t\t\t\t"<<line<<endl;
				}
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Laiba Amjad. Thankyou for using our service!";
				}
				else{
					goto back2;
				}	
			}
		}
		else if (city=="Islamabad"||city=="islamabad")
		{
			back3:
			system("cls");	
			cout<<"\n\n \t\t\t\t *******1. Dr Saeed *******";
			cout<<"\n\n \t\t\t\t *******2. Dr Asif Jamal ******* ";
			cout<<"\n\n \t\t\t\t *******3. Dr Maryam Awan ******* ";
			cout<<"\n\n\t\t\t\t Select Number to go to Doctor's Profile: ";
			cin>>num;
			if (num==1)
			{
			   
	
	            ifstream in("IslDr1.txt");

		     while(!in.eof())
	               {
	    			 	getline(in,line);
	   					cout<<"\n \t\t\t\t"<<line<<endl;
					}	
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Saeed. Thankyou for using our service!";
				}
				else{
					goto back3;
				}	
			}
			else if(num==2){
				ifstream in("IslDr2.txt");

		     while(!in.eof())
	               {
	    			 	getline(in,line);
	   					cout<<"\n \t\t\t\t"<<line<<endl;
				   }
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Asif Jamal. Thankyou for using our service!";
				}
				else{
					goto back3;
				}
			}
			else if(num==3)
			{
				ifstream in("IslDr3.txt");

		     while(!in.eof())
	            {
	    			getline(in,line);
	   				cout<<"\n \t\t\t\t"<<line<<endl;
				}
				cout<<"\n\t\t\t\t-- Press X to confirm Doctor Or Press any Charactor to Go Back: ";
				cin>>num1;
				if(num1=='X'||num1=='x'){
					cout<<"\n\n\t\t\t\tYour Appointment has been made with Dr Maryam Awan. Thankyou for using our service!";
				}
				else{
					goto back3;
				}	
			}
			
		}
	}		
};
int main()
{
    Appointment ap;
    ap.menu();
}
