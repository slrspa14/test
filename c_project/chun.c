#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
void map(int black[][20])
{
    int i, j;
    for (i = 0; i < 20; i++) // 맵
    {
        for (j = 0; j < 20; j++)
        {
            if (black[i][j] == 1)
                printf("⬜ ");
            if (black[i][j] == 0)
                printf("   ");
            if (black[i][j] == 2)
                printf("🪖  ");          
        }
        printf("\n");
    }
}
void jwa(int black[][20],int *x_ptr, int *y_ptr)//춘식이가 어딨는지
{   
    for (int i = 0; i < 20; i++) // x,y 좌표 구하기
    {
        for (int j = 0; j < 20; j++)
        {
            if (black[i][j] == 2)
            {
                *x_ptr = j; // x,y 반대
                *y_ptr = i;
                break;
            }
        }
    }
}
void whkvy(int black[][20],int *x_ptr,int *y_ptr,double weight)
{
    int x = *x_ptr;
    int y = *y_ptr;
    int temp1, temp2, temp3;
    int temp,move;
    move=(rand()%4)+1;
    // printf("dd");
    // scanf("%d",&move);
    jwa(black, &x_ptr,&y_ptr);
    if(weight<50)
    {
        switch (move) // 움직이려는 위치가 0일때만 이동
        {
        case 1:                       // 아래
            if (black[y - 1][x] == 0) // 중괄호 중괄호 중괄호
            {
                temp = black[y - 1][x];
                black[y - 1][x] = black[y][x];
                black[y][x] = temp;
                // black[y-1][x];
                // y=y-1;
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
    }

    else
    {
        switch (move) // 움직이려는 위치가 0일때만 이동
        {
        case 1:                       // 위
             if (black[y - 1][x] == 0 && black[y-1][x+1]==0)
            {
                temp = black[y - 1][x];
                temp1 = black[y - 1][x+1];
                black[y - 1][x] = black[y][x];
                black[y - 1][x+1] = black[y][x +1];
                black[y][x] = temp;
                black[y][x +1] = temp1;
                temp2 = black[y][x];
                temp3 = black[y][x +1];
                // black[y-1][x];
                // y=y-1;
            }
            break;
        case 2: // 아래
            if (black[y + 1][x] == 0 && black[y+1][x+1]==0)
            {
                temp = black[y + 1][x];
                temp1 = black[y + 1][x+1];
                black[y + 1][x] = black[y][x];
                black[y + 1][x+1] = black[y][x];
                black[y][x] = temp;
                black[y][x +1] = temp1;
                
            }
            break;
        case 3: // 오른쪽
            if ( black[y][x + 2] == 0)
            {
                temp = black[y][x + 1];
                temp1 = black[y][x + 2];
                black[y][x + 1] = black[y][x];
                black[y][x + 2] = black[y][x +1];
                black[y][x] = temp1;
                black[y][x + 1] = temp;
            }
            break;
        case 4: // 왼쪽
            if (black[y][x - 1] == 0 )
            {
                temp = black[y][x];
                temp1 = black[y][x - 1];
                //black[y][x] = black[y][x];
                black[y][x - 1] = black[y][x];
                black[y][x] = temp;
                black[y][x +1] = temp1;
            }
            break; 
        }
    }
}
void die(void)
{
    int i=3;
    FILE *file;
    char line[100];
    while(i>0)
    {
    file = fopen("black2_die","r");
    while(fgets(line,sizeof(line),file) !=NULL)
        printf("%s",line);
    usleep(350000);
    system("clear");
    file = fopen("black4_die","r");
    while(fgets(line,sizeof(line),file) !=NULL)
        printf("%s",line);
    usleep(350000);
    system("clear");
    file = fopen("black3_die","r");
    while(fgets(line,sizeof(line),file) !=NULL)
        printf("%s",line);
    usleep(350000);
    system("clear");
    file = fopen("black4_die","r");
    while(fgets(line,sizeof(line),file) !=NULL)
        printf("%s",line);
    usleep(350000);
    system("clear");
    i--;
    }
}
int main(void)
{
    srand(time(NULL));
    int black_man, i, j,*a,*b,k=1;
    int x = 0, y = 0, poo,heal;
    int sick = 0, turn = 0;
    int love = 0, size = 1;
    double weight = 10.0;
    int weightCount = 0;
    int stop=0;
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
    char line[100];
    while(stop <1)
    {
        
        int black_man, i, j,*a,*b;
        int x = 0, y = 0, poo,heal;
        int sick = 0, turn = 0;
        int love = 0, size = 1;
        double weight = 10.0;
        int weightCount = 0;
        printf("%d번째 \n",k);
        while(1)
        {
            if(weight <50)
            {
                jwa(black,&x,&y);
                black[y][x+1]=0;
                weightCount=0;
            }
            if(weight >50 && weightCount == 0)
            {
                jwa(black,&x,&y);
                black[y][x+1]=2;
                weightCount = 1;
            }
            map(black); //맵출력
            jwa(black,&x,&y); //좌표구하기 
            whkvy(black,&x,&y,weight); // 이동
            if (sick < 9) 
            {
                love += 5;
                weight += 0.3;
                printf("애정도가 5 증가했습니다.\n");
                printf("은건우가 밥을 먹고 살이 쪘습니다.\n");
                printf("현재 몸무게: %f 현재 애정도: %d\n", weight, love);
                poo = rand()%2;
                if (poo < 1) // 중괄호 중괄호 중괄호
                {
                    weight -= 0.2;
                    printf("똥을 싸서 몸무게가 감소하였습니다. \n");
                }
                sick = rand()%10;
                turn++;
                usleep(100000);
                system("clear");
            }
            else
            {
                weight -= 0.5;
                love += 5;
                heal = love * 0.1;
                if (rand() % 10 < 1) // 병 걸리고 10퍼센트 확률로 죽음
                {
                    die();
                    printf("병에 걸려죽었습니다.\n");
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
                usleep(100000);
                system("clear");
            }
            if(weight <0)
            {
                die();
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
                file = fopen("silver2","r");
                while (fgets(line, sizeof(line), file) != NULL)
                {
                    printf("%s", line);
                }
                stop++;
                break;
            }
        }
        k++;
    }
}



    