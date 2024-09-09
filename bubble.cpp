#include<bits/stdc++.h>
using namespace std;

class Sorter {
private:
    vector<int> num;
    int s;

public:

    void set(int size) {
        this->s=size;
        num.resize(s);
        for (int i = 0; i <s; i++) {
            cin >> num[i];
        }
    }


    void bubbleSort() {
        for (int i = 0; i < s - 1; i++) {
            for (int j = 0; j < s- i - 1; j++) {
                if (num[j] > num[j + 1]) {
                    swap(num[j], num[j+1]);
                }
            }
        }
    }


    void print() {
        for (int i = 0; i <s; i++) {
            cout << num[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int person;
    cin >> person;


    Sorter so;

 so.set(person);
    so.bubbleSort();


    so.print();

    return 0;
}

