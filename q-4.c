#include<stdio.h>
int main(){
	int row,colum,i,j;
	printf("Enter the number of row : ");
	scanf("%d",&row);
	printf("Enter the number of colum : ");
	scanf("%d",&colum);
	
	int arr[row][colum];
	printf("Enter the arr elements : \n ");
	
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			printf("arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
int choice;
printf("Enter your choice : ");
scanf("%d",choice);
	switch(choice){
			case 1:
				printf
				("Enter the number of rows");
				
				break;
			case 2:
				printf
				("Enter the number of colum");
				
				break;
		
					printf("invalid choice");
				
				
		}

    }
