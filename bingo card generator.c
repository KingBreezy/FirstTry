/*c version to convert to js... need to fix the rand and figure out how to run it in js first tho -.-*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
int a[5],i,tables;
void generateTable();
void Table();
main(){
    system("COLOR 9B");
    srand(time(NULL));
    printf("how many tables do you need\n");
    scanf("%d",&tables);
    for (i=0;i<tables;i++)
    {
    Table();
    }
}
void generateTable(){
    int h;
    for (h=0;h<5; h++){
        a[h]=rand()%99+1;
        printf("%d\t%d\t%d\t%d\t%d\n",a[0],a[1],a[2],a[3],a[4]);
    }
}
void Table(){
    int c;
    for (c = 0; i<5; i++){
        printf("B\tI\tN\tG\tO\n");
        generateTable();
        printf("\n");
    }
}
