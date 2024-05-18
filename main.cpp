#include <iostream>
using namespace std;

// Define a function that takes an integer age as input
void CheckAge(int age) {
    if (age >= 12 && age <= 50)
        cout << "young";
    else
        cout << "not young";
}

int main() {
    // Declare variable
    int age;
    cout << "Enter your age: ";
    cin >> age;
    // Call the CheckAge function
    CheckAge(age);
    return 0;
}