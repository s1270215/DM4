#include <stdio.h>
#include <stdlib.h>

int main(){
int l,num,heads=0,tails=0;

  char str[8];
  printf("あんた誰？");
  scanf("%s",str);
  printf("ハロー、%s\n,str");
  
  
print("Tossing a coin...\n");

for(l==0; l<3;l++){
num = rand();
if(num%2==0){
printf("Round %d: Head\n", l+1);
heads++;
} else{
printf("Round %d: Tail\n", l+1);
tails++;
}
}

printf("Heads: %d, Tails: %d\n", heads,tails);
  
  if(heads==2)printf("%s won,str");
  else printf("%s lost,str");

return 0;
[EOF]
