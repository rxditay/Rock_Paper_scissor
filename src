

#include <iostream>
#include <vector>
#include <cstdlib>
#include  <time.h>

using namespace std;

int check(string temp) {
	string arr[] = { "rock","paper", "scissor" };
	for (int i = 0; i < 3; i++) {
		if (temp == arr[i])
			return i;
	}
}

int main()
{
	string v[] = { "rock", "paper", "scissor" };
	int n;
	string user;
	string com;
	 
	int compuerwin = 0;
	int userwin = 0;
		cout << "Enter rock,, paper,, scissor,, " << endl;

 
		
	while (cin >> user) {
	    
		n = rand( ) % 3;

		com = v[n];

		cout << "This time computer gave input :::::::::::::::::::::::::::::::" << com<< endl;

     int index_user =   check(user);
	 int index_com = check(com);

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
	 cout << " \n \n \n \n \n";

	 cout << "Enter rock,, paper,, scissor,, " << endl;

	}

}
