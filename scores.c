/* scores.c - Natalia RObertson
 */
#include <stdio.h>
#include <stddef.h>
#include "scores.h"

void print_scores(const int scores[], int n)
{
    if (scores == NULL || n <= 0) {
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");
}

int score_at(const int scores[], int n, int index)
{
    if (scores == NULL || n <= 0 || index < 0 || index >= n) {
        return 0;
    }
    return scores[index];
}

int sum_scores(const int scores[], int n)
{
    if (scores == NULL || n <= 0) {
        return 0;
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += scores[i];
    }
    return total;
}

int max_score(const int scores[], int n)
{
    if (scores == NULL || n <= 0) {
        return 0;
    }
    int best = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > best) {
            best = scores[i];
        }
    }
    return best;
}

int count_at_least(const int scores[], int n, int threshold)
{
    if (scores == NULL || n <= 0) {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= threshold) {
            count++;
        }
    }
    return count;
}

void print_board(const int board[][GAMES], int nteams)
{
    if (board == NULL || nteams <= 0) {
        return;
    }
    for (int row = 0; row < nteams; row++) {
        for (int col = 0; col < GAMES; col++) {
            printf("%4d", board[row][col]);
        }
        printf("\n");
    }
}

int board_sum(const int board[][GAMES], int nteams)
{
    if (board == NULL || nteams <= 0) {
        return 0;
    }
    int total = 0;
    for (int row = 0; row < nteams; row++) {
        for (int col = 0; col < GAMES; col++) {
            total += board[row][col];
        }
    }
    return total;
}
