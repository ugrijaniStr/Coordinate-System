#include <stdio.h>

int main() {
    int x,y,z;
    int j,i,l;
    int m,n,b;
    int s;

    for(x = 0; x <= 0; x++) {
        for(y = 10; y > 0; y--) {
            for(z = 0; z <= 40; z++) {
                printf(" ");
            }
            if(y == 10) {
                printf("%d %s ",y,"| \n");
            } else {
                printf("%d %s ",y,"| \n");
            }
        }
        for(j = 0; j <= 0; j++) {
            for(i = 10; i > -1; --i) {
                if(i == 0) {
                    printf("%d |  ",i);
                } else {
                    printf("%d   ",i);
                }
            }
            for(l = -1; l > -11; l--) {
                printf("%d   ",l);
            }
        }
        printf("\n");
        for(m = 0; m < 100; m++) {
            printf("-");
        }
        for(s = 0; s <= 10; s++) {
            printf(" ");
        }
        printf("\n");
        printf(" ");
        for(n = -1; n > -11; n--) {
            for(b = 0; b <= 39; b++) {
                printf(" ");
            }
            if(n == -10) {
                printf("%d%s",n,"|\n");
            } else {
                printf("%d %s ",n,"| \n");
            }
        }
    }
}
