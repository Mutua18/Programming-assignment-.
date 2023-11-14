#include<stdio.h>

int main()
{
    char regnumber[30];
    char firstname[30];
    char lastname[30];
    float intro_to_programming;
    float networking;
    float accounting;
    float operating_system;
    float computerapplication;

printf("PLEASE ENTER YOUR DETAILS BELOW\n");

printf("\nENTER YOUR REGISTRATION NUMBER\n");   
scanf("%s",&regnumber); 

printf("\nENTER YOUR FIRSTNAME\n"); 
scanf("%s",&firstname);   

printf("\nENTER YOUR LASTNAME\n");
scanf("%s",&lastname);

printf("\nENTER YOUR INTRO TO PROGRAMMING MARKS\n");
scanf("%f",&intro_to_programming);

printf("\nENTER YOUR NETWORKING MARKS\n");
scanf("%f",&networking);

printf("\nENTER YOUR ACCOUNTING MARKS\n");
scanf("%f",&accounting);

printf("\nENTER YOUR OPERATING SYSTEM MARKS\n");
scanf("%f",&operating_system);

printf("\nENTER YOUR COMPUTER APPLICATION MARKS\n");
scanf("%f",&computerapplication);

printf("\nYOUR RECORDS ARE STORED AS SHOWN BELOW;\n");

printf("\nRegistration number score %s\n",regnumber);
printf("\nfirstname score %s\n", firstname);
printf("\nlastname score %s\n", lastname);
printf("\nintro to programming score %f\n",intro_to_programming);
printf("\nnetworking score %f\n", networking);
printf("\naccounting score %f\n", accounting);
printf("\nOperating System score %f\n", operating_system);
printf("\nComputer Application score %f\n", computerapplication);


    
    return 0;
}