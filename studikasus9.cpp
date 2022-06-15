//Daffa Nauval Hadi Pratama (2100018388)
//Muhammad Nur Hafizhul (2100018379)
//Fauzi Triagung Wiguna (2100018413)
#include<iostream>
#include<conio.h>
using namespace std;
class convertMatrix{
	public:
		void menu();
		void inputData();
		void viewData();
		void sortData();
		void convertData();
		void exitProgram();
	private:
		int buku[30];
		int rak, bk, pass, temp, pil;
		int data[25];
		int output[40][40];
		int d=0;
};
void convertMatrix::menu(){
	cout<<"Menu : "<<endl;
	cout<<"1. Input Data"<<endl;
	cout<<"2. Lihat Data"<<endl;
	cout<<"3. Sorting Data"<<endl;
	cout<<"4. Convert 1D Matrix to 2D Matrix"<<endl;
	cout<<"5. Exit Program"<<endl;
	cout<<"Masukkan Menu : ";
	cin>>pil;
	if(pil==1){
		inputData();
	}
	else if(pil==2){
		viewData();
	}
	else if(pil==3){
		sortData();
	}
	else if(pil==4){
		convertData();
	}
	else if(pil==5){
		exitProgram();
	}
	else{
		cout<<"Menu doesn't available..."<<endl;
		cout<<"Press any key to continue..."<<endl;
		system("cls");
		menu();
	}
}
void convertMatrix::inputData(){
	for(int i=0;i<24; i++){
		cout<<"Masukkan Data Buku ke-"<<i<<" : ";
		cin>>data[i];
	}
	getch();
	system("cls");
	menu();
}
void convertMatrix::viewData(){
	for(int i=0; i<24; i++){
			cout<<data[i]<<" ";
	}
	getch();
	system("cls");
	menu();
}
void convertMatrix::sortData(){
	for(int i = 0; i<24; i++) {
   		for(int j = i+1; j<24; j++){
      		if(data[j] < data[i]) {
         		temp = data[i];
         		data[i] = data[j];
         		data[j] = temp;
      		}
  		}
	}
	cout<<"Sorting Done...";
	getch();
	system("cls");
	menu();
}
void convertMatrix::convertData(){
		for(int i=0; i<24; i++){
			cout<<data[i]<<" ";
	}
	
	cout<<endl<<endl;
	
	cout<<"Masukkan banyaknya rak : ";
	cin>>rak;
	cout<<"Masukkan banyaknya buku dalam 1 rak : ";
	cin>>bk;
	
	//proses konversi ke 2d
	for(int k=0; k<rak; k++){
		for(int l=0; l<bk; l++){
			output[k][l]=data[d];
			d++;
		}
	}
	
	//output hasil konversi ke 2d
	for(int k=0; k<rak; k++){
		for(int l=0; l<bk; l++){
			cout<<output[k][l]<<" ";
		}
		cout<<endl;
	}
	cout<<"DONE";
	getch();
	system("cls");
}
void convertMatrix::exitProgram(){
	system("cls");
	cout<<"Program selesai maszeh...";
	getch();
}
int main(){
	convertMatrix cvMtrx;
	cvMtrx.menu();
}
