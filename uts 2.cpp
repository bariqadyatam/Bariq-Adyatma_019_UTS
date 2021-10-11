#include <iostream>
#include <conio.h>
using namespace std;

main (){
	int plg, lml, hrg, byr;
	
	//input
	cout<<"Program Menentukan Harga Lembaran Fotocopy di GRAFITY Fotocopy"<<endl;
	cout<<"Apakah dia pelanggan/member Grafity Fotocopy(0=tidak 1=iya)="; cin>>plg;
	cout<<"Berapa lembar yang akan difotocopykan="; cin>>lml;
	cout<<endl<<endl;
	
	//pengerjakan
	if(plg==1){
		hrg=75;
		byr=lml*hrg;
	}
	else if(plg==0 && lml<=100){
		hrg=150;
		byr=lml*hrg;
	}
	else if(plg==0 && lml<=100 && lml==100 && lml>=100){
		hrg=100;
		byr=lml*hrg;
	}
	else if(plg==0 && lml>=200){
		hrg=80;
		byr=lml*hrg;
	}
	
	//output
	if(plg==0){
		cout<<"Apakah dia pelanggan=Tidak"<<endl;
	}
	else if(plg==1){
		cout<<"Apakah dia pelanggan=Iya"<<endl;
	}
	
	cout<<"Banyak Fotocopy="<<lml<<endl;
	cout<<"Harga Per Lembar="<<hrg<<endl;
	cout<<"Yang Harus Dibayarkan="<<byr<<endl;
	
	getch ();
	return 0;
}
