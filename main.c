#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand(( unsigned)time(NULL) );
	//opening
	printf("=================================================================\n");
	printf("*****************************************************************\n");
	printf("BINGO GAME BINGO GAME BINGO GAME BINGO GAME BINGO GAME BINGO GAME\n");
	printf("=================================================================\n");
	printf("*****************************************************************\n");
	
	//game
	bingo_init();
	bingo_print();
	bingo_inputNum(21);
	bingo_print();
	//initialize bingo boards
	/*
	while(game is not end)// 줄수가 N_BINGO보다 작음 
	{
		//bingo board print
		//print no. of completed lines
		//select a proper number
		//put the number on the board
	}
	*/
	
	//closing
	printf("\n\n\n\n\n\n");
	printf("=================================================================\n");
	printf("*****************************************************************\n");
	printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!BINGO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"); 
	printf("*****************************************************************\n");
	printf("=================================================================\n");
	return 0;
}
