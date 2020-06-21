对一个数组实现的栈 $S[n]$ ,栈顶元素为 $S[1]$ 执行以下操作：

$Stack-Empty(S):$

~~~C++
if(S.top==0)
    return true;
else
    return false;
~~~

$Stack-Push(S,x):$

~~~c++
if (S.top == n)
{
    cerr<<"overflow!\n";
    exit(1);
}
else
{
    S.top++;
    S[S.top]=x;
}
~~~

$Stack-Pop(S):$

~~~C++
if(Stack-Empty(s))
{
    cerr<<"underflow!\n";
    exit(1);
}
else
{
    S.top--;
    return S[S.top+1];//不同于STL实现，用数组实现时可以按实际需要加上该语句
}
~~~

