#include <stdio.h>

int main(){
  int i,N,j,x;
  int V[100000];
  scanf("%d",&x);
  scanf("%d",&N);

  for(i=0;i<N;i++){
      scanf("%d",&V[i]);
  }
  for(i=0;i<N;i++){
    if(V[i]==x){
      printf("x pertence ao vetor!");
      i=10000000;
    } 
  }
  if(i!=10000000){
    printf("x não pertence ao vetor!");
  }
    return 0;
}
