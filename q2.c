#include<stdio.h>
main(){
	int  i,j,rows,maxi,colmn;
	
	printf("Enter Array's Row Size : ");
	scanf("%d",&rows);
	
	printf("Enter Array's Column Size : ");
	scanf("%d", &colmn);
    
	int array[rows][colmn];  
    printf("array's elements:\n");
    for (i=0; i<rows; i++) {
        for (j=0; j<colmn; j++){
        	
            printf("a[%d][%d] = ", i, j);
            scanf("%d",&array[i][j]);
            
        }
    }
    maxi=array[0][0];
    for (i=0; i<rows; i++){
    	
        for (j=0; j<colmn; j++){
        	
            if (array[i][j]>maxi){
            	
                maxi=array[i][j];
                
            }
        }
    }
    printf("The largest Number in Array is: %d\n", maxi);
   
}
