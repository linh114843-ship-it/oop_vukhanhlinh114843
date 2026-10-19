#include<iostream>
#include<Vehicle.h>
using namespace std;
class Parkinglot{
private:
    string lotID;
    int capacity;
    int vehCount;
    Veh v1;
    Veh v2;
    Veh v3;  
public:
    ParkingLot(string id, int cap){
    lotID = id;
    capacity = cap;
    vehCount = 0;
    }
void addVeh(Veh v){
  if(vehCount == 0) {
      v1 = v;
      vehCount++;
  } else if(vehCount == 1){
      veh2 = v;
      vehCount++;
  }
