#include <iostream>
using namespace std;
int main (){
	int N1;
	cin >> N1;
	int vetorA[N1];
	for (int i=0 ; i<N1 ; i++){
		cin >> vetorA[i];
	}
	int N2;
	cin >> N2;
	int vetorB[N2], int2=0, cont=0;
	for (int j=0 ; j<N2 ; j++){
		cin >> vetorB[j];
	}
	for (int i=0 ; i<N1 ; i++){
	for(int j=0 ; j<N2 ; j++){
			if(vetorB[j]==vetorA[i]){
				int2=vetorB[j];
				cout << int2 << " ";
				cont++;
			}
				
			}
}
if(cont==0){
	cout << "INTERSECAO VAZIA" << endl;
}
	return 0;
}
