
#include<stdio.h>
#include<stdlib.h>
#include <sys/time.h>
void Create_Input(int a[],int n)
{
	for(int i =0; i<n; i++){
		a[i] = n-i;
	}
	
}

void Swapping(int a[],int j){
	
	int temp = a[j];
	a[j] = a[j+1];
	a[j+1] = temp;
}

void Bubble_Sort( int a[],int n){
	
	

	for(int i = 0 ; i< n-1 ;i++)
	{
		
		for(int j = 0 ; j< n-1-i ; j++)
		{
			if(a[j]>a[j+1])
			{
				Swapping(a,j);
				
					
			}
		}

	}

} 

void Create_Report(int initialSize , int increment){

	struct timeval te;
       	
	for(int i=0 ;i< 8 ;i++ )
	{
		int n = initialSize + increment*i;
		int a[n];

		Create_Input(a,n);
		gettimeofday( &te, NULL);

		long long start = te.tv_sec * 1000LL +te.tv_usec / 1000;

		Bubble_Sort(a,n);

		gettimeofday( &te, NULL);

                long long end = te.tv_sec * 1000LL + te.tv_usec / 1000;
		printf("\t %lld" , end - start);

		
	}	
}

int main(){
	int initialSize = 8000;
	int increment = 4000;
	printf("start");
	Create_Report(initialSize,increment);

	printf("\n");
}
