#include<stdio.h>
int main(){
	char str[100];
	scanf("%s",str);
	int i=0;
	while(str [i]!='\0'){
		if(str[i]=='0'){
			i++;
			while(str[i]=='0'){
				i++;
			}
			if(str[i]=='\0'||str[i]=='1'){
				i++;
			}
			else{
				printf("Not CFG");
				return 0;
			}
		}
		else if(str[i]=='0'){
			i++;
		}
		else if(str[i]=='1'){
			i++;
		}
		else if(str[i]==' '){
			i++;
		}
		else{
			printf("Not CFG");
			return 0;
		}
	}
}
