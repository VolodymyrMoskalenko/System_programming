#include <iostream>
#include <string>

using namespace std;

  class TaxiStation
  {
    private:
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
      bool done;
 
    public:
      TaxiStation(int hCarCode, int hMarkCode, int hRegistrationNumber, int hCarcassNumber, int hEngineNumber, int hYearOfCreation, int hMileage, int hDateOfLastTechnicalInspection, int hMechanicEmployeeCode, int hSpecialCharacters);

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

      void setIsTechicalInspectionDone(bool inDone);
      bool getIsTechicalInspectionDone();

      int getCurrentYear();
      void taxiStationInfo();
  };
