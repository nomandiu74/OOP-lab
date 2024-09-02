/*Write a program that inherits the private data members
 in the class using the friend function.*/

#include <iostream>
using namespace std;

class Base {
private:
    int privateData;
public:
    Base(int data)
    {
        privateData = data;
    }
    friend void showPrivateData(Base obj);
};

void showPrivateData(Base obj) {
    cout << "Private Data: " << obj.privateData << endl;
}

int main() {
    Base b(42);
    showPrivateData(b);

    return 0;
}

