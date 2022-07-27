#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  int j, cnt = 0,total = 0;
  double avg;

  fp = fopen(argv[1], "r");

  while ((j != 0) && (cnt < 5000)) {
    fscanf(fp, "%d,", &j);
    if (j == 0) break;
    total += j;
    cnt++;
  }

  avg = total / cnt;

  printf("%dcase total:%d avg:%4.2lf\n", cnt, total, avg);

  fclose(fp);

  scanf("%d", &cnt);
  return 0;
}
