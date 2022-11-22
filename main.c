#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"
#define BINGO_RES_UNFINISHED -1
#define BINGO_RES_FINISHED 0
#define N_LINE 2
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check_gameEnd(void)
{
	int res = BINGO_RES_UNFINISHED;
	if(bingo_countCompletedLine()>= N_LINE)
		res = BINGO_RES_FINISHED;
	return res;
}
int get_number(void)
{
	int selNum=0;
	do{
		printf("select a number : ");
		scanf("%d",&selNum);
		fflush(stdin);
		
		if(selNum<1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum)==BINGO_NUMSTATUS_ABSENT)
		{
			printf("%i is not on the board! select other one.\n",selNum);
		}
	} while (selNum<1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum)==BINGO_NUMSTATUS_ABSENT);
	return selNum;
}

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
	int selNum;
	
	while(check_gameEnd()== BINGO_RES_UNFINISHED)
	{
		bingo_print();
		printf("No. of completed line: %i\n", bingo_countCompletedLine() );
		selNum=get_number();
		bingo_inputNum(selNum);
	}
	
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
