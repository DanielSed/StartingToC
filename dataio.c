#include <stdio.h>


int main(){

	char prijmeni;
	int rok, x;
	char pohlavi;
	

    printf("Rok narozeni:");
    	scanf("%d", &rok);

    printf("Pohlavi(m/f):");
    	scanf(" %c", &pohlavi);

    printf("Jak dlouhe je vase prijmeni?");
    	scanf(" %d", &x);
   		
    printf("Prijmeni:");
    	scanf(" %s", &prijmeni);

    printf("Rok narozeni:%d\n", rok);

    printf("Pohlavi(m/f):%c\n", pohlavi);

    printf("Prijmeni:%s\n", prijmeni);
 
    return 0;
}
