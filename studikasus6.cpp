#include<iostream>
using namespace std;

class Input{
    public:
        cetak(){
            cout<<"Masukkan Nama Dosen : ";
            getline(cin, namaDosen);
            cout<<"Masukkan Nama Mata Kuliah : ";
            getline(cin, mataKuliah);
            cout<<"Masukkan banyak nilai yang ingin diinput : ";
            cin>>banyakNilai;
            for(int i=0; i<banyakNilai; i++){
                cout<<"Masukkan Nilai ke-"<<i+1<<" : ";
                cin>>nilai[i];
            }
        };
        proses(){
        	//nilai maksimum
        	maksimum = nilai[0];
        	
        	for (int i=0; i<banyakNilai; i++){
        		if(nilai[i] > maksimum ){
        			maksimum = nilai[i];
				}
			}
			
			
			//nilai minimum
			minimum = nilai[0];
			for(int i=0; i<banyakNilai; i++){
				if(nilai[i] < minimum ){
					minimum = nilai[i];
					
				}
			}
			
			
			//nilai rata2
			jumlah = 0;
			for(int i=0; i<banyakNilai; i++){
				jumlah = jumlah + nilai[i];
			}
			rata2 = jumlah / banyakNilai;
			
			
		}
		output(){
			cout<<namaDosen<<endl;
			cout<<"mengampu   : "<<mataKuliah<<endl;
			cout<<"jumlah nilai "<<banyakNilai<<endl;
			cout<<"daftar nilai"<<endl;
			for(int i=0; i<banyakNilai; i++){
		        cout<<"nilai ke-"<<i+1<<" : ";
		        cout<<nilai[i]<<endl;
		    }
		    cout<<"nilai terkecil  : "<<minimum<<endl;
		    cout<<"nilai terbesar  : "<<maksimum<<endl;
		    cout<<"rata-rata       : "<<rata2<<endl;
		}
    private:
        string namaDosen,mataKuliah;
        int banyakNilai;
        int nilai[99];
        int maksimum;
        int minimum;
        int jumlah;
        int rata2;
};

int main(){
	Input X;
	X.cetak();
	X.proses();
	X.output();
}
