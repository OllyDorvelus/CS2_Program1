#include "appUser.h"
#include <iostream>

using namespace std;
//deconstructor

appUser::~appUser() {

}
int appUser::totalAppUsers = 0;
//constructors
appUser::appUser() {
    setName("Default");
    setID(0);
    setNumOfApps(0);
    setAppsSold(0);
    setAmountRecieved(0);
    setAmountSpent(0);
    totalAppUsers++;


}

appUser::appUser(string s) {
    setName(s);

}

appUser::appUser(string s, unsigned int id) {
    setName(s);
    setID(id);

}

appUser::appUser(string s, unsigned int id, unsigned int nOfApps) {
    setName(s);
    setID(id);
    setNumOfApps(nOfApps);

}

appUser::appUser(string s, unsigned int id, unsigned int nOfApps, unsigned int aSold) {
    setName(s);
    setID(id);
    setNumOfApps(nOfApps);
    setAppsSold(aSold);

}

appUser::appUser(string s, unsigned int id, unsigned int nOfApps, unsigned int aSold, int amountR) {
    setName(s);
    setID(id);
    setNumOfApps(nOfApps);
    setAppsSold(aSold);
    setAmountRecieved(amountR);

}

appUser::appUser(string s, unsigned int id, unsigned int nOfApps, unsigned int aSold, int amountR, int amountS) {
    setName(s);
    setID(id);
    setNumOfApps(nOfApps);
    setAppsSold(aSold);
    setAmountRecieved(amountR);
    setAmountSpent(amountS);
    totalAppUsers++;

}


//mutator functions
//set functions
void appUser::setName(string s) {
    name = s;

}
void appUser::setID(unsigned int id) {
    ID = id;
}

void appUser::setNumOfApps(unsigned int nOfApps) {
            numOfApps = nOfApps;
}

void appUser::setAppsSold(unsigned int aSold) {
    apps_Sold = aSold;
}

void appUser::setAmountRecieved(int amountR) {
        amount_recieved = amountR;
}

void appUser::setAmountSpent(int amountS) {
    amount_spent = amountS;
}
/* get functions
string appUser::getName() {
    return name;
}

unsigned int appUser::getID() {
    return ID;
}

unsigned int appUser::getNumOfApps() {
    return numOfApps;
}

unsigned int appUser::getAppsSold() {
    return apps_Sold;
}

int appUser::getAmountRecieved() {
    return amount_recieved;
}

int appUser::getAmountSpent() {
    return amount_spent;
}
*/

void appUser::printName() {
    cout << name << endl;
}

void appUser::printID() {
    cout << ID << endl;
}

void appUser::printUserInfo() {
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "MemberID: " << ID << endl;
    cout << "Number of apps downloaded: " << numOfApps << endl;
    cout << "Number of apps sold: " << apps_Sold << endl;
    cout << "Amount recieved from apps: $" << amount_recieved << endl;
    cout << "Amount spent on apps: $" << amount_spent << endl;

}
//Mutator member functions
void appUser::addApp() {
    numOfApps++;
}

void appUser::removeApp() {
    numOfApps--;
}

void appUser::appBought(int cost) {
    amount_spent+=cost;
}

void appUser::appSold(int cost) {
    amount_recieved+=cost;
}

void appUser::printProfit() {
    cout << endl;
    cout << "User: " << name << endl;
    cout << "ID: " << ID << endl;
    if(amount_recieved - amount_spent < 0) {
       cout << "Sorry but looks like you have a negative balance" << endl;
    }
    cout << "Profit: $" << amount_recieved - amount_spent << endl;

}

void appUser::printTotalUsers() {
    cout << endl;
    cout << "Total App Users: " << totalAppUsers << endl;
}












