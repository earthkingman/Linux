#include <stdio.h>
#include <stdlib.h>

void input(int **m, int row, int col){
for (int i =0; i< row; i++){
for (int j=0;  j< col; j++){
m[i][j]= rand() % 10;
}

}

}
void output(int **m, int row, int col)
{

printf("---행렬---");
for (int i =0; i< row; i++){
printf("\n");
for (int j=0;  j< col; j++)
{ printf("%d " , m[i][j]); }
		     	  
				 }
printf("\n");
}

void sum(int **a,int **b, int row, int col){

printf("---더해진 행렬---");

	for (int i =0; i< row; i++){
     		printf("\n");
	for (int j=0;  j< col; j++){
	a[i][j] = a[i][j] + b[i][j];
	printf("%d " , a[i][j]);}
		   }
		printf("\n");	}




int main(void){


int row, row2,col,col2;
printf("행 숫자를 입력해주시오 ") ;
scanf("%d" ,&row);

printf("열 숫자를 입력해주시오 ") ; 
scanf("%d" ,&col);



printf("두번째 행 숫자를 입력해주시오 ") ;
scanf("%d" ,&row2);

printf("두번째 열 숫자를 입력해주시오 ") ;
scanf("%d" ,&col2);







int **array =malloc(sizeof(int *) * row);
int **array2 =malloc(sizeof(int *) * row2);


for (int i =0; i < row; i++){

	array[i] = malloc(sizeof(int) * col);

}

for (int i =0; i < row2; i++){

        array2[i] = malloc(sizeof(int) * col2);

}



input(array, row ,col);
input(array2, row2 ,col2);
output(array,row,col);
output(array2,row2,col2);
sum (array,array2,row,col);


for( int i=0; i< row; i++)
{
	free(array[i]);
	free(array2[i]);
}

	free(array);
	free(array2);

		return 0;
}



