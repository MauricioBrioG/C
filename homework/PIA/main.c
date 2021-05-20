
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
    
    FILE *f; //a file is declared
    printf("Welcome to the dog adoption system\n");
    printf("Check the list of option 1 and 5 before adopting a dog\n");
    printf("1 See the dogs that we have at the shelter\n");
    printf("2 See the description of the dogs\n");
    printf("3 Register a new dog\n");
    printf("4 Adopt a partner\n");
    printf("5 Adopted List\n");
    printf("Enter a number according to the action you want to perform: ");
    scanf("%d", &opcion);
    switch(opcion){ //Make a menu with switch, in order to perform the actions that have the program
        case 1:
            f = fopen("perros.txt", "r"); //the file is open only to read the content ("r")
            if (f == NULL){//the if is in case there is any error in hte file and it communicate it
                printf("The file could not be opened."); 
                
            } while (aux != EOF) { //cycle that read the content character per character and present it
                aux = fgetc(f);
                printf ("%c", aux);
            }
            fclose(f); //command to close the file in order to prevent any problem
            break;
        case 2:
             f = fopen("descripcion.txt", "r");
            if (f == NULL){
                printf("The file could not be opened.");
                
            } while (aux != EOF) {
                aux = fgetc(f);
                printf ("%c", aux);
            }
            fclose(f);
            break;
        case 3:
            f= fopen("perros.txt", "a");//commando to open the file and add information ("a")
            if(f == NULL){
            printf("The file could not be opened.");
            } else { printf("\n");
            fgets(nombre, 50, stdin); 
            fprintf(f, "%s", nombre);
            } 
            fflush(f);
            fclose(f); //All this if doesn't do anything, there is a problem so I applied the same if twice
            lista(); //call a void 
            registrar();
            break;
        case 4:
            f= fopen("adopcion.txt", "a");
            if(f == NULL){
            printf("The file could not be opened.");
            } else { printf("\n");
            fgets(adop, 50, stdin);
            fprintf(f, "%s", adop);
            } 
            fflush(f);
            fclose(f); //Same case with this if it doesn't works correctly
            adoptar();
            break;
        case 5:
            f = fopen("adopcion.txt", "r");
            if (f == NULL){
                printf("The file could not be opened.");
                
            } while (aux != EOF) {
                aux = fgetc(f);
                printf ("%c", aux);
            }
            fclose(f);
            break;
    }
    return 0;
}

void registrar(){
    char des[1000];
    FILE *f;
   
    
    f= fopen("descripcion.txt", "a");
    if(f == NULL){
        printf("The file could not be opened.");
    } else { printf("Now we will do the process to add a description about our new friend\n");
        printf("Enter the name:\n");
        fgets(des, 1000, stdin); //collect a string of characters
        fprintf(f, "\nName: %s", des);//What is written is passed to the file
        
        printf("Enter the breed:\n");
        fgets(des, 1000, stdin); //a tutorial helps me with this command
        fprintf(f, "Breed: %s", des);
        
        printf("Enter the gender:\n");
        fgets(des, 1000, stdin);
        fprintf(f, "Gender: %s", des);
        
        printf("Enter age:\n");
        fgets(des, 1000, stdin);
        fprintf(f, "Age: %s", des);
        
        printf("Enter the weight in kilograms:\n");
        fgets(des, 1000, stdin);
        fprintf(f, "Weight(kg): %s", des);
        
        printf("Some special care?\n");
        fgets(des, 1000, stdin);
        fprintf(f, "Special care: %s", des);
        
        printf("Successful registration!!");
    }
    fclose(f);
}

void adoptar(){
     char adop[50];
     FILE *f;
    f= fopen("adopcion.txt", "a");
            if(f == NULL){
            printf("The file could not be opened.");
            } else { printf("Who will be the new member of your family?\n");
            fgets(adop, 50, stdin);
            fprintf(f, "%s", adop);
            printf("We appreciate you giving them a home:)");
            
            } 
            fflush(f);
            fclose(f);
}

void lista(){
    char nombre[50];
    FILE *f;
     f= fopen("perros.txt", "a");
            if(f == NULL){
            printf("The file could not be opened.");
            } else { printf("Name and breed:\n");
            fgets(nombre, 50, stdin);
            fprintf(f, "%s", nombre);
            } 
            fflush(f);
            fclose(f);
}
