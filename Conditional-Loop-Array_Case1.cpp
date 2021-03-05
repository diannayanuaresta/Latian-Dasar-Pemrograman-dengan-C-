#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main (){
	int x, angka;
	int array[x] = {};
	cout << "Masukkan jumlah input yang diinginkan : ";
	cin >> x;
	int i =0;
	do{
		cout << "Masukkan angka yang diinginkan : ";
		cin >> angka;
		if(i<x){
		array[i] = angka;
		}; 
		i++;
	}while (i<x);
	for(int a = 1; a <= x; a++){
		if (array[a-1] == 0){
			cout << array[a-1] << " : Batang yang dibutuhkan berjumlah 6" << endl;
		} else if (array[a-1] ==1){
			cout << array[a-1] << " : Batang yang dibutuhkan berjumlah 2" << endl;
		} else if (array[a-1] ==2){
			cout << array[a-1] << " : Batang yang dibutuhkan berjumlah 5" << endl;
		} else if (array[a-1] ==3){
			cout << array[a-1] << " : Batang yang dibutuhkan berjumlah 5" << endl;
		} else if (array[a-1] ==4){
			cout << array[a-1] << " : Batang yang dibutuhkan berjumlah 4" << endl;
		} else if (array[a-1] ==5){
			cout << array[a-1] << " : Batang yang dibutuhkan berjumlah 5" << endl;
		} else if (array[a-1] ==6){
			cout << array[a-1] << " : Batang yang dibutuhkan berjumlah 6" << endl;
		} else if (array[a-1] ==7){
			cout << array[a-1] << " : Batang yang dibutuhkan berjumlah 3" << endl;
		} else if (array[a-1] ==8){
			cout << array[a-1] << " : Batang yang dibutuhkan berjumlah 7" << endl;
		} else if (array[a-1] ==9){
			cout << array[a-1] << " : Batang yang dibutuhkan berjumlah 6" << endl;
		};
	}
	
	

	return 0;
}
