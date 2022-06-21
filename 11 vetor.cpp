#include <iostream>
using namespace std;
int main(){
	int N, pos1=0, pos2=0, pos3=0;
	cin >> N;
	float vetor[N];
	float maior, menor, central;
	for(int i=0 ; i<N ; i++){
		cin >> vetor[i];
	}
	maior=vetor[0];
	menor= vetor[0];
	central=vetor[0];
	for (int i=1 ; i<N ; i++){
		if(vetor[i]>maior){
			maior=vetor[i];
			pos1=i;
		}
		if(vetor[i]<menor){
			menor=vetor[i];
			pos2=i;
		}
		}
		if((N%2)==0){
			central=(-1);
		    pos3=(-1);
		}
			else{
			central=vetor[(N/2)];
			pos3=(N/2);
		}
	cout << maior << endl << menor << endl << central << endl << pos1 << endl << pos2 << endl << pos3 << endl;

	return 0;
}
