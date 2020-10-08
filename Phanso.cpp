#include<iostream>

using namespace std;

class phanso{
	int tu,mau;
	public:
    phanso(){
    	tu = mau = 0;
	}
	phanso(int a,int b){
		tu = a;
		mau = b;		
	}
	void nhap(){
		cout << " Nhap tu: "; cin >> tu;
		cout << " Nhap mau: "; cin >> mau;
	}
	void xuat(){
		if(tu == mau) cout << "Phan so : 1";
		else cout << "Phan so: "<<tu<<"/"<<mau<<endl;
	}
	phanso cong(phanso a,phanso b){
		phanso c;
		c.tu = a.tu *b.mau + a.mau * b.tu;
		c.mau = a.mau * b.mau;
		return c;
	}
	phanso tru(phanso a,phanso b){
		phanso c;
		c.tu = a.tu *b.mau - a.mau * b.tu;
		c.mau = a.mau * b.mau;
		return c;
	}
	phanso nhan(phanso a,phanso b){
		phanso c;
		c.tu = a.tu * b.tu;
		c.mau = a.mau * b.mau;
		return c;
	}
    phanso chia(phanso a,phanso b){
		phanso c;
		c.tu = a.tu * b.mau;
		c.mau = a.mau * b.tu;
		return c;
	}
	int UCLN(int m,int n){
		while(n!=0){
			int du = m%n;
			m = n;
			n = du;
		}
		return m;
	}
	void toigian(){
		int us = UCLN(tu,mau);
		tu = tu/us;
		mau = mau/us;
	}
};
main()
{phanso ob1,ob2(2,5),ob3,ob4,ob5,ob6;
cout<<"Nhap phan so 1: \n";
ob1.nhap();
cout<<"Phan so 1: \n";
ob1.xuat(); 
cout<<"Phan so 2: \n";
ob2.xuat();
ob3=ob3.cong(ob1,ob2);
ob3.toigian();
cout<<"Tong hai phan so la: \n";
ob3.xuat();
ob4=ob4.tru(ob1,ob2);
ob4.toigian();
cout<<"Hieu hai phan so la: \n";
ob4.xuat();
ob5=ob5.nhan(ob1,ob2);
ob5.toigian();
cout<<"Tich hai phan so la: \n";
ob5.xuat();
ob6=ob6.chia(ob1,ob2);
ob6.toigian();
cout<<"Ket qua phep chia hai phan so la: \n";
ob6.xuat();
return 0;
}

