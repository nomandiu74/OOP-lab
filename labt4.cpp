/*
Write a program that following the multiple inheritance patterns
where the base class defines the same function
name-calling by the derived class.
*/
//ambiguity  is a process to print different class but same function name data.
#include <iostream>
using namespace std;
class Apple {
public:
    void show() {
        cout << "Show function from class Apple" << endl;
    }
};
class Banana {
public:
    void show() {
        cout << "Show function from class Banana" << endl;
    }
};
class fruits : public Apple, public Banana{
public:
    void show() {
        Apple::show();
        Banana::show();
    }
};

int main() {
    fruits obj;
    obj.show();

    return 0;
}

