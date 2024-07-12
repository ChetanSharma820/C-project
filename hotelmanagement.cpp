#include <iostream>
#include <bits/stdc++.h>
#include<bits\c++io.h>
#include<unistd.h>
#include<iomanip>
using namespace std;
class A{
	public:
		int a;
		int day=0;
		int rent=0;
			int ch=0;
			int t;
			long long m=0;
			int id;
			string name;
		 int hh(){
			cout<<"Each facility Included their own charges"<<endl;
			cout<<"Hotel standard choose "<<endl;
			cout<<"Enter you want 5*, 7*, 2* hotel room: ";
			cout<<"Press:- \n1. for 2* hotel\n2. for 5* hotel\n3. for 7* hotel"<<endl;
			cin>>ch;
			cout<<ch;
			switch(ch){
				case 1:
					cout<<"Your choice is 2* hotel "<<endl;
					cout<<"loading..........."<<endl;
					sleep(2);
					system("CLS");
					sasta();
					break;
				case 2:
					cout<<"You choose 5* hotel"<<endl;
					cout<<"loading..........."<<endl;
					sleep(2);
					system("CLS");
					midclass();
					break;
				case 3:
					cout<<"You choose 7* hotel"<<endl;
					cout<<"loading..........."<<endl;
					sleep(2);
					system("CLS");
					ameer();
					break;
				default :
					cout<<"\nSorry please! try again";
					sleep(2);
					system("CLS");
					sleep(1);
					hh();
					break;
			}
			cout<<"\nHow many days you are stay in our hotel according to your choise"<<endl;
			cout<<"Enter the number of days:-  ";
			cin>>day;
			cout<<"For "<<day <<" day you stay in hotel"<<endl;
		}
			void cal(){
				system("CLS");
			cout<<"\nCalculating your rent..........."<<endl;
			sleep(2);
			if(ch==1){
				if(t==1){
					rent=day*800;
				}
				else{
					rent=day*600;
				}
			}
			else if(ch==2){
				if(t==1){
					rent=day*1100;
				}
				else{
					rent=day*900;
				}
			}
			else if(ch==3){
				if(t==1){
					rent=day*1500;
				}
				else{
					rent=day*1200;
				}
			}
		}
		int data(){
			cout<<"Enter your Name: ";
			cin>>name;
		 	//getline(cin, name);
		 //	cout<<"Name- "<<name<<endl;
		 	cout<<"Enter your mobile number: ";
		 	cin>>m;
		 	cout<<m<<endl;
		}

		void sasta(){
			cout<<"We have two types of room:\n1.AC room \t\t2. Non AC room\n\t\t\t(According to thier charges)"<<endl;
			cout <<"Please! Select your type "<<endl;
			cout<<"Select:- 1 \t\t\t\t2"<<endl;
			cin>>t;
			cout<<t;
			system("CLS");
			if(t==1){
				cout<<"Thankyou! For choosing AC room "<<endl;
				cout<<"Rent of AC room per day is:- 800";
			}
			else if(t==2) {
				cout<<"Thankyou! For choosing Non AC room"<<endl;
				cout<<"Rent of Non AC room per day is:- 600";
			}
			else{
				sasta();
			}
		}

		void midclass(){
			cout<<"2BHK fully furnished room \nIn a better quality"<<endl;
			cout<<"We have two types of room:\n1.AC room \t\t2. Non AC room\n\t\t\t(According to thier charges)"<<endl;
			cout <<"Please! Select your type "<<endl;
			cout<<"Select:- 1 \t\t\t\t2\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
			cin>>t;
			cout<<t;
			system("CLS");
			if(t==1){
				cout<<"Thankyou! For choosing AC room "<<endl;
				cout<<"Rent of AC room per day is:- 1100";
			}
			else if(t==2){
				cout<<"Thankyou! For choosing Non AC room"<<endl;
				cout<<"Rent of Non AC room per day is:- 900";
			}
			else{
				midclass();
			}
		}
		void ameer(){
			cout<<"3BHK fully furnished room \nIn a better quality"<<endl;
			cout<<"We have two types of room:\n1.AC room \t\t2. Non AC room\n\t\t\t(According to thier charges)"<<endl;
			cout <<"Please! Select your type "<<endl;
			cout<<"Select:- 1 \t\t\t\t2\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
			cin>>t;
			cout<<t;
			system("CLS");
			if(t==1){
				cout<<"Thank you! For choosing AC room "<<endl;
				cout<<"Rent of AC room per day is:- 1500";
			}
			else if(t==2){
				cout<<"Thank you! For choosing Non AC room"<<endl;
				cout<<"Rent of Non AC room per day is:- 1200";
			}
			else{
				ameer();
			}
		}
		void showrent(){
			system("CLS");
			cout<<"Your Bill is:- "<<endl;
			system("CLS");
			cout<<"\t\t\t\t               Din Dayal Hotel            "<<endl;
			cout<<"\t\t\t\t------------------|Name: "<<setw(10)<<name<<" "<<endl;
			cout<<"\t\t\t\t------------------|Mobile: "<<setw(10)<<m<<" "<<endl;
			cout<<"\t\t\t\t------------------|Day: "<<setw(10)<<day<<" "<<endl;
			cout<<"\t\t\t\t------------------|Rent: "<<setw(10)<<rent<<"  "<<endl;
			cout<<"\t\t\t\t------------------|Advanced: "<<setw(10)<<"0"<<endl;
			cout<<"\t\t\t\t------------------|Security: "<<setw(10)<<"1000"<<endl;
			cout<<"\t\t\t\t------------------|Total: "<<setw(10)<<rent+1000<<" "<<endl;
			cout<<"\n";
			cout<<"\t\t\t\tThank you! for visiting "<<endl;
			cout<<"\t\t\t\tWe hope you stay comfortably in our hotel";
		}
		int login(){
			cout<<"Enter your password: "<<endl;
			cin>>a;
			if (a==8855){
				cout<<"Thankyou! and Welcome!"<<endl;
				hh();
			}
			else {
				cout<<"Please try again"<<endl;
				login();
			}
		}
};
main(){
	A a;
	a.login();
	a.data();
	a.cal();
	a.showrent();
}






