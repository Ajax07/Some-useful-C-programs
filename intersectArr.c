#include <stdio.h>
#include <stdlib.h>

int main(){
	int Arr1[] = {1,2,4,3,5,9};
	int Arr2[] = {1,2,3,8,7,9};
	int Arr3[7];
	int i,j,k=0;
	for(i =0;i<6;i++){
		for(j=0;j<6;j++){
			if(Arr1[i]==Arr2[j]){
				Arr3[k]=Arr2[j];
				k++;
				printf("The Common Elementss are : \n%d\t",Arr2[j]);
				printf("This array %d\n",Arr3[j] );
			}
		}
	}
	return 0;
}