#include <stdio.h>
#include <string.h>
#include "main.h"

int main() {



	return 0;
}

char* winnerCheck(char player1[], char player2[]) {

	if (!(strcmp(player1, "rock") == 0 || strcmp(player1, "scissor") == 0 || strcmp(player1, "paper") == 0)) {
		return "Invalid";
	} else if (!(strcmp(player2, "rock") == 0 || strcmp(player2, "scissor") == 0 || strcmp(player2, "paper") == 0)) {
		return "Invalid";
	}

	if (strcmp(player1, player2) == 0) {
		return "Draw";
	}

	if (strcmp(player1, "rock") == 0) {
		if (strcmp(player2, "scissor") == 0) {
			return "Player1";
		}
	}



}