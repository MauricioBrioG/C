//Acomodo del sintax if: https://n9.cl/mdore
//Also Help me the blank example that share the teacher
#include <stdio.h>

int main()
{ 
   int angle1, space; 
   angle1 = space = 0; 
   char a; //b will "store" the characters
   
   while((a = getchar())!= EOF)
   if (a == '<' || a == '>') { 
       ++angle1;                        //Book example, to increment the value by one, it helps to have spaces between the words*
   } else if (isspace(a) || a == '/') { //Help for solution teacher example, cause idk how to represent the spaces of the html "isspace"
       ++space;                        //*
      } else {
       if (angle1) { 
           putchar (' '); // Sustitute with a blank space
           angle1 = 0; //Hlp for solution teacher example, cause the output text didn't see it well
                        // I didn't know how to fix it **
       } else {
           if (space) {
               putchar (' '); 
               space = 0; //same issue*
           }
       }
       putchar(a); //show the modified HTML code
       
   } 
}
    


