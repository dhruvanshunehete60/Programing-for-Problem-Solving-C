#include <stdio.h>
int main() {
	int arr[5] ={10, 20, 30, 40, 50};
	int *ptr;
	int i;
	ptr = arr;
	printf("Accessing arr element using pointers:\n");
	for(i = 0; i < 5; i++)
	{
		
		printf("element %d\n" , i, *(ptr + i));
		}
		
		return 0;
}
