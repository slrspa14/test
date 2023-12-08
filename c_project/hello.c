// #include <stdio.h>
// // #include <stdlib.h>
// // #include <time.h>
// // int main(void)

// // {}

// // int main(void){
// //     int arr1[3]={1,2,3};
// //     double arr2[3]={1.1,2.2,3.3};
// //     printf("%d %g \n",*arr1,*arr2);
// //     *arr1+=100;
// //     *arr2+=120.5;
// //     printf("%d %g \n",arr1[0],arr2[0]);
// //     return 0;
// // }
// // int main(void){
// //     int arr[3]={11,22,33};
// //     int*ptr=arr;
// //     printf("%d %d %d\n",*ptr,*(ptr+1),*(ptr+2));

// //     printf("%d",*ptr); ptr++;
// //     printf("%d",*ptr); ptr++;
// //     printf("%d",*ptr); ptr--;
// //     printf("%d",*ptr); ptr--;
// //     printf("%d",*ptr); printf("\n");
// //     return 0;
// // }

// // int main(void){
// // char * strArr[3]={"Simple","String","Array"};
// // printf("%s\n",strArr[0]);
// // printf("%s\n",strArr[2]);
// // printf("%s\n",strArr[2]);
// // return 0;}
// // int main(void){
// //     int i=0,j=0;

// //     while(i<5){
// //         while(j>i){
// //             printf("o");
// //             j++;
// //         }
// //         j=0;
// //         printf("*\n");
// //         i++;
// //     }
// //     return 0;
// // }
// // int main(void){
// //     int A,Z;
// //     int result;
// //     for(A=0;A<10;A++){
// //         for(Z=0;Z<10;Z++)
// //         {
// //             if(A==Z)
// //                 continue;
// //             result=(A*10+Z)+(Z*10+A);
// //             if(result==99)
// //                 printf("%d%d+%d%d=%d\n",A,Z,Z,A,result);
// //         }
// //     }
// //     return 0;
// // }
// // int main(void)
// // {
// //     int quit = 1, menu_quit = 1, money, cal3, menu_num = 0;
// //     char cal1, cal2;
// //     int menu_list[14] = {1200,1900,1200,1100,900,1100,1800,1900,1600,2100,1700,900,900,1700};
    
// //     int choice_sum = 0;
// //     int change = 0;
// //     while(1)
// //     {
// //         int choice_list[256] = {0};
// //         printf("콜라 1200\n우주맛 콜라 1900\n제로콜라 1200\n스프라이트 1100\n환타 900\n닥터페퍼\n몬스터 1800\n파워에이드 1900\n네스티 1600\n글라소 비타민 워터 2100\n미닛메이드 1700\n조지아커피 900\n암바사 900\n마테차 1700\n");
// //         printf("돈을 입력하세요 : ");
// //         scanf("%d", &money);
// //         if(money < 900)
// //         {
// //             printf("돈이 부족합니다\n\n");
// //         }
// //         else
// //         {
// //             while(1)
// //             {
// //                 printf("1)콜라 1200\n2)우주맛 콜라 1900\n3)제로콜라 1200\n4)스프라이트 1100\n5)환타 900\n6)닥터페퍼\n7)몬스터 1800\n8)파워에이드 1900\n9)네스티 1600\n10)글라소 비타민 워터 2100\n11)미닛메이드 1700\n12)조지아커피 900\n13)암바사 900\n14)마테차 1700\nS)계산하기\nX)종료하기\n\n");
// //                 printf("원하시는 메뉴를 골라주세요 정확하게 입력: ");
// //                 scanf(" %c%c", &cal1, &cal2);
// //                 printf("%d\n\n", cal1);
// //                 printf("%d\n\n", cal2);
                
