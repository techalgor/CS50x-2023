#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int  pas = 0,
         pop = 0,
         total = 0,
         sum=0,
         max=0;

        long  credit= get_long("Number : ");

        while (credit > 0)
        {
            pop=pas;
            pas = credit % 10;

            if (total % 2 == 0 )
            {
                max += pas ;
            }
            else
            {
                int temp = 2 * pas;
                sum += (temp / 10) +(temp % 10);
            }
                credit /=10;
                total ++;
        }



        bool is_valid = (max + sum) % 10 == 0;
        int i= (pas * 10)+ pop;
        if (pas ==4 && total >= 13 && total <= 16 && is_valid)
        {
         printf ("VISA\n");
        }
        else if ((i== 34 ||i == 37) && total == 15 && is_valid)
        {
        printf("AMERICAN ECPRES\n");
        }
        else if (i >= 51 && i <= 55 && total == 16 && is_valid)
        {
        printf("MASTERCARD\n");
        }
        else
        {
        printf("INVALID\n");
        }
    }





