#include <stdio.h>

void insertion_sort(int A[],int N)
{
    int value;
    int hole;
    for(int i=1; i<N;i++)
    {
        value = A[i];
        hole = i;
        while(hole > 0 && A[hole-1] > value)
        {
            A[hole] = A[hole-1];
            hole = hole-1;
        }
        A[hole] = value;
    }
}


int main() {
	int T;
	scanf("%d", &T);
	while(T--)
	{
	 int N;
	 scanf("%d", &N);
	 int A[N];
	 for(int i=0; i<N; i++)
	 {
	    scanf("%d", &A[i]);
	 }
	 
	 insertion_sort(A, N);
	 
	 for(int i=0; i<N;i++)
	 {
	     printf("%d ", A[i]);
	 }
	 printf("\n");
	 
	}
	
	
	
	return 0;
}