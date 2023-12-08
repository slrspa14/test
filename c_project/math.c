#include <stdio.h>
// int main(void)
// {
//     int num1 = 2;
//     int num2 = 3;
//     int result1 = num1&num2;
//     int result2 = num1 | num2;
//     int restult3 = num1 ^ num2;
//     printf("result1: %d \n", result1);
//     printf("result2: %d \n", result2);
//     printf("result3: %d\n", restult3);
//     return 0;

// }
// int main(void)
// {
//     int num1 = 1;
    
//     int result1 = num1 <<1;
//     Console.WriteLine("result1: " + result1);
    
//     int result2 = result1<<2;
//     Console.WriteLine("result2: "+ result2);

//     int result3= result2 >>3;
//     Console.WriteLine("result3: "+ result3);

// }
//int main(void)
// {
//     int num1;
    
//     printf("정수 입력: ");
//     scanf("%d", &num1);
//     int num2= ~num1+1;
//     printf("%d \n", num2);
    
// }
// int main(void)
// {
//     int num1=3;
//     int num2=8;
//     int num3=4;
//     int result1 = num1 <<4,num2 >>4;
// }
// int main(void)
// {
//     char ch=9;
//     int inum=1052;
//     double dnum=3.1415;
//     printf("변수 ch의 크기: %d \n", sizeof(ch));
//     printf("변수 inum의 크기:%d \n", sizeof(inum));
//     printf("변수 dnum의 크기: %d \n", sizeof(dnum));

//     printf("char의 크기: %d \n", sizeof(char));
//     printf("int의 크기: %d \n", sizeof(int));
//     printf("long의 크기:%d \n", sizeof(long));
//     printf("long long의 크기:%d \n", sizeof(long long));
//     printf("float의 크기: %d \n", sizeof(float));
//     printf("double의 크기: %d \n", sizeof(double));
//     return 0;
// }
// int main(void)
// {
//     double rad; 
//     double area;
//     printf("원의 반지름 입력: ");
//     scanf("%lf", &rad); lf mall

//     area= rad*rad*3.1415;
//     printf("원의 넓이: %f \n", area);
//     return 0;
// }
//씨발새끼
// int main(void)
// {
//     char ch1= 'A', ch2=65;
//     int ch3='Z', ch4=90;

//     printf("%c %d \n", ch1, ch1);
//     printf("%c %d \n", ch2, ch2);
//     printf("%c %d \n", ch3, ch3);
//     printf("%c %d \n", ch4, ch4);
//     return 0;
// }
//개새끼 
//   int main(void)
// {
//     int x1, y1;
//     int x2, y2;
//     printf("좌 상단의 x, y의 좌표: ");
//     scanf("%d %d", &x1,&y1);
//     printf("우 하단의 x, y 좌표: ");
//     scanf("%d %d", &x2,&y2);
//     printf("직사각형의 넓이:%d \n",(x1-x2)*(y1-y2));
//     return 0;

//  }
//2
// int main(void)
// {   
//     double num1, num2;
//     printf("첫 번째 실수: , 두 번째 실수: ");
//     scanf("%lf %lf", &num1, &num2);
    
//     printf("덧셈: %f \n",num1+num2);
//     printf("뺄셈: %f \n", num1-num2);
//     return 0;
// }
//4
// int main(void)
// {
//     char ch1='A', ch2=65;
//     int ch3='Z', ch4=90;
//     printf("%c %d \n", ch1, ch2);
//     printf("%d %c \n", ch3, ch4);

//     return 0;
// }
// int main(void)
// {
//     int num;
//     printf("정수 입력: ");
//     scanf("%d", &num);
//     printf("아스키코드로 변환값: %c \n", num);
// }
//5
// int main(void)
// {
//     char ch;
//     //int num;
//     printf("알파벳: ");
//     scanf("%c", &ch);
//     printf("%d \n",ch);
// }
// int main(void)
// {
//     int num1, num2, num3;
//     printf("세 개의 정수 입력: ");
//     scanf("%d %o %x", &num1, &num2, &num3);
//     printf("입력된 정수 10진수 출력: ");
//     printf("%d %d %d \n", num1,num2,num3);
//     return 0;
// }
// int main(void)
// {   
//     float num1;
//     double num2;
//     long double num3;

//     printf("실수 입력1(e 표기법으로): ");
//     scanf("%f", &num1);
//     printf("입력된 실수 %f \n", num1);

//     printf("실수 입력2(e 표기법으로): ");
//     scanf("%lf ",&num2);
//     printf("입력된 실수 %f \n", num2);
    
//     printf("실수 입력3(e 표기법으로): ");
//     scanf("%LF \n", &num3);
//     printf(" 입력된 실수 %LF\n", num3);
//     return 0;
// }
//2 8 10 16진수 fuck

// int main(void)
// {
//     int dan=0, num=1;
//     printf("몇 단? ");
//     scanf("%d", &dan);
    
