#include <iostream>
using namespace std;

int main(){
 string palavra;
 int tam , cont=0 , maior ;
 char maiorl;
 cin>>palavra;
 tam=palavra.size();	
	
	
	for(int i=1;i<tam;i++){
		palavra[i]==palavra[0];
		cont++;
		
	}
	maiorl=palavra[0];
	maior = cont;
	for(int i=1;i<tam;i++){
		for(int j=1;j<tam;j++){
		if(palavra[i]==palavra[j]){
			cont++;
		}	
		}
		if(cont>maior){
		maiorl=palavra[i];
		maior=cont;
		}
	}
	
	cout << maiorl << endl;
	
	
	return 0;
}
