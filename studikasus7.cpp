//2100018388 Daffa Nauval Hadi Pratama
//2100018368 Muhamad Nur Hafizul
//2100018413 Fauzi Triagung Wiguna
#include<iostream>
#include<conio.h>
using namespace std;
class nyet{
	public:
		input();
		proses();
		output();
	private:
		int n;
		bool ketemu;
		int tmpId, tmpStock, cariId;
		string tmpNama;
		int idBarang[10], stokBarang[10];
		string namaBarang[10];	
};
nyet::input(){
	cout<<"+=====================+"<<endl;
	cout<<"|   PROGRAM SORTING   |"<<endl;
	cout<<"+=====================+"<<endl;
	cout<<" Masukan banyak data = ";
	cin>>n;
	system("cls");
	cout<<"+=====================+"<<endl;
	cout<<"|    INPUT  BARANG    |"<<endl;
	cout<<"+=====================+"<<endl;
	for(int i=1; i<=n; i++){
		cout<<"Masukkan ID Barang ke-"<<i<<" : ";
		cin>>idBarang[i];
		cout<<"Masukkan Nama Barang ke-"<<i<<" : ";
		cin>>namaBarang[i];
		cout<<"Masukkan Stok Barang ke-"<<i<<" : ";
		cin>>stokBarang[i];
	}
}
nyet::proses(){
	system("cls");
	cout<<"+===============================================+"<<endl;
	cout<<"|                   DATA BARANG                 |"<<endl;
	cout<<"+===============================================+"<<endl;
    cout<<"|   ID Barang  |  Nama Barang  |  Stock Barang  |"<<endl;
    cout<<"+===============================================+"<<endl;
	for(int i=1; i<=n; i++){
		cout<<"\t"<<idBarang[i]<<"\t        "<<namaBarang[i]<<"\t        "<<stokBarang[i]<<endl;
	}
	cout<<"+===============================================+"<<endl;
	cout<<"|              DESCENDING   SORT                |"<<endl;
	cout<<"+===============================================+"<<endl;
    cout<<"|   ID Barang  |  Nama Barang  |  Stock Barang  |"<<endl;
    cout<<"+===============================================+"<<endl;
	for(int i=1; i<=n; i++){
       for(int j=i; j<=n; j++){
            if(idBarang[i] < idBarang[j]){
                    tmpId = idBarang[j];
                    idBarang[j] = idBarang[i];
                    idBarang[i] = tmpId;
            }
            if(namaBarang[i] < namaBarang[j]){
            	tmpNama = namaBarang[j];
            	namaBarang[j] = namaBarang[i];
            	namaBarang[i] = tmpNama;
			}
			if(stokBarang[i] < stokBarang[j]){
				tmpStock = stokBarang[j];
            	stokBarang[j] = stokBarang[i];
            	stokBarang[i] = tmpStock; 
			}   
       }
       cout<<"\t"<<idBarang[i]<<"\t        "<<namaBarang[i]<<"\t        "<<stokBarang[i]<<endl;
	}
}
nyet::output(){
	
	
	cout<<endl<<endl<<" Press any key to continue..."<<endl;
	getch();
	cout<<"Masukkan ID Barang yang ingin dicari : ";
	cin>>cariId;
	for(int i=1;i<=n;i++){
	  if (idBarang[i]==cariId){
		ketemu = true;
		cout<<"\n\nDATA DITEMUKAN !!!"<<endl<<endl;
		cout<<"|   ID Barang  |  Nama Barang  |  Stock Barang  |"<<endl;
		cout<<"\t"<<idBarang[i]<<"\t        "<<namaBarang[i]<<"\t        "<<stokBarang[i]<<endl;
	  }
	}
  	if(ketemu==false){
  	cout<<"Data tidak ditemukan";
  	}
}
int main(){
	nyet aw;
	aw.input();
	aw.proses();
	aw.output();
}
