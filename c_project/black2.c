#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(void)
{
    int black_man, i, j;
    int x, y, poo;
    int sick = 0, turn = 0;
    int love = 0, size = 1;
    double weight = 10.0;
    int black[20][20] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}

    };
    FILE *file;
    char line[100];  // 파일에서 읽어온 한 줄을 저장할 배열
    while (1)
    {
        system("clear");
        srand(time(NULL));
        int move;
        double love2;
        double heal;
        int temp = 0;
        move = rand() % 4 + 1;
        for (int i = 0; i < 20; i++) // x,y 좌표 구하기
        {
            for (int j = 0; j < 20; j++)
            {
                if (black[i][j] == 2)
                {
                    x = j; // x,y 반대
                    y = i;
                }
            }
        }
        switch (move) // 움직이려는 위치가 0일때만 이동
        {
        case 1:                       // 아래
            if (black[y - 1][x] == 0) // 중괄호 중괄호 중괄호
            {
                temp = black[y - 1][x];
                black[y - 1][x] = black[y][x];
                black[y][x] = temp;
            }
            break;
        case 2: // 위
            if (black[y + 1][x] == 0)
            {
                temp = black[y + 1][x];
                black[y + 1][x] = black[y][x];
                black[y][x] = temp;
            }
            break;
        case 3: // 오른쪽
            if (black[y][x + 1] == 0)
            {
                temp = black[y][x + 1];
                black[y][x + 1] = black[y][x];
                black[y][x] = temp;
            }
            break;
        case 4: // 왼쪽
            if (black[y][x - 1] == 0)
            {
                temp = black[y][x - 1];
                black[y][x - 1] = black[y][x];
                black[y][x] = temp;
            }
            break;
        }
        
        
        for (i = 0; i < 20; i++) // 맵
        {
            for (j = 0; j < 20; j++)
            {
                if (black[i][j] == 1)
                    printf("⬜ ");
                if (black[i][j] == 0)
                    printf("   ");
                if (black[i][j] == 2)
                {
                    if(weight>30)
                        printf("🪖  ");
                    else if(weight>60)
                        printf("🪖  🪖");
                }
            }
            printf("\n");
        }

        if (sick < 9)
        {
            love += 5;
            weight += 0.3;
            printf("애정도가 5 증가했습니다.\n");
            printf("은건우가 밥을 먹고 살이 쪘습니다.\n");
            printf("현재 몸무게: %f 현재 애정도: %d\n", weight, love);
            //printf("크기:%d \n", size);
            poo = rand() % 2;
            if (poo < 1) // 중괄호 중괄호 중괄호
            {
                weight -= 0.2;
                printf("똥을 싸서 몸무게가 감소하였습니다. \n");
            }
            //if (weight > 30.0) // 크기
            
            // if (weight > 60.0)
                
            // if (weight > 90.0)

            sick = rand() % 10;
            turn++;
        }
        else
        {
            weight -= 0.5;
            love += 5;
            heal = love * 0.1;
            if (rand() % 10 < 1) // 병 걸리고 10퍼센트 확률로 죽음
            {
                printf("병에 걸려죽었습니다.%d",turn);
                break;
            }
            if (heal > rand() % 100) // 애정도 *0.1 확률로 회복
            {    
                printf("회복되었습니다.\n");
                sick = 0;
            }
            printf("병에 걸렸습니다.\n");
            printf("애정도가 5 증가했습니다.\n");
            printf("현재 몸무게: %f 현재 애정도: %d\n", weight, love);
            turn++;
        }
        usleep(250000);
        if(weight <0)
        {
            printf("몸무게가 0이 되어 죽었습니다.\n");
            printf("몸무게:%f 턴: %d", weight,turn);
            break;
        }
        if (weight <= 100) // 100kg 도달되기전까진 계속
            continue;
        if (weight >= 100); // 게임종료
        {
            printf("은건우가 100키로가 되었습니다. \n");
            printf("CLEAR시 몸무게: %f CREAR시 애정도: %d 턴: %d\n", weight, love, turn);
            file = fopen("silver","r");
        while (fgets(line, sizeof(line), file) != NULL)
        {
            printf("%s", line);
        }
            break;
        }
    }
}
