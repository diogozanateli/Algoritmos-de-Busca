#include <iostream>
using namespace std;
int main(){
	int num, maior=0, tam;
	cin >> num;
	string palavra[num];
	for (int i=0 ; i<num ; i++){
		cin >> palavra[i];
	}
	maior=palavra[0].size();
for (int i=0 ; i<num ; i++){
	tam=palavra[i].size();
	if(tam>maior){
		maior=tam;
	}
}
	for(int i=0 ; i<num ; i++){
	tam=maior-palavra[i].size();
		for(int i=0 ; i<tam ; i++){
		cout << "*";
}
cout << palavra[i] << endl;
}

		return 0;
}
