#include <stdio.h>

char num_vault[6];
int mask_vault[4];
int main() {

    int i;
    for(i=0; i<4; i++){
                mask_vault[i]= (1<<i);
		//printf("%d added to position %d \n",(1<<i),i);
    }
    char* str = "174212";
    for(i=0;str[i]!='\0';i++){
	num_vault[i] = str[i]-'0';
    	//printf("%d added to position %d in num_vault \n",(str[i]-'0'),i);
    }
    int j;
    char ret[6];
    printf("The time we are printing out in 24 hour format is 17:42:12 \n");
    for(j=3; j>=0; j--){
    	for(i=0;i<6;i++){
    		//printf("Bitwise and of %d and %d gives %d \n",num_vault[i],mask_vault[j],num_vault[i]&mask_vault[j]);
		if ((num_vault[i]&mask_vault[j])==0){
			ret[i]='.';
		}
		else if((num_vault[i]&mask_vault[j])!=0){
			ret[i]='*';
		}	
    	}
	printf("%s \n",ret);
    }

    // Display the result in binary
    //printf("The bitwise AND of 00001000 and 00000100 is %d\n", result);

    return 0;
}

