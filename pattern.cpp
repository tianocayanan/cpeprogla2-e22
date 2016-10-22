#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int givNum1, givNum2;
    int arr[]={1,2,4,3};
    int x=0;
	while (f>>givNum1>>givNum2){
		cout<<givNum1<<"";
		givNum1+=arr[(x%4)];
		for (givNum1; givNum1<=givNum2; givNum1+=arr[(x%4)]){
		cout<<" "<<givNum1;  
        x++;
		}
	}
	cout<<endl;
	system("pause");
    return 0;
}
