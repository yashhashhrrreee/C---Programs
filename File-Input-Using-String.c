#include <stdio.h>
#include <string.h>
 
int main()
{
	FILE *try;
  	char str[100];
  	int i, len;

	try = fopen("sample.txt","w");

  	printf("Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ')
		{
			str[i] = '\0';
			fprintf(try,"%s ", &(str[i]) + 1);
		} 
	}
	fprintf(try,"%s", str);
}