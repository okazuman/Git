#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
char a[100];  
int s,k,t;

printf("What is your name?\n");
  scanf("%s",a);
  printf("Hello,%s\n",a);

  srand(time(NULL));
 
 s = rand()%6+1;
 k = rand()%6+1;
  printf("Rolling the dice...\n");
 printf("Dice 1:%d\n",s);
 printf("Dice 2:%d\n",k);
 t = s+k;
 printf("Total value :%d\n",t);

 if(t >= 7){
   printf("%s won!\n",a);
 }
 else printf("%s lost!\n",a);
 
  return 0;
}
