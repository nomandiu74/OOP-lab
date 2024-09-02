#include <iostream>
#include <string>
using namespace std;

class AccountHolder {
private:
    string name;
    string gmail;
    double balance;
    string mobileNumber;

public:
    // Function to set account holder details
    void setDetails(string accName, string accGmail, double accBalance, string accMobileNumber) {
        name = accName;
        gmail = accGmail;
        balance = accBalance;
        mobileNumber = accMobileNumber;
    }

    // Function to display account holder details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Gmail: " << gmail << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() {
    AccountHolder accountHolders[5];

    // Set the details for 5 account holders
    accountHolders[0].setDetails("Alice", "alice@gmail.com", 1200.50, "0123456789");
    accountHolders[1].setDetails("Bob", "bob@gmail.com", 850.75, "0987654321");
    accountHolders[2].setDetails("Charlie", "charlie@gmail.com", 945.30, "1234567890");
    accountHolders[3].setDetails("David", "david@gmail.com", 1500.00, "2345678901");
    accountHolders[4].setDetails("Eve", "eve@gmail.com", 625.20, "3456789012");

    // Display the details of 5 account holders
    for (int i = 0; i < 5; i++) {
        accountHolders[i].displayDetails();
    }

    return 0;
}

