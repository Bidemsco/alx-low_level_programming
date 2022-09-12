#include <stdio.h>                                                                                                                                                                                                                                       
/**                                                                                                                                   
 * program that prints all possible combinations of two two-digit numbers.                                                            
 */                                                                                                                                   
                                                                                                                                      
int main ()                                                                                                                           
{                                                                                                                                     
        int nl  =  0,   n2;                                                                                                           
        while(nl  <=99)                                                                                                               
        {                                                                                                                             
                if (n2  != nl)                                                                                                        
                {                                                                                                                     
                        putchar((nl / 10) + 48);                                                                                      
                        putchar((nl % 10) + 48);                                                                                      
                        putchar ('   ');                                                                                              
                        putchar( (n2 / 10) + 48);                                                                                     
                        putchar( (nl % 10) + 48);                                                                                     
                                                                                                                                      
                         if(nl  != 98  | | n2 != 99)                                                                                  
                        {                                                                                                             
                                putchar(' , ');                                                                                       
                                putchar('   ');                                                                                       
                        }                                                                                                             
                }                                                                                                                     
                ++n2                                                                                                                  
        }                                                                                                                             
        ++nl;                                                                                                                         
}                                                                                                                                     
putchar(' \n');                                                                                                                       
return 0;                                                                                                                             
}
