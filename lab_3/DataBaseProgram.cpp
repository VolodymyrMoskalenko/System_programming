#include <iostream>
#include <stdexcept>
#include <string>
#include "Database.h"

using namespace std;
using namespace Records;

int displayMenu();
void doHire(Database& inDB);
void doFire(Database& inDB);
void doPromote(Database& inDB);
void doDemote(Database& inDB);

int main()
{
  system("chcp 1251");

  Database driverDB;
  bool done = false;

  while (!done) {
    int selection = displayMenu();

    switch (selection) {
    case 1:
      doHire(driverDB);
      break;
    case 2:
      doFire(driverDB);
      break;
    case 3:
      doPromote(driverDB);
      break;
    case 4:
      doDemote(driverDB);
      break;
    case 5:
      driverDB.displayAll();
      break;
    case 6:
      driverDB.displayCurrent();
      break;
    case 7:
      driverDB.displayFormer();
      break;
    case 0:
      done = true;
      break;
    default:
      cerr << "Unknown command." << endl;
    }
  }
    return 0;
}

int displayMenu()
{
  int selection;

  cout << endl;
  cout << "TaxiStation Database" << endl;
  cout << "-----------------" << endl;
  cout << "1) Hire a new driver" << endl;
  cout << "2) Fire an driver" << endl;
  cout << "3) Promote an driver" << endl;
	cout << "4) Demote an driver" << endl;
  cout << "5) List all drivers" << endl;
  cout << "6) List all current drivers" << endl;
  cout << "7) List all previous drivers" << endl; 
	cout << "0) Quit" << endl;
  cout << endl;
  cout << "---> ";

  cin >> selection;

  return selection;
}

void doHire(Database& inDB)
{
  string firstName, lastName;

  cout << "First Name? ";
  cin >> firstName;
  cout << endl << "Last Name? ";
  cin >> lastName;
  cout << endl;

  try {
    inDB.addDriver(firstName, lastName);
  } catch (exception ex) {
    cerr <<  "Unable to add new driver!" << endl;
  }
}

void doFire(Database& inDB)
{
  int driverNumber;
  cout << "Driver number? ";
  cin >> driverNumber;
  cout << endl;

  try {
    TaxiStation& emp = inDB.getDriver(driverNumber);
    emp.fire();
    cout << "Driver " << driverNumber << " has been terminated." << endl;
  } catch (exception ex) {
    cerr << "Unable to terminate driver!" << endl;
  }
}

void doPromote(Database& inDB)
{
  int driverNumber, raiseAmount;

  cout << "Driver number? ";
  cin >> driverNumber;
  cout << endl << "How much of a raise? ";
  cin >> raiseAmount;
  cout << endl;

  try {
    TaxiStation& emp = inDB.getDriver(driverNumber);
    emp.promote(raiseAmount);
    cout << "The next driver " << driverNumber << " has been promoted." << endl;
  }
  catch (exception ex) {
    cerr <<  "Unable to promote driver!" << endl;
  }
}


void doDemote(Database& inDB)
{
  int driverNumber, loweringAmount;

  cout << "Driver number? ";
  cin >> driverNumber;
  cout << endl << "How much of a raise? ";
  cin >> loweringAmount;
  cout << endl;

  try {
    TaxiStation& emp = inDB.getDriver(driverNumber);
    emp.demote(loweringAmount);
    cout << "The next driver " << driverNumber << " has been demoted." << endl;
  }
  catch (exception ex) {
    cerr << "Unable to demote driver!" << endl;
  }
}