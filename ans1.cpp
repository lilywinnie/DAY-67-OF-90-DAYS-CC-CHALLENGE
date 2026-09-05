#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int N,B;
        cin>>N>>B;
        
        int maxArea = 0;
        
        for(int i=0; i<N; i++)
        {
            int Wi, Hi, Pi;
            cin>>Wi>>Hi>>Pi;
            
            if(B>=Pi)
                maxArea = max(maxArea, Wi*Hi);
        }
        
        if(maxArea>0)
            cout<<maxArea<<"\n";
            
        else
            cout<<"no tablet\n";
        
    }
    
    return 0;
    
}
