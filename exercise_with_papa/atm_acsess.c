#include <stdio.h>
int takemoney()
{
    int money1 = 100, money2 = 200, money3 = 500, money4 = 1000,  money5 = 2000,  money6 = 5000;
    int chkmoney;

                    printf("How Much Money Do You Want?\n\n");
                    printf("100     200     500 \n 1000     2000    5000\n");
                    scanf("%d", &chkmoney);

            if(chkmoney == money6 ||  money1 || money2 || money3 || money4 || money5)
            {
                for(int i = 0;i <= 3;i++)
                {
                    printf("BOOT\n");

                }
                    printf("Here Is Your Money,,,,,,");
            }

}
void main()
{
    int cardcode;
    int realcode = 4007;

                    printf(" welcome To ATM\n");
                    printf("Please Insert your Cart\n\n");
                    printf("If You Inserted Press Any Key To Continue ...\n\n");
                    getch();
                    printf("Please Enter Your Card Code\t");
                    scanf("%d", &cardcode);

                if(cardcode == realcode)
                {
                    takemoney();
                }
                else
                {
                   printf("Tnvalid Card Code,");
                }
}