// //                 cal3 = cal1 + cal2;
// //                 printf("%d\n\n", cal3);
// //                 if(cal3 == 98 || cal3 == 130)
// //                 {
// //                     menu_num = 0;
// //                     printf("초기화면으로 돌아갑니다.\n\n");
// //                     break;
// //                 }
// //                 else if(cal3 == 93 || cal3 == 125)
// //                 {
// //                     menu_num = 0;
// //                     for(int i = 0; i < sizeof(choice_list) / sizeof(int);i++)
// //                     {
// //                         choice_sum += choice_list[i];
// //                     }
// //                     if(money < choice_sum)
// //                     {
// //                         printf("돈이 부족합니다 다시 돈넣으세요\n\n");
// //                         break;
// //                     }
// //                     else
// //                     {
// //                         change = money - choice_sum;
// //                         printf("결제 완료 되었습니다. 거스름돈 : %d원 입니다\n\n", change);
// //                         break;
// //                     }
// //                 }
// //                 else
// //                 {
// //                     if(cal3 >= 97 && cal3 <=101)
// //                     {
// //                         cal3 -= 88;
// //                         choice_list[menu_num] = menu_list[cal3];
// //                         menu_num++;
// //                     }
// //                     else if(cal3 >= 59 && cal3 <= 67)
// //                     {
// //                         cal3 -= 49;
// //                         choice_list[menu_num] = menu_list[cal3];
// //                         menu_num++;
// //                     }
// //                 }
// //             }
// //         }

// //     }


// //     return 0;
// // }
// //(1)
// // int main(void)
// // {
// //    int i,j;
// //    for(i=5;i>0;i--){
// //       for(j=0;j<i;j++){
// //       printf("*");
// //    }
// //    printf("\n");
// //    }

// // }
// //(2)
// // int main(void)
// // {
// //    int k=5;
// //    int i,j;
// //    for(i=1;i<=5;i++){
// //       for(j=1;j<=5-i;j++){
// //          printf(" ");
// //       }
// //       for(j=1;j<=2*i-1;j++){
// //          printf("*");
// //       }
// //    printf("\n");
// //    }
// // }
// // //(3)
// // int main(void)
// // {
// //    int k=5;
// //    int i,j;
// //    for(i=1;i<=5;i++){
// //       for(j=1;j<=5-i;j++){
// //          printf(" ");
// //       }
// //       for(j=1;j<=2*i-1;j++){
// //          printf("*");
// //       }
// //    printf("\n");
// //    }
// //    for(i=1;i<=5;i++){
// //       for(j=0;j<i;j++){
// //          printf(" ");
// //       }
// //       for(j=2*5-1;j>2*i;j--){
// //          printf("*");
// //       }
// //    printf("\n");
// //    }
// // }
// // //(4)
// // int main(void)
// // {
// //    int k=5;
// //    int i,j;
// //    for(i=1;i<=4;i++){
// //       for(j=1;j<i;j++){
// //          printf(" ");
// //       }
// //       for(j=2*5-1;j>(2*i)-2;j--){
// //          printf("*");
// //       }
// //    printf("\n");
// //    }
// //    for(i=1;i<=5;i++){
// //       for(j=1;j<=5-i;j++){
// //          printf(" ");
// //       }
// //       for(j=3;j<=2*i+1;j++){
// //          printf("*");
// //       }
// //    printf("\n");
// //    }
// // }
// // #include <stdio.h>
// // void Draw(int num);
// // int main(void){
// // int num=1;
// // while(num!=0){
// // scanf("%d",&num);
// // Draw(num);
// // }
// // }
// // void Draw(int num)
// // {
// //    int i,j;
// //    for(i=1;i<=num;i++){
// //       for(j=1;j<=num-i;j++){
// //          printf(" ");
// //       }
// //       for(j=1;j<=2*i-1;j++){
// //          printf("*");
// //       }
// //    printf("\n");
// //    }
// // }
// // int main(void){
// //     int baby=0, turn=1, fish=1;
// //     srand(time(NULL));
// //     while(fish<500){
// //         for(int i=0;i<fish;i++){
// //             int random=(rand()%5)+1;
// //             baby+=random;
// //         }
// //         fish+=baby;
// //         if(turn>1){
// //             int death=(rand()%31)+20;
// //             death=death*0.01;
// //             fish*=(1-death);
// //         }
// //         baby=0;
// //         turn++;
// // }
// // printf("최종 턴%d회\n",turn);
// // printf("최종 금붕어 쌍 수 %d",fish);
// // return 0;
// // }
// // double Max(double* arr,int len){
// //     double max=*arr;
// //     for(int i=0;i<len;i++){
// //         if(*(arr+i)>max) max=*(arr+i);
// //     }
// //     return max;
// // }
// // int main(void){
// //     double arr[3]={1.1,2.1,3.1};
// //     printf("최대값은 %lf입니다.",Max(arr,sizeof(arr)/sizeof(double)));
// // }
// // #include <stdlib.h>
// // #include <time.h>
// // int Sort(int *arr,int len){
// //     int i=0,j=0;
// //     int t=*arr;
// //     for(i=0;i<len-1;i++)
// //         for(j=0;j<len-i-1;j++)
// //             if(*(arr+j)>*(arr+j+1))
// //             {
// //                 t=*(arr+j);
// //                 *(arr+j)=*(arr+j+1);
// //                 *(arr+j+1)=t;
// //             }
// //     for(i=0;i<len;i++){
// //     printf("%d,",arr[i]);}

