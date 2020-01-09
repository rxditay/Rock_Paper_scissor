// Actually this is also a drill from  programming :principles and structure by Stroustrup sir ;

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int check(string temp) {             // Check the index of user input in v[]....................................
	string arr[] = { "rock","paper", "scissor" };
	
	for (int i = 0; i < 3; i++) 
		if (temp == arr[i])
			return i;
	
}

int main(){
	string v[] = { "rock", "paper", "scissor" };
	int n;
	string user;      //user move ..................
	string com;       // computer,s move............. 
	int compuerwin = 0;  // computer score ..........
	int userwin = 0;    // user score...............
	int round = 1 ;
	
	cout<<" Round 1 ::: " << endl;
	
	cout << "Enter rock,, paper,, scissor,, " << endl;

        while (cin >> user) {
	        n = rand( ) % 3;
                com = v[n];
		cout << "  \n Computer's move ::::::::" << com<< endl;

         int index_user =   check(user);
	 int index_com  =   check(com);

	 int result = index_user - index_com;

	 if( (result == -1)||(result==2)) {
		 cout << "Computer won!!!!!!!" << endl;
		 compuerwin++;
	 }

	 if ((result == 1)||(result==-2)) {
		 cout << "You won !!!!!!!!!  \n \n \n" << endl;
		 userwin++;
	 } 

	 cout << " Your score -  Computer Score  \n \n \n   " << userwin << "              " << compuerwin << endl;
	 cout << " \n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	 cout << " \n Round" << round;
         cout << "Enter rock,, paper,, scissor,,   or Ctrl + Z to quit the game" << endl;
		round ++;

	}

}
