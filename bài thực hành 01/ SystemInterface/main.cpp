class SystemInterface {
private:
    ParkingLot lot;
public:
    SystemInterface(string id = "LOT1", int cap = 3) : lot(id, cap) {}
    void run() {
        int chon;
        do {
            cout << "\n===== QUAN LY BAI DO XE =====\n";
            cout << "1. Them xe\n";
            cout << "2. Xem danh sach xe\n";
            cout << "3. Xem tong phi\n";
            cout << "0. Thoat\n";
            cout << "Chon: ";
            cin >> chon;
            if (chon == 1) {
                Veh v;
                v.Veh_nhap();
                lot.addVeh(v);
            } else if (chon == 2) {
                lot.showVehs();
            } else if (chon == 3) {
                cout << "Tong phi: " << lot.getTotalFee() << "VND\n";
            }
        } while (chon != 0);
    }
};
int main() {
    SystemInterface sys("LOT1", 3);
    sys.run();
    return 0;
}
