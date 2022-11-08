queue<int> rev(queue<int> q)
{
   stack<int>s;
    while(!q.empty())
    {
    int x=q.front();
    q.pop();
    s.push(x);
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return q;
}