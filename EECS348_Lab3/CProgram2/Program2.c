#include <stdio.h>

int main(){
    int n, TD, FG, Safety, TD2pt, TDFG;
    while(1){
        printf("enter 0 or 1 to STOP\n");
        printf("enter the NFL score: ");
        scanf("%d", &n);
    
        if (n > 1) {
            int count = 0;
            for (TD = 0; TD <= n; TD++){
                for (FG = 0; FG <= n; FG++){
                    for (Safety = 0; Safety <= n; Safety++){
                        for (TD2pt = 0; TD2pt <= n; TD2pt++){
                            for (TDFG = 0; TDFG <= n; TDFG++){
                                if ((6 * TD) + (3 * FG) + (2 * Safety) + (8 * TD2pt) + (7 * TDFG) == n){
                                    printf("\n%d TD + 2pt, %d TD + FG, %d TD, %d FG, %d Safety", TD2pt, TDFG, TD, FG, Safety);
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
            printf("\n%d Combinations\n\n", count);
        }
        else{
            break;
        }
    }
    return 0;
}