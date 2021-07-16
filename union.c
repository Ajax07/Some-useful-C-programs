#include <stdio.h>
#include <stdlib.h>

int main(){
	int Arr1[] = {1,2,3,4,5,6};
	int Arr2[] = {1,2,3,6,7,8};
	int i=0,j=0;
	printf("Hello\n");
	while(i < 6 && j < 6){
		if(Arr1[i]<Arr2[j]){
			printf("%d\n",Arr1[i] );
			i++;}
		else if(Arr2[j]<Arr1[i]){
			printf("%d\n",Arr2[j] );
			j++;}
		else {
			printf(" The elements are %d\n",Arr2[j++]);
			i++;
		}
	}
	while(i<6){
		printf("%d\n",Arr1[i] );
		i++;
	}
	while(j<6){
		printf("%d\n",Arr2[j] );
		j++;
	}
	return 0;
}