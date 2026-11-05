class bai_xe {
private: 
int ma_bai;
char kich_thuoc;
phuong_tien ds_xe[3];//Mang tinh toi da 3 phuong tien
int so_luong; //so luong xe hien co trong bai

public:
bai_xe();
bai_xe(int ma,char kt);

int lay_ma() const;
bool them(phuong_tien v);
bool xoa(int ma_xe);
bool chua(int ma_xe) const;
void hien_thi() const;
bool co_loai(string loai, int& dem, double& tong) const;
};

//ham khoi tao
bai_xe::bai_xe() : ma_bai(0), kich_thuoc('S), so_luong(0) {}
bai_xe::bai_xe(int ma
