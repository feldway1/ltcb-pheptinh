#include <iostream>
using namespace std;

int tinhtong(int so1, int so2) {
	// sotong=so1+so2;
	// return sotong;
	return so1 + so2;
}
int tinhhieu(int so1, int so2) {
	return so1 - so2;
}
int tinhtich(int so1, int so2) {
	return  so1 * so2;
}
float tinhthuong(float so1,float so2) {
	return (float)so1 / so2;
}


int main() {
	// khai báo biến
	int so1, so2, tong;
	//nhập dữ liệu vào biến
	cout << "CHUONG TRINH TINH CAC PHEP TINH CO BAN\n";
	cout << "Nhap so thu nhat:"; cin >> so1;
	cout << "Nhap so thu hai:"; cin >> so2;
	//tính toán
	tong = tinhtong(so1, so2);
	cout << so1 << " +" << so2 << " =" << tong << endl;
	tong = tinhhieu(so1, so2);
	cout << so1 << " -" << so2 << " =" << tong << endl;
	tong = tinhtich(so1, so2);

	cout << so1 << " *" << so2 << " =" << tong << endl;
	tong = tinhthuong(so1, so2);
	//xuất dữ liệu
	
	

	if (so2!=0) {
		tong = (float)so1 / so2;
		cout << so1 << " /" << so2 << " =" << tong << endl;
	}
	else {
		cout << "Khong the chia " << so1 << " chia cho 0\n";

	}
	return 0;
}
