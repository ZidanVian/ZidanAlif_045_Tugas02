#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	long int Harga_Motor, Lama_Kredit, Harga_pokok, Bunga, Cicilan, Total_Harga_Motor, Keuntungan_Dealer;
	
	cout<<"Program Keuntungan Dealer"<<endl;
	cout<<"\n";
	
	cout<<"Masukkan Harga Motor="; cin>>Harga_Motor;
	cout<<"Masukkan Lama Kreditnya (bulan)="; cin>>Lama_Kredit;
	
	Harga_pokok=Harga_Motor/Lama_Kredit;
	Bunga=Harga_pokok*0.1;
	Cicilan=Harga_pokok+Bunga;
	Total_Harga_Motor=Cicilan*Lama_Kredit;
	Keuntungan_Dealer=Total_Harga_Motor-Harga_pokok;
	
	
	cout<<"\nCicilan="<<Cicilan<<endl;
	cout<<"Total Harga Cicilan="<<Total_Harga_Motor<<endl;
	cout<<"Keuntungan Dealer="<<Keuntungan_Dealer<<endl;
	
	getch ();
}
