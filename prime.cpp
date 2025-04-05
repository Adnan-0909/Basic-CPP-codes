#include<iostream>
#include<math.h>
using namespace std;
void prime(int a){
    int check = 0;//declaring a check variable to know number of factors
    if(a<0){
        cout<<"Not a prime";//if a is less than zero(negative) then not a prime
    }
    
    for(int i=1;i <=sqrt (a); i++){//using for loop to check factors the condition determines 
    //that we only have to test factors till the sqrt of the number
        if(a%i == 0){//whenver a number is divisible or a factor value of check increases
          check++;
        }
    }
    if(check>2){//if check increases than 2 which means it has other factors than itself and 1
        cout<<"Not a prime";//the number is not prime
    }
     else{
            cout<<"Is a prime";//else it is a prime
        }

}
int main()
{
  int a;
  cout<<"Enter a number:"<<endl;
  cin>>a;
  prime(a);
}