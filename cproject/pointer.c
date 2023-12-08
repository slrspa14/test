#include <stdio.h>
#include <string.h>
// int showarr(int *param, int len);
// int main(void)
// {
//     int arr1[3]={1,2,3};
//     int arr2[5]={4,5,6,7,8};
//     showarr(arr1,sizeof(arr1)/sizeof(int));
//     showarr(arr2,sizeof(arr2)/sizeof(int));
//     return 0;
// }
// int showarr(int *param, int len)
// {
//     int i;
//     for ( i = 0; i < len; i++)
//     {
//         printf("%d",param[i]);
//     }
//     printf("\n");
// }
// void showarr(int *param, int len);
// void addarr(int * param, int len , int add);
// int main(void)
// {
//     int arr[3]={1,2,3};
//     addarr(arr,sizeof(arr)/sizeof(int),1);
//     showarr(arr,sizeof(arr)/sizeof(int));
//     addarr(arr,sizeof(arr)/sizeof(int),3);
//     showarr(arr,sizeof(arr)/sizeof(int));
//     addarr(arr,sizeof(arr)/sizeof(int),5);
//     showarr(arr,sizeof(arr)/sizeof(int));
//     return 0;
// }
// void showarr(int *param, int len)
// {
//     int i;
//     for ( i = 0; i < len; i++)
//     {
//         printf("%d ", param[i]);
//     }
//     printf("\n");
// }
// void addarr(int *param, int len, int add)
// {
//     int i;
//     for ( i = 0; i < len; i++)
//     {
//         param[i] += add;
//     }
// }
void Swap(int* ptr1,int *ptr2);
int main(void)
{
    int num1=10;
    int num2=20;
    printf("num1: %d, num2: %d \n", num1,num2);

    Swap(&num1,&num2); // 주소값을 보내고
    printf("num1: %d, num2: %d\n", num1, num2);
    return 0;
}
void Swap(int* ptr1, int*ptr2) // 받은 주소값을 역참조해서 안에 내용물을 바꿔준다
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
