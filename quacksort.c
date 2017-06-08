#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;

void printArray(int A[],int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d",A[i]);
    printf(" ");
  }
  printf("\n");
}

void Swap(int *a, int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

int Partition(int A[],int L,int R){
  int pivot=A[L];
  int i,j;
  i= (L);
  for(j=L+1;j<=R;j++){
    if(A[j]<=pivot){
      i++;

      Swap(&A[i],&A[j]);
    }
  }
  Swap(&A[i],&A[L]);
  return (i);
    printArray(A,n);
}


void QuickSort(int A[],int L,int R){
  if(L<R){
    int p= Partition(A,L,R);
    QuickSort(A,L,p-1);
    QuickSort(A,p+1,R);
  }
}


int main(){
  int i;
  scanf("%d",&n );
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",&A[i] );
  }
  QuickSort(A,0,n-1);
  printArray(A,n);
}
