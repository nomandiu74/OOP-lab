/*problem:Write a program using a class that holds the account holder's name, Gmail, balance, and mobile number.
    Finally, print the information of 5 account holders that receive those values from the main function.*/

#include<bits/stdc++.h>
using namespace std;
class AccountHolder

{
private:
    int id;
    string name;
    string gmail;
    double balance;
    string mobileNumber;

public:
    void set_details(int ID,string Name,string Gmail,double Balance,string mobileNUmber)
    {
        id=ID;
        name=Name;
        gmail=Gmail;
        balance=Balance;
        mobileNumber=mobileNUmber;
    }

    void display()
    {
        cout<<"ID:"<<id<<endl;
        cout<<"NAME:"<<name<<endl;
        cout<<"Gmail:"<<gmail<<endl;
        cout<<"Balance:"<<balance<<endl;
        cout<<"Mobile Number:"<<mobileNumber<<endl;
        cout << "----------------------------------" << endl;
        cout<<endl;

    }
};

int main()
{
AccountHolder noman;
noman.set_details(001,"Abdulla AL Noman","nomandiu9@gmail.com",50000.00,"01521770989");
noman.display();


AccountHolder mahmud;
mahmud.set_details(002,"Mahmudul","mahmuddiu9@gmail.com",10000.00,"0152390753");
mahmud.display();


AccountHolder ayman;
ayman.set_details(003,"ayman","ayman@gmail.com",50000.00,"01521779823489");
ayman.display();


return 0;


}
