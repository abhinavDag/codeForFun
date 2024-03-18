#include <bits/stdc++.h>

using namespace std;

int fibo(int index)
{
	if(index == 0){return 1;}
	if(index == 1){return 1;}
	else
	{
		int num {fibo(index-1) + fibo(index-2)} ;
		return num;
	}
}



int main()
{
cout << fibo(10) << endl;
return 0;
}

