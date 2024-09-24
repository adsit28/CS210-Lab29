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

#define ONE_WINS 1
#define TWO_WINS 2
#define TIE 0

void playGame(){

   // TASK 2: declare CardList pointers for the deck, each players hand, and a 
   //         discard pile for each player and initialize each cardList by calling
   //         createDeck()
   CardList* deck = NULL;
   CardList* player1Hand = NULL;
   CardList* player2Hand = NULL;
   // CardList* player1Pile = NULL;
   // CardList* player2Pile = NULL;


   // TASK 3: populate the deck with cards then shuffle the deck


   // TASK 4: deal all cards in the deck to players hands
   while(!isEmpty(deck)){
       // take a card from the deck and add it to the hand of player 1
       
       // take a card from the deck and add it to the hand of player 2

   }
   // Free the deck as all cards have been delt and will not return
   // to the deck.
   freeCardList(deck);   


   // TASK 5: the game continues until one player has all cards or 200 rounds 
   //         are complete
   int roundNum = 1; // tracks round number
   int winner = TIE; // used to indicate which player wins
   while(1){ // edit this line

      // TASK 5a: start the game by having each player remove a card from their 
      //          hand and place it on their pile

      // TASK 5b: we now need to determine which player wins this round or if 
      //          there is a tie for the highest card. you should handle ties
      //          first.  when there is a tie add 4 cards to each players 
      //          pile and then compare top card ranks to determine a winner 
      //          for this round. If no winner is found repeat this process 
      //          until a round winner is determined or if at anytime a players 
      //          hand becomes empty that player loses the game.

      // TASK 5c: player who played the highest card adds piles to their hand,
      //          add opponents pile, then own pile

      // TASK 6: often this game can go on for 100's of rounds
      //         reduce the output to once every 5 rounds

      printf("-------- round: %03d\n", roundNum); // no edit needed
      printf("player 1 hand has: ");   // no need to edit this line
      displayCardList(player1Hand);    // no need to edit this line
      printf("\n");                    // no need to edit this line
      printf("player 2 hand has: ");   // no need to edit this line
      displayCardList(player2Hand);    // no need to edit this line
      printf("\n");                    // no need to edit this line
      printf("\n");                    // no need to edit this line
   }

   // GAME OVER

   // TASK 7: finish the 'who won' report below.  Provided code doesn't account for the
   //         round limit being reached.
   printf("GAME OVER\n");
   if(isEmpty(player2Hand)){
      winner = ONE_WINS;
   } else if(isEmpty(player1Hand)){
      winner = TWO_WINS;
   } else { 
      // played all rounds without a winner
   }
   switch (winner) {
      case ONE_WINS:
         printf("player ONE wins\n");
         break;
      case TWO_WINS:
         printf("player TWO wins\n");
         break;
      default:
         printf("IT'S A TIE!\n");
         break;
   }

   // TASK 8: free the cardLists used in the game

}

int main(){

// TASK 1: seed the random number generator with time and include proper header
//   srand(time(0));
   playGame();
   return 0;
}