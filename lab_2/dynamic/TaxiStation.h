#pragma once

#include <iostream>
using namespace std;

namespace Records 
{
  const int kDefaultStartingSalary = 60000;
  const int kCarCode = 111111;
  const int kMarkCode = 123456;
  const int kRegistrationNumber = 654321;
  const int kCarcassNumber = 161616;
  const int kEngineNumber = 222222;
  const int kYearOfCreation = 2021;
  const int kMileage = 0;
  const int kDateOfLastTechnicalInspection = 0;
  const int kMechanicEmployeeCode = 544456;
  const int kSpecialCharacters = 78;

  class TaxiStation
  {
    private:
      /* driver personal data*/
      string driverEmployeeFirstName;
      string driverEmployeeLastName;
      int  driverEmployeeCode;
      int  driverEmployeeSalary;
      bool fHired;
      /* car related data*/
      int carCode;
      int markCode;
      int registrationNumber;
      int carcassNumber;
      int engineNumber;
      int yearOfCreation;
      int mileage;
      int dateOfLastTechnicalInspection;
      int mechanicEmployeeCode;
      int specialCharacters;
 
    public:
      TaxiStation();
      /* general actions for drivers */
      void promote(int inRaiseAmount = 1000);
      void demote(int inDemeritAmount = 1000);
      void hire();
      void fire();
      void display();
      /* driver personal data*/
      void setFirstName(string inFirstName);
      string getFirstName();
      void setLastName(string inLastName);
      string getLastName();
      void setDriverNumber(int inDriverNumber);
      int  getDriverNumber();
      void setSalary(int inSalary);
      int  getSalary();
      bool getIsHired();
      /* car specific actions */
      void setCarCode(int inCarCode);
      int getCarCode();
      void setMarkCode(int inMarkCode);
      int getMarkCode();
      void setRegistrationNumber(int inRegistrationNumber);
      int getRegistrationNumber();
      void setCarcassNumber(int inCarcassNumber);
      int getCarcassNumber();
      void setEngineNumber(int inEngineNumber);
      int getEngineNumber();
      void setYearOfCreation(int inYearOfCreation);
      int getYearOfCreation();
      void setMileage(int inMileage);
      int getMileage();
      void setDateOfLastTechnicalInspection(int inDateOfLastTechnicalInspection);
      int getDateOfLastTechnicalInspection();
      void setMechanicEmployeeCode(int inMechanicEmployeeCode);
      int getMechanicEmployeeCode();
      void setSpecialCharacters(int inSpecialCharacters);
      int getSpecialCharacters();
      void taxiStationInfo();
  };
}

