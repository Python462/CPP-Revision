#include<iostream>
#include<stdlib.h>
#include <fstream>
#include <string.h>
#include <vector>
#include <windows.h>

using namespace std;
//////////////
class file{
	public:
		void addRecord(){
			string name;
	    	int age;
	    	cin>>name;
	    	cin>>age;
			fstream myfile;
			myfile.open ("members.txt", std::fstream::in | std::fstream::out | std::fstream::app);
			myfile << name <<"\n";
			myfile << age <<"\n";
			myfile.close();
		}
		void showRecord(){			
		   vector <string> a;
		   vector <string> b;
		   string field1;
		   string field2;
		   ifstream data;
		   data.open("members.txt");
		    while (data >> field1 >> field2) {
		    	a.push_back(field1);
		    	b.push_back(field2);
		    }
		    while (!a.empty()){
		    	cout<<a.back()<<endl;
		    	cout<<b.back()<<endl;
		    	a.pop_back();
		    	b.pop_back();
			}
		    data.close();
		   
		} 
		void searchRecord(string name){			
		   vector <string> a;
		   vector <string> b;
		   string field1;
		   string field2;
		   ifstream data;
		   data.open("members.txt");
		    while (data >> field1 >> field2) {
		    	a.push_back(field1);
		    	b.push_back(field2);
		    }
		    while (!a.empty()){
		    	if(a.back() == name){
		    		cout<<"Found Record"<<endl;
			    	cout<<a.back()<<endl;
			    	cout<<b.back()<<endl;
				}
		    	a.pop_back();
		    	b.pop_back();
			}
		    data.close();
		   
		}  
		
};
//////////////
class util{
	public:
		void line(){
			line(16);
		}
		void line(int i){
			while(i--){
				cout<<"- ";
			}
			cout<<""<<endl;
		}
		void print(string message){
			cout<<message<<endl;
		}	
};
//////////////
class auth{
	public:
		int password;
		auth(){
			password = 1234;
		}
		int login(){
			int pass;
			cout<<"Enter Password :";
			cin>>pass;
			if(pass == password)
				return 1;
			else
				return 0;
		}	
};
///////////////////
/////////////////
class menu{
	
	public:
		util utilObject;
		file fileObject;
		void showMenu(){
			int selection;
			utilObject.line();
			cout<<"1.\tMaster Entry"<<endl;
			//sleep(1);
			utilObject.print("2.\tCafe Management");
			utilObject.print("3.\tExit");
			utilObject.line();
			cout<<"your choice ";
			cin>>selection;
			selectMenu(selection);	 
		}	
		void selectMenu(int option){
			switch(option){
				case 1:cout<<"You Selected Master"<<endl;
						submenuMaster();
						break;
				case 2:cout<<"Management"<<endl;
						break;
				case 3:cout<<"Thank You"<<endl;
						break;
				default:cout<<"Default"<<endl;
			}
		}
		void submenuMaster(){
			int selection;
			utilObject.line();
			utilObject.print("1.\tMember Entry");
			utilObject.print("2.\tComputer Entry");
			cout<<"Select : ";
			cin>>selection;
			if(selection == 1){
				memberEntry();
			}else if(selection == 2){
				computerEntry();
			}else{
				cout<<"Invalid Option"<<endl;
				submenuMaster();
			}
		}
		void memberEntry(){
			int selection;
			utilObject.line();
			utilObject.print("1.\tAdd New Member");
			utilObject.print("2.\tShow Member");
			utilObject.print("3.\tUpdate Record");
			utilObject.print("4.\tDelete Record");
			utilObject.print("5.\tSearch Record");
			utilObject.print("6.\tReturn");
			utilObject.line();
			cout<<"Select : ";
			cin>>selection;
			submenuMemberSelect(selection);
		}
		void computerEntry(){
			int selection;
			utilObject.line();
			utilObject.print("1.\tShow Computer");
			utilObject.print("2.\tUpdate Record");
			utilObject.print("3.\tDelete Record");
			utilObject.print("4.\tSearch Record");
			utilObject.print("5.\tReturn");
			utilObject.line();
			cout<<"Select : ";
			cin>>selection;
			submenuComputerSelect(selection);
		}
		void submenuComputerSelect(int option){
			switch(option){
				case 1:utilObject.print("1.\tShow Computer");
						break;
				case 2:utilObject.print("1.\tUpdate Record");
						break;
				case 3:utilObject.print("1.\tDelete Record");
						break;
				case 4:utilObject.print("1.\tSearch Record");
						break;
				case 5:system("CLS");
						showMenu();
						break;
			}
		}
		void submenuMemberSelect(int option){
			switch(option){
				case 1:system("CLS");addnewMember();
						break;
				case 2:showMember();
						break;
				case 3:utilObject.print("1.\tUpdate Member");
						break;
				case 4:utilObject.print("1.\tDelete Member");
						break;
				case 5:system("CLS");searchMember();
						break;
				case 6:system("CLS");
						showMenu();
						break;
			}
		}
		void showMember(){
			fileObject.showRecord();
		}
		void addnewMember(){
			cout<<"You Selected Add Member"<<endl;
			fileObject.addRecord();
		}
		void searchMember(){
			string name;
			cout<<"You Selected Search Member"<<endl;
			cout<<"Enter Name : ";
			cin>>name;
			fileObject.searchRecord(name);
		}
};
////////////////////////////

void dashboard(){
		cout<<"***************************CYBER CAFE SYSTEM*************************************************"<<endl;
		menu menuObject;
		menuObject.showMenu();
}
void start(int i){
	int attempt;
	attempt = i;
	cout<<"Cyber Cafe  System"<<endl;
	auth authObject;
	if(attempt > 3){
		cout<<"Press any key to Exit"<<endl;
		system("pause");
		return ;
	}
	if(authObject.login()){
		system("CLS");
		dashboard();
	}else{
		cout<<"Login Fail"<<endl;
		start(++attempt);
	}
	cout<<"\n"<<endl;
}
int main(){
	start(0);
	return 0;
}
