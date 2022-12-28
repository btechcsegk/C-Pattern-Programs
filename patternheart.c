#include<stdio.h>

main(){
	int i,j,k,l,m,n,o,p;
	for(l=0; l<3; l++){
		for(m=3; m>l; m--){
			printf(" ");
		}
		for(n=0-l; n<3; n++){
			printf("* ");
		}
		for(o=3; o>l+1; o--){
			printf("  ");
		}
		for(p=0-l; p<3; p++){
			printf("* ");
		}
		printf("\n");
		
	}
	for(i=0; i<11; i++){
		for(j=0; j<i+1; j++){
			printf(" ");
		}
		for(k=11; k>i+1; k--){
			printf("* ");
		}
		printf("\n");
	}
}
