#import <stdio.h>

int main(void)
{
    int date1[3], date2[3], res, test;

    printf("Enter first date: ");
    scanf("%2d/%2d/%2d", &date1[0], &date1[1], &date1[2]);
    printf("Enter second date: ");
    scanf("%2d/%2d/%2d", &date2[0], &date2[1], &date2[2]);

    for(int i = 2; i <= 2; i--){
        if(date1[i] > date2[i]){res = 0;break;}
        //if(date1[i] == date2[i]){res = 1;break;}
        if(date1[i] < date2[i]){res = 2;break;}
    }

    switch(res){
        case 0: printf("The date: %d/%d/%d is before %d/%d/%d", date2[0], date2[1], date2[2], date1[0], date1[1], date1[2]); break;
        //case 1: printf("The dates: %d/%d/%d and %d/%d/%d are the same", date1[0], date1[1], date1[2], date2[0], date2[1], date2[2]); break;
        case 2: printf("The date: %d/%d/%d is before %d/%d/%d", date1[0], date1[1], date1[2], date2[0], date2[1], date2[2]); break;
        default:    printf("Illegal date"); break;
    }

    //printf("%d/%d/%d", date1[0], date1[1], date1[2]);



  return 0;
}