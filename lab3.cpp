//This program consists of 6 problems in Lab 3
#include <iostream>
#include <string>
#include <conio.h>
#include <cstring>
#include <string.h>

using namespace std;

char Cmp1[100], Cmp2[100], cpy1[100], cpy2[100], cat1[100], cat2[100], wordenter[100], sentence[100], split[100];
char man = true;
int result, length, k, s,i, j, palindrome;;

void problem1(){
	//this program is used to compare strings
	cout << "STRING COMPARE" << endl;
	cout << "Enter a first word (str1): ";
	cin >> Cmp1;
	cout << "Enter a second word (str2): ";
	cin >> Cmp2;	
	result = strcmp (Cmp1,Cmp2);	
	switch(result){
		case -1:
			cout << "negative ";
			break;
		case 0:
			cout << "equal ";
			break;
		case 1:
			cout << "positive";
			break;
	}
}


void problem2(){
	
	//this program is used to copy strings	
    cout << "STRING COPY" << endl;
    cout << "Enter a first word (str1): ";
    gets(cpy1); 
    cin.ignore();
    cout << "Enter a second word (str2): ";
    gets(cpy2);
    cin.ignore();
  	cout << "new string value for str1: " << strcpy (cpy1,cpy2) << endl;
}


void problem3(){
	//this program is used for string concatenate	
    cout <<"**********************"<< endl << "STRING CONCATENATION " << endl << "**********************"<< endl;
	cout << "Enter a first word(str1):";
    gets(cat1);
    cin.ignore();
    cout << "Enter a second word(str2):";
    gets(cat2);
    cin.ignore();
	cout << "New string value for str1:" << strcat(cat1,cat2) << endl;	
       
}



void problem4(){
	cout<<"**********************"<<endl <<"PALINDROME"<<endl<<"**********************"<<endl;
	cout<<"Enter a word: ";
	gets(wordenter);

	length = strlen(wordenter);

	for (i=0, j=length-1, palindrome=1; j>i; j--, i++)
	{
		if(toupper(wordenter[i]) != toupper(wordenter[j]))
		{
			palindrome = 0;
			break;
		}
	}
	cout << " "<< wordenter<<(palindrome? " is":" is not") << " a palindrome." <<endl;
}

void problem5()
{
	//this program is used to manipulate string
	cout << "Enter Some String:";
    gets(sentence);
    cin.ignore();
    for (int b = 0; b < strlen(sentence); b++)
    {
        if (isalpha(sentence[b]) && man == true)
        {
            sentence[b] = toupper(sentence[b]);
            man = false;
        }
        else
            if (isspace (sentence[b]))
                man = true;
    }

	cout << sentence << endl;

}


	
void problem6(){
	char split[100];
	cout << "\nEnter a string: ";
	gets(split);
	cin.ignore();
	for(k=0; split[k]!='\0'; k++);
		for(k--; k>=0;k--){
			if(split[k-1]==' ' || k==0){
			for(s=k; split[s]!='\0' && split[s]!=' '; s++)
      			cout<<split[s];
      			cout<<" "<<endl;
		}
 	}		
 	cout << endl;
}



main(){
	problem1();
	cout << endl;
	cout << endl;
	problem2();
	cout << endl;
	cout << endl;
	problem3();
	cout << endl;
	cout << endl;
	problem4();
	cout << endl;
	cout << endl;
	problem5();
	cout << endl;
	cout << endl;
	problem6();
	cout << endl;
	cout << endl;
	

	system("pause>0");
}
