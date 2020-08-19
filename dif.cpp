#include <iostream>

using namespace std;

int dif(char choice, int nsamp)
{
    switch (choice)
    {
    case '0':
        cout << "Excellent!" << endl;
        break;
    case '1':
        cout << "Well done" << endl;
        break;
    case '2':
        cout << "You passed" << endl;
        break;
    };
}

int main()
{
    dif('2', 5);
    return 0;
}