/* lab29.c
 * =============================================================
 * Name: Your Name
 * Section:  Your Section
 * Project:  FILL IN
 * Purpose:  FILL IN
 * ============================================================= */

#include <stdio.h>
#include <stdlib.h>
#include "card.h"
#include "cardList.h"

void playGame(){

   // TASK 2: initialize CardList pointers for the deck, each players hand, and a 
   //         discard pile for each player
   CardList* deck = NULL;
   CardList* player1Hand = NULL;
   CardList* player2Hand = NULL;
   // CardList* player1Pile = NULL;
   // CardList* player2Pile = NULL;


   // TASK 3: create, populate, and shuffle the deck


   // TASK 4: deal all cards to players
   while(!isEmpty(deck)){
       // take a card from the deck and add it to the hand of player 1
       // take a card from the deck and add it to the hand of player 2
   }
   freeCardList(deck);   


   // TASK 5: the game continues until one player has all cards or 10,000 rounds
   int roundCounter = 0;
   while(isEmpty(player1Hand) || isEmpty(player2Hand)){ // edit this line

      // TASK 5a: each player removes a card from hand and places on pile


      // TASK 5b: if there is a tie for the highest card, repeat 5a

      // TASK 5c: player who played the highest card adds piles to their hand
      //        : add opponents pile, then own pile

      // TASK 6: often this game plays for 100's or 1000's of rounds
      //       : reduce the output to once every 100 rounds

      printf("-------- round: %03d\n", roundCounter); // no edit needed
      printf("player 1 hand has: ");   // no need to edit this line
      displayCardList(player1Hand);    // no need to edit this line
      printf("\n");                    // no need to edit this line
      printf("player 2 hand has: ");   // no need to edit this line
      displayCardList(player2Hand);    // no need to edit this line
      printf("\n");                    // no need to edit this line
      printf("\n");                    // no need to edit this line
   }

   // GAME OVER

   // TASK 7: finish the 'who won' report below
   printf("GAME OVER\n");
   if(isEmpty(player1Hand)){
      printf("player TWO wins\n");
   } else if(isEmpty(player2Hand)){
      printf("player ONE wins\n");
   } else { // played all rounds
   }

   // TASK 8: free the cardLists used in the game

}

int main(){

// TASK 1: seed the random number generator with time
//   srand(time(0));
   playGame();
   return 0;
}