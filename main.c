#include <stdio.h>
struct Student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
struct Student arr[1000];


 int index=0;
int main(){
    


    printf("xueshengchengjiguanlixitong\n");

    while(1){
        printf("1---tianjiaxueshengchengji\n");
        printf("2---shanchuxueshengchengji\n");
        printf("3---xianshisuoyouxueshengchengji\n");
        printf("4---yiewu1:suoyouzongfenbujigedexuesheng\n");
        printf("5---yiewu2:meiyikedoubujigedexuesheng\n");
        printf("6---yiewu3:xianshizongfenzuigaodexuesheng\n");
        printf("7---yiewu4:xianshipingjunfenzuigao,qiemeiyoubujigekemudexuesheng\n");
        printf("8---tuichu\n");

        printf("qingxuanze\n");

        int code;
        scanf("%d",&code);

        if (code == 1){
            printf("qingshuruxueshengxingming:\n");
            scanf("%s",(arr[index].name));

            printf("qingshuruxueshengyuwenchengji\n");
            scanf("%d",&(arr[index].yuwen));

            printf("qingshuruxueshengshuxuechengji\n");
            scanf("%d",&(arr[index].shuxue));

            printf("qingshuruxueshengyingyuchengji\n");
            scanf("%d",&(arr[index].yingyu));

            index++;

            printf("tianjiawancheng,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);





        }
        if(code == 3){
            printf("suoyouxueshengchengjiruxia:\n");

            for(int i = 0; i < index; i++)
            {
                printf("di%dgexueshengdexingmingwei%s,ywcjw:%d,sxcjw:%d,yycjw:%d\n",i+1,arr[i].name,arr[i].shuxue,arr[i].yingyu);
            }
            printf("\ndianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
    }

    return 0;

}