//	Nama	: Naufal Ariful Amri
//	NPM		: 140810180009
//	Kelas	: A
//	Date	: 12 Maret 2019
//	Desc	: 


#include <iostream>
using namespace std ;

struct data {
	char NPM[14] ;
	char nama[40] ;
	float IPK ;
};

typedef data mahasiswa[30] ;

void banyakData (int& n) {
	cout << "input jumlah data : " ; cin >> n ;
}

void inputMHS (mahasiswa& mhs , int n) {
	for (int i = 0 ; i < n ; i++ ){
		cout << "nama	: " ; cin >> mhs[i].nama ;
		cout << "npm	: " ; cin >> mhs[i].NPM ;
		cout << "IPK	: " ; cin >> mhs[i].IPK ;
	}
}

void output (mahasiswa& mhs , int n){
	for (int i = 0 ; i < n ; i++) {
		cout << mhs[i].NPM << "	" << mhs[i].nama << "		" << mhs[i].IPK << endl; 
	}
}

void sorting (mahasiswa& mhs , int n) {
	int temp ;
	char temp1;
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j ++ ) {
			if (mhs[j].NPM > mhs[j+1].NPM){
				swap (mhs[j].NPM , mhs[j].NPM) ;
				swap (mhs[j].nama , mhs[j].nama) ;
				swap (mhs[j].IPK , mhs[j].IPK) ;
				
				
			}
		}
	}
}

int main () {
	int n ;
	mahasiswa mhs ;
	banyakData(n) ;
	inputMHS (mhs , n) ;
	sorting (mhs, n) ;
	output (mhs , n) ;
}