//     while (num<10)
//     {
//         printf("%d x %d = %d \n", dan, num, dan*num);
//         num++;

//     }
    
//     return 0;
// }
//1
// int main(void)
// {
//     int num;
//     int i = 0;
//     printf("양의 정수 입력: ");
//     scanf("%d", &num);
    
//     while (i<num)
//     {
//         printf("Hello World! \n");
//         num--;

//     }
//     return 0;   
// }
//22222222222222222222222222222222222
// int main(void)
// {
//     int num=0, pix=0;
//     printf("양의 정수 하나: ");
//     scanf("%d", &num);
    
//     while (pix++<num)
//     {
//         printf("%d \n", 3*pix);
        
//     }
//     return 0;
// }
//33333333333333333333333333333333333333333333333333333
// int main(void)
// {
//     int total=0, num=1;
    
//     while (num != 0)
//     {
//         printf("정수 입력(0 to quit): ");
//         scanf("%d", &num);
//         total += num;
        
//     }
//     printf("합:%d \n", total);
//     return 0;
// }

//4.
// int main(void)
// {
//     int dan=0, num=9;
//     printf("몇 단: ");
//     scanf("%d", &dan);

//     while (num>0)
//     {
//         printf("%d x %d = %d \n", dan,num,dan*num);
//         num--;
//     }
//     return 0;
// }
//5.555555555555555555555555555555555555555555555555 tlqkf
// int main(void)
// {
//     int total=0,i=0;
//     int num, input;

//     printf("정수 몇 개 넣을꺼야: ");
//     scanf("%d", &num);
//     while (i++<num)
//     {
//         printf("정수입력: ", input);
//         scanf("%d", &input);
//         total+=input;

//     }
//     printf("평균: % f", (double)total/num);
//     return 0;
// }
// int main(void)
// {
//     int cur=2;
//     int is=0;

//     while (cur<10)
//     {
//         is=1;
//         while (is<10)
//         {
//             printf("%d x %d = %d \n", cur, is, cur*is);
//             is++;
//         }
//         cur++;
//     }
//     return 0;
// }
// int main(void)
// {
//     int total=0, num=0;

//     do
//     {
//         printf("정수 입력(0 to quit):");
//         scanf("%d", &num);
//         total+=num;
//     }while(num!=0);
//     printf("합계 %d 원입니다. \n", total);
    
//     return 0;   
// }

// int main(void)
// {
//     int total=0;
//     int i, num;
//     printf("0부터 num까지의 덧셈, num은?");
//     scanf("%d", &num);

//     for(i=0; i<num+1; i++)
//         total+=i;

//     printf("0부터 %d까지 덧셈결과: %d \n", num, total);
//     return 0;
// }
// int main(void)
// {
//     double total=0.0;
//     double input=0.0;
//     int num=0;

//     for ( ; input>=0.0; )
//     {
//         total+=input;
//         printf("실수 입력(minus to quit) : ");
//         scanf("%lf", &input);
//         num++;
//     }
//     printf("평균: %f \n", total/(num-1));
//     return 0;
// }
// int main(void)
// {
//     int cur, is;

//     for(cur=2; cur<10; cur++)
//     {
//         for(is=1; is<10; is++)
//             printf("%dx%d=%d \n",cur, is, cur*is);
//         printf("\n");
//     }
//     return 0;
// }
// int main(void)                   tlqkf
// {
//     int sum = 0, i = 0, num = 0;
//     while (i<5)
//     {
//         while (num<=0)
//         {
//             printf("정수 5개 입력" , i+1);
//             scanf("%d", &num);

//         }
//         sum += num;
//         num=0;
//         i++;
//     }
//     printf("총 합: %d \n", sum);
//     return 0;
// }
// int main(void)
// {
//     int i=0;
//     int j=0;

//     while (i<5)
//     {
//         while (j<i)
//         {
//             printf("o ");
//             j++;
//         }
//         j=0;
//         printf("* \n");
//         i++;
//     }
//     return 0;
// }

// int main(void)
// {
//     int total=0;
//     int num=0;
//     do
//     {
//         total += num;
//         num = num+2;
//     } while (num <= 100);
//     printf("짝수의 합: %d \n", total);
//     return 0;

// }
// int main(void)
// {
//     int cur=2;
//     int is=0;

//     while(cur<10)
//     {
//         is=1;
//         while(is<10)
//         {
//             printf("%d x %d = %d \n", cur, is, cur*is);
//             is++;
//         }
//         cur++;
//     }
//     return 0;
// }
// int main(void)
// {
//     int cur=2;
//     int is=0;
//     do
//     {
//         is=1;
//         do
//         {
//             printf("%d x %d = %d \n", cur, is, cur*is);
//             is++;
//         } while (is<10);
//         cur++;
//         printf("\n");
//     } while (cur<10);
//     return 0;
// }

