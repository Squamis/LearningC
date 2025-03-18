//this is based off the the dynamic array artical on geeks for geeks



#include <stdio.h>
#include <stdlib.h>



int main(){
	//===========================================================================================
	//using malloc
	//===========================================================================================
	int* ptr;
	int size;
	printf("Enter size of elemets:");
	scanf("%d", &size);

	ptr = (int*)malloc(size * sizeof(int));

	if (ptr == NULL){
		printf("Memory not allocated.\n");
	}
	else {
		printf("Memory successfully allocated using ""malloc.\n");

		for (int j =0 ; j < size; ++j) {
	 		ptr[j] = j + 1;
	 }

	printf("The elements of the array are : ");
		for (int k = 0; k < size; ++k) {
	 	printf("%d, ", ptr[k]);
	 }
	}

	free(ptr); //they did not free memory after using malloc

	//===========================================================================================
	//using calloc
	//===========================================================================================
	
	return 0;

}

