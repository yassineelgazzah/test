#include <stdlib.h>
#include <stdio.h>

int resoudre1(float a, float b, float *res)
{
   if((a==0) && (b==0))
     return -1;
else
    {  if(a==0)
      return 0;
else
      {
           *res = -b/a;
            return 1;
        }
}      

}

int main()
{
float va,vb;
float *sol;
int r;
printf("Donner les valeurs\n");
scanf("%d",&va);
scanf("%d",&vb);
r=resoudre1(va,vb,&sol);
if (r==1){
  printf("La solutio est %d", sol);
}
}