//tlqkf
// int main(void)
// {
//     int total=0;
//     int num1, num2;
//     printf("숫자 두개: ");
//     scanf("%d %d", &num1, &num2);
//     for (total=0; num1 <=num2 ;num1++ )
//     {
//         total+=num1;
//     }
    
//     printf("num1부터 num2까지의 합은: %d \n", total);
//     return 0;
// }

//c언어 반복문 연습
// int main(void)
// {
//     int i=1;
//     while (i<=10)
//     {
//         printf("%d \n", i);
//         i++;
//     }
//     return 0;
// }
// int main(void)
// {
//     int i=10;
//     while (i>=1)
//     {
//         printf("%d \n", i);
//         i--;
//     }
//     return 0;
// }
// int main(void)
// {
//     int sum=0;
//     int i=0;
//     while (i<=100)
//     {
//         sum += i;
//         i++;
//     }
//     printf("합: %d \n", sum);
//     return 0;
// }
// int main(void)
// {
//     int sum=0;
//     int i=2;
//     while (i<=100)
//     {
//         sum += i;
//         i = i+2;
//     }
//     printf("짝수의 총 합:%d \n", sum);
//     return 0;
// }

// int main(void)
// {
//     int i = 1;
//     int sum = 0;
//     while(i<=100)
//     {
//         i =i+2;
//         sum += i;
//     }
//     printf("홀수의 합: %d \n", sum);
//     return 0;
// }
//계승 구하기
// int main(void)
// {
//     int n, i, result=1;
//     printf("임의의 양의 정수: ");
//     scanf("%d", &n);
//     i=n;
//     while (i>=1)
//     {
//         result *=i;
//         i--;
//     }
//     printf("%d \n",result);
//     return 0;   
// }
//약수 구하기
// int main(void)
// {
//     int n,k=1;
//     printf("임의의 수: ");
//     scanf("%d", &n);
//     while (k<n+1)
//     {
//         while (n % k == 0)
//         {
//             printf("%d \n",k);
//             k++;
//         }
//         k++;
//     }
//     return 0;
// }
//공약수 구하기////////////////////////////////////////////////
// int main(void)
// {
//     int num1, num2;
//     int i,gcd;
//     printf("두 개의 정수 입력:");
//     scanf("%d %d", &num1, &num2);
//     for (i=1 ; i<=num1 && i<=num2; i++)
//     {
//         if(num1%i==0 && num2%i==0)
//             gcd=i;
//     }
//     printf("%d와 %d의 최대공약수:%d \n",num1, num2, gcd);
//     return 0;
// }

// if문
//if 문 연습하기
// int main(void)
// {
//     int num1, num2;
//     printf("입력받은 두 수: ");
//     scanf("%d %d", &num1, &num2);
//     if (num1>num2)
//     {
//         printf("%d \n", num1);
//     }
//     else
//     printf("%d \n", num2);
// return 0;
// }
// int main(void)
// {
//     int a;
//     printf("입력 받은 수");
//     scanf("%d", &a);
//     if (a<0)
//     {
//         printf("음수 \n");
//     }
//     else
//     printf("양수 \n");
// return 0;
// }
// int main(void)
// {
//     int num1, num2, num3;
//     int max;
//     printf("첫 번째 수: ");
//     scanf("%d", &num1);
//     max = num1;
//     if (max>num2)
//     {
//         printf("두 번째 수: ");
//         scanf("%d", &num2);
//         max = num2;
//         printf("세번째 수: ");
//         scanf("%d", &num3);
//         max=num3;
//         printf("제일 큰 수: %d \n", max);
//     }
//     return 0;
// }
//4.
// int main(void)
// {
//     int num;
//     printf("입력받은 수: ");
//     scanf("%d", &num);
//     if(num%2==0)
//     printf("짝수 \n");
//     else
//     printf("홀수 \n");
//     return 0;
// }
//5.
// int main(void)
// {
//     int num;
//     printf("입력받은 수: ");
//     scanf("%d", &num);
//     if(num%3==0)
//     printf("3의 배수 \n");
//     else
//     printf("3의 배수가 아니다. \n");
//     return 0;
// }
//6.
// int main(void)
// {
//     int age;
//     printf("나이");
//     scanf("%d", &age);
//     if(age>=8)
//     printf("5000원 \n");
//     else if(age>=60)
//     printf("2500원 \n");
//     else
//     printf("무료 \n");
//     return 0;
// }
//7.
// int main(void)
// {
//     int num;
//     printf("입력 받은 수: ");
//     scanf("%d", &num);
//     if(num%3==0 && num%5==0)
//     printf("3의 배수이면서 5의 배수이다. \n");
//     else
//     printf("3과 5의 배수가 아니다. \n");
//     return 0;
// }
//8.
// int main(void)
// {
//     int age;
//     printf("나이: ");
//     scanf("%d", &age);
//     if(age<8)
//     printf("무료 \n");
//     else if(age>=60)
//     printf("무료 \n");
//     else
//     printf("5000원 \n");
//     return 0;

// }




