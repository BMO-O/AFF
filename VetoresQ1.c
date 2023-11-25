#include <stdio.h>

int main(){
  int i,N,indmax;
  int V[100000];

  scanf("%d",&N);

  for(i=0;i<N;i++){
    scanf("%d",&V[i]);
  }
  indmax=0;
  for(i=1;i<=N;i++){
    if(V[i]>V[indmax]){
      indmax=i;
    }
  }
  printf("%d", indmax);


  

    return 0;
}