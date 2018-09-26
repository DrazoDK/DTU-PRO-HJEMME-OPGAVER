#import <stdio.h>

int main(void)
{
    int n[13], sum1 = 0, sum2 = 0, nSize, test;

    nSize = sizeof(n) / sizeof(n[0]);

    printf("Input: ");
    for(int i = 0; i < (nSize - 1); i++ ){
        scanf("%1d", &n[i]);
        if(((i + 1) % 2) == 0){
            sum1 = sum1 + n[i]; 
        } else {
            sum2 = sum2 + n[i]; 
        }
    }

    n[nSize - 1] = 9 - ((3*sum1 + sum2 - 1) % 10);

    printf("Computed check digit: %d\n", n[nSize - 1]);
    printf("Your final EAN code including check digit: ");

    for(int i = 0; i < nSize; i++ ){
        printf("%1d", n[i]);
    }
    printf("\n");

  return 0;
}