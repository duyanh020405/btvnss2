#include <stdio.h> 
int main(){
	int  number1 , number2 , number3 , max , min ; 
	printf (" nhap 3 so can tim max , min \n") ;
	scanf  ("%d %d %d ", &number1 , &number2, &number3 ) ;
	max =(number1 < number2) ? number2 : number1;
	max = ( max < number3 ) ? number3 : max ;
	min =(number1 > number2) ? number2 : number1;
	min = ( max > number3 ) ? number3 : min ;
	printf("solonnhat =%d, sonhonhat = %d " ,max , min);
}
