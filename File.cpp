// =======================LÝ THUYẾT ===================
//
//1. trình bày đường dẫn tương đối, và đường dẫn tuyệt đối.
// Đường dẫn tuyệt đối là đường dẫn mà chúng ta copy địa chỉ từ ổ của rom và tên file 
// vào code. Nêu như ta chuyển code sang máy khác sẽ không chạy được
// 
// Nếu như ta chuyển sang đường dẫn tương đối thì chỉ cần nhập tên file vào và khi đó , chúng ta nén file lại gửi cho ai đó 
// thì khi đó họ có thể chuyển sang đường dẫn tuyệt đói để lập trình 
// 
//2. Nhận xét Đúng SAi:
//a) Đọc file sau khi được đóng file, thì lần đọc file sau con trỏ sẽ trỏ về đầu
//b) Ghi file sau khi được đóng file, thì kết quả ghi file lần sau sẽ ghi tiếp vào file kết quả
// 
// - a) Đúng ;
// 
// 
// + (tên hàm ) .eof() đây là câu lệnh bằng true khi con trỏ nằm ở cuối file 
// + false khi khoongg ở cuối file
// 
// +( ten hàm ) .fail() hàm kiểm tra xem file mở được không bằng true là k mở được ;
//
//
//+ (tên hàm). seekg ( x,y);
// x: là số đơn vị muốn dịch (trái hoặc phải ) phải + , trái - 
// y : vị trí bắt đầu dịch : 0 (beg) , 1( cur) 2 (endl) 
//
//


// BÀI TẬP 
#include<iostream>
#include <fstream>
#include<math.h>
#include <ctype.h>
using namespace std;
void load_file(int a[], int &n);
void xuat(int a[], int n); 
void bai1(int a[], int& n);
void bai2(int a[], int &n);
bool amstrong(int so);
bool amstrong(int so);
void filemax(int a[], int n);
void mang_ams(int a[], int n);
void bai3(int a[], int& n);
int min(int a[], int n);
int ucln(int a[], int n);
int Tich(int a[], int n);
void Ghi_ucln(int a[], int n);
void Ghi_bcnn(int a[], int n);

void main()
{
	int a[100];
	int n;
	// Lv1;
	//bai1(a, n);
	//xuat(a, n);
	//filemax(a, n);


	//Lv2;
	//bai2(a, n);
	//xuat(a, n);
	//mang_ams(a, n);
	// lv3;
	bai3(a, n);
	xuat(a, n);
	Ghi_bcnn(a, n);
	Ghi_bcnn(a, n);
}

void load_file(int a[], int &n)
{
	ifstream filein; // khai báo một biến dạng file có tên filein
	// b1 mở file 
	filein.open("D:\\Code_C\\input.txt", ios_base::in); // mở để đọc là in , ghi là out , 
	if (filein.fail() == true)
	{
		cout << "Khong mo duoc !" << endl;
		return;
	}
	// b2 đọc file 
	filein >> n;
	cout << n << endl;
	for (int i = 0; i < n; i++)
	{
		filein >> a[i];
	}
	// b3 đóng file 
	filein.close();
}
void bai1(int a[], int &n)
{
	// file input có dạng 
	// 6
	// 1 2 3 4 5 6 7 
	//
	// khai báo tên file 
	ifstream filein;
	cout << "=================XUAT===============";
	// mở file
	filein.open("D:\\Code_C\\input.txt", ios_base::in);
	if (filein.fail() == true)// hàm kiểm tra xem mở file thành công không
	{
		cout << "Khong mo duoc : " << endl;
		return;
	}
	// b2 đọc file 
	filein >> n;
	// lưu số 6 vào n;
	for (int i = 0; i < n; i++)
	{
		filein >> a[i]; // lưu các số dưới vào mảng a ;
	}
}
void filemax(int a[], int n)
{
	ofstream ghi;
	ghi.open("D:\\Code_C\\output.txt");
	// kiểm tra xem mở được chưa
	if (!ghi)
	{
		cout << " khong mo duoc";
		return;
	}
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	//ghi file
	ghi << max;
	cout << "Gia tri max la : " << max << endl;
	// đóng file 
	
}
void bai2(int a[], int &n)
{
	//VD: input.txt
	//12 345 1 7 12
	ifstream filein;
	filein.open("D:\\Code_C\\input.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cerr << "Khong mo duoc " << endl;
		return;
	}
	// đọc fiel
	// kiểm tra xem có bao nhiêu phần tử 
	n = 0; while (filein.eof() == !true) // bằng true thì ở cuối dòng 
	{
		filein >> a[n++];
	}
	// lưu file vào mảng và đếm được bao nhiêu phần tử;

	//đóng file
	filein.close();
	cout << "\t\tN la : " << n << endl;

}

