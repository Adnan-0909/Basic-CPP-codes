#include<iostream>
using namespace std;
int Fibonacci(int n){
 int current ;//declaring a variable for the nth position
 int latest = 1;//the latest number i.e 1
 int recent = 0;//the number previous than latest i.e. 0 where the series starts from

   for(int i=3;i<=n;i++)//initializing loop from 3rd term since 1st and 2nd are taken as 0,1
   {
    current = latest + recent;//current becomes the sum of the preceding ones
    recent = latest ;//for every iteration the values update
    latest = current;
   }
   return current;//returns current

}
int main()
{
  int n;
  cout<<"Enter the nth number: "<<endl;//asking user for the desired nth term
  cin>>n;
  cout<<"The nth term of the fibonacci series is: "<<Fibonacci(n);//calling function

}