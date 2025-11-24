//6(e) replace an element into array at a given index
#include<stdio.h>
int main()
{
	int i;
	//Declare an array
	int arr[] = {1,2,3,4,5};
	//Display the original array
	printf("Original Array: ");
	for(i=0;i<=5;i++)
	{
		printf("%d",arr[i]);
	}
	//specify the index to replace
	int index_to_replace = 2;
	//specify the new value
	int new_value = 10;
	//replace the element at the specified index
	arr[index_to_replace] = new_value;
	//display the modified array
	printf("\nModified Array: ");
	for( i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