bool amstrong(int so)
{
	// ta truyền vào số 153 trước tiên cần đếm xem nó có bn số
	int  temp = so;
	int tong = 0;
	int dem = 0;
	while(temp != 0)
	{
		temp = temp / 10;
		dem++;
	}temp = so;
	do
	{
		tong = tong + pow((temp % 10), dem);
		temp = temp / 10;
	} while (temp != 0);
	if(tong == so)
	{
		return true;
	}
	else
	{
		return false;
	 }
}

void mang_ams(int a[], int n)
{
	ofstream ghi;
	ghi.open("D:\\Code_C\\output.txt");
	// kiểm tra xem mở được chưa
	if (!ghi)
	{
		cout << " khong mo duoc";
		return;
	}
	// ghi file
	bool kiemtra = false;
	for (int i = 0; i < n; i++)
	{
		kiemtra = amstrong(a[i]); // nếu là số ams thì là true và lưu lại
		if (kiemtra == true)
		{
			ghi << a[i];
			ghi << ' ';
		}
	}
	// đóng file 
	ghi.close();
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Gia tri thu : " << a[i] << endl;
	}
}

void bai3(int a[], int &n)
{
	ifstream filein;
	filein.open("D:\\Code_C\\input.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cerr << "Khong mo duoc " << endl;
		return;
	}
	n = 0;
	while( filein.eof() != true)
	{
		filein >> a[n++];
		if (filein.eof() != true)
		{
			char c; filein >> c;
		}
	}
	filein.close();
}
int ucln(int a[], int n)
{
	int Min = min(a, n);
	int ucln = 0;
	for (int i = 1; i < Min; i++)
	{
		if (Min % i == 0) {
			ucln = Min % i;
		}
		else
		{
			continue;
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] % ucln != 0)
			{
				break;
			}
		}
	}
	return ucln;
}
int min(int a[], int n)
{
	int Min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (Min > a[i])
		{
			Min = a[i];
		}
	}
	return Min;
}
int bcnn(int a[], int n)
{
	int tich = Tich(a, n);
	int Ucln = ucln(a, n);
	int Bcnn = tich / Ucln;
	return Bcnn;
}
int Tich(int a[], int n)
{
	int tich = 1;
	for (int i = 0; i < n; i++)
	{
		tich = tich * a[i];
	}
	return tich;
}
void Ghi_ucln(int a[], int n)
{
	ofstream ghi;
	ghi.open("UCLN.txt");
	// kiểm tra xem mở được chưa
	if (!ghi)
	{
		cout << " khong mo duoc";
		return;
	}
	//ghi file
	ghi << ucln(a, n);
	cout << "Uoc chung lon nhat la  " << ucln(a, n) << endl;
	// đóng file 
}
void Ghi_bcnn(int a[], int n)
{
	ofstream ghi;
	ghi.open("BCNN.txt");
	// kiểm tra xem mở được chưa
	if (!ghi)
	{
		cout << " khong mo duoc";
		return;
	}
	//ghi file
	ghi << bcnn(a, n);
	cout << "Uoc chung lon nhat la  " << bcnn(a, n) << endl;
	// đóng file 
}