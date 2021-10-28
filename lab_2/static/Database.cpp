#include <iostream>
#include <stdexcept>
#include <string>

#include "Database.h"

using namespace std;

namespace Records
{
  TaxiStation& Database::addDriver(string inFirstName, string inLastName)
  {
    int databaseSize = mDrivers.size();
    if (databaseSize > kMaxDrivers) {
      cerr << "There is no more room to add the new driver!" << endl;
      throw exception();
    }

    static TaxiStation theDriver;
    theDriver.setFirstName(inFirstName);
    theDriver.setLastName(inLastName);
    theDriver.setDriverNumber(kFirstDriverNumber + databaseSize);
		cout << "Driver number " << theDriver.getDriverNumber() << endl;
    theDriver.hire();
    mDrivers.push_back(theDriver);
    return theDriver;
  }

  TaxiStation& Database::getDriver(int inDriverNumber)
  {
    int positionInDB = inDriverNumber - kFirstDriverNumber;
    if (positionInDB >= 0 || positionInDB < mDrivers.size()) {

      return mDrivers[positionInDB];
    }
    cerr << "No driver with driver number " << inDriverNumber << endl;
    throw exception();
  }

  TaxiStation& Database::getDriver(string inFirstName, string inLastName)
  {
    int databaseSize = mDrivers.size();
    for (int i = 0; i < databaseSize; i++) {
      if (mDrivers[i].getFirstName() == inFirstName &&
        mDrivers[i].getLastName() == inLastName) {
        return mDrivers[i];
      }
    }
    cerr << "No driver with name " << inFirstName << " " << inLastName << endl;
    throw exception();
  }

  void Database::displayAll()
  {
    int databaseSize = mDrivers.size();
    for (int i = 0; i < databaseSize; i++) {
      mDrivers[i].display();
    }
  }

  void Database::displayCurrent()
  {
    int databaseSize = mDrivers.size();
    for (int i = 0; i < databaseSize; i++) {
      if (mDrivers[i].getIsHired()) {
        mDrivers[i].display();
      }
    }
  }

  void Database::displayFormer()
  {
    int databaseSize = mDrivers.size();
    for (int i = 0; i < databaseSize; i++) {
      if (!mDrivers[i].getIsHired()) {
        mDrivers[i].display();
      }
    }
  }
}