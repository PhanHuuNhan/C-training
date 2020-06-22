#include<iostream>
using namespace std;
struct date
{
	int ngay;
	int thang;
	int nam;
};
typedef struct date Date;
void tinh_ngay_chenh_lech(Date n_1, Date n_2);
void xuly(Date n_1, Date n_3, int& n1);
int main()
{
	Date n_1, n_2;
		cout << "Nhap ngay 1: "; cin >> n_1.ngay;
		cout << "Nhap thang 1: "; cin >> n_1.thang;
		cout << "Nhap nam 1: "; cin >> n_1.nam;
		cout << "Nhap ngay 2: "; cin >> n_2.ngay;
		cout << "Nhap thang 2: "; cin >> n_2.thang;
		cout << "Nhap nam 2: "; cin >> n_2.nam;
		tinh_ngay_chenh_lech(n_1, n_2);
}

void tinh_ngay_chenh_lech(Date n_1, Date n_2)
{
	Date n_3; //tao 1 bien n3 lam moc chuan cho n1 va n2 dem len
	if (n_1.nam >= n_2.nam)
	{
		n_3.ngay = 31; n_3.thang = 12; n_3.nam = n_1.nam;
	}
	else
	{
		n_3.ngay = 31; n_3.thang = 12; n_3.nam = n_2.nam;
	}
	int n1 = 0, n2 = 0;
	//xu ly
	xuly(n_1,n_3,n1);
	xuly(n_2, n_3,n2);
	cout << "Ngay chenh lech la:" << abs(n1 - n2);
}

void xuly(Date n_1, Date n_3,int &n1)
{
	while (n_1.ngay != n_3.ngay || n_1.thang != n_3.thang || n_1.nam != n_3.nam)
	{
		if (n_1.thang == 2)
		{
			if (n_1.nam % 4 == 0)
			{
				if (n_1.ngay == 29)
				{
					n_1.ngay =1;
					n_1.thang++;
					n1++;
				}
				else
				{
					n_1.ngay++;
					n1++;
				}
			}
			else
			{
				if (n_1.ngay == 28)
				{
					n_1.ngay = 1;
					n_1.thang++;
					n1++;
				}
				else
				{
					n_1.ngay++;
					n1++;
				}
			}
		}
		if (n_1.thang == 4 || n_1.thang == 6 || n_1.thang == 9 || n_1.thang == 11)
		{
			if (n_1.ngay == 30)
			{
				n_1.ngay = 1;
				n_1.thang++;
				n1++;
			}
			else
			{
				n_1.ngay++;
				n1++;
			}
		}
		if (n_1.thang == 1 || n_1.thang == 3 || n_1.thang == 5 || n_1.thang == 7 || n_1.thang == 8 || n_1.thang == 10)
		{
			if (n_1.ngay == 31)
			{
				n_1.ngay = 1;
				n_1.thang++;
				n1++;
			}
			else
			{
				n_1.ngay++;
				n1++;
			}
		}
		if (n_1.thang == 12)
		{
			if (n_1.ngay == 31)
			{
				n_1.ngay = 1;
				n_1.thang = 1;
				n_1.nam++;
				n1++;
			}
			else
			{
				n_1.ngay++;
				n1++;
			}
		}
	}
}