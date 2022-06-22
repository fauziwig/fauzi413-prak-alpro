#include<iostream>
#include<conio.h>
using namespace std;
class pointerStudi{
	public:
		void pointerStd();
		void input();
		void proses();
		void output();
	private:
		int *nim;
		int nimMhs[99];
		string *nama;
		string namaMhs[99];
		int menu;		
};
void pointerStudi::pointerStd(){
	system("cls");
	cout<<"+==================================+"<<endl;
	cout<<"|\t   INPUT MAHASISWA\t   |"<<endl;
	cout<<"+==================================+"<<endl;
	cout<<"|1. INPUT                          |"<<endl;
	cout<<"|2. PROSES                         |"<<endl;
	cout<<"|3. OUTPUT                         |"<<endl;
	cout<<"+==================================+"<<endl;
	cout<<"Masukkan Pilihan : ";
	cin>>menu;
	if(menu==1){
		input();
		pointerStd();
	}
	else if(menu==2){
		proses();
		pointerStd();
	}
	else if(menu==3){
		output();
	}
	else{
		cout<<"Menu Not Available...";
		pointerStd();
	}
}
void pointerStudi::input(){
	
	for (int i=0; i<5; i++){
      		cout << "Masukkan NAMA Mahasiswa ke-"<<i+1<<" : ";
      		cin >> namaMhs[i];
	}
	cout<<endl<<endl;
	for (int i=0; i<5; i++){
      		cout << "Masukkan NIM Mahasiswa ke-"<<i+1<<" : ";
      		cin >> nimMhs[i];
	}
}
void pointerStudi::proses(){
	nim = new int[5];
    nama = new string[5];
    for(int i=0; i<5; i++){
      	*nim = nimMhs[i];
      	nim += 1;
      	*nama = namaMhs[i];
      	nama+=1;
    }
}
void pointerStudi::output(){
	system("cls");
	nim -=5 ;
    nama -= 5;
    cout<<"+==================================+"<<endl;
	cout<<"|\t   OUTPUT MAHASISWA\t  |"<<endl;
	cout<<"+==================================+"<<endl;
	for(int i=0; i<5; i++) {
      	cout << "\nNAMA MAHASISWA " << i+1 << "\t : ";
      	cout << *nama ;
      	nama += 1;
      	cout << "\nNIM MAHASISWA "<< i+1 <<"\t\t : " ;
      	cout << *nim ;
      	nim  += 1;
    }
}
main(){
	pointerStudi kiw;
	kiw.pointerStd();
}
