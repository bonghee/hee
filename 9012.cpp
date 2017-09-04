#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
        int num;
        char str[50];
        scanf("%d",&num);

        for(int i=0; i<num; i++)
        {
                scanf("%s",str);
                stack<char> st;
                for(int j=0; j<strlen(str); j++)
                {
                        if(str[j] == '(')
                                st.push(str[j]);
                        else if(str[j] == ')')
                        {
                                if(st.empty())
                                {
                                        printf("NO\n");
                                        break;
                                }
                                else
                                        st.pop();
                        }

                        if(j==strlen(str)-1)
                        {
                                if(st.empty())
                                        printf("YES\n");

                                else
                                        printf("NO\n");
                        }
                }
        }
        return 0;

}
