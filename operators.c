#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double cost, tip, tax, value;
    
    scanf ("%lf\n%lf\n%lf", &cost, &tip, &tax);
    tip/=(double)100;    tax/=(double)100;
    value=cost*tip+cost*tax+cost;
    printf ("The total meal cost is %d dollars.\n", ((value>0) ? (int)(value+0.5) : (int) (value-0.5)));
    
    return 0;
}

