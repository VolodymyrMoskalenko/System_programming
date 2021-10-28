#include <ctime>
#include <iostream>
#include "TaxiStation.h"

TaxiStation::TaxiStation(int hCarCode, int hMarkCode, int hRegistrationNumber, int hCarcassNumber, int hEngineNumber, int hYearOfCreation, int hMileage, int hDateOfLastTechnicalInspection, int hMechanicEmployeeCode, int hSpecialCharacters) {
  setCarCode(hCarCode);
  setMarkCode(hMarkCode);
  setRegistrationNumber(hRegistrationNumber);
  setCarcassNumber(hCarcassNumber);
  setEngineNumber(hEngineNumber);
  setYearOfCreation(hYearOfCreation);
  setMileage(hMileage);
  setDateOfLastTechnicalInspection(hDateOfLastTechnicalInspection);
  setMechanicEmployeeCode(hMechanicEmployeeCode);
  setSpecialCharacters(hSpecialCharacters);

  if ((getCurrentYear() - this->dateOfLastTechnicalInspection) > 3) {
    cout << "This car need to take technical inspection \n" ;
    setIsTechicalInspectionDone(false);
  } else {
    setIsTechicalInspectionDone(true);
  }
}

int TaxiStation::getCurrentYear() {
  std::time_t t = std::time(0);   // get time now
  std::tm* now = std::localtime(&t);
  return (now->tm_year + 1900);
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

void TaxiStation::setIsTechicalInspectionDone(bool indone)
{
  done = indone;
}

bool TaxiStation::getIsTechicalInspectionDone() {
  return done;
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
