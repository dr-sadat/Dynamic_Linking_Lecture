#include<stdio.h>
#include<unistd.h>

int main() {
   printf("It's been a long day... Going to take a nap for 5 seconds.\n");
   sleep(5);
   
   printf("\nI'm back!\n");
   return 0;
}
