#include <iostream>
using namespace std;

//tao 1 bien node
struct NODE
{
	int data; //chua data
	NODE* pnext; //con tro cuoi
	NODE* pback; // con tro dau
};
typedef struct NODE node;
//tao 1 bien de quan ly dslk doi
struct LIST
{
	node* phead = NULL; //dau
	node* ptail = NULL; //cuoi
};
typedef struct LIST list;

//khoi tao node
node* tao_Node(int x);
//them sau
void them_Sau(list &l, int x);
//xuat
void xuat(list l);

int main(int argc, char** argv) {

	list l;
	int n;
	do
	{
		cout << "Moi ban nhap so luong phan tu: "; cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai, nhap lai";
		}
	} while (n <= 0);
	for (int i = 1; i <= n; i++)
	{
		int x;
		cout << "Moi ban nhap gia tri thu " << i << " :"; cin >> x;
		them_Sau(l, x);
	}
	xuat(l);

	return 0;
}

node* tao_Node(int x)
{
	node* p = new node;
	p->data = x;
	p->pback = NULL;
	p->pnext = NULL;
	return p;
}
void them_Sau(list &l, int x)
{
	if (l.phead == NULL)
	{
		node* p = tao_Node(x);
		l.phead = l.ptail = p; //dslk dau va dslk cuoi la p
	}
	else
	{
		node* p = tao_Node(x); //tao 1 node
		l.ptail->pnext = p; //dslk cuoi hien tai tro sang p
		p->pback = l.ptail; //node co node dau tro quay lai dslk cuoi hien tai
		l.ptail = p;//dslk cuoi = node cuoi;
	}
}
void xuat(list l)
{
	cout << "Danh sach theo chieu thuan:\n";
	for (node* k = l.phead; k != NULL; k = k->pnext)
	{
		cout << k->data << " ";
	}
	cout << "\nDanh sach theo chieu nghich:\n";
	for (node* k = l.ptail; k != NULL; k = k->pback)
	{
		cout << k->data << " ";
	}
}
