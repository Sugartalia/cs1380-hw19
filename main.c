/* main.c - Natalia Robertson
 */
#include <stdio.h>
#include <stddef.h>
#include "scores.h"

int main(void)
{
    int scores[] = {12, 8, 15, 10, 9};
    int n = sizeof(scores) / sizeof(scores[0]);

    printf("scores: ");
    print_scores(scores, n);
    printf("n (sizeof) = %d\n", n);
    printf("score_at 2 = %d\n", score_at(scores, n, 2));
    printf("score_at 9 = %d\n", score_at(scores, n, 9));
    printf("sum = %d\n", sum_scores(scores, n));
    printf("max = %d\n", max_score(scores, n));
    printf("count >= 10: %d\n", count_at_least(scores, n, 10));

    int board[3][GAMES] = {
        {12, 8, 15, 10},
        {9, 11, 7, 14},
        {13, 6, 16, 8}
    };
    int nteams = sizeof(board) / sizeof(board[0]);

    printf("board:\n");
    print_board(board, nteams);
    printf("board sum = %d\n", board_sum(board, nteams));

    printf("NULL calls (should print nothing):\n");
    print_scores(NULL, 5);
    print_board(NULL, 3);

    return 0;
}
