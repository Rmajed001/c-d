#include<stdio.h>
int main()
{
float radius ,height ,area,volume ;
const float PI = 3.14159;

printf("Enter the radius of the circle :");
scanf("%f",&radius);

area =  PI * radius * radius;
printf("The area of the circle : %.2f\n",area);


printf("Enter the height of the cylinder :");
scanf("%f",&height);

volume = PI * radius * radius * height;

printf("The volume of the cylinder : %.2f\n",volume);
return 0;

}