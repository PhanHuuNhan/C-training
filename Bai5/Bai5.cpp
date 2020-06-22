#include<iostream>
#include <string>
#include <string.h>
using namespace std;

struct hs
{
	string hoTen;
	int namSinh;
	float toan;
	float van;
	float anh;
	float tb;
};
typedef struct hs HocSinh;

void menu(HocSinh Danh_Sach_Hoc_Sinh[]);
void tao_ds_hs(HocSinh Danh_Sach_Hoc_Sinh[], int n);
void xuat_ds_hs(HocSinh Danh_Sach_Hoc_Sinh[], int n);
void them_1_hs(HocSinh Danh_Sach_Hoc_Sinh[], int& n);
void xoa_1_hs_theo_stt(HocSinh Danh_Sach_Hoc_Sinh[], int& n);
void sap_xep_theo_diem(HocSinh Danh_Sach_Hoc_Sinh[], int n);
void sap_xep_theo_ho_ten(HocSinh Danh_Sach_Hoc_Sinh[], int n);
void cat_ho_ten(string hoten, string& ten, string& ho);

int main()
{
	HocSinh Danh_Sach_Hoc_Sinh[100];
	menu(Danh_Sach_Hoc_Sinh);

}
void menu(HocSinh Danh_Sach_Hoc_Sinh[])
{
	int n;
	do
	{
		cout << "Moi ban nhap so luong hoc sinh: "; cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai, nhap lai";
		}
	} while (n <= 0);
	while (true)
	{
		system("cls");
		int luachon;
		cout << "1.Tao danh sach hoc sinh\n";
		cout << "2. In danh sach hoc sinh\n";
		cout << "3. Them 1 hoc sinh\n";
		cout << "4. Xoa hoc sinh theo so thu tu\n";
		cout << "5. Sap xep ds hs theo thu tu diem giam dan\n";
		cout << "6. Sap xep ds hs theo thu tu chu cai\n";
		cout << "0.Thoat\n";
		cout << "Moi nhap lua chon:";
		cin >> luachon;
		switch (luachon)
		{
			case 1:
			{
				tao_ds_hs(Danh_Sach_Hoc_Sinh, n);
				break;
			}
			case 2:
			{
				xuat_ds_hs(Danh_Sach_Hoc_Sinh, n);
				system("pause");
				break;
			}
			case 3:
			{
				them_1_hs(Danh_Sach_Hoc_Sinh, n);
				break;
			}
			case 4:
			{
				xoa_1_hs_theo_stt(Danh_Sach_Hoc_Sinh, n);
				break;
			}
			case 5:
			{
				sap_xep_theo_diem(Danh_Sach_Hoc_Sinh, n);
				break;
			}
			case 6:
			{
				sap_xep_theo_ho_ten(Danh_Sach_Hoc_Sinh, n);
				break;
			}
		}
		if (luachon == 0)
		{
			break;
		}
	}
}void tao_ds_hs(HocSinh Danh_Sach_Hoc_Sinh[], int n)
{
	cout << "Nhap thong tin hoc sinh\n";
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		cout << "Nhap thong tin hoc sinh thu " << i + 1 << endl;
		cout << "Nhap ho ten:"; getline(cin, Danh_Sach_Hoc_Sinh[i].hoTen);
		cout << "Nhap nam sinh:"; cin >> Danh_Sach_Hoc_Sinh[i].namSinh;
		cout << "Nhap diem toan:"; cin >> Danh_Sach_Hoc_Sinh[i].toan;
		cout << "Nhap diem van:"; cin >> Danh_Sach_Hoc_Sinh[i].van;
		cout << "Nhap diem anh:"; cin >> Danh_Sach_Hoc_Sinh[i].anh;
		Danh_Sach_Hoc_Sinh[i].tb = (Danh_Sach_Hoc_Sinh[i].toan + Danh_Sach_Hoc_Sinh[i].van + Danh_Sach_Hoc_Sinh[i].anh) / 3;
	}
}
void xuat_ds_hs(HocSinh Danh_Sach_Hoc_Sinh[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Thong tin hoc sinh thu " << i + 1 << endl;
		cout << "Ho ten:" << Danh_Sach_Hoc_Sinh[i].hoTen << endl;
		cout << "Nam sinh:"<< Danh_Sach_Hoc_Sinh[i].namSinh << endl;
		cout << "Diem toan:"<< Danh_Sach_Hoc_Sinh[i].toan << endl;
		cout << "Diem van:"<< Danh_Sach_Hoc_Sinh[i].van << endl;
		cout << "Ddiem anh:"<< Danh_Sach_Hoc_Sinh[i].anh << endl;
	}
}
void them_1_hs(HocSinh Danh_Sach_Hoc_Sinh[], int& n)
{
	cin.ignore();
	cout << "Nhap thong tin hoc sinh thu " << n+1 << endl;
	cout << "Nhap ho ten:"; getline(cin, Danh_Sach_Hoc_Sinh[n].hoTen);
	cout << "Nhap nam sinh:"; cin >> Danh_Sach_Hoc_Sinh[n].namSinh;
	cout << "Nhap diem toan:"; cin >> Danh_Sach_Hoc_Sinh[n].toan;
	cout << "Nhap diem van:"; cin >> Danh_Sach_Hoc_Sinh[n].van;
	cout << "Nhap diem anh:"; cin >> Danh_Sach_Hoc_Sinh[n].anh;
	Danh_Sach_Hoc_Sinh[n].tb = (Danh_Sach_Hoc_Sinh[n].toan + Danh_Sach_Hoc_Sinh[n].van + Danh_Sach_Hoc_Sinh[n].anh) / 3;
	n++;
}
void xoa_1_hs_theo_stt(HocSinh Danh_Sach_Hoc_Sinh[], int& n)
{
	int vt;
	cout << "Nhap stt can xoa:"; cin >> vt;
	for (int i = vt - 1; i < n; i++)
	{
		Danh_Sach_Hoc_Sinh[i] = Danh_Sach_Hoc_Sinh[i + 1];
	}
	n--;
}
void sap_xep_theo_diem(HocSinh Danh_Sach_Hoc_Sinh[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Danh_Sach_Hoc_Sinh[i].tb > Danh_Sach_Hoc_Sinh[j].tb)
			{
				swap(Danh_Sach_Hoc_Sinh[i], Danh_Sach_Hoc_Sinh[j]);
			}
		}
	}
}
void sap_xep_theo_ho_ten(HocSinh Danh_Sach_Hoc_Sinh[], int n)
{
	
	for (int i = 0; i < n - 1; i++)
	{
		string ten_i, ho_i, ten_j, ho_j;
		cat_ho_ten(Danh_Sach_Hoc_Sinh[i].hoTen, ten_i, ho_i);
		for (int j = i + 1; j < n; j++)
		{
			cat_ho_ten(Danh_Sach_Hoc_Sinh[j].hoTen, ten_j, ho_j);
			if (ten_i>ten_j)
			{
				swap(Danh_Sach_Hoc_Sinh[i], Danh_Sach_Hoc_Sinh[j]);
			}
			else if (ten_i == ten_j)
			{
				if (ho_i > ho_j)
				{
					swap(Danh_Sach_Hoc_Sinh[i], Danh_Sach_Hoc_Sinh[j]);
				}
			}
		}
	}
}

void cat_ho_ten(string hoten, string& ten, string& ho)
{
	while (hoten[hoten.length()-1] != ' ')
	{
		ten.insert(ten.begin() + 0, hoten[hoten.length() - 1]);
		hoten.erase(hoten.begin() + hoten.length() - 1);
	}
	hoten.erase(hoten.begin() + hoten.length() - 1);
	ho = hoten;
}