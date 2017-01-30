#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;
int res;
int main()
{
        stack<char> st;
        char str[100000];
        scanf("%s",str);
        int a = strlen(str);
        for(int i=0;i<a;i++)
        {
                if(str[i]=='(')
                {
                        st.push(str[i]);
                }
                else
                {
                        if(str[i-1]=='(')
                        {
                                st.pop();
                                res += st.size();
                        }
                        else
                        {
                                st.pop();
                                res += 1;
                        }
                }
        }
        printf("%d\n",res);
        return 0;
}
