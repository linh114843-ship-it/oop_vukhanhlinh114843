#include <iostream>
#include <string>

class Vehicle {
private:
    std::string vehicleID;
    std::string vehicleType;
    std::string entryTime; 
    double parkingDuration;
    double parkingFee;

public:

    Vehicle() : vehicleID(""), vehicleType(""), entryTime(""), parkingDuration(0.0), parkingFee(0.0) {}

    Vehicle(std::string id, std::string type, std::string time, double duration)
        : vehicleID(id), vehicleType(type), entryTime(time), parkingDuration(duration), parkingFee(0.0) {
        calculateFee();
    }

    // Getters
    std::string getVehicleID() const { return vehicleID; }
    std::string getVehicleType() const { return vehicleType; }
    std::string getEntryTime() const { return entryTime; }
    double getParkingDuration() const { return parkingDuration; }
    double getParkingFee() const { return parkingFee; }

    // Setters
    void setVehicleID(const std::string& id) { vehicleID = id; }
    void setVehicleType(const std::string& type) { vehicleType = type; }
    void setEntryTime(const std::string& time) { entryTime = time; }
    void setParkingDuration(double duration) { 
        parkingDuration = duration; 
        calculateFee();
    }    
    void calculateFee() {
        if (vehicleType == "Car") {
            parkingFee = parkingDuration * 20000;
        } else {
            parkingFee = parkingDuration * 5000;
        }
    }

    void display() const {
        std::cout << "ID: " << vehicleID 
                  << " | Loai: " << vehicleType 
                  << " | Gio vao: " << entryTime 
                  << " | Thoi gian: " << parkingDuration << "h"
                  << " | Phi: " << parkingFee << " VND\n";
    }
};
