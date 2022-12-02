#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20];
    int i, len, temp=0;
    int flag = 0;
    printf("Enter a word :");
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i < len ;i++){
        if(str[i] != str[len-i-1]){
            temp = 1;
        break;
   }
}
    
    if (temp==0) {
        printf("Word is a palindrome");
    }    
    else {
        printf("Word  is not a palindrome");
    }
    return 0;
}