// // }
// // int main(void){
// //     int i;
// //     int arr[100];
// //     srand(time(NULL));
// //     int random;
// //     for(i=0;i<100;i++){
// //         random=(rand()%100)+1;
// //         arr[i]=random;
// //     }
// //     Sort(arr,sizeof(arr)/sizeof(int));
// // }
// // int pattern(int *arr, int len) {
// //     int i, j;
// //     int mid=1;

// //     if (len % 2 == 0) {
// //         arr[(len / 2) - 1] = 1;
// //         arr[len / 2] = 1;
// //         for (i = 0;i<len/2; i++) {
// //             arr[i]=i+2;
// //         }
// //         for(j=(len/2)+1;j<len;j++){
// //             arr[j]=arr[j-(len/2)-1];
// //         }
// //         for(i=0;i<len/2;i++){
// //             arr[i]=arr[(len-1)-i];
// //         }
    
// //     for (j = 0; j < len; j++) 
// //         printf("%d ", arr[j]); 
// //     }



// //     else{
// //         arr[len / 2] = 1;
        
// //         for (i = 0;i<len/2; i++) {
// //             arr[i]=i+2;
// //         }
// //         for(j=(len/2)+1;j<len;j++){
// //             arr[j]=arr[j-(len/2)-1];
// //         }
// //         for(i=0;i<len/2;i++){
// //             arr[i]=arr[(len-1)-i];
// //         }
    
// //     for (j = 0; j < len; j++) 
// //         printf("%d ", arr[j]); 
// //     }
// // }

// // int main(void) {
// //     int n;
// //     printf("배열의 크기를 입력하세요: ");
// //     scanf("%d",&n);
// //     int arr[n];
// //     pattern(arr, sizeof(arr) / sizeof(int));
// //     return 0;
// // // }
// // int main(void){
// //     int arr[3][5];
// //     int i,j;
// //     int max=0;
// //     srand(time(NULL));
// //     int random;
// //     for(i=0;i<3;i++){
// //         for(j=0;j<5;j++){
// //         random=(rand()%100)+1;
// //         arr[i][j]=random;
// //         //max=max>arr[i][j]?max:arr[i][j];




        
        
// //     }
    
// //     }
// // }

// //(1)번 문제
// // ghftn(int *arr){
// //     int i;
// //     printf("홀수 출력: ");
// //     for(i=0;i<10;i++){
// //         if(arr[i]%2!=0){
// //             printf("%d ",arr[i]);
// //         }
// //     }
// //     printf("\n");}



// // wkrtn(int *arr){
// //         int i;
// //         printf("짝수 출력: ");
// //     for(i=0;i<10;i++){
// //         if(arr[i]%2==0){
// //             printf("%d ",arr[i]);
// //         }
// //     }
// //     printf("\n");

// // }
// // int main(void){
// //     int arr[10];
// //     int i=0;
// //     printf("총 10개의 숫자 입력 \n");
// //     for(i=0;i<10;i++){
// //         printf("입력: ");
// //         scanf("%d",&arr[i]);
// //     }
// //     ghftn(arr);
// //     wkrtn(arr);
// // }
// //2번 문제
// // int main(void){
// //     int num=8;
// //     int i=7;
// //     int j=0;
// //     int arr[8]={0,0,0,0,0,0,0,0};
// //     printf("10진수 정수 입력: ");
// //     scanf("%d",&num);
// //     while(num>=2){
// //         arr[j]=num%2;
// //         j++;
// //         num=num/2;
// //             arr[j]=num;
// //     }

// //     while(i>=0){
// //         printf("%d",arr[i]);
// //         i--;
// //         if(i==3)
// //         printf(" ");
// //     }
// //     return 0;

