#include <iostream>
using namespace std;
int main(){
	int vetor[7]={12, 4, 6, 24, 2 ,8 ,9};
	int pos_menor, aux;
	int tam=7;
	for (int i=0; i<(tam-1) ; i++){
		pos_menor=i;
		for(int j=i+1 ; j<tam ; j++){
			if(vetor[j]<vetor[pos_menor]){
				pos_menor=j;
			}
		}
	aux=vetor[i];
	vetor[i]=vetor[pos_menor];
	vetor[pos_menor]=aux;
	}
	for(int i=0 ; i<tam ; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;	
	
	return 0;
}
