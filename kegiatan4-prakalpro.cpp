#include <iostream>
using namespace std;

class Operator{
	public:
		long faktorial();
		long faktorial(int n);
		
	private:
		int n;
		long hasil;
		
};

//iteratif/perulangan
long Operator::faktorial(){
	long fak=1;
	for(int i=1; i<=n; i++){
		fak = fak * 1;
	return fak;
	}
}

//rekursif
long Operator::faktorial(int n){
	if(n==0 || n==1){
		return (1);
	}
	else {
		return (n*faktorial(n-1));
	}
			
}

int main(){
	int angka;
	cin>>angka;
	Operator jalan;
	cout<<jalan.faktorial(angka)<<endl;//pemanggilan fungsi dengan parameter
	cout<<jalan.faktorial()<<endl;//pemanggilan fungsi tanpa parameter
}