// //}
// //3번 문제
// // int main(void){
// //     int arr[10];
// //     int i,j=0;
// //     int num;
// //     int o=0;
// //     int e=9;
// //     printf("총 10개의 숫자 입력 \n");
// //     for(i=0;i<10;i++){
// //         printf("입력: ");
// //         scanf("%d",&num);
// //           if(num%2!=0){
// //             arr[o]=num;
// //             o++;
// //         }
// //         else if(num%2==0){
// //             arr[e]=num;
// //             e--;
// //         }
// //     }
// //     while(j<10){
// //          printf("%d ",arr[j]);
// //          j++;
// //     }
// // }
// //4번 문제
// // void length(char *arr,char len){
// //     int i=0;
// //     for(i=0;i<len/2;i++){
// //         if(arr[i]==arr[len-i-1])
// //         printf("회문 입니다.");
// //     }return 0;}
// // int main(void){
// //     int i=0;
// //     char arr[50];
// //     scanf("%s",arr);
// //     while(arr[i]!='\0'){
// //         i++;
// //     }
// //     length(arr,i);
// // }
// //5번 문제
// // void BubbleSort(int ary[],int len);

// // int main(void){
// //     int arr[7];
// //     int i;
// //     for(i=0;i<7;i++){
// //     printf("입력: ");
// //     scanf("%d",&arr[i]);
// //     }
    
// //     BubbleSort(arr,sizeof(arr)/sizeof(int));
// //     for(i=0;i<7;i++)
// //         printf("%d ",arr[i]);

// //     printf("\n");
// //     return 0;
// // }

// // void BubbleSort(int ary[],int len){
// //     int i,j;
// //     int temp;

// //     for(i=0;i<len-1;i++)
// //     {
// //         for(j=0;j<(len-i)-1;j++){
// //             if(ary[j]<ary[j+1])
// //             {
// //                 temp=ary[j];
// //                 ary[j]=ary[j+1];
// //                 ary[j+1]=temp;
// //             }
// //         }
// //     }
// // }
// // #include<stdlib.h>
// // #include<time.h>
// // int main(void){
// //     int arr[3][5];
// //     int i,j;
// //     int max=0;
// //     int mmax=0;
// //     srand(time(NULL));
// //     int random;
// //     for(i=0;i<3;i++){
// //         for(j=0;j<5;j++){
// //         random=(rand()%100)+1;
// //         arr[i][j]=random;
// //         printf("%d ", arr[i][j]);
// //         }
// //         printf("\n");}
// //     for(i=0;i<3;i++){
// //         for(j=0;j<5;j++){
// //         max=arr[i][j]>max?arr[i][j]:max;
// //         }   
// //         printf("%d행 최댓값 %d\n",i+1,max);
// //         max=0;}
// //     for(i=0;i<3;i++){
// //         for(j=0;j<5;j++){
// //         mmax=arr[i][j]>mmax?arr[i][j]:mmax;
// //         }   
// //         }
// //         printf("최댓값: %d",mmax);}
// // int main(void){
// //     int arr[3][9]={2,4,6,8,10,12,14,16,18,3,6,9,12,15,18,21,24,27,4,8,12,16,20,24,28,32,36};
// //     int i=0,j=0;
// //     for(i=1;i<4;i++){
// //         for(j=1;j<10;j++){
// //             printf("%dx%d=%d ",i,j,arr[i-1][j-1]);
// //         }
// //         printf("\n");
// //     }
// // }
// // int main(void){
// //     int arr[5][5];
// //     arr[4][4]=0;
// //     int i,j;
// //     int score=0;
// //     int score1=0;
// //     int score2=0;
// //     for(i=0;i<4;i++){
// //         for(j=0;j<4;j++){
// //         scanf("%d",&arr[i][j]);
// //         }
// //     }
    
// //     for(i=0;i<4;i++){
// //         for(j=0;j<4;j++){
// //             score+=arr[i][j];
// //         }
// //         arr[i][4]=score;
// //         arr[4][4]+=score;
// //         score=0;
// //     }    
// //     for(i=0;i<4;i++){
// //         for(j=0;j<4;j++){
// //             score1+=arr[j][i];
// //         }
// //         arr[4][i]=score1;
// //         arr[4][4]+=score1;
// //         score1=0;
// //     }
// //     for(i=0;i<5;i++){
// //         for(j=0;j<5;j++){
// //         printf("%d ",arr[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }

// // int main(void){
// //     int num1;
// //     int num2;
// //     int* p;
// //     int* q;
// //     int* r;
// //     int ** pp;

// //     num1=10;
// //     num2=20;

// //     p=&num1;
// //     q=&num2;
// //     r=&num1;

