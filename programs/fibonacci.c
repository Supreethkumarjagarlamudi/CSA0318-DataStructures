#include <stdio.h>
int main(){
    int m, n, nxtTerm;
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    m = 0;
    n = 1;
    nxtTerm = m+n;
    printf("The fibonacci Series of %d terms is %d, %d", num, m, n);
    for(int i = 2; i < num; i++){
        printf(", %d", nxtTerm);
        m = n;
        n = nxtTerm;
        nxtTerm = m + n;
    }
}