#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;

int main (){
	int saldo, tanggal, pulsa, output;

	string cek;
	
	//masukan saldo atm
	cout << " Masukan saldo awal Anda : ";
	cin >> saldo;
	//tampilkan pesan minta pulsa
	cout << " Mama minta Pulsanya dong kasih aja 50.000 \n";
	cout << " Apakah anda ingin melakukan cek kebenaran,\n jawab ya / tidak :";
	cin >> cek;
	
	transform(cek.begin(), cek.end(), cek.begin(), ::tolower);
	
	
	//kondisi untuk melakukan cek tanggal lahir
	if (cek == "ya"){
		cout << " Masukan tanggal lahir mama : ";
		cin >> tanggal;
		//conditional benar atau salah (12 == true)
		if ( tanggal == 12){
			cout << " Data yang diberikan sesuai \n ";
		} else {
			cout << " Jawaban yang diberikan tidak memenuhi ";
			exit (EXIT_FAILURE);
		}
	} else if (cek =="tidak"){
		cout << " Pesan diabaikan \n";
		exit (EXIT_FAILURE);
	}else {
		cout << " Permintaan tidak sesuai ";
		exit (EXIT_FAILURE);
	};
	
	//input jumlah yang akan dikirim
	cout << "Masukan jumlah pulsa yang akan dikirimkan : ";
	cin >> pulsa;
	if (pulsa < 50000){
		cout << "Kurang dong pulsanya beb ! \n";
		exit (EXIT_FAILURE);
	}else{
		cout << " Makasih sayang !";
	};
	
	//kondisi jika saldo cukup -> transaksi dilakukan, jika salah-> transaksi gagal
	if (saldo-pulsa > 0){
		cout << " Sisa saldo yang ada :" << saldo-pulsa <<endl;
		cout << " Transaksi akan segera dilakukan \n";
	} 
	// proses random (<0,5 = berhasil, >0,5 = gagal )
	output = (rand()%10)+1;
	if(output < 8){
		cout << "Mohon Tunggu.. \n";
		if (output < 5){
			cout << "Mohon Tunggu.. \n";
			if (output < 1)	{
				cout << "Mohon Tunggu.. \n";
				cout << "ATM Error, Coba lagi Bsok \n";
			} else {
				cout << "Transfer Berhasil ! \n";
				cout << "Pulsa telah terkirim ";
			}
		}else{
			cout << "Transfer Berhasil ! \n";
			cout << "Pulsa telah terkirim ";
		}
	} else {
		cout << " Transfer Berhasil ! \n";
		cout << "Pulsa telah terkirim ";
		abort ();
			}
	// tampilkan hasil
	
	return 0;
}
