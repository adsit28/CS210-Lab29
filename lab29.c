/*
 * FILE: lab29.c
 * 25 Oct 2023
 * djb
 */


#include <stdio.h>
#include <stdlib.h>
#include "L29card.h"
#include "L29cardList.h"

void playGame(){

   // TODO 2: create CardList for a) deck, b) players hands, c) pile per player
   CardList* deck = NULL;
   CardList* player1Hand = NULL;
   CardList* player2Hand = NULL;
   // CardList* player1Pile = NULL;
   // CardList* player2Pile = NULL;


   // TODO 3: create, populate, and shuffle the deck


   // TODO 4: deal all cards to players
   while(!isEmpty(deck)){
       // take a card from the deck and add it to the hand of player 1
       // take a card from the deck and add it to the hand of player 2
   }
   freeCardList(deck);   


   // TODO 5: the game continues until one player has all cards or 10,000 rounds
   int roundCounter = 0;
   while(isEmpty(player1Hand) || isEmpty(player2Hand)){ // edit this line

      // TODO 5a: each player removes a card from hand and places on pile


      // TODO 5b: if there is a tie for the highest card, repeat 5a

      // TODO 5c: player who played the highest card adds piles to their hand
      //        : add opponents pile, then own pile

      // TODO 6: often this game plays for 100's or 1000's of rounds
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

   // TODO 7: finish the 'who won' report below
   printf("GAME OVER\n");
   if(isEmpty(player1Hand)){
      printf("player TWO wins\n");
   } else if(isEmpty(player2Hand)){
      printf("player ONE wins\n");
   } else { // played all rounds
   }

   // TODO 8: free the cardLists used in the game

}

int main(){

// TODO 1: seed the random number generator with time
//   srand(time(0));
   playGame();
   return 0;
}

