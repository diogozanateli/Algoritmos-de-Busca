#include <iostream>
using namespace std;
int main(){
	int vetor[8];
	int num;
	int vetorP[8];
	int vetorN[8];
	int pos=0, neg=0;
for (int i=0 ; i<8 ; i++){
	cin >> num;
	vetor[i]=num;
}
for (int i=0 ; i<8 ; i++){
	if(vetor[i]<0){
		vetorN[neg]=vetor[i];
		neg++;
	}
	else {
		vetorP[pos]=vetor[i];
		pos++;
	}
}
	for (int i=0 ; i<pos ; i++){
	cout << vetorP[i] << " ";
}
	cout << endl;	
for (int i=0 ; i<neg ; i++){
	cout << vetorN[i] << " ";
}
	cout << endl;

	return 0;
}
