#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int amount;
    cin >> amount;
    int notes;

    switch (amount >= 100)
    {
    case 1:
        notes = amount / 100;
        amount -= notes * 100;
        cout << "no of 100 notes:" << notes;
        break;
    }
    switch (amount >= 50)
    {
    case 1:
        notes = amount / 50;
        amount -= notes * 50;
        cout << "no of 50 notes:" << notes;
        break;
    }
    switch (amount >= 20)
    {
    case 1:
        notes = amount / 20;
        amount -= notes * 20;
        cout << "no of 20 notes:" << notes;
        break;
    }
    switch (amount >= 1)
    {
    case 1:
        notes = amount / 1;
        amount -= notes * 10;
        cout << "no of 1 notes:" << notes;

        break;
    }
}