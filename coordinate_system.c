#include <stdio.h>

int main() {
    int x,y,z;
    int i,j;
    for(x = 0; x <=0; ++x) {
        for(y = 0; y < 6; y++) {
            printf("                        |");
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
                printf("                        |");
                printf("\n");
            }
        }
    }
    return 0;
}
