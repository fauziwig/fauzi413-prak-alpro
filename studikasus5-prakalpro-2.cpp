#include <iostream>
using namespace std;


class kasus{
	public :
		int i=1;
		string mk[100];
		string nama,nim;
		double sks1, sks2, sks3, jumlah,jum_sks,jum_dis,n;
		int s[100];
		
		void ulang(int);
		int bayar(int );
		void keluar();
		void input ();		
};

void kasus::input(){
	cout<<"nama : "; cin>>nama;
	cout<<"nim  : "; cin>>nim;
	cout<<"masukkan berapa kali :"; cin>>n;
}

void kasus::ulang(int n){
	if(i<=n){
		cout<<"matkul :"; cin>>mk[i];
		cout<<"sks : "; cin>>s[i];
		jumlah += s[i] * 120000;
		jum_dis = jumlah - (jumlah * 0.15);
		jum_sks += s[i];
		i++;
		ulang(n);
	}
}

void kasus::keluar(){
	cout<<"==============================="<<endl;
	cout<<"Nama :"<<nama<<endl;
	cout<<"Nim : "<<nim<<endl;

	cout<<"No		Matkul		SKS :"<<endl;
	for(int i=0; i<n; i++){
		cout<<i+1<<"  \t\t"<<mk[i]<<"  \t\t"<<s[i]<<endl;
	}
	cout<<"Total SKS : "<<jum_sks<<endl;
	cout<<"Total Bayar : "<<jumlah<<endl;
	
	cout<<"Total Bayar setelah diskon : "<<jum_dis<<endl;
}

int main(){
	kasus X;
	
	X.input();
	X.ulang(X.n);
	X.keluar();
	
	
	
	/*cout<<"daftar matkul dan jumlah sksnya : "<<endl; 
	cout<<"1. alpro "; cin>>sks1; 
	cout<<"2. matdis "; cin>>sks2; 
	cout<<"3. pweb "; cin>>sks3; 

	jumlah = sks1 + sks2 + sks3;
	cout<<"jumlah sks : "<<jumlah<<endl<<endl;
	cout<<bayar(jumlah);*/
}
