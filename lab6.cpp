/*Write a program in C++ programming languages
that prints out the Fibonacci series using a recursive function.*/
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{

    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int n;
    cout<<"Enter a input:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}

