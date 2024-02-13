#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Binary_converter(int a);

int main(){
	int num=6;
	
	Binary_converter(num);
	
	return 0;
}

int Binary_converter(int a){
    int count=1;

	for(int i = a; i != (0||1); i /= 2){
		count++;
	}
                   //printf("%d\t",count);
	int* num;
	num=malloc(count*sizeof(int));

	for (int i = count; a != 0; a /= 2){
		num[count]=(a%2);
printf("%d",num[i]);                   //,,,,,,,,,,,,,,,,,,,,,
	}
	/*for(int i=0;i<count;i++){
		printf("%d\t",num[i]);
	}*/
	
    //return num;
}