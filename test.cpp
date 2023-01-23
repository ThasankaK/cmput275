#include <iostream>

using namespace std;
int main()  {
    int mailbox = 100; // declare an integer variable
    int * p_mailbox; // declare a pointer to int
    p_mailbox = &mailbox; // set its value to the address of an int

    cout << "mailbox value is: " << *p_mailbox << endl;
    cout << "mailbox value is: " << mailbox << endl;
    *p_mailbox = 200;

    cout << "mailbox value is: " << *p_mailbox << endl;
    cout << "mailbox value is: " << mailbox << endl;
    return 0;
    }