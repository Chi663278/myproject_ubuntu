#include <stdio.h>
int main(void){
    int x, y;
    printf("Input operand A: ");
    scanf("%d", &x);
    printf("Input operand B: ");
    scanf("%d", &y);

    for (int i=1; i<=9; i++){
        for (int j=1; j<=9; j++){
        printf("%2d", i*j);
        if(j!=9) printf(" ");
        if (x==i && y==j) goto end;
        }
    puts("");
    }
end :;
}