#include <iostream>
#include <string>
using namespace std;

int main()
{
    double owes =0.0;
    double pays=0.0;
    double change=0.0;
    double quarter = 25;
    double penny = 1;
    double nickel = 5;
    double dime = 10;
    double dollar = 100;
    int dollarcount = 0;
    int quartercount=0;
    int pennycount=0;
    int nickelcount=0;
    int dimecount=0;
    cout << "Customer owes: ";
    cin >> owes;
    cout << "Customer Pays: ";
    cin >> pays;
    change = (pays) - (owes);
    cout << "Change due is: " << change << endl;
    change *= 100;

    while (change >= 100) {
        change -= dollar;
        dollarcount++;
    }while (change >= 25) {
        change -= quarter;
        quartercount++;
    }while (change >= 10) {
        change -= dime;
        dimecount++;
    }while (change >= 5) {
        change -= nickel;
        nickelcount ++;
    }while (change >= 1) {
        change -= penny;
        pennycount ++;

    }
    if(dollarcount != 0)
        cout << dollarcount << " dollars" << endl;
    if(quartercount != 0)
        cout << quartercount << " quarters" << endl;
    if(dimecount != 0)
        cout << dimecount << " dimes" << endl;
    if(nickelcount != 0)
        cout << nickelcount << " nickels" << endl;
    if(pennycount != 0)
        cout << pennycount << " pennies" << endl;

}