/*Samir Cerrato
* COMP 211, Fall 2022, Wesleyan University
 * Homework #5, Problem 3
 */

 #include <stdlib.h>
 #include <time.h>
 #include <stdio.h>

 void playerturn(int A[]){
   int remainingsticks;
   int take;
   int group;


   while(group < 0 || group > 2 || A[group] == 0){
     printf("\n You must choose a number between 0 and 2.");
     printf("From which pile (0-2) do you want to remove sticks? ");
     scanf(" %i", &group);

   }

   while(take < 1 || take > A[group]){
     printf("\n You must choose a number between 1 and %d .", A[group]);
     printf("How many sticks do you want to remove? ");
     scanf(" %i", &take);
   }
   remainingsticks = A[group] - take;
   A[group]= remainingsticks;

 }

 void computerturn(int A[]){
   int group = rand()%2;
   while(group != 0){
     group = rand()%2;
   }
   int take = rand()%A[group];
   take += 1;

   int remainingsticks = A[group] - take;
   A[group]= remainingsticks;
   printf("The computer remove %d from pile %d \n", take, group);
   printf("Pile 0: %d \n", A[0]);
   printf("Pile 1: %d \n", A[1]);
   printf("Pile 2: %d \n", A[2]);
 }

int main(void){
   srand(time(NULL));
   int A[3] = {rand()%10, rand()%10, rand()%10};


   printf("Pile 0: %d \n", A[0]);
   printf("Pile 1: %d \n", A[1]);
   printf("Pile 2: %d \n", A[2]);


  while (1 == 1){

   playerturn(A);
   //this is where my codes and I am not sure why
   if(A[0] == 0 && A[1] == 0 && A[2] == 0){
     printf("You lose!");
     break;
   }
   computerturn(A);
   //this is where my codes and I am not sure why
   if(A[0] == 0 && A[1] == 0 && A[2] == 0){
     printf("Oh no! I lose!");
     break;
   }
  }
 return 0;

}
