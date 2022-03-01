#include <stdio.h>
 int main(){
 	
 	int a;
 	scanf("%d", &a);
 	if(a % 2 == 0) {
 		printf("tegsh\n");
 		if (a % 4 == 0 && a % 10 ==0){
 			printf("4 10d zereg huvaagdana\n");
		 }
		 if (a % 2 == 0 && a % 8 == 0){
		 	printf("2 8d zereg huvaagdana\n");
		 }
		 
 		
 		
	 } else {
	 	printf("sondgoi\n");
	 	 
		if (a % 3 == 0 && a % 7 == 0){
			printf("3 7d zereg huvaagdana\n");
		}
		if (a % 5 == 0 && a % 9 == 0){
			printf("5 9d zereg huvaagdana");
		}
	 } 
 	
 	
 	
	return 0;
 }
