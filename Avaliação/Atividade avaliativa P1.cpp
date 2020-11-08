#include <iostream>
using namespace std;
// A função devolve 1 se a cadeia s contém uma seqüência
// bem formada de parênteses e colchetes e devolve 0 se
// a seqüência está mal formada.

int bemFormada (char s[])
{
   char *pilha; int t;
   int n, i;

   n = strlen (s);
   pilha = mallocX (n * sizeof (char));
   t = 0;
   for (i = 0; s[i] != '\0'; ++i) {
      // a pilha está armazenada em pilha[0..t-1]
      switch (s[i]) {
         case ')': if (t != 0 && pilha[t-1] == '(')
                      --t;
                   else return 0;
                   break;
         case ']': if (t != 0 && pilha[t-1] == '[')
                      --t;
                   else return 0;
                   break;
         default:  pilha[t++] = s[i];
      }
   }
   free (pilha);
   if (t == 0) return 1;
   else return 0;
}
