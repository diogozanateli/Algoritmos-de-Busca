#include <iostream>
using namespace std;

int main(){
int vetor[10];
int K , N , P , l=1 , F=2 ;

for (int i = 0; i < 10; i++)
{
	vetor[i]=0;
}
cin>>K;
for (int i = 0; i < K; i++)
{
cin>>vetor[i];
}
cin>>N;
cin>>P;
for (int i = P; i < 10; i++)
{
vetor[10-l]=vetor[10-F];
l++;
F++;	
}
vetor[P]=N;
for (int i = 0; i < 10; i++)
{
cout<<vetor[i]<<" ";	
}
	return 0;
}
