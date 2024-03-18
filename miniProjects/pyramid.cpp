#include <bits/stdc++.h>

using namespace std;

/*
DESCRIPTION
for num = 3
   1   
  121  
 12321 
1234321
*/

int main()
{

cout << "Hello, Welcome to Pyramid maker!" << endl;
int n {};
cout << "Please enter the pyramid number:";
cin >> n;


int printNumber {2 - n};

while(printNumber < 2)
{
	for(int iter {0};iter<((2*n)-1);iter++)
	{
		//PRINTING CHARACTER
		if(printNumber > 0){cout << printNumber;}
		else{cout << " ";}

		//printNumber MANIPULATION
		if( iter < (n-1) ){printNumber++;}
		else if(iter < (2*n)-2 ){printNumber--;}
	}
	cout << endl;
	printNumber += 1;
}








return 0;
}
