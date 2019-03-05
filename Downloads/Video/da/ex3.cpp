// nama : naufal ariful amri
// npm 	: 140810180009
// tgl 	: 5 maret 2019

#include <iostream>
#include <string.h>
using namespace std ;

struct man{
	int gol ;
	string nama ;
	int nip ; 
	int gaji ;
};

man Larik[10] ;

void inputPegawai(int& n)
{
	
	cout << "WELCOME\n" ;
	cout << "input jumlah pegawai : " ; cin >> n ; 
	for (int i = 0 ; i < n ; i++) {
		cin.ignore() ;
		cout << "NAMA		: " ; getline(cin , Larik[i].nama) ;
		cout << "NIP 		: " ; cin >> Larik[i].nip ;
		cout << "Golongan	: " ; cin >> Larik[i].gol ;
	}
	cout << endl ;
}
void cetakDaftar (){
	cout << "========================" << endl ;
	cout << "Daftar golongan " << endl ;
	cout << "Golongan 1	: 2.000.000 " << endl ;
	cout << "Golongan 2	: 3.000.000 " << endl ;
	cout << "Golongan 3	: 5.000.000 " << endl ;
	cout << "Golongan 4	: 8.000.000 " << endl ;
}

void cariGaji(int n) {
	for (int i = 0 ; i < n ; i++ )
	{
		switch (Larik[i].gol)
		{
			case 1 :
				Larik[i].gaji = 2000000 ;
				break ;
			case 2 :
				Larik[i].gaji = 3000000 ;
				break ;
			case 3 :
				Larik[i].gaji = 5000000 ;
				break ;
			case 4 :
				Larik[i].gaji = 8000000 ;
				break ;
			default :
				Larik[i].gaji = 0 ;
																
		}
	}
}

void sorting(int n )
{
	int temp ;
	string temp1 ;
	char temp2 ;
	int temp3 ;
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = i ; j < n ; j++)
		{
			if (Larik[i].nip > Larik[j].nip) 
			{
				// switch NIP				
				temp2 = Larik[i].nip ;
				Larik[i].nip = Larik[j].nip ;
				Larik[j].nip = temp2 ;
			
				// switch golongan
				temp = Larik[i].gol ;
				Larik[i].gol = Larik[j].gol ;
				Larik[j].gol = temp ;
				
				// switch nama
				temp1 = Larik[i].nama ;
				Larik[i].nama = Larik[j].nama ;
				Larik[j].nama = temp1 ;
			
				// switch Gaji				
				temp3 = Larik[i].gaji ;
				Larik[i].gaji = Larik[j].gaji ;
				Larik[j].gaji = temp3 ;
	
			}
		}
	}
}

void rataGaji (int n , int rata){
	rata = 0 ;
	for (int i = 0 ; i < n ; i++ ){
		rata += Larik[i].gaji ;
	}
	rata /= n ;
	cout << "Rata gaji 	: " << rata << endl; 
}

void sor (int n) {
	for (int i = 0 ; i < n ; i++) {
		for (int j = i ; j < n ; j++) {
			if (Larik[i].gaji > Larik[j+1].gaji) {
				swap (Larik[i].gaji , Larik[j+1].gaji) ;
			}
		}
	}
}

void hasilSorting (int n)
{
	cout << "   NAMA		     NIP		   Golongan		Gaji " << endl ;
	for (int i = 0 ; i < n ; i++)
	{
		cout << Larik[i].nip << "		" << Larik[i].nama << "			" << Larik[i].gol << "	  " << Larik[i].gaji << endl; 	
	}
}	

void max (int& n ){
	cout << "Gaji Tertinggi	: " << Larik[0].gaji << endl  ;	
}
void min (int& n) {
	cout << "Gaji Tertinggi	: " << Larik[n].gaji  << endl ;	
}


int main (){
	int n ;
	int rata ;
	cetakDaftar () ;
	inputPegawai(n) ;	
	cariGaji(n) ;
	sorting(n) ;
	hasilSorting (n) ;
	sor ( n) ;
	rataGaji (n , rata) ;
	max (n) ;
	min (n) ;



}

