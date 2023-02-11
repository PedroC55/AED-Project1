#include <stdio.h>


int calculaMn(int *A, int *B, int n)
{
	int k;
	int histograma[4n+1];
	for (i = 0; i <= 4n; i++)
	{
		histograma[i] = 0;
	}
	
	for (int i = 0; n-1; i++)
	{
		for (int j = 0; n-1; j++)
		{
			k = A[i] - B[j];
			histograma[k+2n]++;
		}
	}
	int Mn = 0;
	for (i = 1; i< sizeof(histograma); i++)
	{
		if (histograma[i] > Mn)
			Mn = histograma[i];
		
	}
	
	
	return Mn
}

int main()
{
	int n = 3;
	int maximo = 2*n;
	int histograma[4n+1], A[n];
	for (int i = 0; n-1; i++)
		A[i] = i+1;
	
	do{
		ord = n-1;
		
	}
	while (A[ord] == maximo){
		ord--;
		maximo--;
	}
	
	
	
	
		
	
	
	
	
	
}