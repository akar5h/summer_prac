#include <stdio.h>

int main(){
  int t,i,j,n,m;
  scanf("%d",&t);
  for(i=0;i<t;i++){
      scanf("%d",&m);
      scanf("%d",&n);
      int A[n];
      for(j=0;j<n;j++){
        scanf("%d",&A[j]);
    }
      int temp=0,temp2=temp+1;
      while(temp<n){
          while(temp2<n){
            if( (A[temp]+A[temp2]) == m){
              printf("%d",temp+1);
              printf(" ");
              printf("%d",temp2+1);
              break;
}
           else
             temp2++;
          }
      temp++;
      temp2=temp+1;
    }
    printf("\n" );
  }
    }
