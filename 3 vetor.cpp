#include <iostream>
using namespace std;
int main (){
	int vetor[7], vetor2[7], vetor3[7], vetor23[7], cont2=0, cont3=0, cont23=0;
	
	for(int i=0 ; i<7 ; i++){
		vetor2[i]=0;
		vetor3[i]=0;
		vetor23[i]=0;
	}
	
	for(int i=0 ; i<7 ; i++ ){
		cin >> vetor[i];
	}
	for (int i=0 ; i<7 ; i++){
		if((vetor[i]%2)==0){
			vetor2[cont2]=vetor[i];
		cont2++;
	}
		if((vetor[i]%3)==0){
			vetor3[cont3]=vetor[i];
			cont3++;
		}
	
		if((((vetor[i]%2)==0) and (vetor[i]%3)==0)){
			vetor23[cont23]=vetor[i];
			cont23++;
		}
		}
	if (cont2!=0){
		for(int i=0 ; i<cont2 ; i++){
		cout << vetor2[i] << " ";
		}
	}
		else{
			cout << "0" << endl;
		}
	cout << endl;
	if (cont3!=0){
		for(int i=0 ; i<cont3 ; i++){
		cout << vetor3[i] << " ";
	}
	}
		else{
			cout << "0" << endl;
		}
	cout << endl;
	if (cont23!=0){
	for(int i=0 ; i<cont23 ; i++){
		cout << vetor23[i] << " ";
	}
	}
		else{
			cout << "0" << endl;
		}
	cout << endl;
	return 0;
}
