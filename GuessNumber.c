#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int check();
int generate();

unsigned int anwser,guess;//extern value.

int main()
{
	short times=0;
	_Bool correct=0; //0 stand for user's guess was wrong.
	anwser=generate();
//	printf("\nJust for test, Anwser is %d\n",anwser);
	printf("Just guess the number: ");

	while(correct==0)
	{
	scanf("%d",&guess);
	times++;
	correct=check();
	}
	printf("The Anwser is %d\n",anwser);
	printf("You have guess %d times\n",times);

	return 0;
}

//Generate a random number.
int generate()
{
	int difficult=1000;
	printf("At first, input the max number at this game(Default is 1000):");
	scanf("%d",&difficult);
	srand(time(NULL));
	return rand()%++difficult;//++ because % function...
}

//Check whether the anwser is wrong.
int check()
{
	//now check the number.
	if (guess==anwser)
	{
		printf("\n*****Correct*****\n");
		return 1;
	}
	else if (guess<anwser) 		//不能写等于，这样不符合逻辑
	{
		printf("Too Small.\n");
	}
	else if (guess>anwser)
	{
		printf("Too Big.\n");
	}
	else
	{
		printf("Something Wrong!\n");
	}
	printf("Now try again: ");
	return 0;
}

//The end.
