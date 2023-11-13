#include <stdio.h>

char num_vault[6];
int mask_vault[4];
int binclock(char *str){
	// We would get something like "134952" as input
	int i;
	for(i=0; str[i] != '\0'; i++){
		num_vault[i] = str[i] - '0';
	}
	for(i=0; i<4; i++){
		mask_vault[i]= 1<<i;
	}
	for(i=0;i<4;i++){
	//printf("%d \n", mask_vault[i]);
	}
	char ret[6] = "";
	int j;
	j = num_vault[3]&mask_vault[3];
        printf("The bit wise and of %d and %d is %d \n",num_vault[0],mask_vault[3],j);
	for(i=0;i<6;i++){
		if (num_vault[i]&mask_vault[0]==0){
			j = num_vault[i]&mask_vault[2];
			printf("%d \n",j);
			ret[i]='.';}
		else{
			ret[i]='*';
		}
	}
	printf("%s \n", ret);
}

int main(){

        binclock("234857");


        return 0;

}

