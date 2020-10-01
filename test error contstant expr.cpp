#include<stdio.h>
#include<algorithm>
/*void int main()
{
	int n, i, j, c;
	scanf("%d", &n);
	int arr[n], sort[n];
	
	for(i = 0; i<=n-1; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(j = 0; j < n; j++)
	{
	
		int min = arr[0], max = arr[0];
	
		for(i = 0; i < n; i++)
		{
			if(arr[i] > max)
			{
				max = arr[i];	// MAX value
			}
		}
		
	
		for(i = 0; i<n; i++)
		{
			if(arr[i] < min)
			{
				min = arr[i];	// MIN value
				c = i;
			}
		}
		
		
		sort[j] =  min;
		arr[c] = max;
			
	}
	
	printf("Ascending order:\n\n");

	for(i = 0; i<n; i++)
	{
		printf("%d\t", sort[i]);
	}     

	printf("Ascending order:\n\n");

	for(i = 0; i<n; i++)
	{
		printf("%d\t", sort[n-i-1]);
	}     
}*/
//You can also use SORT function directly.
//Here is the code.
sort(arr,arr+n);
//where arr is the name of the array and n is the size of array.