//23.11.22 8 ~ 9장
// int main(void)
// {
//     int num;
//     printf("정수 입력: ");
//     scanf("%d", &num);
//     if (num<0)
//     printf("입력 값은 0보다 작다. \n");
//     if(num>0)
//     printf("입력 값은 0보다 크다. \n");
//     if(num==0)
//     printf("입력 값은 0이다. \n");
    
//     return 0;
// }
// int main(void)
// {
//     int opt;
//     double num1, num2;
//     double result;
//     printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//     printf("몇 번: \n");
//     scanf("%d", &opt);
//     printf("두 개의 실수 입력: ");
//     scanf("%lf %lf", &num1, &num2);
//     if (opt==1)
//         result = num1+num2;
//     if(opt==2)
//         result = num1-num2;
//     if(opt==3)
//         result = num1*num2;
//     if(opt==4)
//         result=num1/num2;
//     printf("결과값: %f \n", result);
//     return 0;

// }
// int main(void)
// {
//     int num;

//     for (num=1; num < 100; num++)
//     {
//         if(num%3==0 || num%4==0)
//             printf("3또는 4의 배수: %d \n", num);

//     }
//     return 0;
// }

// int main(void)
// {
//     int opt;
//     double num1, num2;
//     double result;
//     printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
//     printf("선택: ");
//     scanf("%d", &opt);
//     printf("두 개의 실수를 입력해주세요: ");
//     scanf("%lf %lf", &num1, &num2);

//     if(opt==1)
//         result=num1+num2;
//     else if (opt==2)
//         result=num1-num2;
//     else if (opt ==3)
//         result = num1*num2;
//     else
//         result = num1/num2;
//     printf("결과; %f", result);
//     return 0;
    
// }

// int main(void)
// {
//     int num, abs;
//     printf("정수 입력: ");
//     scanf("%d", &num);
// 조건 ? 참 : 거짓
//     abs= num>0 ? num:num*(-1);
//     printf("절댓값: %d \n", abs);
//     return 0;
// }
//예제
// int main(void)
// {
//     int num;
//     for (num = 1; num < 100; num++)
//     {
//         if(num%7 == 0 || num % 9 ==0)
//             printf("7과9의 배수: %d \n", num);
//     }
//     return 0;    
// }
// int main(void)
// {
//     int num1, num2;
//     int result;
//     printf("두 수를 입력해주세요: ");
//     scanf("%d %d", &num1, &num2);
//     if (num1>num2)
//             result = num1-num2;
//     else
//         result = num2-num1;
//         printf("두 수의 차: %d \n", result);
//     return 0;
// }
// int main(void)
// {
//     int math,korea,english;
//     double average;
//     printf("수학 국어 영어: ");
//     scanf("%d %d %d", &math, &korea, &english);
//     average = (math+korea+english)/3.0;
//     printf("평균:%f \n", average);
//     if (average>=90)
//         printf("A \n");
//     else if (average>=80)
//         printf("B \n");
//     else if (average>=70)
//         printf("C \n");
//     else if (average>=50)
//         printf("D \n");
//     else
//         printf("F \n");
//     return 0;        
    
// }
// int main(void) //tlqkf
// {
//     int num1, num2;
//     int result;
//     printf("두 개의 수: ");
//     scanf("%d %d", &num1, &num2);
//     result=(num1>num2)? num1-num2: num2-num1;
//     printf("뺄셈결과: %d \n", result);
//     return 0;
// }

//break
// int main(void)
// {
//     int sum=0, num=0;

//     while(1)
//     {
//         sum += num;
//         if (sum>5000)
//             break;
//         num++;       
//     }
//     printf("sum: %d \n", sum);
//     printf("num: %d \n", num);
//     return 0;
// }
//continue
// int main(void)
// {
//     int num;
//     printf("start \n");

//     for (num=1; num < 20; num++)
//     {
//         if(num%2==0 || num%3==0)
//         continue;
//         printf("%d ", num);
//     }
//     printf("end \n");
//     return 0;
// }
//예제 구구단 tlqkf
// int main(void)
// {
//     int dan, num;
//     for (dan = 0; dan < 10; dan++)
//     {
//         if(dan%2 !=0)
//         continue;
//         for (num = 1; num < 10; num++)
//         {
//             if(dan<num)
//             break;
//             printf("%d x %d = %d \n", dan, num, dan*num);
//         }
//         printf(" \n");        
//     }
//     return 0;
// }

// int main(void)
// {
//     int A, Z;
//     int result;
//     for (A = 0; A < 10; A++)
//     {
//         for(Z=0; Z,10; Z++)
//         {
//             if(A==Z)
//             continue;
//             result=
//         }
//     }
    
// }

//switch
// int main(void)
// {
//     int num;
//     printf("1이상 5이하: ");
//     scanf("%d", &num);

