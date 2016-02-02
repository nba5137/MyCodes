// Sibo Song
// 12/19/2015
// Fixed 2/1/2016
// choose where to go for lunch or dinner with my entangled and halting roommate

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	string list[14] = {"golden","buffalo","five","kfc","mc","mei hua", "pizza","chuan wei xuan","little chengdu","Texus","Seoul","ju fu lou","crawling crab","sushi"};
	string g;
	int a;
	cout << "Input a letter 'g' to go or a letter 'q' to quit" << endl;
	
	while ( g != "q")
	{
		cin >> g;
		if (g == "g")
		{
			cout << "Calculating..." << endl;
			srand((int)time(0));
			a = rand()%14;
			cout << list[a] << endl;
		}
		else if ( g == "q")
		{
			exit(0);
		}
		else
		{
			cout << "Unknown command! "<< endl;
		}
	}

	return 0;
}

/*
golden sun 
buffalo wild wings
five spice
kfc
McDonald's
mei hua
pizza
chuan wei xuan
little chengdu
Texus 
Seoul bbq
ju fu lou
jin chan
crawling crab   
sushi        15
*/
