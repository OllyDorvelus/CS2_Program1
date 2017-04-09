#include <iostream>
#include "appUser.h"



using namespace std;

int main()
{

    appUser Olivier;
    //all constructor values set
    appUser Bryan("Bryan", 30, 20, 13, 1000, 5000);
    //no constructors set
    appUser Daniel;
    Olivier.setName("Olivier");
    Olivier.setID(352);
    Olivier.setAmountRecieved(400);
    Olivier.setAmountSpent(250);
    Olivier.setAppsSold(200);
    Olivier.printName();
    Olivier.addApp();
    Olivier.appBought(30);
    Olivier.printUserInfo();
    Bryan.printUserInfo();
    Daniel.printUserInfo();
    Bryan.printProfit();
    Olivier.printProfit();
    Olivier.printTotalUsers();
    cout << "Showing static variable is universal across all objects";
    Bryan.printTotalUsers();

    return 0;
}
