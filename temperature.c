#include <stdio.h>
#include <string.h>
int main() {
float temperature, fahrenheit, celsius;
char name[20],prompt[20],prompt2[20];
char answer []="yes";
int choice;
printf("HEY ENTER YOUR NAME !!!\n");
scanf("%s",&name);
     
printf("Hello there '%s' am your temperature conversion calculator\n " ,name);
printf("'%s'Are you ready to convert?(yes or no)\n",name);
scanf("%s",&prompt);
   
int result = strcmp(prompt, answer) ;
    
while(result <-1)  {
printf("you have chosen not to continue press yes to continue!!.\n");
scanf("%s", prompt2);
result = strcmp(prompt2,answer) ;
}
  
printf("Temperature Conversion Menu\n");
printf("1. Convert Celsius to Fahrenheit\n");
printf("2. Convert Fahrenheit to Celsius\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch(choice) {
case 1:
printf("Enter temperature in Celsius: ");
scanf("%f", &temperature);
fahrenheit = (temperature * 9 / 5) + 32;
printf("%s,%.2f Celsius is equal to %.2f Fahrenheit\n", name,temperature, fahrenheit);
break;
case 2:
printf("Enter temperature in Fahrenheit: ");
scanf("%f", &temperature);
celsius = (temperature - 32) * 5 / 9;
printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, celsius);
break;
default:
printf("Invalid choice!\n");
}
   
return 0;
}
