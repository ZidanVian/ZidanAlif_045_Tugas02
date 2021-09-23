#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	long int Alas, Tinggi, Sisi_Miring, Keliling;
	cout<< "Program Penghitung Sisi Miring dan Keliling Segitiga Siku-Siku"<<endl;
	cout<< "\n";
	
	cout<< "Masukkan Alas= "; cin>> Alas;
	cout<< "Masukkan Tinggi= "; cin>> Tinggi;
	cout<< "\n";

	Sisi_Miring=sqrt((Alas*Alas)+(Tinggi*Tinggi));
	Keliling=Alas+Tinggi+Sisi_Miring;
	
	cout<< "Sisi Miring= "<<Sisi_Miring<<endl;
	cout<< "Keliling= "<<Keliling<<endl;

	getch ();
}
