#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, choosed_number;
    srand(time(0));
    number = rand() % 6;
    printf("%d", number);

    printf("Enter a number between 0 & 100 : ");
    scanf("%d", &choosed_number);


    while (choosed_number != number) {
        if (choosed_number < 0 || choosed_number > 100) {
            printf("Your number is not between 0 and 100, please choose a new number : " );
            scanf("%d", &choosed_number);
        }
        else if (choosed_number < number) {
                printf("Too small, try bigger !");
                printf("Enter a number between 0 & 100 : ");
                scanf("%d", &choosed_number);
        }
        else if (choosed_number > number) {
                printf("Too big, try smaller !");
                printf("Enter a number between 0 & 100 : ");
                scanf("%d", &choosed_number);
        }

    }
    printf("Congratulation you won !!");
    return 0;
}
