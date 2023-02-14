#include <stdio.h>

char *izbaci_maxbroj(char *s) {
  char *pocetak = s;
  if (*s == '0') {
    *s = '\0';
    return pocetak;
  }
  while (*s != '\0' && !(*s > '0' && *s < '9'))
    s++;
  if (*s == '\0')
    return pocetak;
  char *br = s;
  int max = 0;
  while (*s != '\0' && *s >= '0' && *s <= '9') {
    max *= 10;
    max += (*s) - 48;
    s++;
  }
  if (br != pocetak && *(br - 1) == '-')
    max *= -1;
  if (*s == '\0') {
    if (max < 0)
      *(br - 1) = '\0';
    else
      *br = '\0';
    return pocetak;
  }
  s = pocetak;
  char *poki;
  while (*s != '\0') {
    poki = s;
    int broj = 0;
    while (*s != '\0' && *s >= '0' && *s <= '9') {
      broj *= 10;
      broj += (*s) - 48;
      s++;
    }
    if (*poki >= '0' && *poki <= '9') {
      if (poki != pocetak && *(poki - 1) == '-')
        broj *= -1;
      if (broj > max)
        max = broj;
    }
    printf("%c", *s);
    if(*s)
    s++;
  }
  s = pocetak;
  char *pok;
  while (*s != '\0') {
    int broj = 0;
    pok = s;
    while (*s != '\0' && *s >= '0' && *s <= '9') {
      broj *= 10;
      broj += (*s) - 48;
      s++;
    }
    if (pok != pocetak && *(pok - 1) == '-')
      broj *= -1;
    if (broj == max) {
      char *m = s;
      if (broj < 0)
        pok--;
      while (*m != '\0') {
        *pok = *m;
        pok++;
        m++;
      }
      *pok = '\0';
    }
    if(*s)
    s++;
  }
  return pocetak;
}

int main() {
  char tekst[] =
      "Broj 123: broj 123 je veci od broja 56 koji je veci od 9 i -999";
  printf("%s", izbaci_maxbroj(tekst));
  return 0;
}
