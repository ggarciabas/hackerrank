#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int anterior=1;
    int a;
    int total=0;
    int i, rating;
    scanf("%d\n", &i);
    scanf("%d\n", &anterior);
    total++;
    while (--i) {
        scanf("%d\n", &rating);
        if (rating > anterior || anterior > rating) {
            total+=2;
        } else {
            total++;
        }
        a=anterior;
        anterior=rating;
    }
    
    if (a > rating) {
        total++;
    }
    
    printf("%d\n", total);
    
    return 0;
}