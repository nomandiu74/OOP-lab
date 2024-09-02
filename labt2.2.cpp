//use only function
#include<bits/stdc++.h>
using namespace std;

void fibo(int n)
{
    int next,first=0,second=1;
    for (int i=0;i<n;i++)
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
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    fibo(n);



    return 0;
}
