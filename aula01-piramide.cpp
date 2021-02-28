#include <iostream>
using namespace std;
main(){
	int n,i,ii;
	cout << "Digite um valor inteiro: ";
	cin >> n;
	for(i=0;i<n;i++){
		for(ii=0;ii<=i;ii++){
			cout << "*";	
		}
		cout << "\n";
	}
	for(i=0;i<n-1;i++){
		for(ii=n-1;ii>i;ii--){
			cout << "*";
		}
		cout << "\n";
	}
}