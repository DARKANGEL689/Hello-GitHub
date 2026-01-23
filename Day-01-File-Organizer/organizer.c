#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    
    printf("--- FILE ORGANIZER (DAY 2) ---\n");
    printf("This program will create 'Images' and 'Docs' folders.\n");
    printf("It will move .jpg files to Images and .txt files to Docs.\n");
    printf("Do you want to proceed? (1 for Yes, 0 for No): ");
    
    scanf("%d", &choice);

    if (choice == 1) {
       
        system("mkdir Images"); 
        system("mkdir Docs"); 

       
        printf("\nMoving Images...\n");
        system("move *.jpg Images");
        
        printf("\nMoving Text files...\n");
        system("move *.txt Docs");
        
        printf("\nDone! Check your folder.\n");
    } else {
        printf("Operation cancelled.\n");
    }

    return 0;
}