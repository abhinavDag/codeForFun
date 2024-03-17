#include <bits/stdc++.h>
using namespace std;

//FUNCTION PROTOTYPES
void vector_printer(vector <int> vec);
int randomNum(int lowerLimit,int upperLimit);
//FUNCTION PROTOTYPES--

//CONSTANTS
const int numberOfGames {1000000};
const int numberOfDoors {3};
const int switchDoor {1};
//CONSTANTS--

int main()
{

	srand(time(0));

	double won {};
	double lost{};

	for(size_t gameNumber {0} ; gameNumber < numberOfGames ; gameNumber++)

	{
		int carDoor {randomNum(1,numberOfDoors)};
		int chosenDoor {randomNum(1,numberOfDoors)};
		if(chosenDoor == carDoor)
		{
			int remainsClosed {0};
			do
			{
				remainsClosed = randomNum(1,numberOfDoors);
			}
			while(remainsClosed == carDoor);
			if(switchDoor == 1){chosenDoor = remainsClosed;}
		}
		else
		{
		if(switchDoor == 1){chosenDoor = carDoor;}
		}
	if(chosenDoor == carDoor){won++;}
	else{lost++;}
	}

	double winPercentage {100*(won/numberOfGames)};
	double losePercentage {100*(lost/numberOfGames)};

	//result printing
	cout << "Number of games played:" << numberOfGames << endl;
	cout << "Number of games won   :" << won << endl;
	cout << "Number of games lost  :" << lost << endl;
	cout << "Win percentage        :" << winPercentage << endl;
	cout << "Lose percentage       :" << losePercentage << endl;
	//result printing--
return 0;
}

//FUNCTION DEFINITIONS
void vector_printer(vector <int> vec)
{
	for(unsigned i {0};i<vec.size();i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
}

int randomNum(int lowerLimit,int upperLimit)
{
	int range {upperLimit - lowerLimit + 1};
	int randomNum{};
	randomNum = ((rand() % range) + lowerLimit);
	return randomNum;
}
//FUNCTION DEFINITIONS--
