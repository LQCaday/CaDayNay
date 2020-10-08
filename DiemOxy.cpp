//khong canh giua 2 diem trong Oxy du dung ham friend
#include<iostream>
#include<math.h>
using namespace std;

class Diem{
	private:
		int td;
		int hd;
	public:
	Diem(){
		td = hd = 0;
	}	
	Diem(int x, int y){
		td = x;
		hd - y;
	}
	void input(){
		cout << " Nhap tung do: "; cin >> td;
		cout << " Nhap hoanh do: "; cin >> hd;
	}
	void output(){
		cout << " Co Toa do la: ";
		cout <<"("<<td<<";"<<hd<<")"<<endl;;
	}
	friend double KhoangCach(Diem d1, Diem d2);
};
 double KhoangCach(Diem d1, Diem d2){
		double kc;
		kc = sqrt(double(d2.td-d1.td)*(d2.td-d1.td) + (d2.hd - d1.hd) * (d2.hd - d1.hd));
		return kc;
	}
 main(){
	Diem d1,d2;
	cout << "Nhap toa do diem A:\n";
	d1.input();
	cout << "Diem A:\n";
	d1.output();
	cout << "Nhap toa do diem B:\n";
	d2.input();
	cout << "Diem B:\n";
	d2.output();
	cout<<"\nKhoang cach giua 2 diem la: "<< KhoangCach(d1,d2);	
   // return 0;
}
