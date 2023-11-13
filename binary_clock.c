#include <stdio.h>
#include <string.h>

static char num_vault[6];
static int mask_vault[4];

int binclock(char* time) {
    char* str = time;
    int i;
    int j;
    char ret[6];
    for(i=0; i<4; i++){
                mask_vault[i]= (1<<i);
                //printf("%d added to position %d \n",(1<<i),i);
    }
 
    for(i=0;str[i]!='\0';i++){
        num_vault[i] = str[i]-'0';
        //printf("%d added to position %d in num_vault \n",(str[i]-'0'),i);
    }

    printf("The time we are printing out in 24 hour format is %d%d:%d%d:%d%d \n",num_vault[0],num_vault[1],num_vault[2],num_vault[3],num_vault[4],num_vault[5]);
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
    return 0;
}

int main(){
	char time[7];

	printf("Enter the time in 24 hour format (HHMMSS): \n");
	fgets(time, sizeof(time), stdin);
	int len = strlen(time);
	if(len>0 && time[len-1]=='\n'){
		time[len-1] = '\0';
	}

	binclock(time);

	return 0;
}
