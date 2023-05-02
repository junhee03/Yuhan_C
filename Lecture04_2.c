#include <stdio.h>

int main()
{
	int enemy_hp = 30;
	int my_hp = 30;
	int my_attack;


	while(enemy_hp > 0 && my_hp >0)
	{

		printf("내 공격력을 입력하세요 : ");
		scanf("%d", &my_attack);

		if(my_attack >=30)
		{
			enemy_hp = 0;
			printf("적이 죽었습니다.");
		}
		else
		{	
			enemy_hp -= my_attack;
			printf("적의 체력이 %d만큼 감소했습니다. (남은 체력: %d)\n", my_attack, enemy_hp);

					


			if(enemy_hp <= 0)
			{
				printf("적이 죽었습니다.\n");
			}
			else
			{
				my_hp -= 10;
				printf("나의 남은 체력: %d \n", my_hp);


				if(my_hp <= 0)
				{
					printf("You dead.\n");
					break;
				}
			}
		}	

	}
	return 0;
}



