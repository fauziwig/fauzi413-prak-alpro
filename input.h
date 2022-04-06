#include<iostream>
using namespace std;

class Input {
	public :
		void cetak(){
			cout << "Aplikasi Penjualan Ayam \n";
			cout << "Menu yang tersedia : \n";
			cout << "1) Ayam Geprek  	Rp. 17000 \n";
			cout << "2) Ayam Goreng   	Rp. 21000 \n";
			cout << "3) Udang Goreng	  Rp. 19000\n";
			cout << "4) Cumi Goreng 	  Rp. 20000\n";
			cout << "5) Ayam Bakar		Rp. 25000\n\n";
      cout << "===============================\n";
			cout << "Pesan Ayam Geprek  	-> "; cin >> bnyk_aymGpr;
			cout << "Pesan Ayam Goreng  	-> "; cin >> bnyk_aymGr;
			cout << "Pesan Udang Goreng  -> "; cin >> bnyk_udgGr;
			cout << "Pesan Cumi Goreng  	-> "; cin >> bnyk_cmiGr;
			cout << "Pesan Ayam Bakar    -> "; cin >> bnyk_aymBk;
      cout << "===============================\n";
      cout << "Masukkan Jarak Rumah : "; cin >> jrkRumah;
		}

		void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << bnyk_aymGpr <<endl;
			tulis_data << bnyk_aymGr <<endl;
			tulis_data << bnyk_udgGr <<endl;
			tulis_data << bnyk_cmiGr <<endl;
			tulis_data << bnyk_aymBk;
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int bnyk_aymGr, bnyk_aymBk, bnyk_cmiGr, bnyk_udgGr, bnyk_aymGpr;
};