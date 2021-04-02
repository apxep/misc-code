/* quick and simple generic C to create something that sort of looks like DNA.  C++ version in this repo is better */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getNum(char group[], int modulo, int count)
{
  int i;
  for (i = 0; i < count; i++ ) {
    int num = (rand() % modulo );
    printf("%c", group[num]);
  }
}

int main()
{
  int modulo = 4, count = 1024;
  char d_nucs[4] = {'A','C','G','T'};
  char r_nucs[4] = {'A','C','G','U'};
  srand(time(0));
  getNum(d_nucs, modulo, count);
  printf("\n");
  getNum(r_nucs, modulo, count);
  printf("\n");
  return 0;
}
