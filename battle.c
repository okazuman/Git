#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
int s,k,t;

  srand(time(NULL));
 
 s = rand()%6+1;
 k = rand()%6+1;
  printf("Rolling the dice...\n");
 printf("Dice 1:%d\n",s);
 printf("Dice 2:%d\n",k);
 t = s+k;
 printf("Total value :%d\n",t);

 if(t >= 8){
   printf("%you won!\n",a);
 }
 else printf("%you lost!\n",a);
 
  return 0;
}
