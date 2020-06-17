#pragma warning(disable: 4996)
#include <string>
#include <stdlib.h>
#include <time.h>

/*
 * Name: Trevor Benyack
 * Date: 2020-06-06
 * Class: CIT-145-Z01B
 * Notes: This assignment computes and outputs interest on $1000.00 for 10 years at varying interest rates.
 */

int main(void) {

    int YEARS_OF_INTEREST = 10;
    double PRINCIPAL = 1000.00;
    int exit;

    printf("%s", "Rate: Total:");

    for (int i = 5; i <= 10; ++i) {
        double compoundedPrincipal = PRINCIPAL;
        double newPrinciple = PRINCIPAL;

        for (int j = 0; j < YEARS_OF_INTEREST; ++j) {
            newPrinciple = compoundedPrincipal*((double)i/100) + compoundedPrincipal;
            compoundedPrincipal = newPrinciple;
        }


        printf("\n%-6.2f%s%.2f", ((double)i/100), "$", (compoundedPrincipal));

    }

    printf("%s", "\n\nPress <Enter> to continue...");
    scanf("%c", &exit);

    system("pause");
    return 0;
}