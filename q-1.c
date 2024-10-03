#include<stdio.h>
main(){
	int size,i,j;
	printf("Enter the size of array");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the elements : \n");
	
	for(i=0;i<size;i++){
	printf("Enter array [%d] element : ",i);
	scanf("%d",&arr[i]);
	
	}
	
	for(i=0;i<size;i++){

	
		if(arr[i]<0){
		printf("negetiv array number is %d \n",arr[i]);
	}	
	}
}
