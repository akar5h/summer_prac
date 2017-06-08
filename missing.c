#include<stdio.h>

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
}

void QuickSort(int A[],int L,int R){
  if(L<R){
    int p= Partition(A,L,R);
    QuickSort(A,L,p-1);
    QuickSort(A,p+1,R);
  }
}


int main(){
  int i=0,j=0,n,m;
  scanf("%d",&n );
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",&A[i] );
  }
  scanf("%d",&m );
  int B[m];
  for(i=0;i<m;i++){
    scanf("%d",&B[i] );
  }
  QuickSort(A,0,n-1);
  QuickSort(B,0,m-1);
  i=0;
  j=0;
  while(i<n && j<m){
    if(A[i] == B[j]) {
      i++;
      j++;
    }
    else{
      printf("%d ",B[j]);
      j++;
    }
  }
}
