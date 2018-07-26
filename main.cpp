#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void game();  
int main()
{
    game(); 
}
void game()
{
        int user_number; 
        int check_winner =0;
        srand(time(0));
        int random_number = 0 + (rand() % 100); 
        int no_of_trials=0; 
        cout<<"PLease insert your guess numer between 0  -  100 "<<endl;  
        while(no_of_trials < 5)
        {
            cin>>user_number;
            if(user_number==random_number)
            {
              cout<<"you win"<<endl;
              check_winner=1; 
              break;  
            }
             no_of_trials++;
          if(no_of_trials < 5)
          {
            if(user_number>random_number){cout<<"Guess lower"<<endl;}
            if(user_number<random_number){cout<<"Guess higher"<<endl;}
          }            
        }
        if(check_winner==0){cout<<"You lose"<<endl;}
        
}