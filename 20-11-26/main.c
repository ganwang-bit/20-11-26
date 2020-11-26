#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//int main()
//{
//
//    return 0;
//}
//typedef void(*pi)(int);
//typedef unsigned int uint;
//pi signal(int,pi);
//int Add(int x,int y)
//{
//    return x+y;
//}
//int main()
//{
//    int a=10;
//    int b= 20;
//    int z=Add(a,b);
//    printf("%d\n",z);
//    int(*p)(int,int)=Add;
//    printf("%d\n",p(a,b));
//    return 0;
//}
//void Add(int a,int y)
//{
//    return a+y;
//}
//int main()
//{
//    void(*p[])(int,int)={Add};
//    printf("%p %p %p",*p,p[0],Add);
//    return 0;
//}
//char*(*p)(char*,const char*)=my_strcmp;
//char*(*p[4])(char*,const char*)={my_strcmp,my_strcmp,my_strcmp,my_strcmp};
//void menu()
//{
//    printf("*****************************************\n");
//    printf("*********   1.add       2.sub   *********\n");
//    printf("*********   3.mul       4.div   *********\n");
//    printf("*********         0.exit        *********\n");
//    printf("*****************************************\n");
//}
//int Add(int x,int y)
//{
//    return x+y;
//}
//int  Sub(int x,int y)
//{
//    return x-y;
//}
//int Mul(int x,int y)
//{
//    return x*y;
//}
//int Div(int x,int y)
//{
//    return x/y;
//}
//int main()
//{
//    int(*p[4])(int,int)={Add,Sub,Mul,Div};
//    int input;
//    while(1)
//    {
//        menu();
//        printf("请选择：");
//        scanf("%d",&input);
//        int a,b;
//        while(1)
//        {
//            char ch;
//            if((ch=getchar())=='\n')
//                break;
//        }
//        if(input==0)
//        {
//            printf("退出\n");
//            break;
//        }
//        else if(input<1||input>4)
//        {
//            printf("输入错误\n");
//        }
//        else
//        {
//        printf("请输入两个操作数");
//        scanf("%d%d",&a,&b);
//        printf("%d\n",p[input-1](a,b));
//        }
//
//    }
//    return 0;
//}
//void c(int(*P)(int,int))
//{
//    int a;
//    int b;
//    printf("请输入两个操作数：");
//    scanf("%d%d",&a,&b);
//    printf("%d\n",P(a,b));
//
//}
//int main()
//{
//    int input;
//    do
//    {
//
//        menu();
//        printf("请选择:\n");
//        scanf("%d",&input);
//        switch(input)
//        {
//        case 1:
//            c(Add);
//            break;
//        case 2:
//            c(Sub);
//            break;
//        case 3:
//            c(Mul);
//            break;
//        case 4:
//            c(Div);
//            break;
//        case 0:
//            printf("退出\n");
//            break;
//        default:printf("非法输入\n ");
//
//        }
//    }while(input);
//    return 0;
//}
//int main()
//{
//    int(*pp[10])(int,int)={0};
//    int (*(*p)[10])(int,int)=&pp;
//    return 0;
//}
void print(char* str)
{
    printf("hehe:%s\n",str);
}
void test(void(*p)(char*))
{
    print("test\n");
    p("bit");
}
int main()
{

    test(print);
    return 0;
}
