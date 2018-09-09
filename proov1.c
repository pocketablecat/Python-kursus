
#include <stdio.h>
#include <conio.h>

main()
{
        printf("Sisestage tund");
        int tund;
        scanf("tund %d", &tund);
        
        printf("Sisestage minut");
        int minut;
        scanf("minut %d ", &minut);
                
        printf(" Kellaeg on: %d : %d ", tund, minut);
        getch();
        return 0;
}

