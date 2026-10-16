#include<iostream>
using namespace std;
class Veh{
private:
  string vehID;
  char vehType;
  int entTime;
  int parkingDur;
  double parkingFee;
public:
  Veh(string id = "", char type = 'C', int entry = 0, int dur = 0){
      vehID = id;
      vehType = type;
      entTime = entry;
      parkingDur = dur;
      parkingFee = 0;
  }
  double calcFee(){
    double rate;
    if(vehType ==  'C') rate = 8000;
    else if(vehType ==  'M') rate = 4000;
    else rate = 2000;
    parkingFee = rate*parkingDur;
    return parkingFee;
  }
void Veh_nhap(){
  cout<<"Xe: "; cin >> vehID;
  cout<<"| Loại: "; cin >> vehType;
  cout<<"| Thời gian(h): "; cin >> parkingDur;
  calcFee();
}
void Veh_xuat(){
  cout<<"Xe: "<<vehID <<"| Loại: "<<vehType <<"| Thời gian: "<<parkingDur <<"h"<<"| Phi: "<<calcFee()<<"VND\n";
}
};
