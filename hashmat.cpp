//Hashmat the Brave Warrior
#include <iostream>
using namespace std;
int main()
{
	//Declaration of the named constants
     const char MY_NAME[25]="Christian Cayanan";//programmer name
     const char SECTION[25]="E22";//class section
     const char COURSE_CODE[15]="CPEPROGLA2";//course code
     const char ACTIVITY[25]="MACHINE PROBLEM HASHMAT";//number of machine problem
     const char DATE[10]="8-26-2016";//date solved
     //Declaration of the variables
	int hashmatArmy;
	int opponentArmy;
	int difference;
	//Output the class headings
     cout<<"*************************\n";
     cout<<MY_NAME<<endl;
     cout<<SECTION<<endl;
     cout<<COURSE_CODE<<endl;
     cout<<ACTIVITY<<endl;
     cout<<DATE<<endl;
     cout<<"*************************\n\n";
     //Main program
     while(cin>>hashmatArmy>>opponentArmy)
     {
     	if (opponentArmy>hashmatArmy)
     {
     	cout<<opponentArmy-hashmatArmy<<endl;
	 }
	 else
	 {
	 	cout<<hashmatArmy-opponentArmy<<endl;
	 }
     }
     system("pause");
     return 0;
}