//     switch (num)
//     {
//     case 1:
//         printf("1은 ONE \n");
//         break;
//     case 2:
//         printf("2는 TWO \n");
//         break;
//     case 3:
//         printf("3은 THREE \n");
//         break;
//     case 4:
//         printf("4는 FOUR \n");
//         break;
//     case 5:
//         printf("5는 FIVE \n");
//         break;
//     default:
//         printf("뭐야 \n");
//         break;
//     }
//     return 0;
// }
// int main(void)
// {
//     char sel;
//     printf("M 오전, A 오후, E 저녁 \n");
//     printf("입력");
//     scanf("%c", &sel);
//     switch (sel)
//     {
//     case 'M':
//     case 'm':
//         printf("Morning \n");
//         break;
//     case 'A':
//     case 'a':
//         printf("Afternoon \n");
//         break;
//     case 'E':
//     case 'e':
//         printf("Evening \n");
//         break;
    
//     }
//     return 0;
// }
//함수
// int main(void)
// {
//     int num1, num2;
//     num1=printf("12345\n");
//     num2=printf("I love my home \n");
//     printf("%d %d \n", num1, num2);
//     return 0;
// }

// int Add(int num1, int num2)
// {
//     return num1 + num2;
// }

// int main(void)
// {
//     int result;
//     result=Add(5,3);
//     printf("합: %d \n", result);
//     result=Add(9,1);
//     printf("합: %d \n", result);
//     return 0;
// }
// int Add(int num1, int num2)
// {
//     return num1+num2;
// }
// void ShowAddResult(int num)
// {
//     printf("덧셈결과 출력: %d \n", num);
// }
// int ReadNum(void)
// {
//     int num;
//     scanf("%d", &num);
//     return num;
// }
// void HowToUseThisProg(void)
// {
//     printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
//     printf("두 개의 정수를 입력해주세요 : \n");
// }
// int main(void)
// {
//     int result, num1, num2;
//     HowToUseThisProg();
//     num1=ReadNum();
//     num2=ReadNum();
//     result = Add(num1, num2);
//     ShowAddResult(result);
//     return 0;
// }
// int AbsoCompare(int num1, int num2);
// int GetAbsoValue(int num);
// int main(void)
// {
//     int num1, num2;
//     printf("두 개의 정수 입력: ");
//     scanf("%d %d", &num1, &num2);
//     printf("%d와 %d중 절댓값이 큰 정수: %d \n",
//         num1, num2, AbsoCompare(num1, num2));
//     return 0;
// }
// int AbsoCompare(int num1, int num2)
// {
//     if(GetAbsoValue(num1) > GetAbsoValue(num2))
//         return num1;
//     else
//         return num2;
// }
// int GetAbsoValue(int num)
// {
//     if(num<0)
//         return num * (-1);
//     else
//         return num;
// }
//예제 dddddddddd
// int three(int nu1, int nu2, int nu3);
// int big(int bi);
// int small(int sm)
// int main(void)
// {
//     int num1, num2, num3;
//     printf("세 개의 정수 입력: ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     printf("가장 큰 수: %d 가장 작은 수: %d \n", big(bi),small(sm));
//     return 0;

// }
// int three(int nu1, int nu2, int nu3)
// {
//     if()
// }
//1205
// int main(void)
// {
//     int ch1, ch2;

//     ch1=getchar();
//     ch2=fgetc(stdin);//입력

//     putchar(ch1);
//     fputc(ch2, stdout); //출력
//     return 0;
// }
// int main(void)
// {
//     int ch;
//     while(1)
//     {
//         ch=getchar();
//         if(ch == EOF)
//             break;
//         putchar(ch);
//     }
//     return 0;
// }
// int main(void) //속았다
// {
//     char str[5];
//     int i;

//     for ( i = 0; i < 3; i++)
//     {
//         fgets(str, sizeof(str), stdin);
//         printf("Read %d: %s \n", i+1, str);
//     }
//     return 0;
// }
// void ClearLineFromReadBuffer(void)
// {
//     while(getchar() != '\n');
// }
// int main(void)
// {
//     char perID[7];
//     char name[10];

//     fputs("주민번호 앞 6자리 입력: ", stdout);
//     fgets(perID, sizeof(perID), stdin);
//     ClearLineFromReadBuffer();

//     fputs("이름 입력: ", stdout);
//     fgets(name, sizeof(name), stdin);

//     printf("주민번호:%s \n", perID);
//     printf("이름: %s \n", name);
//     return 0;
// }
#include <string.h>
// void RemoveBSN(char str[])
// {
//     int len=strlen(str);
//     str[len-1]=0;
// }
// int main(void)
// {
//     char str[100];
//     printf("문자열 입력: ");
//     fgets(str,sizeof(str), stdin);
//     printf("길이: %d, 내용:%s \n", strlen(str), str);

//     RemoveBSN(str);
//     printf("길이: %d, 내용: %s \n",strlen(str), str);
//     return 0;
// }

// int main(void)
// {
//     char str1[20]="1234567890";
//     char str2[20];
//     char str3[5];

