//Welcome to rollic
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h>

 int random(int num_rolls){
  // Generate the specified number of random dice rolls 

  for (int i = 0; i < num_rolls; i++) { 
// Generates a random number between 1 and 6
    int roll = (rand() % 6) + 1; 
 

    printf("Roll %d: %d\n", i+1, roll); 
  }

}

int main() { 

  int num_rolls, i; 


  printf("Enter the number of dice rolls: "); 

   scanf("%d", &num_rolls); 

  // Seed the random number generator with the current time 

  srand(time(NULL)); 

  random(num_rolls);

  /*// Generate the specified number of random dice rolls 

  for (i = 0; i < num_rolls; i++) { 
// Generates a random number between 1 and 6
    int roll = (rand() % 6) + 1; 
 

    printf("Roll %d: %d\n", i+1, roll); 

  } */

  return 0; 

}
