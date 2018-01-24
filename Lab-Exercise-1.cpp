//Danial Azwar Bin Mohd Azhar
//Find the sum of digits of a given number

#include <iostream>
using namespace std;

int main()
{
	int no1,no2,sum =0;

	cout<<" Find the sum of a given number"<<endl;
	cout<<" ------------------------------ "<<endl;

	cout<<" Input number: "<<endl;
	cin >> no1;

	while(no1 > 0)
	{
		cout<<" Input number: "<<endl;
		cin >> no2;
		if (no2 > 0)
		{
			sum = no1+no2;
			cout<< "The sum is :"<< sum ;
		}
	}
}
