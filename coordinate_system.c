#include <stdio.h>

int main() {
    int x,y,z;
    int i,j,l;
    int s;
    for(x = 0; x <=0; ++x) {
        for(y = 0; y < 6; y++) {
            for(l = 0; l < 23; l++) {
                printf(" ");
            }
            printf("|");
            printf("\n");
        }
        for(z = 0; z < 56; z++) {
            printf("_");
            if(z == 55) {
                printf("\n");
            } else {
                printf("");
            }
        }
        for(i = 0; i <= 0; i++) {
            for(j = 0; j < 6; ++j) {
                for(s = 0; s < 23; s++) {
                    printf(" ");
                }
                printf("|");
                printf("\n");
            }
        }
    }
    return 0;
}
