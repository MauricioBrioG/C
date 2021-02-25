//Acomodo del sintax if: https://n9.cl/mdore
#include <stdio.h>

int main()
{ 
   int angle1, space; 
   angle1 = space = 0; 
   char a; //b will "store" the characters
   
   while((a = getchar())!= EOF)
   if (a == '<' || a == '>') { 
       ++angle1;                        
   } else if (isspace(a) || a == '/') { //Help for solution teacher example, 
                                        //cause idk how to represent the spaces of the html
                                        // I'm talking about the "isspace"
       ++space;
      } else {
       if (angle1) { //The condition is true
           putchar (' '); // Sustitute with a blank space
           angle1 = 0; //Hlp for solution teacher example, cause the text didn't see it well
                        // I didn't know how to fix it *
       } else {
           if (space) {
               putchar (' '); 
               space = 0; //same issue*
           }
       }
       putchar(a); //show the modified HTML code
       
   } 
}
    