/*	public :
			string name;
			int mobilenumber=0;
			int id;

		void data(){
			cout<<"Enter your Name: "<<endl;
			cin>>name;
			system("CLS");
			sleep(1);
			cout<<"Enter your mobile no. : "<<endl;
			cin>>mobilenumber;
			system("CLS");
			sleep(1);
			cout<<"Enter your Aadhar number: "<<endl;
			cin>>id;
			system("CLS");
			sleep(1);
			cout<<"Name- "<<name<<"\n"<<"Mobile number- "<<mobilenumber<<"\n"<<"Aadhar number- "<<id<<endl;
	}*/
/*#include <iostream>
#include <unistd.h>
using namespace std;

class A {
public:
    int day = 0;
    int rent = 0;
    int ch = 0;
    int t;
    int m;
    int id;
    string name;

    A() {
        cout << "Each facility Included their own charges" << endl;
        cout << "Hotel standard choose " << endl;
        cout << "Enter you want 5*, 7*, 2* hotel room: ";
        cout << "Press:- \n1. for 2* hotel\n2. for 5* hotel\n3. for 7* hotel" << endl;
        cin >> ch;
        cout << ch;

        switch (ch) {
            case 1:
                cout << "Your choice is 2* hotel " << endl;
                cout << "loading..........." << endl;
                sleep(2);
                system("CLS");
                sasta();
                break;
            case 2:
                cout << "You choose 5* hotel" << endl;
                cout << "loading..........." << endl;
                sleep(2);
                system("CLS");
                midclass();
                break;
            case 3:
                cout << "You choose 7* hotel" << endl;
                cout << "loading..........." << endl;
                sleep(2);
                system("CLS");
                ameer();
                break;
            default:
                cout << "\nSorry please! try again";
                sleep(2);
                system("CLS");
                sleep(1);
                A();
                break;
        }

        cout << "How many days you are staying in our hotel according to your choice" << endl;
        cout << "Enter the number of days:-  " << endl;
        cin >> day;
        cout << "For " << day << " day you stay in the hotel" << endl;
    }

    void cal() {
        system("CLS");
        cout << "\nCalculating your rent..........." << endl;
        sleep(2);

        if (ch == 1) {
            if (t == 1) {
                rent = day * 800;
            } else {
                rent = day * 600;
            }
        } else if (ch == 2) {
            if (t == 1) {
                rent = day * 1100;
            } else {
                rent = day * 900;
            }
        } else if (ch == 3) {
            if (t == 1) {
                rent = day * 1500;
            } else {
                rent = day * 1200;
            }
        }
    }

    void data() {
        cout << "Enter your Name: ";
        cin >> name;
        cout << "Enter your mobile number: ";
        cin >> m;
        cout << m << endl;
    }

    void sasta() {
        cout << "We have two types of room:\n1.AC room \t\t2. Non AC room\n\t\t\t(According to their charges)" << endl;
        cout << "Please! Select your type " << endl;
        cout << "Select:- 1 \t\t\t\t2" << endl;
        cin >> t;
        cout << t;
        system("CLS");

        if (t == 1) {
            cout << "Thank you! For choosing AC room " << endl;
            cout << "Rent of AC room per day is:- 800";
        } else {
            cout << "Thank you! For choosing Non AC room" << endl;
            cout << "Rent of Non AC room per day is:- 600";
        }
    }

    void midclass() {
        cout << "2BHK fully furnished room \nIn a better quality" << endl;
        cout << "We have two types of room:\n1.AC room \t\t2. Non AC room\n\t\t\t(According to their charges)" << endl;
        cout << "Please! Select your type " << endl;
        cout << "Select:- 1 \t\t\t\t2\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
        cin >> t;
        cout << t;
        system("CLS");

        if (t == 1) {
            cout << "Thank you! For choosing AC room " << endl;
            cout << "Rent of AC room per day is:- 1100";
        } else {
            cout << "Thank you! For choosing Non AC room" << endl;
            cout << "Rent of Non AC room per day is:- 900";
        }
    }

    void ameer() {
        cout << "3BHK fully furnished room \nIn a better quality" << endl;
        cout << "We have two types of room:\n1.AC room \t\t2. Non AC room\n\t\t\t(According to their charges)" << endl;
        cout << "Please! Select your type " << endl;
        cout << "Select:- 1 \t\t\t\t2\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << endl;
        cin >> t;
        cout << t;
        system("CLS");

        if (t == 1) {
            cout << "Thank you! For choosing AC room " << endl;
            cout << "Rent of AC room per day is:- 1500";
        } else {
            cout << "Thank you! For choosing Non AC room" << endl;
            cout << "Rent of Non AC room per day is:- 1200";
        }
    }

    void showrent() {
        system("CLS");
        cout << "Your Bill is:- " << endl;
        system("CLS");
        cout << "\t\t                       ";
    }
};

int main() {
    A a;
    a.data();
    a.cal();
    a.showrent();
    return 0;
}*/

