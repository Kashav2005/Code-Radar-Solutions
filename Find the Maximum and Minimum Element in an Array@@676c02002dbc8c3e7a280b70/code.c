#include <stdio.h>

int main() {
    int b, i, a1, a2;
    scanf("%d", &b);
    int a[b];
    for(i = 0; i < b; i++) {
        scanf("%d", &a[i]);
    }
    a1 = a[0];
    a2 = a[0];
    for(i = 1; i < b; i++) {
        if(a[i] < a1) {
            a1 = a[i];
        }
        if(a[i] > a2) {
            a2 = a[i];
        }
    }
    printf("%d %d", a1, a2);
    
    return 0;
}