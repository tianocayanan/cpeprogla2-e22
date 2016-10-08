#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int num;
	
	while (f>>num){
	      int result=0;
        for (int j=0; j<num; j++){
              if((j%3==0)||(j%5==0)){result+=j;}
     }
     cout<<result<<endl;
	}
system ("pause > 0");
}
