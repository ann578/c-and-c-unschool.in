 #include<stdio.h>
 int main()
 {
     float per;
     printf("enter the percentage:");
     scanf("%f",&per);
     if(per>80)
     printf("B grade\n");
     else if(per<80 && per>=70)
     printf("B grade\n");
     else if(per<70 && per>=60)
     printf("C grade\n");
     else if(per<60 && per>=45)
     printf("D grade\n");
     else
     printf("FAIL");
     
 }