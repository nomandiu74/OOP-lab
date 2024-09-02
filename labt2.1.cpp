//use class
#include<bits/stdc++.h>
using namespace std;

class fibo
{

private:
    int n;

public:
    int first=0,second=1,next;
   void set_data(int num)
   {
   this->n=num;
   }
   void fib()
   {
     for (int i=0;i<=9;i++)
     {
         if(i<=1)
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
    int n;
    cin>>n;

    fibo fi;
    fi.set_data(n);
    fi.fib();
    return 0;

}
