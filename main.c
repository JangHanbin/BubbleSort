#include <stdio.h>

void bubbleSort(int* array, int size)
{
	int tmp=0;
	for(int end=size-1;end>0;end--)
	{
		for(int i=0;i<end;i++)
		{
			if(array[i] > array[i+1])
			{	// do swap
				tmp = array[i+1];
				array[i+1] = array[i];
				array[i]=tmp;
			}
		}
	}
}

int main()
{
	int array[]={453,32,43,656,8,65,43,3,2314,567,6548,67875,86};
	for(int i=0; i<sizeof(array)/sizeof(int); i++)
		printf("%d ", array[i]);

	bubbleSort(array, sizeof(array)/sizeof(int));
	printf("\n");

	for(int i=0; i<sizeof(array)/sizeof(int); i++)
		printf("%d ", array[i]);
	
	return 0;
}
