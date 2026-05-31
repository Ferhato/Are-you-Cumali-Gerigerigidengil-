#include <stdio.h>

int main() {
  char ans;
  while(1) {
    printf("Are you Cumali Gerigerigidengil?\nanswer (y/n): ");
    scanf("%c",&ans);
    if(ans=='y') {printf("you ARE Cumali Gerigerigidengil\n"); return 0;}
    else if(ans=='n') {printf("you are NOT cumali gerigerigidemgil\n"); return 0;}
    else printf("please write 'y' or 'n' as a single lowercase letter for us to determine if you are Cumali Gerigerigidengil or not!\n");
  }
}
