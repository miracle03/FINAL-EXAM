#include  <stdio.h>
#include <string.h>
#include<windows.h>
#define PASSWORD "1234567"
int verify_password(char *password)
{ 
	int authenticated;
	char buffer[44]; 
	//printf("%x",buffer); 
	authenticated=strcmp(password,PASSWORD);
	strcpy(buffer,password);
	return authenticated;
} 
int main()
{ 
int valid_flag=0;
char password[1024];
FILE * fp;
LoadLibrary("user32.dll");
if(!(fp=fopen("password.txt","rw+")))
{
	exit(0);
 } 
 fscanf(fp,"%s",password);
		valid_flag=verify_password(password);
		if(valid_flag)
		{
		printf("incorrect password!\n\n");}
		else{
			printf("Congratulation! You have passed the verification!\n");
			
		}
    fclose(fp);	
	return 0;
} 


