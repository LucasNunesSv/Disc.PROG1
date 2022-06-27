#include <stdio.h>
#include <math.h>

int main(){
    double i, j, k, i2, j2, k2;
    for(i=0; i<=500; i++){
        i2 = pow(i,2);
        for(j=0; j<=500; j++){
            j2 = pow(j,2);
            for(k=0; k<=j; k++){
                k2 = pow(k,2);
                if(i2!=0 && j2!=0 && k2!=0){
                    if(i2 == (j2+k2)){
                    printf("  * %.0lf^2 = %.0lf^2 + %.0lf^2 Obedece a Tripla de pitagoras\n", i, j, k);
                    printf("    %.2lf = %.2lf\n\n\n", i2, (j2+k2));
                    }
                }
            }
        }
    }
    return 0;
}
