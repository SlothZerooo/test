//this file contains the definition of function input_score() 
#include "score.h"
#include <stdio.h>

void input_scores(int s[]){
	int i, input=0;

	printf("Enter Scorces, %d to end: ", SENTINEL);
	for(i=0; i<MAX && input!=SENTINEL; ++i){
		printf("%d: ", i+1);
		scanf("%d", &input);
		s[i]=input;
	}
	printf("%d scores are given.\n", i-1);
}
