#include <iostream>
using namespace std;
int main(){
	int vetor1[7], mult=1, num=0;
	for (int i=0 ; i<7 ; i++){
		cin >> vetor1[i];
	}
while(num>=0){
	cin >> num;
	if(num>=0 and num<=6){
		mult*=vetor1[num];
	}
}	
cout << mult << endl;
	return 0;
}
