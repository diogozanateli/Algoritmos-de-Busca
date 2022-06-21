#include <iostream>
using namespace std;
int main (){
	string mes[12]={"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
	int menorP, maiorP;
	float vet[12], menor, maior;
	cin >> vet[0];
	menor=vet[0];
	maior=vet[0];	
	for (int i=1 ; i<12 ; i++){
		cin >> vet[i];
	if(maior<vet[i]){
		maior=vet[i];
		maiorP=i;
			}
	else if(menor>vet[i]){
		menor=vet[i];
		menorP=i;
			}
		}
   cout << mes[maiorP] << endl;
    cout << mes[menorP] << endl;
	return 0;
}
