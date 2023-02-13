#include<stdio.h>
int main(){
	char data[20],stuffeddata[20];
	printf("Enter the data : ");
	scanf("%s",&data);
	
	int i=0;
	int j=0;
	int count=0;
	while(data[i]!='\0'){
		stuffeddata[j]=data[i];
		if(data[i]=='1'){
			count=count+1;
		}
		else{
			count=0;
		}
		
		if(count==5){
			stuffeddata[++j]='0';
			count=0;
		}
		
		i=i+1;
		j=j+1;
	}
	stuffeddata[j]='\0';
	printf("original data : %s",data);
	printf("\nstuffed data : %s",stuffeddata);
}
