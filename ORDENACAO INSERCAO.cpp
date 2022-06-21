#include <iostream>
using namespace std;
int main(){
	int vetor[6]={4, 10 , 2, 7 ,5 ,9};
	int pivo, j;
	int tam=6;
	for (int i=1 ; i<tam ; i++){
		pivo=vetor[i];
		j=i-1;
		while ((j>=0) and (pivo<vetor[j])){
		vetor[j+1]=vetor[j];
		j--;
		}
		vetor[j+1]=pivo;
	}
	for (int i=0 ; i<tam ; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
	
	return 0;
}