//     strcpy(str2, str1);
//     puts(str2);

//     strncpy(str3, str1, sizeof(str3));
//     puts(str3);

//     strncpy(str3, str1, sizeof(str3)-1);
//     str3[sizeof(str3)-1]=0;
//     puts(str3);
//     return 0;
// }
// int main(void)
// {
//     char str1[20] = "First~";
//     char str2[20] = "Second";

//     char str3[20]= "Simple num: ";
//     char str4[20] = "1234567890";

//     strcat(str1, str2);
//     puts(str1);

//     strncat(str3, str4, 7);
//     puts(str3);
//     return 0;
// }
// int main(void)
// {
//     char str1[20];
//     char str2[20];
//     printf("문자열 입력 1: ");
//     scanf("%s", str1);

//     printf("문자열 입력2: ");
//     scanf("%s", str2);

//     if(!strcmp(str1,str2))
//     {
//         puts("두 문자열은 완벽히 동일합니다.");
//     }
//     else{
//         puts("두 문자열은 동일하지 않습니다.");

//         if(!strncmp(str1, str2, 3))
//             puts("그러나 앞 세 글자는 동일합니다.");
//     }
//     return 0;
// }
// #include <math.h>
// struct point // 구조체 point 정의    오류
// {
//     int xpos;
//     int ypos;

// };
// int main(void)
// {
//     struct point pos1, pos2;
//     double distance;
//     fputs("point1 pos; ", stdout);
//     scanf("%d %d", &pos1.xpos,&pos1.ypos);

//     fputs("point2 pos: ", stdout);
//     scanf("%d %d", &pos2.xpos,&pos2.ypos);

//     //두 점간의 거리 ㄱㅖ산 공식 루트(1-4)(1-4)+(3-5)*(3-5) =루트13 근사값 3.60555
//     distance = sqrt((double)((pos1.xpos - pos2.xpos)*(pos1.xpos - pos2. xpos)+(pos1.ypos - pos2.ypos)*(pos1.ypos - pos2.ypos)));
//     printf("두 점의 거리는 %g 입니다. \n", distance);
//     return 0;

// }

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main(void)
// {
//     struct person man1, man2;
//     strcpy(man1.name, "안성준");
//     strcpy(man1.phoneNum, "010-1122-3344");
//     man1.age=23;

//     printf("이름 입력: "); scanf("%s", man2.name);
//     printf("번호 입력: "); scanf("%s", man2.phoneNum);
//     printf("나이 입력: "); scanf("%d", &(man2.age));

//     printf("이름:%s \n", man1.name);
//     printf("번호:%s \n", man1.phoneNum);
//     printf("나이:%d \n", man1.age);

//     printf("이름:%s \n", man2.name);
//     printf("번호:%s \n", man2.phoneNum);
//     printf("나이:%d \n", man2.age);
//     return 0;
// }

// struct employee
// {
//     char name[20];
//     char idnum[20];
//     int money;
// };
// int main(void)
// {
//     struct employee man1, man2;
//     strcpy(man1.name, "이하복");
//     strcpy(man1.idnum,"990304-1234567");
//     man1.money = 20;

//     printf("이름 입력: "); scanf("%s", man2.name);
//     printf("번호 입력: "); scanf("%s", man2.idnum);
//     printf("급여정보: "); scanf("%d", &(man2.money));

//     printf("이름:%s \n", man1.name);
//     printf("주민번호:%s \n", man1.idnum);
//     printf("급여정보: %d \n", man1.money);
    
//     printf("이름: %s \n", man2. name);
//     printf("주민번호: %s \n", man2.idnum);
//     printf("급여정보:%d \n", man2.money);
//     return 0;
// }
// struct hanam
// {
//     char name[20];
//     char phonenum[20];
//     int age;
// };
// int main(void)
// {
//     struct hanam man1, man2, man3, man4;
//     strcpy(man1.name, "홍준호");
//     strcpy(man1.phonenum, "01037239943");
//     man1.age;

//     printf("이름: ");scanf("%s", man2.name);
//     printf("번호: "); scanf("%s", man2.phonenum);
//     printf("나이 "); scanf("%d", &(man2.age));
    
//     printf("이름: %s \n", man1.name);
//     printf("번호:%s \n", man1.phonenum);
//     printf("나이: %d \n",man1.age);
    
//     printf("이름: %s \n", man2.name);
//     printf("번호 :%s \n",man2.phonenum);
//     printf("나이: %d \n",man2. age);
//     return 0;
    
// }
// struct point
// {
//     int xpos;
//     int ypos;
// };

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct point pos={10,20};
//     struct person man= {"이승기", "010-1212-0001",21};
//     printf("%d %d \n", pos.xpos, pos.ypos);
//     printf("%s %s %d \n", man.name,man.phoneNum,man.age);
//     return 0;
// }

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main(void)
// {
//     struct person arr[3]={
//         {"이승기", "010-1212-0001", 21},
//         {"정지영", "010-1313-0002", 22}, 
//         {"한지수", "010-1717-0003", 19}
//     };

