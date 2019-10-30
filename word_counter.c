#include <stdio.h>

#define IN 1 /* Character in line */
#define OUT 0 /* Character out line */
	


int main()
{
	int c, state, wc ;
	
	while ((c = getchar()) != EOF){
		if ((c!=' ') && (c!='\t') && (c!='\n')){
			state = IN;
			continue;
			
		} else if (((c==' ') || (c=='\t')) && state==IN){
			++wc;
			state = OUT;
			continue;
		}
	}
	if (state == IN){
		++wc;
	}
	
	printf("Word count: %d\n", wc);
	
	return 0;
}
			

