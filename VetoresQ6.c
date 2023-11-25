#include <stdio.h>

int main(){
  int i,N,alvo,menor,maior,meio,aux=0;
  int V[100000];

  scanf("%d",&alvo);
  scanf("%d",&N);

  for(i=0;i<N;i++){
      scanf("%d",&V[i]);
  }
  menor=0;
  maior=N;
 
  while(menor<=maior){
    meio= (menor+maior)/2;
    if(V[meio]==alvo){
      printf("x pertence ao vetor");
      menor=maior+1;
      aux=1;
    }else if(V[meio]<alvo){
      menor=meio+1;
    }else maior = meio-1;
  }
  if(aux==0){
    printf("x não pertence ao vetor");
  }
    return 0;
}