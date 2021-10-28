#pragma once

#include <iostream>
#include <vector>
#include "TaxiStation.h"
using namespace std;

namespace Records
{
  const int kMaxDrivers = 100;
  const int kFirstDriverNumber = 1;

  class Database
  {
  protected:
    vector<TaxiStation> mDrivers;
  
  public:
    Database() {};
    ~Database() {};

    TaxiStation& addDriver(string inFirstName, string inLastName);
    TaxiStation& getDriver(int inDriverNumber);
    TaxiStation& getDriver(string inFirstName, string inLastName);
    void displayAll();
    void displayCurrent();
    void displayFormer();
  };
}