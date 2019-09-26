#include <iostream>
using namespace std;
int main () {
	int a,b,c,d,e,f;
	string masukan;
	cout<<"Masukan Nilai A: ";
	cin>>a;
	cout<<"Masukan Nilai B: ";
	cin>>b;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	cout<<"Pilihan huruf: "<<endl<<"a : penjumlahan"<<endl<<"b : pengurangan"<<endl<<"c : perkalian"<<endl<<"d : pembagian"<<endl;
	cout<<"Masukan harufmu: ";
	cin >> masukan;
	if (masukan == "a"){
		cout<<"Hasil penjumlahan: "<< c <<endl;
	}else if(masukan == "b"){
		cout<<"Hasil pengurangan: "<<d<< endl;
	}else if(masukan == "c"){
		cout<<"Hasil perkalian: "<<e<< endl;
	}else if(masukan == "d"){
		cout<<"Hasil pembagian: "<<f<< endl;
	}else{
		cout<<"Penginputan huruf salah";
	}
	cout<<"Terima kasih telah menginput"<<endl<<endl;
	cout<<">>>Program by : Muh. Abi Zaid Alkhudri<<<";
	return 0;
}
