#include <bits/stdc++.h>

using namespace std;

//VARIABLES

///////////

//FUNCTIONS

///////////

int main()
{

vector <int> dataBase {36, 97, 28, 72, 86, 30, 11, 3, 20, 49, 17, 55, 100, 85, 39, 33, 43, 40, 73, 6, 95, 91, 45, 53, 38, 94, 23, 26, 77, 50, 47, 71, 63, 34, 82, 1, 56, 76, 16, 32, 29, 19, 89, 2, 15, 12, 14, 78, 5, 21, 48, 59, 75, 79, 52, 70, 62, 57, 24, 98, 18, 25, 54, 87, 69, 65, 41, 90, 93, 31, 92, 22, 9, 8, 68, 44, 42, 66, 35, 37, 13, 10, 51, 4, 67, 81, 83, 88, 46, 58, 96, 84, 27, 7, 64, 61, 60, 99, 80, 74};

sort(dataBase.begin() , dataBase.end());


int searchTerm {};
cout << "Please enter search term:";
cin >> searchTerm;
int startIndex {0};
long unsigned stopIndex {dataBase.size()};
long unsigned midIndex {dataBase.size()/2};
long unsigned searchIndex {dataBase.size()};
int iter {};

cout << "The search term is:" << searchTerm << endl;
while(searchIndex == dataBase.size())
{
	cout << "interation:" << iter << endl;
	cout << "start:" << startIndex << "| " << "stop:" << stopIndex << "| mI:" << midIndex <<endl;
	if(dataBase[midIndex] == searchTerm)
	{
		searchIndex = midIndex;
	}
	else
	{
		if(searchTerm < dataBase[midIndex])
		{
			stopIndex = midIndex;
			if(stopIndex-startIndex == 1){break;}
			midIndex = (startIndex + stopIndex)/2;
		}
		else
		{
			startIndex = midIndex;
			if(stopIndex - startIndex == 1){break;}
			midIndex = (startIndex+stopIndex)/2;
		}
	}
	iter++;
}
if(searchIndex == dataBase.size())
{
	cout << "The search term does not exist in the given data base." << endl;
}
else
{
	cout << "The index of the search term is:" << searchIndex << endl;
}

return 0;
}

