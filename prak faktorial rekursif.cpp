//faktorial rekursif
#include <iostream>
using namespace std;

int faktorial (int n){
	if((n==0)||(n==1)){
		return 1;
	}
	else{
		 return n * faktorial(n - 1);
}
}

int main(){
    int n;
	int hasil;

    cout<<"Masukkan angka: ";
    cin>>n;
    if(n<0){
    	cout<<"faktorial tidak didefinisikan untuk bilangan negatif"<<endl;
	}
	else{
		for (int i=1;i<=n;++i){
			hasil*=i;
		}
		cout<<"Faktor dari"<<n<<"Adalah"<<hasil<<endl;
	}
	
   
}

	

