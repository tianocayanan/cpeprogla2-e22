//This program represents 3 machine problems in Lab 5
#include <iostream>//Input and output
#include <iomanip>//String manipulation
using namespace std;

//Initial structures
struct Name{
       char fullName[100];
};

struct Student{
       int id;
       Name name;
       double givQuiz[3]; 
       double sum;
	   double average;      
};

struct Srecord{
	int id;
	char name[30];
	struct Quizzes{
		float givQuiz;
	};
 Quizzes givQuizzes[3];
};


struct Customer{
	struct Name{
		char firstName[20];//character for first name
		char lastName[20];//character for last name
	}name;
	
	struct Order{
		int day;
		int month;
		int year;
		int quan;
		struct Item{
			int ID;
			char itemName[20];
			int Price;
		};
	Item item[3];
	}order;
	
	double contNo;
};

void NewLine(){
	char s;
	do{cin.get(s);}while(s!='\n');
}

//Function for problem #1
void problem1(){
    Student stud;
    cout << "Enter Student Record: \n";
    cout << "ID: ";
    cin >> stud.id;
    NewLine();
    cout << "Name: ";
    cin.getline(stud.name.fullName, 99);
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.givQuiz[i];        
    }
    
    cout << "\n\n";
    cout << "Student Record\n";
    cout << "ID: " << stud.id << endl;
    cout << "Name: " << stud.name.fullName << endl;
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": " << stud.givQuiz[i] << endl;       
            stud.sum+=stud.givQuiz[i];
            stud.average=stud.sum/3;
    }
    cout<< "Grades: " << stud.average;
    
    if (stud.average>=75)
    {
    	cout << " \nRemarks: Passed";
	}
	else
	{
		cout << " \nRemarks: Failed";
	}
    
    system("pause > 0");
}

//Function for problem #2
void problem2(){
	int i, j; 
	float grade;
	char p;
	Srecord ci[5];
	cout << enld;
	cout<<"Enter 5 Student<s> Record"<<endl;
	for (i=0; i<5; i++){
		cout<<"\nStudent "<<(i+1)<<endl;
		cout<<"ID: ";
		cin>>ci[i].id;
		NewLine();
		cout<<"Student Name: ";
		cin.getline(ci[i].name, 49);
		cout<<"Grades: ";
		for(j=0;j<3;j++){	
			cin>>ci[i].givQuizzes[j].givQuiz;	
		}
}
	cout << setw(5) << "No."
	<< setw(15)<<"Student No"
	<< setw(20)<<"Name"
	<< setw(10)<<"Grade"
	<< setw(10)<<"Remark";
	

	
	for(int i=0; i<5; i++){
		grade=0;
		for(j=0;j<3;j++){
		grade+=ci[i].givQuizzes[j].givQuiz;
		}
		cout<<endl;
		cout<<setw(5)<<i+1
		<<setw(15)<<ci[i].id
		<<setw(20)<<ci[i].name;
		cout<<setw(10)<<setprecision(4)<<grade/3<<setw(10);
		if( grade/3>=75 ){
			cout<<"Passed";
			}
			else{
			cout<<"Failed";
			}
		}
		cout<<endl;
		system ("pause");
		
	
	}
	
//Main program	
int main(){
	int i, j, totalPrice;
	problem1();
	cout<<endl;
	problem2();
	cout<<endl;
	Customer c[3];
	for (i=0;i<3;i++){
		cout<<"CUSTOMER INFORMATION "<<i+1<<endl;
		cout<<"First Name: ";
		cin.getline(c[i].name.firstName,29);
		cout<<"Last Name: ";
		cin.getline(c[i].name.lastName,29);
		cout<<"ORDER DATE: "<<endl;
		cout<<"Day: ";
		cin>>c[i].order.day;
		cout<<"Month: ";
		cin>>c[i].order.month;
		cout<<"Year: ";
		cin>>c[i].order.year;
		cout<<"\nENTER 3 ITEMS: "<<endl;
		for (j=0;j<3;j++){
		    cout<<"ID: ";
		    cin>>c[i].order.item[j].ID;
		    NewLine();
    	    cout<<"Name: ";
    		cin.getline(c[i].order.item[j].itemName,29);
    		cout<<"Price: ";
    		cin>>c[i].order.item[j].Price;
    		cout<<"Quantity: ";
    		cin>>c[i].order.quan;
    		cout<<endl;
		}
		NewLine();
}
	j=0;
	cout<<"SUMMARY REPORT"<<endl;
	cout<<" #"<<setw(30)<<"Customer Name"
	<<setw(20)<<"Order Date"
	<<setw(15)<<"Items"
	<<setw(15)<<"Price"
	<<setw(15)<<"Quantity"<<endl;
	
	for (i=0;i<3;i++){
		tPrice=0;
		cout<<" "<<i+1
		<<setw(23)<<c[i].name.lastName<<","
		<<setw(6)<<c[i].name.firstName
		<<setw(11)<<c[i].order.day<<"/"<<c[i].order.month<<"/"<<c[i].order.year<<endl;
		
    	for (j=0;j<3;j++){
    		cout<<setw(67)<<c[i].order.item[j].itemName
			<<setw(15)<<c[i].order.item[j].Price
			<<setw(15)<<c[i].order.quan<<endl;
    		totalPrice += c[i].order.item[j].Price;
		}
		totalPrice=totalPrice*c[i].order.quan;
		cout<<setw(96)<<"TOTAL PRICE: "<<totalPrice<<endl;
	}
	
	return 0;
	//End of program
}

