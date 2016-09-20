// A program that calculate the average of numbers which a user input
// Purpose is to recall shit in my mind

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

void ave()
{
	float x, y, n, nw;
	cout << "Input the number of numbers you want to input:";
	cin >> n;
	if (n < 1)
	{
		cout << "That's shit." << endl;
	} 
	else
	{
		nw = n;
	}
	while (n != 0)
	{
		cin >> x;
		if (x < 0)
		{
			cout << "That's shit." << endl;
		} 
		else
		{
			y = y + x;
			n--;
		}
	}
	float avg;
	avg = y / nw;
	cout << "Your shit is: " << avg << endl;
}

int main()
{
	ave();
	return 0;
}
