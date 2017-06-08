#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count ;

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
  int i,n,k,p;
  scanf("%d%d",&n,&k );
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d",&A[i] );
  }
  QuickSort(A,0,n-1);

  int cur=0 , ans= 0;
  while(cur < n){
		int st = A[cur];
		while(cur < n && A[cur+1] <= st+k){
			cur++;
		}
		int m = A[cur];
		while(cur < n && A[cur+1] <= m+k){
			cur++;
		}
		ans++;
		cur++;
	}

  printf("%d\n", ans);
  return 0;
  }
