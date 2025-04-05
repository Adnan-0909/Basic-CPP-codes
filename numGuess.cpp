#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int num;//declaring data type of variables
    char decision;
    srand(time(0));//to generate different number  everytime the program is executed
    int randomNum = rand()%1000;//generating random number between 1 and 1000
     cout<<"I have a number between 1 and 1000, can you guess it? "<<endl<<"Number: ";
    do{//using do-while loop to intiate the loop at least once
       
        cin>>num;//taking in the input from user for the guess
        if(num == randomNum){
            cout<<"Excellent! You guessed the number."<<endl;//displaying this, for correct output
            cout<<"Would you like to play again?(y or n)";//asking user if he wants to play again
            cin>>decision;
            if(decision == 'y' || 'Y'){//prompting user to enter a number
                cout<<"Guess the number: ";
            }
            else if (decision == 'n' || 'N')
            {
                cout<<"Thanks for playing!";
            }
        }
        else if(num<randomNum){//if number too low
            cout<<"Too low. Try again!"<<endl;
        }
        else if(num>randomNum){//if number too high
            cout<<"Too high! Try again"<<endl;
        }
        decision++;//increment
    }
    while (decision != 'n');//condition for loop
    return 0;
}