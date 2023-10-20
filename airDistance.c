#include<stdio.h>
#include<math.h>
int main ()
{
    float location_a,location_b;                    /*phi1 is the latitude of location_a,phi2 is the latitude of location_b */
    float phi1,phi2,delta;
    printf("enter value of phi1(latitude of location_a btw |-90-90|) = ");
    scanf(" %f",&phi1);
    printf("enter value of phi2(latitude of location_b  btw |-90-90|) = ");
    scanf(" %f",&phi2);
    printf("enter value of delta1(logitude of difference |-180-180|) = ");
    scanf(" %f",&delta);

    float radius = 6371; // radius of earth in kilometers.
    float distance;

    printf("(sin(%.2f)sin(%.2f)+cos(%.2f)cos(%.2f)cos(%.2f))*%.2f\n",phi1,phi2,phi1,phi2,delta,radius);
    
    distance=(sin(phi1)*sin(phi2)+cos(phi1)*cos(phi2)*cos(delta))*radius;
    printf("distance is %f",distance);
    return 0;
}