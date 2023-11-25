#include <stdio.h>

int main(){
  int i,N;
  int V[100000];
  float S;

  scanf("%d",&N);

  for(i=0;i<N;i++){
    scanf("%d",&V[i]);
  }
  for(i=0;i<N;i++){
    S+= V[i];
  }
   S=S/N;
  printf("%.2f", S);

    return 0;
}