// nama : naufal ariful amri
// npm 	: 140810180009
// tgl 	: 5 maret 2019

#include <iostream>
using namespace std ;

void input (int (&arr)[100] , int& n) {
	
	cout << "input jumlah data : " ; cin >> n ;
	
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i] ;
	}
}

void movezerotoend (int arr[] , int n) {
	int temp ;
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++) {
				if (arr[j] < arr[j+1]) {
					temp = arr[j] ;
					arr[j] = arr[j+1] ;
					arr[j+1] = temp ;
				}
			}
		}
	}

 void output (int arr[] ,int n){
 	for (int i = 0 ; i < n ; i++){
 		cout << arr[i] << " " ;
	 }
 }

int main () {
	int arr[100] ;
	int n ;
	input (arr , n) ;
	movezerotoend (arr , n) ;
	output (arr,n) ;
	
}
