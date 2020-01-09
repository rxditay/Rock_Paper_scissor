 // Actually this is also a drill from  programming :principles and structure by Stroustrup sir ;

#include <iostream>
#include <vector>
#include <stdlib.h>
#include<time.h>
using namespace std;

int check(string temp) {             // Check the index of user input in v[]....................................
	string arr[] = { "rock","paper", "scissor" };

	for (int i = 0; i < 3; i++)
		if (temp == arr[i])
			return i;

}

int main() {
	string v[] = { "rock", "paper", "scissor" };
	int n;
	string user;      //user move ..................
	string com;       // computer,s move............. 
	int compuerwin = 0;  // computer score ..........
	int userwin = 0;    // user score...............
	int round = 2;

	cout << "  Round 1 ::: ";

	cout << "    Enter rock , paper , scissor " << endl;

	while (cin >> user) {
		srand((time(NULL)));
		n = rand() % 3;
		com = v[n];
		cout << "  \n Computer's move ::::::::  " << com <<" \n \n \n " << endl;

		int index_user = check(user);
		int index_com = check(com);

		int result = index_user - index_com;

		if ((result == -1) || (result == 2)) {
			cout << " Computer won! This Round" << endl;
			compuerwin++;
		}

		if ((result == 1) || (result == -2)) {
			cout << " You won ! This Round  " << endl;
			userwin++;
		}
		else if (result == 0)   cout << " Draw !!!!!!!!" << endl;

		cout << " Your score -  Computer Score  \n \n \n   " << userwin << "              " << compuerwin << endl;
		cout << " \n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << " \n Round  " << round<<" :::";
		cout << "    Enter rock , paper , scissor , Ctrl + Z to quit the game" << endl;
		round++;

	}
	cout << " ";
	cout << " \n \n \n \n \t \t \t \t | Final score ::::::: " << userwin << " - " << compuerwin << " | \n \n \n \n \n " << endl;

}
