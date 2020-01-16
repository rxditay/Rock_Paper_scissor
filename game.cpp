 // Actually this is also a drill from  programming :principles and structure by Stroustrup sir ;
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int get_index(string move){     
  const string moves[]{"rock","paper","scissor"};

  for(int i=0;i<3;i++)
    if(move == moves[i])
      return i;
  return -1;
}

void play(){
  static int computer_win{0};
  static int user_win{0};
  static int round_no{0};

  const string moves[]{"rock","paper","scissor"};
	
  string user_move;
  cout<<"Enter rock , paper or scissor : ";
  cin>>user_move;
  int index_user = get_index(user_move);
	
  string computer_move;
  int index_com = rand()%3;
  computer_move=moves[index_com];
  cout << "Computer's move :" << computer_move << endl;

  int result = index_user - index_com;

  if(result == -1 or result == 2) {
   	cout << "Computer won this Round !" << endl;
	computer_win++;
  }
  else if(result == 1 or result == -2){
	cout << "You won this Round !" << endl;
    user_win++;
	}
  else{   
    cout << "Draw !" << endl;
  }
  round_no++;
}
int main() {
  srand((time(NULL)));
  cout<<"Game started."<<endl;
  play();
	
  char choice{};
	
  do{
    cout<<"\nDo you want to play again?[y]"<<endl;
    cin>>choice;
    
	if(choice=='y'){
	  play();
    }
    else{
	  cout<<"Exiting ...";
    }  
  }while(choice=='y');
  return 0;
}
