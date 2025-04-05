#include<iostream>
#include<math.h>//using math library for formulas
using namespace std;
double distance(int x1,int y1, int x2, int y2)
{
    double c = (x2-x1)*(x2-x1);//calculating the square of x-axis points
    double d = (y2-y1)*(y2-y1);//calculating the square of y-axis points
    return sqrt(c+d);//using square root formula
}
int main()
{
    double a1,a2,b1,b2;
    cout<<"Enter the x and y values of first point: "<<endl;//prompting user for values of first point
    cin>>a1>>b1;
    cout<<"Enter the x and y values of second point: "<<endl;
    cin>>a2>>b2;
    cout<<"The distance between the two points is: "<<distance(a1,a2,b1,b2)<<endl;//displaying results by calling the function
    
}