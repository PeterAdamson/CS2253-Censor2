// Author Peter Adamson

#include <stdio.h>
#include <string.h>

void four_stars(char *start){
	int i;
	for(i = 0; i < 4; i++){
		start[i] = '*';
	}
}

char * find_blank(char *start){
	int i;
	int length = strlen(start);
	for(i = 0; i < length; i++){
		if(*start == ' '){
			return start;
		}
		else{
			start++;
		}
	}
	return start;
}

void censor(char *start){
	char* endOfWord;
	while(*start != NULL){
		endOfWord = find_blank(start);
		if((endOfWord - 4) == start){
			four_stars(start);
		}
		start = endOfWord + 1;
	}
}

int main(){
	char myStr[50] = "This is a test for the last word in line";
	censor(myStr);
	printf("%s\n", myStr);
	return -1;
}
