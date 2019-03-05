// nama : naufal ariful amri
// npm 	: 140810180009
// tgl 	: 5 maret 2019

#include <iostream>
#include <string.h>
using namespace std ;

struct man{
	int umur ;
	char nama[30] ;
	char jk ;
	char goldar ;
};

man Man ;

int main () {
	Man.umur = 32 ;
	strcpy (Man.nama , "Naufal") ;
	Man.jk = 'L' ;
	Man.goldar = 'O' ;
	
	cout << Man.nama << endl ;
	cout << Man.umur << endl ;
	cout << Man.jk << endl ;
	cout << Man.goldar << endl ;
}
