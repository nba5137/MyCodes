// Sibo Song
// 12/19/2015
// Fixed 2/1/2016
// choose where to go for lunch or dinner with my entangled and halting roommate
// Changed 10/24/2017 
// choose a random object in a list given by the user. 

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    string g, loc;
    int a, total_num;
	cout << "Input how many objects total in a list for randomly chosing: ";
    cin >> total_num;
    
    string list[total_num] = {};
    
    cout << "Please input a string name for an object in the list each time." << endl;
    for (int i = 0; i < total_num; i++)
    {
        cout << "The #" << (i + 1) << " item's name: ";
        cin >> loc; 
        list[i] = loc;
        cout << "" << endl;
    }
    
	//string list[14] = {"golden","buffalo","five","kfc","mc","mei hua", "pizza","chuan wei xuan","little chengdu","Texus","Seoul","ju fu lou","crawling crab","sushi"};
	
	cout << "Input a letter 'g' to go or a letter 'q' to quit" << endl;
	
	while ( g != "q")
	{
		cin >> g;
		if (g == "g")
		{
			cout << "Calculating..." << endl;
			srand((int)time(0));
			a = rand()%(total_num);
			cout << "Your random result is: " << list[a] << endl;
			cout << "Input a letter 'g' to go or a letter 'q' to quit" << endl;
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
