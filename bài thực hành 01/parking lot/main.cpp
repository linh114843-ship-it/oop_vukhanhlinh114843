class ParkingLot {
private:
    string lotID;
    int capacity;
    int vehCount;
    Veh v1;
    Veh v2;
    Veh v3;
public:
    ParkingLot(string id = "LOT1", int cap = 3) {
        lotID = id;
        capacity = cap;
        vehCount = 0;
    }
    void addVeh(Veh v) {
        if (vehCount == 0) {
            v1 = v;
            vehCount++;
        } else if (vehCount == 1) {
            v2 = v;
            vehCount++;
        } else if (vehCount == 2) {
            v3 = v;
            vehCount++;
        } else {
            cout << "Bai do xe da day!\n";
        }
    }
    void showVehs() {
        cout << "\n--- Danh sach xe tai bai " << lotID << " (" << vehCount << "/" << capacity << ") ---\n";
        if (vehCount >= 1) v1.Veh_xuat();
        if (vehCount >= 2) v2.Veh_xuat();
        if (vehCount >= 3) v3.Veh_xuat();
        if (vehCount == 0) cout << "Chua co xe nao.\n";
    }
    double getTotalFee() {
        double sum = 0;
        if (vehCount >= 1) sum += v1.calcFee();
        if (vehCount >= 2) sum += v2.calcFee();
        if (vehCount >= 3) sum += v3.calcFee();
        return sum;
    }
};
