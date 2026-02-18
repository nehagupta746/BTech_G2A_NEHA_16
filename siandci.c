#include<stdio.h>
#include<math.h>

int main()
{
float p,ROI,t,SI,Amount,CI;

printf("Enter principal amount:");
scanf("%f",&p);
printf("Enter rate of interest:");
scanf("%f",&ROI);
printf("Enter time period:");
scanf("%f",&t);

SI=(p*ROI*t)/100;
Amount=p*pow((1+ROI/100),t);
CI=Amount-p;

printf("The SI is %f",SI);
printf("The compound interest is %f",CI);

return 0;
}