#import <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, sum1, sum2, test;

    printf("Input: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
    
    sum1 = n2 + n4 + n6 + n8 + n10 + n12;
    sum2 = n1 + n3 + n5 + n7 + n9 + n11;
    n13 = 9 - ((3*sum1 + sum2 - 1) % 10);

    printf("Computed check digit: %d\n", n13);
    printf("Your final EAN code including checkdigit: %1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13);

  return 0;
}