//     int i;
//     for ( i = 0; i < 3; i++)
//     {
//         printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
//     }
//     return 0;
// }
//예제
// struct employee
// {
//     char name[20];
//     char idnum[20];
//     int money;
// };
// int main(void)
// {
//     struct employee[3]{
//         {}
//     }
// }

// struct point
// {
//     int xpos;
//     int ypos;
// };
// int main(void)
// {
//     struct point pos1={1,2};
//     struct point pos2 = {100, 200};
//     struct point *pptr = &pos1;

//     (*pptr).xpos +=4;
//     (*pptr).ypos +=5;
//     printf("[%d %d] \n", pptr ->xpos,pptr->ypos);

//     pptr=&pos2;
//     pptr ->xpos +=1;
//     pptr ->ypos +=2;
//     printf("[%d %d]\n", (*pptr).xpos, (*pptr).ypos); //역참조랑 같다 (->) 
//     return 0;
// }

//p465
// struct point
// {
//     int xpos;
//     int ypos;
// };
// struct circle
// {
//     double radius;
//     struct point* center;
// };
// int main(void)
// {
//     struct point cen = {2, 7};
//     double rad=5.5;

//     struct circle ring={rad, &cen};
//     printf("원의 반지름: %g \n", ring.radius);
//     printf("원의 중심:[%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
//     printf("원의 반지름: %g \n", rad);
//     printf("원의 중심 [%d, %d]\n",(*ring.center).xpos,(*ring.center).ypos);

//     return 0;
// }
// struct book
// {
//     char writer[100];
//     char title[100];
//     int page;
// };
// void ClearLineFromReadBuffer(void)
// {
//     while(getchar()!='\n');
// }
// int main(void)
// {
//     struct book book1, book2, book3;
//     printf("도서정보입력\n");
//     fputs("저자:",stdout); fgets(book1.writer,sizeof(book1.writer),stdin);
//     fputs("제목:",stdout); fgets(book1.title,sizeof(book1.title),stdin);
//     fputs("페이지:",stdout); 
//     scanf("%d", &book2.page);
//     ClearLineFromReadBuffer();
//     fputs("저자:",stdout); fgets(book2.writer,sizeof(book2.writer),stdin);
//     fputs("제목:",stdout); fgets(book2.title,sizeof(book2.title),stdin);
//     fputs("페이지: ",stdout); scanf("%d", &(book2.page));
//     ClearLineFromReadBuffer();
//     fputs("저자: ",stdout); fgets(book3.writer,sizeof(book3.writer),stdin);
//     fputs("제목: ",stdout); fgets(book3.title,sizeof(book3.title),stdin);
//     fputs("페이지: ",stdout); scanf("%d", &(book3.page));

//     printf("도서정보출력\n");
//     printf("저자: %s", book1.writer);
//     printf("제목: %s", book1.title);
//     printf("페이지: %d\n", book1.page);

//     printf("저자: %s", book2.writer);
//     printf("제목: %s", book2.title);
//     printf("페이지: %d\n", book2.page);
    
//     printf("저자: %s", book3.writer);
//     printf("제목: %s", book3.title);
//     printf("페이지: %d\n", book3.page);
// }
// struct book
// {
//     char writer[100];
//     char title[100];
//     int page;
// };
// int main(void)
// {
//     int i;
//     struct book book[3];
//     printf("도서정보입력\n");
//     for ( i = 0; i < 3; i++)
//     {
//         printf("저자: ");
//         scanf("%s", book[i].writer);
//         printf("제목: ");
//         scanf("%s", book[i].title);
//         printf("페이지: ");
//         scanf("%d",&book[i].page);
//     }
//     printf("도서정보출력\n");
//     for ( i = 0; i < 3; i++)
//     {
//         printf("저자: %s\n",book[i].writer);
//         printf("제목: %s\n",book[i].title);
//         printf("페이지:%d\n", book[i].page);
//     }
//     return 0;
// }

// struct point
// {
//     int xpos;
//     int ypos;
// };
// typedef struct point Point;

// typedef struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// }Person;

// int main(void)
// {
//     Point pos={10,20};
//     Person man= {"이승기", "010-1212-0001",21};
//     printf("%d %d \n", pos.xpos, pos.ypos);
//     printf("%s %s %d \n", man.name,man.phoneNum,man.age);
//     return 0;
// }
// typedef struct point 
// {
//     int xpos;
//     int ypos;
// }Point;
// void ShowPosition(Point pos)
// {
//     printf("[%d, %d] \n", pos.xpos, pos.ypos);
// }
// Point GetCurrentPosition(void)
// {
//     Point cen;
//     printf("Input current pos: ");
//     scanf("%d %d", &cen.xpos, &cen.ypos);
//     return cen;
// }
// int main(void)
// {
//     Point curPos=GetCurrentPosition();
//     ShowPosition(curPos);
//     return 0;
// }
// typedef struct
// {
//     int xpos;
//     int ypos;
// }point;

