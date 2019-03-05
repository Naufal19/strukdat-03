// nama : naufal ariful amri
// npm 	: 140810180009
// tgl 	: 5 maret 2019

#include <iostream>
#include <string.h>
using namespace std ;

struct theater{
	int room ;
	char seat[3] ;
	char movieTitle[30] ;
};

theater Theater ;

int main () {
	cout << "WELCOME\n" ;
	Theater.room = 7 ;
	strcpy (Theater.seat, "J7" ) ;
	strcpy (Theater.movieTitle, "Adit dan Jarwo" ) ;	
	cout << "room	: " << Theater.room << endl;
	cout << "seat	: " << Theater.seat << endl;
	cout << "movie	: " << Theater.movieTitle <<endl;
}