// //     pp=&p;
// //     *pp=q;
// //     **pp=1024;
// //     pp=&r;
// //     **pp=*p*2;

// //     printf("%d %d",num1,num2);
// // }

// //1번
// // int main(void){
// //     int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
// //     int temp[4][4];
// //     int i=0,j=0,k=0;
// //     for(k=0;k<3;k++){
// //         printf("%d번째 회전\n",k+1);
// //         for(i=0;i<4;i++){
// //             for(j=0;j<4;j++){
// //                 temp[i][j]=arr[3-j][i];
// //             }
// //         }
// //         for(i=0;i<4;i++){
// //             for(j=0;j<4;j++){
// //                 arr[i][j]=temp[i][j];
// //                 printf("%3d ",arr[i][j]);
// //             }
// //             printf("\n");
// //         }
// //         printf("\n");
// //         } 
// // }
// //2번
// // int main(void)
// // {
// //     int arr[50][50]; 
// //     int len, idx, i, j; 
// //     int s=0, w=-1, inc=1, val=0; 

// //     scanf("%d", &len); 
// //     idx=len;

// //     while(1) 
// // 	{
// //         for(i=0; i<idx;i++) 
// // 		{
// //             val++; 
// //             w=w+inc; 
// //             arr[s][w]=val;
// //         }
// //         idx=idx-1; 

// //         if(val==len*len) 
// // 			break; 

// //         for(i=0; i<idx; i++) 
// // 		{ 
// //             val++; 
// //             s=s+inc; 
// //             arr[s][w]=val; 
// //         }
// //         inc=inc*-1;
// //     }

// //     for(i=0; i<len; i++)    
// // 	{ 
// // 		for(j=0; j<len; j++) 
// //             printf("%5d", arr[i][j]); 
// //         printf("\n");
// //     } 

// // 	return 0;
// // }
// //3번
// // #include <stdlib.h>

// // int main(void){
// //     int i;
// //     printf("난수의 범위: 0부터 99까지 \n");
// //     for(i=0;i<5;i++)
// //         printf("난수 출력: %d\n",rand()%100+0);
// //     return 0;
// // }
// //4번
// // #include<stdlib.h>
// // #include<time.h>

// // int main(void){
// //     int i;
// //     srand((int)time(NULL));

// //     for(i=0;i<2;i++)
// //         printf("주사위 %d의 결과 %d\n",i+1,rand()%6+1);
// //     return 0;
// // }

// //5번
// // #include<stdlib.h>
// // #include<time.h>

// // int main(void){
// //     int player;
// //     int com;
// //     int cnt=0;
// //     int moo=0;
// //     int pae=0;
// //     char* arr[]={"","바위","가위","보"};
// //     srand((int)time(NULL));

// //     while(pae!=1){
// //         printf("바위는 1, 가위는 2, 보3: ");
// //         scanf("%d",&player);
// //         com=rand()%3+1;

// //         if(com==player){
// //             printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n",arr[player],arr[com]);
// //             moo++;
// //         }
// //         else if((com==1&&player==2)||(com==2&&player==3)||(com==3&&player==1)){
// //             printf("당신은 %s 선택, 컴퓨터는 %s 선택, 졌습니다!\n",arr[player],arr[com]);
// //             pae++;
// //         }
// //         else{
// //             printf("당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다!\n",arr[player],arr[com]);
// //             cnt++;
// //         }
// //         printf("%d승 %d무 %d패\n",cnt,moo,pae);
// //         }
// // }
// //6번
// // #include<time.h>
// // #include<stdlib.h>

// // int main(void){
// //     int com[3]={};
// //     int player[3]={};
// //     int try=1;
// //     srand((int)time(NULL));
// //     com[0]=rand()%10+0;
// //     com[1]=rand()%10+0;
// //     com[2]=rand()%10+0;
    
// //     printf("숫자 야구 게임을 시작합니다.\n\n");

// //     while(try<10){
// //        int ball=0;
// //        int strike=0;
// //        printf("3자리 숫자를 입력하세요\n");
// //        scanf("%1d%1d%1d",&player[0],&player[1],&player[2]);

