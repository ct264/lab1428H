#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;


betFunc(float &myMoney, int &bet)
{
    cout << "You currently have " << myMoney << endl;
    cout << "How much do you bet?" << endl;
    cin >> bet;
    if(bet>myMoney)
    {
        cout << "Not enough money for that bet. Try again." << endl;
        cout << "How much do you bet?" << endl;
        cin >> bet;
        return bet;
    }
    else;
    {
        cout << "$" << bet << endl;
    }
}

getRolls(int compDie1,int userDie1)
{
    int c, u;

    srand(time(NULL));
    u = rand() & 6 + 1;

    cout << "You rolled a " << u << endl;
    c = rand() & 6 + 1;

    cout << "Your opponent rolled a " << c << endl;
}

results(int compDie1,int userDie1,float &myMoney,int &bet)
{
    int c, u;

    if(u>c)
    {
        cout << "You gain $" << bet << endl;
        myMoney+=bet;
        return myMoney;
    }
    else if(u<c)
    {
        cout << "You lose $" << bet << endl;
         myMoney-=bet;
        return myMoney;
    }
    else if(u==c)
    {
        cout << "It is a draw." << endl;
    }


}

goodbye(float &myMoney)
{
    cout << "You ended with $" << myMoney << endl;
    cout << "Goodbye" << endl;
    return 0;
}

int main()
{
    float myMoney=1000;
    int bet;
    int compDie1;
    int userDie1;


    cout << "Gambling is an addiction..." << endl << endl;
    betFunc(myMoney,bet);

    getRolls(compDie1,userDie1);

    results(compDie1,userDie1,myMoney,bet);

    while(myMoney>0)
    {

       char choice;
       char y,Y,n,N;

       cout << "Would you like to continue? ('y' or 'n')" << endl;
       cin >> choice;

    switch(choice)
    {
    case 'y':
    betFunc(myMoney,bet);
    break;
    case 'Y':
    betFunc(myMoney,bet);
    break;
    case 'n':
    goodbye(myMoney);
    break;
    case 'N':
    goodbye(myMoney);
    break;
    default:
    cout << "Not an option. Try again." << endl;
    }


    }

    if(myMoney==0)
       {
        cout << "You ran out of money :(" << endl;
        cout << "You ended with $0" << endl;
        return 0;
       }

}

