#include <stdio.h>

main()

{

 int  N;      /* La donnée   */

 int  I;      /* Le compteur */

 double FACT; /* La factorielle N! - Type double à */

              /* cause de la grandeur du résultat. */

 

 do

    {

      printf("Entrez un entier naturel : ");

     scanf("%d", &N);

    }

 while (N<0);
 /* a */

 /* Pour N=0, le résultat sera automatiquement 0!=1 */
 I=1;

 FACT=1;
 while (I<=N)

       {

        FACT*=I;

        I++;

       }

 

 printf ("%d! = %.0f\n", N, FACT);

 return 0;

}