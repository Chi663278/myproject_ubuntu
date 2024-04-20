#include <stdio.h>

int main(void){
    unsigned int p, r;
    printf("INPUT PRICE : ");
    scanf("%d", &p);
    printf("INPUT RANK : ");
    scanf("%d", &r);

    switch(r){
    case 1 :
        p *= 0.8;
        break;
    case 2 :
        p *= 0.9;
        break;
    }
    printf("Price is %u yen.\n", p);
}