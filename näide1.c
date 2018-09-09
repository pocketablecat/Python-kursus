/*
 *  hello.c
 *
 *  Tervitame maailma! Programm tr�kib ekraanile "Hallo world!", lisab reavahetuse ja l�petab t��.
 */

#include <stdio.h>
#include <conio.h>

int main(void)
{
        printf("Hello world!\n");
        printf("Millist v��rtust otsime?");
        scanf("%d", &otsitav)
        getch();
        return 0;
}


/* M�ned selgitused:
 *
 * main - peaprogrammi nimi
 * int - peaprogramm, mida v�ib vaadelda ka funktsioonina, oskab tagastada t�isarvulise v��rtuse ops�steemi tasandile
 * return 0; - konkreetne tagastatav v��rtus on 0, mis tavap�raselt t�hendab perogrammi �nnelikku l�ppemist (vigu ei tekkinud)
 * main(void) - mais j�rele sulgudesse saab lisada sisendparameetrite loetelu; void t�hendab, et parameetreid ei ole
 * printf("Hello world!\n"); - v�ljatr�kifunktsioon, \n stringi l�pus t�histab reavahetust
 * #include <stdio.h> - printf on kasutatav t�nu sellele, et kasutusele on v�etud teek stdio (standard input/output)
 * Windowsis kirjutades v�ime m�ned funktsiooni k�itumist lisavad osad �ra j�tta - vt hallo1.c
 *
 */
