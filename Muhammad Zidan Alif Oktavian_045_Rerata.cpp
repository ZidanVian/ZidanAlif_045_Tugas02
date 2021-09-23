#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main ()
{
	long int Praktikum, Teori, Final_Project, Rerata;
	
	cout<<"Menghitung Rata-Rata"<<endl;
	cout<<"\n" ;
	
	cout<<"Masukkan Nilai Praktikum= "; cin>> Praktikum;
	cout<<"Masukkan Nilai Teori= "; cin>> Teori;
	cout<<"Masukkan Nilai Tugas dan Final Project= "; cin>> Final_Project;
	
	Rerata=(Praktikum*0.4)+(Teori*0.4)+(Final_Project*0.2)/3;
	cout<< "\nNilai Rata-Rata= "<<Rerata<<endl;
	getch ();
}
