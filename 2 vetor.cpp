#include <iostream>
using namespace std;

int main(){
float vetor[10];
int neg=0;
float soma=0;
for (int i=0; i<10 ; i++){
	cin >> vetor[i];
}
for(int i=0; i<10 ; i++){
if (vetor[i]<0){
	neg++;
}
else{
	soma+=	vetor[i];
}  
}
cout << neg << endl;
cout << soma << endl;
	return 0;
}
