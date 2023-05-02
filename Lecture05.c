#include <stdio.h>

int print_title_screen()
{
	printf("###########################\n");
	printf("##			 ##\n");
	printf("##	Dino Run	 ##\n");
	printf("##	Ver.0.1		 ##\n");
	printf("##			 ##\n");
	printf("##    1.Start		 ##\n");
	printf("##    2.How to play	 ##\n");
	printf("##    3.Exit		 ##\n");
	printf("##			 ##\n");
	printf("###########################\n");

	return 0;
}
int print_how_to_play_screen()
{
	printf("#################################\n");
	printf("##			       ##\n");
	printf("## 	 To Avoid Enemy        ##\n");
	printf("##			       ##\n");
	printf("##   Press Space Bar To Jump   ##\n");
	printf("##			       ##\n");
	printf("#################################\n");

	return 0;
}
int main()
{
	int game_state = 1;

	while(game_state)
	{
		int input;
		if(game_state==1){
		print_title_screen();
		printf("input>");
		scanf("%d", &input);
		if(input==1)
		{
			game_state=1;
			continue;
		}
		else if(input==2)
		{
			game_state=2;
			continue;
		}
		else if(input==3)
		{
			return 0;
		}
		else
			continue;
	}
	else if(game_state==2)
	{
		print_how_to_play_screen();
		printf("return to menu?(1.yes 2.no)");
		scanf("%d", &input);
		if(input==1)
		{
			game_state=1;
			continue;
		}
		else if(input==2)
		{
			continue;
		}
		else
			continue;
	}
	return 0;
}
}
