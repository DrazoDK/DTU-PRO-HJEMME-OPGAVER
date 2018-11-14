#import <stdio.h>

int main(void)
{
  int a0, an, resDenom[20], resNum[20], denomC = 0, numC = 0;
  
  printf("Enter your coefficient for a_n and a_0 on the form(a_n,a_0): ");
  scanf("%d,%d", &an, &a0);
  
  for(int i = 0; i <= an; i++){  
    printf("i = %d ", i);
      if(i % an == 0){
        resDenom[denomC] = i;
        printf("an = %d\n", resDenom[denomC]);
        denomC++;
      } else {
        printf("an = null\n");  
      }
  }

  printf("\n");

  for(int i = 0; i <= a0; i++){
    printf("i = %d ", i);
      if(a0 % i == 0){
        resNum[numC] = i;
        printf("a0 = %d\n", resNum[numC]);
        numC++;
      } else {
        printf("a0 = null\n");  
      }
  }

  for(int i = 1; i < denomC; i++){
      //printf("%d", i);
       for(int j = 0; j < numC; j++){
          //printf(" %d\n", j);
         printf("%d/%d, ",resNum[j], resDenom[i]);
       }
    printf("\n");
  }

//   for(int i = 0; i < a0; i++){
//       if(i % an == 0){
//           res_num[numC] = i;
//           numC++
//       }
//   }
  
// anSize = sizeof(an) / sizeof(an[0]);
// a0Size = sizeof(a0) / sizeof(a0[0]);

//   if(an)
//   printf("The sum is: %d/%d\n", result_num, result_denom);
  
  return 0;
}