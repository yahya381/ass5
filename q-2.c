#include<stdio.h>
main(){
	int row,colum,i,j,largest;
	printf("Enter the number of row : ");
	scanf("%d",&row);
	printf("Enter the number of colum : ");
    scanf("%d",&colum);
    
    int arr[row][colum];
    printf("Enter the arr elements : \n ");
    
    for(i=0;i<row;i++){
    	for(j=0;j<colum;j++){
    		printf("Enter [%d][%d] elements : ",i,j);
    		scanf("%d",&arr[i][j]);
		}
	}
for(i=0;i<row;i++){
	for(j=0;j<colum;j++){
		if(arr[i][j]>largest){
			largest=arr[i][j];
		}
	}
}
    printf("The largest element in the array is: %d\n", largest);

}

