class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int b=n;int cnt=0;
        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='W')cnt++;
        }
        b=min(cnt,b);
        for(int i=k;i<n;i++)
        {
            if(blocks[i]=='W')cnt++;
            if(blocks[i-k]=='W')cnt--;
            //cout<<cnt<<endl;
             b=min(cnt,b);
        }
     return b;
    }
};