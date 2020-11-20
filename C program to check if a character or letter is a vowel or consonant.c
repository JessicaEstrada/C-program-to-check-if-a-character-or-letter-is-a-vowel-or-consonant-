#include <stdio.h>
#include <stdlib.h>

void main ()
{
    char a;

    printf("Please Enter an alphabet: \n");
    scanf("%c", &a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
		a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
        printf("\n %c is a VOWEL", a);
    else
        printf("\n %c is a CONSONANT", a);

    getch();

}
