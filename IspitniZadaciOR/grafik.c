#include <stdio.h>

int main() {
  printf("Unesite clanove niza: ");
  int niz[20];
  int broj;
  int i, j, br = 0;
  for (i = 0; i < 20; i++) {
    scanf("%d", &broj);
    if (broj == 999)
      break;
    if (broj < -10 || broj > 10) {
      printf("Broj nije u trazenom intervalu");
      return 0;
    }
    niz[i] = broj;
    br++;
  }
  int k;
  for (i = 10; i >= -10; i--) {
    for (j = 0; j <3* br; j++) {
      for (k = 0; k < br; k++) {
        if (j == 3 * k && i == niz[k])
          printf("*");
        else if (j == 3*k && niz[k] > 0 && i < niz[k] && i > 0)
          printf("|");
        else if (j ==3* k && niz[k] < 0 && i > niz[k] && i < 0)
          printf("|");
        else if (i == 0)
          printf("-");
        else
          printf(" ");
      }
    }
    printf ("\n");
  }
  return 0;
}


