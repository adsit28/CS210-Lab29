/* l29cardList.h
 * =============================================================
 * Name: Your Name
 * Section:  Your Section
 * Project:  FILL IN
 * Purpose:  FILL IN
 * ============================================================= */

#ifndef L29CARDLIST_H
#define L29CARDLIST_H

#include "l29card.h"

/* a struct used to create a cardList (a list of Card structs)
 * FIELD: count - the number of cards in the list
 * FIELD: topCard - a pointer to the top card in the list
 * FIELD: bottomCard - a pointer to the bottom card in the list
 */
typedef struct {
  int count;
  Card* topCard;
  Card* bottomCard;
} CardList;

/* createCardList - initializes a CardList struct
 * sets count, topCard, and bottomCard to valid values
 */
CardList* createCardList();

/* freeCardList - deallocates the list and the CardList struct
 * @param cardList - the cardList to be deallocated
 */
void freeCardList(CardList* cardList);

/* displayCardList - display the list of cards, including count and all cards
 * @param cardList - the card list to display
 */
void displayCardList(CardList* cardList);

/* isEmpty - returns 1 (TRUE) if the list is empty; 0 otherwise
 * @param cardList - the list to check
 */
int isEmpty(CardList* cardList);

/* listLength - returns number of cards on the list
 * @param cardList - the list to check
 */
int listLength(CardList* cardList);

/* makeDeck - populates the list with a standard set of 52-cards
 * @param deck - the cardList to populate
 */
void makeDeck(CardList* deck);

/* shuffleCardList - randomizes the order of cards in a list
 * @param cardList - the cardList to shuffle
 */
void shuffleCardList(CardList* cardList);

/* appendCard - add a card to the end of the cardList
 * @param cardList - the list to add the card to
 * @param card - a Card to add to the list
 */
void appendCard(CardList* cardList, Card* card);

/* lookAtBottomCard - returns a pointer to the bottom card
 * @param cardList - the cardList to look at (the list is unchanged)
 * @return - card at the bottom of the list
 */
Card* lookAtBottomCard(CardList* cardList);

/* getTopCard - removes the top card from a list of cards
 * @param cardList - the list to remove a card from
 * @return - former top card (returns NULL for empty list)
 */
Card* getTopCard(CardList* cardList);

/* lookAtTopCard - return a pointer to the top card in a list
 * @return - pointer to top card in the list
 */
Card* lookAtTopCard(CardList* cardList);

/* appendCardList - concatenate two lists
 * @param list1 - the list that grows
 * @param list2 - the list that becomes part of list1
 */
void appendCardList(CardList* list1, CardList* list2);

#endif
