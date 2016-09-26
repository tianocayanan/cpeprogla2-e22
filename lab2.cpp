//This program consists of 

#include <iostream>
#include <math.h>
#include <ctime>
#include <string>
#include <cstring>
#include <cstdlib>
#include <conio.h>
using namespace std;

int factorial(int x){
    if(x!=1)
  return x*factorial(x-1);
}

double getRound(double num){
	return round(num);
}

//Function for problem #1
void problem1(){
	//This program is used in rounding off value
	double num, result;
	cout << "Round off Program"<<endl;
	cout << "Enter a number to be round off: ";
		cin >> num;
	result = getRound(num);
		cout <<"Round off value: "<< result<<endl;
	

	}

//Function for problem #2
void problem2(){
	//This program is used in generating 10 random numbers
	int min=1 , max =20;
		cout << "Random Numbers Program"<<endl;
		cout << "Your 10 random numbers are: ";
	srand((unsigned)time( NULL ));
	for (int i=0; i<10; i++)
		cout << min +(rand()%(max - min + 1))<< " ";
		cout << endl;
	}

//Function for problem #3
void problem3(){
	//This problem represents different areas of shapes.
	int choice;
	float side, length, width, base, rad, area;
	
	do
	{
		cout<<"MENU\n";
		cout<<"[1] - Area of square\n";
		cout<<"[2] - Area of rectangle\n";
		cout<<"[3] - Area of triangle\n";
		cout<<"[4] - Area of circle\n";
		cout<<"[5] - Exit\n";
		cout<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"\nEnter the side of the square: ";
					cin>>side;
					area=pow(side,2);
					cout<<endl;
					cout<<"\nThe area is " <<area <<" sq. units";
					break;
				}
			case 2:
				{
					cout<<"\nEnter the length and width of the rectangle: ";
					cin>>length>>width;
					area=length*width;
					cout<<endl;
					cout<<"\nThe area is " <<area <<" sq. units";
					break;
				}
			case 3:
				{
					cout<<"\nEnter the base and width of the triangle: ";
					cin>>base>>width;
					area=(base*width)/2;
					cout<<"\nThe area is " <<area <<" sq. units";
					cout<<endl;
					break;
				}
			case 4:
				{
					cout<<"\nEnter the radius of the circle: ";
					cin>>rad;
					area=3.14159265359*(pow(rad,2));
					cout<<endl;
					cout<<"\nThe area is " <<area <<" sq. units";
					break;
				}
			case 5:
			{
				cout<<"\nThank you for using the program!\n";
				break;
			}
			default: cout<<"INVALID CHOICE! Please try again.";
		}
		cout<<endl;
		system("pause");
		system("cls");	
	}
	while(choice!=5);
}
//Function for problem B
void problemB(){
	//This program represents solving a factorial of a number
     int i, x;
     cout <<"Enter the number : ";
     	cin >> x;
     cout<<"The Factorial of " << x << " is " <<factorial(x);
     getch();
 }

main(){
	int a, b;
		problem1();
			cout<<endl;
		problem2();
			cout<<endl;
		problem3();
			cout<<endl;
		problemB();
			cout<<endl;
			
		//This program represents determining the highest from two given numbers
		cout << "Min-Max Program"<<endl;	
		cout << "Enter 1st number:";
			cin >> a;
		cout << "Enter 2nd number:";
			cin >> b;
		
		if(a==b)
	 		cout <<"Both numbers are equal";
		else 
			cout << "Highest number:" << max(a,b);		
		
}
