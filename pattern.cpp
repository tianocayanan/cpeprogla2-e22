#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int arr[]={1,2,4,3};
    int x=0;
    int givNum1, givNum2;

    ifstream f("input.txt");
	while (f>>givNum1>>givNum2){
		for (int num=0; num<10; num++){
    	givNum1+=arr[(x%4)];  
        x++;
        cout<<""<<givNum1;
	}
	}
    //system("pause");
    return 0;
}
