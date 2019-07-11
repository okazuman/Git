#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
 
  int s,k,t;
 
  /* 乱数の種を初期化 */
  srand(time(NULL));
 
  /* サイコロを振る */
  s=rand()%6+1;
  k=rand()%6+1;
 
  /* サイコロの出目を出力 */
  printf("Rolling the dice...\n");
  printf("Die1:%d\n",s);
  printf("Die2:%d\n",k);
  t=s+k;
  printf("Total value:%d \n",t);
 
  return 0;
}
