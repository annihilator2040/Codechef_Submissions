// https://www.codechef.com/problems/WINNERR

#include <stdio.h>
#include <math.h>
#include <string.h>

void batman()
{
   int pa, pb, qa, qb, penP, penQ;
   scanf("%d%d%d%d",&pa,&pb,&qa,&qb);
   if(pa>pb){
        penP = pa;
   }
   if(pb>pa){
       penP = pb;
   }
   if(qa>qb){
      penQ = qa;
   }
   if(qb>qa){
       penQ = qb;
   }
   if(penP>penQ){
       printf("Q\n");
   }
   else if(penP==penQ){
       printf("TIE\n");
   }
   else{
       printf("P\n");
   }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--) batman(); 
    return 0;
}
