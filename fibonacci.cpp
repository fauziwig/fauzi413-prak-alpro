#include <iostream>
using namespace std;

class bilangan{
	public:
		long fibonaci(int n);
		long fibonaci2(int n);
	private:
		int n;
		int a,b,lanjut;
};

//iteratif
long bilangan::fibonaci(int n){

	a = 1;
	b = 1;
	cout<<a<<" "<<b;
    
    for(int i=1; i<=n-2; i++){
    	lanjut = a + b;
    	cout<<" "<<lanjut;
    	
    	a = b;
    	b = lanjut;
	}
}

//rekursif
long bilangan::fibonaci2(int r){
	if(r==0 || r==1){
		return (1);
	}else {
		return (fibonaci2(r-1) + fibonaci2(r-2));
	}
}

main(){
	int n,r=0;
	cout<<"masukkan batas deret :";
	cin>>n;
	
	bilangan run;
	cout<<run.fibonaci(n);//iteratif
	cout<<endl;
	for(int i=1; i<=n; i++){//rekursif
		cout<<run.fibonaci2(r)<<" ";	
		r++;
	}
}
