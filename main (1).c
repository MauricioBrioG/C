#include <stdio.h>
/* print Farenheith-Celcius table 
    for fahr = 0, 20, ..., 300 */
int main() {
    
        int f, c;
        int low, up, step;
        
        low = 0;          /* lower limit of temperature table */
        up = 300;        /* upper limit */
        step = 20;          /* step size */
        
        f = low;
        while (f <= up) {
            c = 5 * (f - 32) / 9;
            printf ("%d\t%d\n", f, c);
            f = f + step;
        }
}