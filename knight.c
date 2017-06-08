#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int i,j;
    long int n;
    scanf("%ld",&n);
    long long int A[n],p,min;
    for(i=0;i<n;i++){
      scanf("%lld",&A[i]);
    }
    min=10000000000000000;
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        p= (A[j]-A[i]);
        if(p< 0){
          if(abs(p)< min)
            min= abs(p);
      }
    }
    }
    printf("%lld\n", (min) );
    return 0;
}
