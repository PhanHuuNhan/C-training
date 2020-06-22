#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct NODE
{
	string ho_Ten;
	string ma_SV;
	string nam_Sinh;
	string gioi_Tinh;
	string lop;
	NODE *pnext; //con tro dslk cuoi
};
typedef struct NODE node;

node* khoiTaoNode(node sv);
void themSau(node *&phead, node sv);
void xuat(node* phead);
int main()
{
	
	node* phead = NULL;
	int n;
	do
	{
		cout << "Moi ban nhap so luong sinh vien: "; cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai, nhap lai";
		}
	} while (n <= 0);
	cin.ignore();
	for (int i = 1; i <= n; i++)
	{
		
		cout << "Thong tin sinh vien " << i << ": \n";
		node sv;
		cout << "Nhap HO TEN sinh vien";
		getline(cin, sv.ho_Ten);
		cout << "Nhap MaSV sinh vien";
		getline(cin, sv.ma_SV);
		cout << "Nhap Nam Sinh sinh vien";
		getline(cin, sv.nam_Sinh);
		cout << "Nhap Gioi Tinh sinh vien";
		getline(cin, sv.gioi_Tinh);
		cout << "Nhap Lop sinh vien";
		getline(cin, sv.lop);
		themSau(phead,sv);
	}
	xuat(phead);
	
}
node* khoiTaoNode(node sv)
{
	node* p = new node;
	p->ho_Ten = sv.ho_Ten;
	p->ma_SV = sv.ma_SV;
	p->nam_Sinh = sv.nam_Sinh;
	p->gioi_Tinh = sv.gioi_Tinh;
	p->lop = sv.lop;
	p->pnext = NULL;
	return p;
}
void themSau(node *&phead, node sv)
{
	if (phead == NULL)
	{
		node* p = khoiTaoNode(sv);
		phead = p;
	}
	else
	{
		node* p = khoiTaoNode(sv);
		for (node* k = phead;; k = k->pnext)
		{
			if (k->pnext == NULL)// phan tu cuoi danh sach
			{
				k->pnext = p;//lap lien ket va break
				break;
			}
		}
		
	}
}
void xuat(node *phead)
{
	int w = 15;
	cout << setw(w) << "Ho ten" << setw(w) << "MSSV" << setw(w) << "Nam sinh" << setw(w) << "Gioi tinh" << setw(w) << "Lop\n";
	for (node* k = phead; k !=NULL; k = k->pnext)
	{
		cout << setw(w) << k->ho_Ten << setw(w) << k->ma_SV << setw(w) << k->nam_Sinh << setw(w) << k->gioi_Tinh << setw(w) << k->lop << endl;
	}
}