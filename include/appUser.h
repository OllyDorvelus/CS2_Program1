#ifndef APPUSER_H
#define APPUSER_H
#include <iostream>

using namespace std;

class appUser
{
    public:

       virtual ~appUser();
       appUser();
       appUser(string s);
       appUser(string s, unsigned int id);
       appUser(string s, unsigned int id, unsigned int nOfApps);
       appUser(string s, unsigned int id, unsigned int nOfApps, unsigned int aSold);
       appUser(string s, unsigned int id, unsigned int nOfApps, unsigned int aSold, int amountR);
       appUser(string s, unsigned int id, unsigned int nOfApps, unsigned int aSold, int amountR, int amountS);
       void setName(string s);
       void setID(unsigned int id);
       void setNumOfApps(unsigned int nOfApps);
       void setAppsSold(unsigned int aSold);
       void setAmountRecieved(int amountR);
       void setAmountSpent(int amountS);
      /* string getName();
       unsigned int getID();
       unsigned int getNumOfApps();
       unsigned int getAppsSold();
       int getAmountRecieved();
       int getAmountSpent(); */
       void printName();
       void printID();
       void printUserInfo();
       void addApp();
       void removeApp();
       void appBought(int cost);
       void appSold(int cost);
       void printProfit();
       void printTotalUsers();





    private:
    string name;
    unsigned int ID;
    unsigned int numOfApps;
    unsigned int apps_Sold;
    int amount_recieved;
    int amount_spent;
    static int totalAppUsers;





};

#endif // APPUSER_H
