#include <iostream>


using namespace std;
int main () {

int a=2; int b=3; int c=20; int d=15;
int sum1,sum2,sum3;
 
sum1= (a * a) + 2 * a * b + (b * b); 
sum2= (b* b) + 2 * b * b + (b * b); 
sum3= (c * d) + 2 * c * d + ( d * d);
printf("%d\n",sum1);
printf ("%d\n",sum2);
printf ("%d\n",sum3);

return 0; 

}