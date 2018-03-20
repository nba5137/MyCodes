/*
 * Question:
 * To calculate A/B, where A is an int with digits <= 1000, B is an int with digit = 1. 
 * You need to print out the quotient Q and the remainder R, to satisfy that A = B * Q + R. 
 * Input format: A [space] B
 * Output format: Q [space] R 
 * Example:
 * Input: 123456789050987654321 7
 * Output: 17636684150141093474 3
 */

#include<stdio.h>
#include<string.h>  
#include<math.h>  

int main()  
{  
    char str[1001];int c;  
    scanf("%s %d",str,&c);  
    if(strlen(str)==1)  
    {  
        printf("%d %d",(str[0]-'0')/c,(str[0]-'0')%c);  
    }  
    else  
    {  
        for(int i=1;i<strlen(str);i++)  
        {  
           int r=(str[i-1]-'0')*10+str[i]-'0';  
           printf("%d",r/c);  
           str[i]=r%c+'0';  
        }  
        printf(" %c",str[strlen(str)-1]);  
    }  
}
