/*  flex  file for lexical analyser for PLUS-TIMES-POWER expressions,
    which involve simple arithmetic for nonnegative integers
    with addition, multiplication and powers.
    Graham Farr, Monash University
    Initially, copied from the Wikipedia page for  lex, then modified over time.
    Last updated:   5 September 2024
*/
    
/*** Definition section ***/

%{
/* C code to be copied verbatim */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <complex.h>
#undef  I
void yyerror(char *);
#include "quant.h"
#include "y.tab.h"
%}


%%
    /*** Rules section ***/

            /* yytext is a string containing the matched text. */

    /* Nonnegative integers ...  */
        
"*"             {  return '*';  }                  // return the character '*'
"("             {  return '(';  }                  // return the character '('
")"             {  return ')';  }                  // return the character ')'
"(x)"           {  return KRONECKERPROD;  }
CNOT            {  return CNOT;  }
TOF             {  return TOF;  }
I               {  return I;  }
H               {  return H;  }
X               {  return X;  }
Y               {  return Y;  }
k0              {  return KET0;  }
k1              {  return KET1;  }
Z               {  return Z;  }
\n              {  return '\n';  }                  // return the newline character
[ \t]           {  /* skip whitespace */  }
.               {  yyerror("invalid character");  }

%%
    /*** C Code section ***/

void yyerror(char *s) {
      fprintf(stderr, "line %d: yytext = %s.  Error msg: %s.\n", yylineno, yytext, s);
}


int yywrap(void) {
   return 1;
}


/*  comment out the function  main()  if using  lex  with  yacc   */
/*  
int main(void) {
    yylex();
    return 0;
}
*/