// //        for(int i=0;i<3;i++){
// //         for(int j=0;j<3;j++){
// //             if(com[i]==player[j]&&i==j)strike++;
// //             else if(com[i]==player[j]&&i!=j)ball++;
// //         }
// //        }
// //        if(strike==3){
// //         printf("Game Over!\n");
// //         break;
// //        }
// //        else{
// //         printf("%d번째 도전 결과: %dB %dS\n\n",try,ball,strike);
// //         try++;
// //        }
// //        if(try>9) printf("실패\n");
// //         }
// //        }
// // int main(void){
// //     int n;
// //     int cnt=1;
// //     scanf("%d",&n);
// //     while(cnt<=n){
// //         printf("%d",3*cnt);
// //         cnt++;
// //     }

// // }
// // int main(void){
// //     int n;
// //     int sum=0;
// //     while(n!=0){
// //         scanf("%d",&n);
// //         sum+=n;
// //     }
// //     printf("%d",sum);
// // }
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>
// void Print(char chroom[25][25],int x,int y,int size){
    
//        for(int i=0; i<25; i++) //춘식이 방초기화
//     {
//         for(int j=0; j<25; j++)
//         {
//             chroom[i][j] =' ';
//         }
//     }
//     for(int i=0; i<25; i++) //춘식이 방 틀
//     {
//         chroom[0][i] ='*';
//         chroom[i][0] ='*';
//         chroom[24][i] ='*';
//         chroom[i][24] ='*';
//     }
//     chroom[x][y]='c';
//         for(int i=0; i<25; i++) 
//         {
//             for(int j=0; j<25; j++)
//             {
//             if(chroom[i][j] == 'c')
//             {
//                 printf("😻 ");
//             }
            
//             if(chroom[i][j] == '*')
//             {
//                 printf("🧱 ");
//             }
//             if(chroom[i][j] == ' ')
//             {
//                 printf("   ");
//             }
//         }
//         printf("\n");
//         }
// }
// int main(void){
//     int random;
//     int die=0;
//     double weight=10;
//     double love=0;
//     int ddong=0;
//     int sick=0;
//     int key=0;
//     int over=0;
//     double recovery=0;
//     int turn=0;
//     srand(time(NULL));
//     int x,y;
//     int i,j;
//     char chroom[25][25]; //춘식이 방크기
//     printf("현재 춘식이 몸무게: %gkg이고, 🩷 (애정도)는 %g입니다.\n",weight,love);
//     sleep(1);
//     while(weight<100){
//         system("clear");
//         chroom[x][y] = ' ';
//         i = rand()%23+1;
//         j = rand()%23+1;
//         x=i;
//         y=j;
//         chroom[x][y] = 'c';
//         Print(chroom,x,y,25);
//         love+=5;
//         weight+=0.3;
//         printf("춘식이가 🍚(밥)을 먹습니다.\n");
//         ddong=rand()%100+1;
//         sick=rand()%100+1;
//         if(ddong<=50){
//             weight-=0.2;
//             printf("춘식이가 💩(응가)를 쌉니다.\n");
//         }
//         while(sick<=10){
//             system("clear");
//             recovery=rand()%100+1;
//             over=rand()%100+1;
//             weight-=0.5;
//             love+=5;
//             system("clear");
//             chroom[x][y] = ' ';
//             i = rand()%23+1;
//             j = rand()%23+1;
//             x=i;
//             y=j;
//             chroom[x][y] = 'c';
//             Print(chroom,x,y,25);
//             printf("춘식이가 ☠️ (병)에 걸렸습니다.\n");

//             if(recovery<=love*0.1)
//             {
//                 printf("춘식이 🧚‍♂️(회복)합니다.\n");
//                 break;
//             }
//             if(over<=10)
//             {
//                 die=1;
//                 turn++;
//                 printf("춘식이가 👻(죽)었습니다. \n");
//                 break;
//             }      
//             turn++;
//             printf("%d턴 째의 춘식이가 회복하지 🤕(못)하였습니다.\n춘식이 몸무게: %gkg이고, 🩷 (애정도): %g입니다.\n",turn,weight,love);

//             sleep(2);
//         }
//         if(die == 1)
//             break;    
//         turn++;
//         printf("%d턴 째의 춘식이 몸무게: %gkg이고, 🩷 (애정도): %g입니다.\n",turn,weight,love);
//         sleep(2);
//     }
//     printf("총 %d턴 돌았고, 🐷 (거대 춘식이) 최종 몸무게: %gkg이고, 최종 🩷 (애정도): %g입니다.\n",turn,weight,love);
//     printf("⏳ 게임 종료 ⏳\n");
// }

  







