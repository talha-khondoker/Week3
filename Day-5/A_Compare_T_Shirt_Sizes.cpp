// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll tc;
//     cin>>tc;
//     while (tc--)
//     {
//         string a, b;
//         cin>>a>>b;
//         char ca, cb;
//         int xa=0 ,xb=0;
//         for(int i=0; i<a.size(); i++)
//         {
//             if(a[i]!='X')
//             {
//                 ca=a[i];
//             }
//             else
//             {
//                 xa++;
//             }
//         }
//         for(int i=0; i<b.size(); i++)
//         {
//             if(a[i]!='X')
//             {
//                 cb=a[i];
//             }
//             else
//             {
//                 xb++;
//             }
//         }
//         if(ca==cb)
//         {
//             if(xa==xb || ca=='M')
//             {
//                 cout<<"="<<endl;
//                 continue;
//             }
//             if(ca=='S')
//             {
//                 if(xa>xb)
//                 {
//                     cout<<"<"<<endl;
//                 }
//                 else
//                 {
//                     cout<<">"<<endl;
//                 }
//             }
//             else if(ca=='L')
//             {
//                 if(xa>xb)
//                 {
//                     cout<<">"<<endl;
//                 }
//                 else{
//                     cout<<"<"<<endl;
//                 }
//             }
//             continue;
//         }
//         if(ca=='S')
//         {
//             cout<<"<"<<endl;
//         }
//         else if(ca=='M' && cb=='S')
//         {
//             cout<<">"<<endl;
//         }
//         else if(ca=='M' && cb=='L')
//         {
//             cout<<"<"<<endl;
//         }
//         else if(ca=='L' && cb=='M')
//         {
//             cout<<">"<<endl;
//         }
//         else if(ca=='L')
//         {
//             cout<<">"<<endl;
//         }
//     }
    
//     return 0;
// }


#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        string a,b;        
        cin>>a>>b;
        int n=a.size();
        int m=b.size();
        char ca,cb;
        int xa=0,xb=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!='X')
            {
                ca=a[i];
            }
            else
            {
                xa++;
            }
        } 
        for(int i=0;i<m;i++)
        {
            if(b[i]!='X')
            {
                cb=b[i];
            }
            else
            {
                xb++;
            }
        }
        if(ca==cb)
        {
            if(xa==xb or ca=='M')
            {
                cout<<"="<<endl;
                continue;
            }
            if(ca=='S')
            {
                if(xa>xb)
                {
                    cout<<"<"<<endl;
                }
                else
                {
                    cout<<">"<<endl;
                }
            }
            else if(ca=='L')
            {
                if(xa>xb)
                {
                    cout<<">"<<endl;
                }
                else
                {
                    cout<<"<"<<endl;
                }
            }
            continue;
        }
        if(ca=='S')
        {
            cout<<"<"<<endl;
        }
        else if(ca=='M' and cb=='S')
        {
            cout<<">"<<endl;
        }
        else if(ca=='M' and cb=='L')
        {
            cout<<"<"<<endl;
        }
        else if(ca=='L')
        {
            cout<<">"<<endl;
        }
    }
    
    return 0;
}