// point Addpoint(point pos1, point pos2)
// {
//     point pos = {pos1.xpos+pos2.xpos,pos1.ypos+pos2.ypos};
//     return pos;
// }

// point Minpoint(point pos1, point pos2)
// {
//     point pos = {pos1.xpos-pos2.xpos,pos1.ypos-pos2.ypos};
//     return pos;
// }
// int main(void)
// {
//     point pos1 = {5,6};
//     point pos2 = {2,9};
//     point result;

//     result = Addpoint(pos1,pos2);
//     printf("[%d %d] \n", result.xpos,result.ypos);
//     result=Minpoint(pos1, pos2);
//     printf("[%d %d]\n", result.xpos,result.ypos);
//     return 0;
// }
// typedef enum  // typedef 선언이 추가된 열거형 정의
// {
//     Do=1,Re=2,Mi=3,Fa=4,Sol=5,La=6,Ti=7
// } Syllable;
// void sound(Syllable sy)
// {
//     switch (sy)
//     {
//     case Do:
//         puts("도는 하얀 도라지 ♣▧♬♩♪");return;
//     case Re:
//         puts("레는 둥근 레코드 ");return;
//     case Mi:
//         puts("미는 파란 미나리"); return;
//     case Fa:
//         puts("파는 예쁜 파랑새 "); return;
//     case Sol:
//         puts("솔은 작은 솔방울"); return;
//     case La:
//         puts("라는 라디오고요"); return;
//     case Ti:
//         puts("시는 시발이고요"); return;
//     }
//     puts("다 함께~");
// }
// int main(void)
// {
//     Syllable tone;
//     for (tone = 1; tone <=7; tone+=1)
//     {
//         sound(tone);
//     }
//     return 0;
// }
// int main(void)
// {
//     FILE *fp=fopen("data.txt", "wt");
//     if(fp==NULL)
//     {   
//         puts("파일오픈 실패");
//         return -1;
//     }
//     fputc('A',fp);
//     fputc('B',fp);
//     fputc('C',fp);
//     fclose(fp);
//     return 0;

// }
// int main(void)
// {
//     int ch, i;
//     FILE *fp = fopen("data.txt","rt");
//     if(fp==NULL)
//     {
//         puts("파일오픈실패");
//         return -1;
//     }
//     for ( i = 0; i < 3; i++)
//     {
//         ch=fgetc(fp);
//         printf("%c\n",ch);
//     }
//     fclose(fp); 
//     return 0;
// }
// int main(void)
// {
//     FILE *fp=fopen("")
// }
// int main(void)
// {
//     int *ptr=(int*)malloc(sizeof(int));
//     int *ptr2=(int*)malloc(sizeof(int)*6);
//     int i;
//     *ptr=30;
    
//     for (i = 0; i < 6; i++)
//     {
//         ptr2[i]=i+1;
//     }
//     printf("%d \n",*ptr);
//     for (i = 0; i < 6; i++)
//     {
//         printf("%d",ptr2[i]);
//     }
//     free(ptr);
//     free(ptr2);
//     return 0;
// }
// char *Readname(void)
// {
//     char *name = (char*)malloc(sizeof(char)*30);
//     printf("what's your name?");
//     gets(name);
//     return name;
// }
// int main(void)
// {
//     char *name1;
//     char *name2;
//     name1=Readname();
//     printf("%s \n",name1);
//     name2=Readname();
//     printf("%s \n", name2);

//     printf("again1 %s \n",name1);
//     printf("again2 %s \n",name2);
//     free(name1);
//     free(name2);
//     return 0;
// }
#include <stdlib.h>
// int main(void)
// {
//     char *boy;
//     int maxlen,len,i;
//     printf("문자열 최대길이 입력: ");
//     scanf("%d",&maxlen); //입력받은 최대길이 maxlen 저장
//     getchar(); //문자열 끝 \n 지우기 위해
//     boy = (char*)malloc(sizeof(char) * (maxlen+1)); //메모리 할당 malloc는 주소값 반환하기 때문에 포인터 사용

//     printf("입력: "); //원하는 문장 입력
//     fgets(boy,maxlen+1,stdin); // maxlen1+1만큼 boy에 입력
//     boy[strlen(boy)-1]=0; //boy 끝 \n 지우기 위해
//     len=strlen(boy); //길이 초기화
//     for ( i = len; i > 0; i--) //끝에서부터 반복문 돌기위해
//     {
//         if(boy[i]==' ') //공백일때 조건문
//         {
//             printf("%s ",&boy[i+1]);  //공백이면 i+1 값을 출력
//             boy[i]=0; //초기화
//         }
//     }
//     printf("%s ",&boy[0]); //0까지 가지 못하는 반복문이어서 따로 0번째를 출력해주기 위해
//     free(boy);//동적할당 해제
//     return 0;
// }
//1208
