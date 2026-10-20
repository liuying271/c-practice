#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int number = rand()%100+1;
    int count = 0;
    int a = 0;
    printf("猜数字游戏开始！\n");
    while(1){
        printf("请输入你猜的数字(1-100):");
        scanf("%d",&a);
        count++;
        if(a>number){
            printf("你猜的数字大了，请再试一次。\n");
        }else if(a<number){
            printf("你猜的数字小了，请再试一次。\n");
        }else{
            printf("恭喜你，猜对了！你一共猜了%d次。\n",count);
            break;
        }
    }

return 0;
}