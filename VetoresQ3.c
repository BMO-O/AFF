#include <stdio.h>

int main(){
  int i,N,j,indM,mediana;
  int V[100000];
  int aux;
  scanf("%d",&N);
  
  mediana = N/2;

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
  printf("\n");
  
  if(N%2==0){
    mediana = (V[mediana] + V[mediana -1])/2 ;
    printf("%d\n",mediana);
  }else{
    mediana = V[mediana];
    printf("%d\n",mediana);
  }
  
    return 0;
}
