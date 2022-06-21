#include <iostream>
using namespace std;
int main(){
	int vetorA[10], vetorB[5], soma=0;
	for(int i=0 ; i<=9 ; i++){
		cin >> vetorA[i];
	}
	for (int i=0 ; i<=4 ; i++){
		cin >> vetorB[i];
	}
	for (int i=0 ; i<10 ; i++ ){
		if((vetorA[i]%vetorB[0]==0)){
			soma++;
		}
		if((vetorA[i]%vetorB[1])==0){
			soma++;
		}
		if((vetorA[i]%vetorB[2])==0){
			soma++;
		}
		if((vetorA[i]%vetorB[3])==0){
			soma++;
		}
		if((vetorA[i]%vetorB[4])==0){
			soma++;
		}
		cout << vetorA[i] << " " << soma << endl;
		soma=0;
	}
	return 0;
}
