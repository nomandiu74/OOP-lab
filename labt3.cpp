//problem:Write a program that overloads a constructor in the class in C++ programming languages
//constructor overloading :
//answer: More than 1 constructor in a class is called constructor overloading.
#include <iostream>
using namespace std;

class BedRoom {
private:
    double length;
    double width;

public:

    BedRoom() {
        length = 0;
        width = 0;
    }


    BedRoom(double l) {
        length = l;
        width = l;
    }


    BedRoom(int l, int w) {
        length = l;
        width = w;
    }


    double area() {
        return length * width;
    }


    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {

    BedRoom room1;
    BedRoom room2(11.0);
    BedRoom room3(10, 12);


    cout << "Bed Room 1:" << endl;
    room1.display();
    cout << "Area: " << room1.area() << endl;

    cout << "\nBed Room 2:" << endl;
    room2.display();
    cout << "Area: " << room2.area() << endl;

    cout << "\nBed Room 3:" << endl;
    room3.display();
    cout << "Area: " << room3.area() << endl;

    return 0;
}
