#include <stdio.h>
#include <math.h>
 
int main()
{
    int ruutliige, lineaarliige, vabaliige;
    float vastus1, vastus2, ruutv2rk;
    char kysVastus, ruutv6rrand[20];
 
    printf("Selle programmiga saame leida ruutv6rrandi lahendid! \n");
    printf("Kas soovite sisestada v6rrandi kujul: ax2+bx+c=0 ? [Y/N]: ");
    scanf("%c", &kysVastus);
 
    switch(kysVastus){
    case 'N': case 'n':
        printf("Sisestage ruutliikme kordaja ");
        scanf("%d", &ruutliige);
        printf("Sisestage lineaaliikme kordaja ");
        scanf("%d", &lineaarliige);
        printf("Sisestage vabaliimme v22rtus ");
        scanf("%d", &vabaliige);
 
        ruutv2rk = pow(lineaarliige, 2)-(4*ruutliige*vabaliige);
        if(ruutv2rk>0){
            vastus1=((-lineaarliige + sqrt(ruutv2rk)) / (2*ruutliige) );
            printf("Esimene vastus on: %f \n", vastus1);
            vastus2=((-lineaarliige - sqrt(ruutv2rk)) / (2*ruutliige) );
            printf("Teine vastus on: %f", vastus2);
        }
        else if(ruutv2rk==0){
            vastus1=((-lineaarliige + sqrt(ruutv2rk)) / (2*ruutliige) );
            printf("Vastuseks on: %f", vastus1);
        }else{
            printf("Vabandust. Antud arvude puhul vastus puudub!");
        }
    break;
    case 'Y': case 'y':
        printf("Sisestage ruutv6rrand: ");
        scanf("%s", ruutv6rrand);
        printf("%s \n", ruutv6rrand);
 
    break;
    }
}
