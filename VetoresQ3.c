#include <stdio.h>

int main(){
  int i,N,j,indM;
  int V[100000];
  int aux;

  scanf("%d",&N);

  for(i=0;i<N;i++){
      scanf("%d",&V[i]);
  }
  printf("\n");
  
  for(i=0;i<N;i++){
      printf("%d\n",V[i]);
  }
  
  for(i=0;i<N-1;i++){
    indM=i;
    for(j=i+1;j<N;j++){
      if(V[j]<V[indM]){
        indM=j;
      }
    }
    aux=V[indM];
    V[indM]=V[i];
    V[i]=aux;
  }
  printf("Seu vetor ordenado eh: \n");
  for(i=0;i<N;i++){
  printf("%d ", V[i]);
  }
  
    return 0;
}