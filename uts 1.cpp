/*Program menentukan usia*/

#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int umur;
	string grd;
	
	//input nilai
	cout<<"Program Menentukan Usia"<<endl<<endl;
	cout<<"|===========================|"<<endl;
	cout<<"|Daftar Kategori Usia Anda= |"<<endl;
	cout<<"| 0-1   -> Bayi             |"<<endl;
	cout<<"| 2-3   -> Batita           |"<<endl;
	cout<<"| 4-5   -> Balita           |"<<endl;
	cout<<"| 6-12  -> Anak-Anak        |"<<endl;
	cout<<"| 13-17 -> Remaja           |"<<endl;
	cout<<"| 18-30 -> Pemuda           |"<<endl;
	cout<<"| 31-60 -> Dewasa           |"<<endl;
	cout<<"| 61-100 -> Lansia          |"<<endl;
	cout<<"|===========================|"<<endl;
	cout<<"Masukkan Umur Anda="; cin>>umur;
	
	//Pengerjaan grade
	switch (umur){
		case 0 ... 1: grd="Bayi";
		break;
		case 2 ... 3: grd="Batita";
		break;
		case 4 ... 5: grd="Balita";
		break;
		case 6 ... 12: grd="Anak-Anak";
		break;
		case 13 ... 17: grd="Remaja";
		break;
		case 18 ... 30: grd="Pemuda";
		break;
		case 31 ... 60: grd="Dewasa";
		break;
		case 61 ... 100: grd="Lansia";
		break;
		default: cout<<"Umur yang anda masukkan melebihi daftar usia"; getch(); return 0;
	}
	
	//output
	cout<<"Kategori Usia Anda Adalah="<<grd;
	getch ();
	return 0;
}
