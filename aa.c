#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{


   int c = 10;
   //xeclp("ps", "ps", "-o", "pid, ppid, pgap, session, tpgid, comm", NULL);
   char s[40];
   sprintf(s, "i'm student %d",c);
   printf("%s", s);
    
  return 0; 




}
