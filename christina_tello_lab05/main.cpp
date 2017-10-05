#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double bill; double tip; double percent;
    cout << fixed <<setprecision(2);

    cout << "How much is your bill?"; //ask for bill
    cin >> bill;

    cout << "What percent do you want to tip?"; //ask how generous they feeling
    cin >> percent;

    //calculate tip
    tip = bill * (percent/100);

    cout << "In order to tip " << percent << "%, you will need to tip $" << tip << endl;

    return 0;


}
