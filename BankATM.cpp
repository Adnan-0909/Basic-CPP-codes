#include<iostream>
using namespace std;
class bank{
    private:
    string name;
    int acc_num;
    int balance;
    public:
    bank(string n,int num,int b){
        name = n;
        acc_num = num;
        balance = b;
    }
    void deposit();
    void withdraw();
    void display();
};
void bank::withdraw(){
    int n;
    cout<<"How much money would you like to withdraw?"<<endl;
    cin>>n;
    if(n>balance){
        cout<<"Insufficient balance!"<<endl;
        cout<<"Account balance is: "<<balance<<endl;
    }
    else{
        balance = balance -n;
        cout<<"Account balance after withdrawing "<<n<<" is: "<<balance<<endl;
    }

}
void bank::deposit(){
    int n;
    cout<<"How much money would you like to deposit?"<<endl;
    cin>>n;
    if(n<0){
        cout<<"Invalid input!"<<endl;
    }
    else{
        balance = balance +n;
        cout<<"Account balance after depositing $"<<n<<" is: "<<balance<<endl;
    }
}
void bank::display(){
    cout<<"Account details!"<<endl;
    cout<<"Account holders name: "<<name<<endl;
    cout<<"Account number: "<<acc_num<<endl;
    cout<<"Account balance: "<<balance<<endl;
}
int main()
{
    bank b1("Asad",123,10000);
    b1.deposit();
    b1.withdraw();
    b1.display();
return 0;
}