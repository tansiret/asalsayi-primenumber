// Copyleft 2018 Tan Siret AKINCI
#include<stdio.h>
 
int main()
{
   long int asal, i = 3, count, c;
   asal =999999999999999999;
 
   if ( asal >= 1 )
   {
      printf("İlk %d asal sayılar :\n",asal);
      printf("2\n");
   }
 
   for ( count = 2 ; count <= asal ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         printf("%d\n", i);
         count++;
      }
      i++;
   }
 
   return 0;
}
