#include <iostream>
#include <string>
#include "TaxiStation.h"

using namespace std;

void normalizeString(string& inString)
{
  int spaceCountPrefx;
  int spaceCountPostfx;
  
  string tempString = "";
  
  spaceCountPrefx = 1;
  spaceCountPostfx = 15 - inString.length();
  
  tempString += " ";
  
  tempString += inString;
  
  for (int i = spaceCountPostfx; i > 0; i--) {
    tempString += " ";
  }
  inString = "";
  inString = tempString;
}

namespace Records
{
  TaxiStation::TaxiStation()
  {
    driverEmployeeFirstName = "";
    driverEmployeeLastName = "";
    driverEmployeeCode = -1;
    driverEmployeeSalary = kDefaultStartingSalary;
    fHired = false;
    carCode = kCarCode;
    markCode = kMarkCode;
    registrationNumber = kRegistrationNumber;
    carcassNumber = kCarcassNumber;
    engineNumber = kEngineNumber;
    yearOfCreation = kYearOfCreation;
    mileage = kMileage;
    dateOfLastTechnicalInspection = kDateOfLastTechnicalInspection;
    mechanicEmployeeCode = kMechanicEmployeeCode;
    specialCharacters = kSpecialCharacters; // automat
  }

  void TaxiStation::promote(int inRaiseAmount)
  {
    setSalary(getSalary() + inRaiseAmount);
  }

  void TaxiStation::demote(int inDemeritAmount)
  {
    setSalary(getSalary() - inDemeritAmount);
  }

  void TaxiStation::hire()
  {
    fHired = true;
  }
  
  void TaxiStation::fire()
  {
    fHired = false;
  }

  string TaxiStation::display()
  {
    string firstName, lastName;
    firstName = getFirstName();
    lastName = getLastName();
    normalizeString(firstName);
    normalizeString(lastName);
    string dr;
    fHired ? dr = "Current Driver" : dr = "Former Driver";
    return "First Name: " + firstName + " | Surname: "  + lastName+ " | Hired: " + dr  + " | Driver Number: "  + to_string(getDriverNumber()) +" | Salary: $" + to_string( getSalary())  + " | ";
  }

  void TaxiStation::setFirstName(string inFirstName)
  {
    if (inFirstName.length() < 16) {
       driverEmployeeFirstName = inFirstName;
    }
    else {
      cerr << "Fill the smaller name!" << endl;
      throw exception();
    }
  }

  string TaxiStation::getFirstName()
  {
    return  driverEmployeeFirstName;
  }

  void TaxiStation::setLastName(string inLastName)
  {
    if (inLastName.length() < 16) {
      driverEmployeeLastName = inLastName;
    }
    else {
      cerr << "Fill the smaller surname!" << endl;
      throw exception();
    }
  }

  string TaxiStation::getLastName()
  {
    return driverEmployeeLastName;
  }

  void TaxiStation::setDriverNumber(int inDriverNumber)
  {
    driverEmployeeCode = inDriverNumber;
  }

  int TaxiStation::getDriverNumber()
  {
    return driverEmployeeCode;
  }

  void TaxiStation::setSalary(int inSalary)
  {
    driverEmployeeSalary = inSalary;
  }

  int TaxiStation::getSalary()
  {
    return driverEmployeeSalary;
  }

  bool TaxiStation::getIsHired()
  {
    return fHired;
  }

  void TaxiStation::setCarCode(int inCarCode)
  {
    carCode = inCarCode;
  }

  int TaxiStation::getCarCode()
  {
    return carCode;
  }

  void TaxiStation::setMarkCode(int inMarkCode)
  {
    markCode = inMarkCode;
  }

  int TaxiStation::getMarkCode()
  {
    return markCode;
  }

  void TaxiStation::setRegistrationNumber(int inRegistrationNumber)
  {
    registrationNumber = inRegistrationNumber;
  }

  int TaxiStation::getRegistrationNumber()
  {
    return registrationNumber;
  }

  void TaxiStation::setCarcassNumber(int inCarcassNumber)
  {
    carcassNumber = inCarcassNumber;
  }

  int TaxiStation::getCarcassNumber()
  {
    return carcassNumber;
  }

  void TaxiStation::setEngineNumber(int inEngineNumber)
  {
    engineNumber = inEngineNumber;
  }

  int TaxiStation::getEngineNumber()
  {
    return engineNumber;
  }

  void TaxiStation::setYearOfCreation(int inYearOfCreation)
  {
    yearOfCreation = inYearOfCreation;
  }

  int TaxiStation::getYearOfCreation()
  {
    return yearOfCreation;
  }

  void TaxiStation::setMileage(int inMileage)
  {
    mileage = inMileage;
  }

  int TaxiStation::getMileage()
  {
    return mileage;
  }

  void TaxiStation::setDateOfLastTechnicalInspection(int inDateOfLastTechnicalInspection)
  {
    dateOfLastTechnicalInspection = inDateOfLastTechnicalInspection;
  }

  int TaxiStation::getDateOfLastTechnicalInspection()
  {
    return dateOfLastTechnicalInspection;
  }

  void TaxiStation::setMechanicEmployeeCode(int inMechanicEmployeeCode)
  {
    mechanicEmployeeCode = inMechanicEmployeeCode;
  }

  int TaxiStation::getMechanicEmployeeCode()
  {
    return mechanicEmployeeCode;
  }

  void TaxiStation::setSpecialCharacters(int inSpecialCharacters)
  {
    specialCharacters = inSpecialCharacters;
  }

  int TaxiStation::getSpecialCharacters()
  {
    return specialCharacters;
  }

  void TaxiStation::taxiStationInfo() {
	//cout info
	cout << "Information about car in TaxiStation: " << endl;
	cout << "Car code: " << carCode << endl;
	cout << "Mark code: " << markCode << endl;
	cout << "Registration number: " << registrationNumber << endl;
	cout << "Carcass number: " << carcassNumber << endl;
	cout << "Engine number: " << engineNumber << endl;
	cout << "Year of creation: " << yearOfCreation << endl;
	cout << "Mileage: " << mileage << endl;
	cout << "Date of last technical inspection: " << dateOfLastTechnicalInspection << endl;
	cout << "Mechanic Employee code: " << mechanicEmployeeCode << endl;
	cout << "Special characters: " << specialCharacters << endl;
	cout << endl;
}
}
