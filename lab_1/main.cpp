#include "TaxiStation.h"
#include <stdint.h>

int main() {
  TaxiStation myTaxiStationInStack = TaxiStation(111111, 123456, 654321, 161616, 222222 , 2021, 0, 2021, 544456, 78);
  myTaxiStationInStack.taxiStationInfo();

  TaxiStation* myTaxiStationInHeap = new TaxiStation(99999, 12956, 65321, 1616, 2222 , 2001, 19, 2001, 544456, 78);
  myTaxiStationInHeap->taxiStationInfo();
  delete myTaxiStationInHeap;
  return 0;
}

