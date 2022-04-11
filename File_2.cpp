#include <iostream>
#include <string>
#include<fstream>
using namespace std;
void Sdt(int a[], int n);
void Hoten(string Hoten, int& n);
void Ma_sv(string Masv, int& n);
void Tuoi(int Tuoi);
void Diem_toan(int Diem_toan);
void Diem_Cpp(int Diem_cpp);
void main()
{
	system("pause");
}
//Viết chương trình đọc + ghi file cho sinh viên:
//Bố cục file : ma_sv, ho_ten, sdt, tuoi, diem_toan, diem_cpp

void Ma_sv(string Masv, int &n)
{
	ifstream filein;
	filein.open("D:\\Code_C\\input.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cerr << "Khong mo duoc " << endl;
		return;
	}
	// đọc fiel
	// kiểm tra xem có bao nhiêu phần tử 
	n = 0;
	 while (filein.eof() == !true) // bằng true thì ở cuối dòng 
	{
		 getline(filein, Masv);
		 n++;
	}
	// lưu file vào mảng và đếm được bao nhiêu phần tử;

	//đóng file
	filein.close();
	// ghi gile============
	ofstream ghi;
	ghi.open("Masv.txt");
	// kiểm tra xem mở được chưa
	if (!ghi)
	{
		cout << " khong mo duoc";
		return;
	}
	ghi << Masv;
	ghi.close();
}
void Hoten(string Hoten, int& n)
{
	ifstream filein;
	filein.open("D:\\Code_C\\input.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cerr << "Khong mo duoc " << endl;
		return;
	}
	// đọc fiel
	// kiểm tra xem có bao nhiêu phần tử 
	n = 0;
	while (filein.eof() == !true) // bằng true thì ở cuối dòng 
	{
		getline(filein, Hoten);
		n++;
	}
	// lưu file vào mảng và đếm được bao nhiêu phần tử;

	//đóng file
	filein.close();
	// ghi gile============
	ofstream ghi;
	ghi.open("Hoten.txt");
	// kiểm tra xem mở được chưa
	if (!ghi)
	{
		cout << " khong mo duoc";
		return;
	}
	ghi << Hoten;
	ghi.close();
}
void Tuoi(int Tuoi)
{
	ifstream filein;
	filein.open("D:\\Code_C\\input.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cerr << "Khong mo duoc " << endl;
		return;
	}
	// đọc fiel
	// kiểm tra xem có bao nhiêu phần tử 
	while (filein.eof() == !true) // bằng true thì ở cuối dòng 
	{
		filein >> Tuoi;
	}
	// lưu file vào mảng và đếm được bao nhiêu phần tử;

	//đóng file
	filein.close();
	// ghi gile============
	ofstream ghi;
	ghi.open("Tuoi.txt");
	// kiểm tra xem mở được chưa
	if (!ghi)
	{
		cout << " khong mo duoc";
		return;
	}
	ghi << Tuoi;
	ghi.close();
}
void Diem_toan(int Diem_toan)
{
	ifstream filein;
	filein.open("D:\\Code_C\\input.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cerr << "Khong mo duoc " << endl;
		return;
	}
	// đọc fiel
	// kiểm tra xem có bao nhiêu phần tử 
	while (filein.eof() == !true) // bằng true thì ở cuối dòng 
	{
		filein >> Diem_toan;
	}
	// lưu file vào mảng và đếm được bao nhiêu phần tử;

	//đóng file
	filein.close();
	// ghi gile============
	ofstream ghi;
	ghi.open("Diemtoan.txt");
	// kiểm tra xem mở được chưa
	if (!ghi)
	{
		cout << " khong mo duoc";
		return;
	}
	ghi << Diem_toan;
	ghi.close();
}
void Diem_Cpp(int Diem_cpp)
{
	ifstream filein;
	filein.open("D:\\Code_C\\input.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cerr << "Khong mo duoc " << endl;
		return;
	}
	// đọc fiel
	// kiểm tra xem có bao nhiêu phần tử 
	while (filein.eof() == !true) // bằng true thì ở cuối dòng 
	{
		filein >> Diem_cpp;
	}
	// lưu file vào mảng và đếm được bao nhiêu phần tử;

	//đóng file
	filein.close();
	// ghi gile============
	ofstream ghi;
	ghi.open("Diemcpp.txt");
	// kiểm tra xem mở được chưa
	if (!ghi)
	{
		cout << " khong mo duoc";
		return;
	}
	ghi << Diem_cpp;
	ghi.close();
}
void Sdt(int a[], int n)
{
	ifstream filein;
	filein.open("D:\\Code_C\\input.txt", ios_base::in);
	if (filein.fail() == true)
	{
		cerr << "Khong mo duoc " << endl;
		return;
	}
	// đọc fiel
	// kiểm tra xem có bao nhiêu phần tử 
	n = 0;
	while (filein.eof() == !true) // bằng true thì ở cuối dòng 
	{
		filein >> a[n++];
	}
	// lưu file vào mảng và đếm được bao nhiêu phần tử;

	//đóng file
	filein.close();
	// ghi gile============
	ofstream ghi;
	ghi.open("Sdt.txt");
	// kiểm tra xem mở được chưa
	if (!ghi)
	{
		cout << " khong mo duoc";
		return;
	}
	ghi << a[];
	ghi.close();
}


