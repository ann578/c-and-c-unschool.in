#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
     char strg1[50], strg2[50],s;
     int length,x,y,result,random=0;
     float squareroot,i=5.1;
     char str1[20];
     //printf("using strlwr() function...\n");
    // char str[] = "CompuTer ScienCe PoRTAl fOr geeKS"; 
    // printf("Given string is: %s\n",str); 
    // printf("\nString after converting to the  lowercase is: %d\n",strlwr(str)); 
    //printf("using strupr() function...\n");
     //printf("Enter string: ");    
     //scanf("%s",str1)   
     //printf("String is: %s\n",str1);    
     //printf("\nUpper String is: %s\n",strupr(str1)); 
     printf("using random() function...\n");
     srand(time(0));
     random=rand() % 6+1;
     printf("%d\n",random);
     printf("using floor() function...\n");
     printf("floor of  %f is  %f\n", i, floor(i));
     printf("using ceil() function....\n");
     printf("ceil of %f if %f\n",i,ceil(i));
     printf("enter values of x and y:");
     scanf("%d%d",&x,&y);
     printf("using pow() function...\n");
     result=pow(x,y);
     printf("%d to the power of %d is %d\n",x,y,result);
     printf("using sqrt() function...\n");
     squareroot=sqrt(x);
     printf("the  square root of %d is %f\n",x,squareroot);
    printf("Enter first string: ");
    scanf("%s",strg1);
    printf("Enter second string: ");
    scanf("%s",strg2);
    //printf("using strrev() function...\n");
    // printf("the reverse of string 1 is %s\n",strrev(strg1));
    printf("using strlen() function...\n");
    length=strlen(strg1);
    printf("the length of string is %d\n",length);
    printf("using strcpy() function...\n");
     strcpy(strg1,strg2);
     printf("the string 1 is %s\n",strg1);
     printf("using strcmp() function...\n");
    if(strcmp(strg1, strg2)!=0)
    {
        printf("\nentered strings are same");
    }
 
    else
    {
        printf("\nEntered strings are  same!");
    }
 
    
    return 0;
}

