#include <bits/stdc++.h>

using namespace std;

int indexFinder(vector<char> someVector,char searchTerm)
{
for(size_t i {0};i<someVector.size();i++)
	{
	if(someVector[i] == searchTerm){return i;}
	}
return -1;
}

int main() {

vector <char> reals  {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m','Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
vector <char> cipher {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

//takes input from user
string inputString {};
cout << "Enter the message you want to encrypt:";
getline(cin,inputString);
//

//initialization of output(encrypted) string
string encryptedString{};
//

for(char c:inputString){
	int index {indexFinder(reals,c)};
	if(index == -1){
		encryptedString += c;
	}
	else{
		encryptedString += cipher[index];
	}
}

cout << "The encrypted string is:" << " " << encryptedString << endl;
return 0;
}
