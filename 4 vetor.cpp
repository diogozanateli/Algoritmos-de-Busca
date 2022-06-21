#include <iostream>
using namespace std;

int main(){
	int vetorA[5], vetorB[5], soma=0, valor=0, valor1=0;
for (int i=0 ; i<5 ; i++){
	cin >> vetorA[i];
}
for (int i=4 ; i>=0 ; i--){
	cin >> vetorB[i];
}
for (int i=0 ; i<5 ; i++){
	valor=vetorA[i];
	valor1= vetorB[i];
	soma+=(valor-valor1);
}
cout << soma << endl;
	
return 0;
}
