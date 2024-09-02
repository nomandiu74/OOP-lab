//problem:Write a program that can print the Fibonacci series, using the main function, user-defined function, and constructor.

#include<bits/stdc++.h>
using namespace std;

class fibonacci
{public:
    int n;
    fibonacci(int terms)
    {
        n=terms;

    }
    void display()
    {
        int first=0,second=1,next;
        cout<<"Fibonacci series:"<<endl;
        for(int i=0;i<n;i++)
        {
            if (i<=1)
            {
                next=i;
            }
            else
            {
                next=first+second;
                first=second;
                second=next;

            }

            cout<<next<<" ";
        }
    }


};


int main()
{
    int terms;
    cout<<"Enter a number:"<<endl;
    cin>>terms;
    fibonacci fib(terms);

    fib.display();

    return 0;
}
