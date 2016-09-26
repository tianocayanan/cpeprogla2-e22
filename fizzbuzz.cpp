//FIZZBUZZ Program
#include <iostream>
using namespace std;
int main(){
     //Declaration of the named constants
     const char MY_NAME[25]="Christian Cayanan";//programmer name
     const char SECTION[25]="E22";//class section
     const char COURSE_CODE[10]="CPEPROGLA";//course code
     const char ACTIVITY[25]="MACHINE PROBLEM FIZZBUZZ";//name of machine problem
     const char DATE[10]="8-26-2016";//date solved
     //Declaration of the variables
     int num;
     //Main program
	for (num = 1; num<=100; num++)
	{
		if (num%3==0&&num%5==0){
			cout<<"FIZZBUZZ"<<endl;
		}
		else if (num%5==0){
			cout<<"BUZZ"<<endl;
		}
		else if (num%3==0){
			cout<<"FIZZ"<<endl;
		}
		else{
			cout<<num<<endl;	
		}
	}
	return 0;
}
