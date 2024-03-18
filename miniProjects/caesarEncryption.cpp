#include <bits/stdc++.h>
using namespace std;

//FUNCTION PROTOTYPES

//FUNCTION PROTOTYPES--

//CONSTANTS
const int shift {5};
//CONSTANTS--

int main()
{
vector <char> alphabet {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
string plainText {};
cout << "Enter the text to be encrypted:";
cin >> plainText;

string cipherText {};
for(char c: plainText)
{
	long unsigned index {alphabet.size()};
	for(size_t iter {0}; iter<alphabet.size(); iter++)
	{
		if(alphabet[iter] == c)
		{
			index = iter;
			break;
		}
	}
	if(index < alphabet.size()-shift)
	{
		cipherText += alphabet[index + shift];
	}
	else if(index < alphabet.size())
	{
		cipherText += alphabet[index + shift - alphabet.size()];
	}
	else
	{
		cipherText += c;
	}
}
cout << "Encrypted text:" << cipherText << endl;








return 0;
}

//FUNCTION DEFINITIONS

//FUNCTION DEFINITIONS--
