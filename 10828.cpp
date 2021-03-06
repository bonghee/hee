#include <cstdio>
#include <cstring>
using namespace std;
int stack[10000];
int size;

void push()
{
        int number;
        scanf("%d",&number);
        stack[size] = number;
        size++;
}

void pop()
{
        if(size != 0)
        {
                printf("%d\n",stack[--size]);
                //size--;
        }
        else
                printf("-1\n");
}

void empty()
{
        if(size == 0)
                printf("1\n");
        else
                printf("0\n");
}

void top()
{
        if(size != 0)
                printf("%d\n",stack[size-1]);
        else
                printf("-1\n");
}

int main()
{
        int num;
        scanf("%d",&num);
        char str[10];
        int test;
        for(int i=0; i<num; i++)
        {
                scanf("%s",str);
                if(strcmp("push",str) == 0)
                        push();
                else if(strcmp("pop",str) == 0)
                        pop();
                else if(strcmp("empty",str) == 0)
                        empty();
                else if(strcmp("top",str) == 0)
                        top();
                else if(strcmp("size",str) == 0)
                        printf("%d\n",size);
        }
        return 0;
}
