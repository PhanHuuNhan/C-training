#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct hanghoa
{
	string ten_Hang;
	int sl;
	long don_Gia;
	long long thanh_Tien;
};
typedef struct hanghoa HangHoa;

void nhap(HangHoa hang[],int n);
void xuat(HangHoa hang[], int n);
int main()
{
	HangHoa hang[100];
	int n;
	do
	{
		cout << "Moi ban nhap so luong hang hoa: "; cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai, nhap lai";
		}
	} while (n <= 0);
	nhap(hang, n);
	xuat(hang, n);
}
void nhap(HangHoa hang[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Moi ban nhap ten hang thu " << i + 1 << " :";
		getline(cin, hang[i].ten_Hang);
		cout << "Moi ban nhap so luong:";
		cin >> hang[i].sl;
		cout << "Moi ban nhap don gia:";
		cin >> hang[i].don_Gia;
		hang[i].thanh_Tien = hang[i].don_Gia * hang[i].sl;
	}
}
void xuat(HangHoa hang[], int n)
{
	int w = 15;
	long long tong = 0;
	cout << "STT" << setw(w) << "Ten Hang" << setw(w) << "SL" << setw(w) << "Don gia" << setw(w) << "Thanh Tien\n";
	for (int i = 0; i < n; i++)
	{
		cout << i+1 << setw(w) << hang[i].ten_Hang << setw(w) << hang[i].sl << setw(w) << hang[i].don_Gia << setw(w) << hang[i].thanh_Tien << endl;
		tong = tong + hang[i].thanh_Tien;
	}
	cout << "..." << endl;
	cout << "Tong:" << tong;
	
}