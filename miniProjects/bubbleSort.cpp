#include <bits/stdc++.h>
using namespace std;

//FUNCTION PROTOTYPES
void vector_printer(vector <int> vec);
//FUNCTION PROTOTYPES--

int main()
{

vector <int> dataBase {201, 335, 296, 139, 480, 147, 244, 237, 183, 362, 253, 485, 75, 222};

for(size_t j {1};j < (dataBase.size());j++)
{
	for(size_t i {0};i < (dataBase.size()-j) ;i++)
	{
		if(dataBase[i] > dataBase[i+1])
		{
			int temp (dataBase[i]);
			dataBase[i] = dataBase[i+1];
			dataBase[i+1] = temp;
		}
	}
	vector_printer(dataBase);
}



return 0;
}

//FUNCTION DEFINITIONS
void vector_printer(vector <int> vec)
{
        for(size_t iter {0}; iter < vec.size() ; iter++)
        {
                if(iter != (vec.size()-1)) {cout << vec[iter] << ",";}
                else {cout << vec[iter] << ".";}
        }
	cout << endl;
}
//FUNCTION DEFINITIONS--
