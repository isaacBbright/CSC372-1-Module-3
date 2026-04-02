#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    cout << "\n--- Variable Values ---" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;

    cout << "\n--- Pointer Addresses ---" << endl;
    cout << "ptr1: " << ptr1 << endl;
    cout << "ptr2: " << ptr2 << endl;
    cout << "ptr3: " << ptr3 << endl;

    cout << "\n--- Values from Pointers ---" << endl;
    cout << "*ptr1: " << *ptr1 << endl;
    cout << "*ptr2: " << *ptr2 << endl;
    cout << "*ptr3: " << *ptr3 << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    system("pause");

    return 0;
}
