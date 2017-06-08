#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
  int i,j,k,n;
  scanf("%d",&n );
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",&A[i] );
  }
  for (i= 1 ; i< n; i++) {
 j = i;

 while ( j > 0 && A[j] < A[j-1]) {
   k           = A[j];
   A[j]   = A[j-1];
   A[j-1] = k;

   j--;
 }
}
for(i=0;i<n;i++){
printf("%d",A[i]);
printf(" ");
}
  return 0;
}
