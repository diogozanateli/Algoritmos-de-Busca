#include <iostream>
using namespace std;
int main(){
	string palavra;
	int tam;
	cin >> palavra;
	tam=palavra.size();
	int cont=0;
	for (int i=0 ; i<tam ; i++){
		if ((palavra[i]=='a') or (palavra[i]=='e') or (palavra[i]=='i') or (palavra[i]=='o') or (palavra[i]=='u')){
			cont++;
		}
	}
	cout << cont << endl;
		return 0;
}
