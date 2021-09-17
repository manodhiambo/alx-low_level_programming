#include <stdio.h>

#define DIM(array)        (sizeof(array)/sizeof(array[0]))

float GetFloat(void)
{
    float ret = 0;
    scanf("%f", &ret);
    return ret;
}

/**
 * @param       pAmount         Points to amount of money.  Returns the amount
 *                              minus the amount used up by this denomination.
 * @param       denomination    The amount for this denomination.
 * @return                      The number of units of this denomination.
 */
int makeChange(int *pAmount, int denomination)
{
    int ret = *pAmount / denomination;

    *pAmount -= ret * denomination;
    return ret;
}

int main(void)
{
    /* declare float */
    float money;
    const int billDenominations[] = { 100, 50, 20, 10, 5, 1 };
    const int coinDenominations[] = { 25, 10, 5, 1 };

    /* Get user input and check if input is positive */
    do
    {
        printf("Please input the some amount of money you would like to "
                "make change for:  \n");
        money = GetFloat();
    } while (money < 0);

    /* Get the Dollars from the Float */
    int numDollars = (int) money;

    /* Get the cents from the Float (rounded to nearest cent) */
    int numCents = (int) ((money - numDollars) * 100 + 0.5f);

    int remainingDollars = numDollars;
    int remainingCents   = numCents;
    int numBillsAndCoins = 0;

    /* Greedy Algorithm for Dollars */
    for (int i = 0;i < DIM(billDenominations);i++)
        numBillsAndCoins += makeChange(&remainingDollars, billDenominations[i]);

    /* Greedy Algorithm for Cents */
    for (int i = 0;i < DIM(coinDenominations);i++)
        numBillsAndCoins += makeChange(&remainingCents, coinDenominations[i]);

    printf("\nThe least possible steps you can make change from "
            "$%i.%02i is %i. \n", numDollars, numCents, numBillsAndCoins);
}
