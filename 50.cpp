#include<bits/stdc++.h>
using namespace std;
int check(int s) {
    int k=0;
    for(int j=2;j*j<=s;j++){
        if(s%j==0){
            k=1;
            break;
        }
    }
    if(k==0)
        return 1;
    else
        return 0;
}
int main(){
    vector<int>p;
    int g,sum=0;
    for(int i=2;i<1000000;i++){
            g=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                g=0;
                break;
            }
        }
        if(g==1)
            p.push_back(i);
    }
    int c,max=0,res,j,r;
    for(int i=0;i<p.size();i++){
            sum=0,c=0,r=0;
            for( j=0;j<p.size();j++){
                    sum+=p[j];
                    c++;
                    if(sum==p[i]){
                        r=1;
                        break;
                    }
                    else if(sum>p[i]){
                     int o=0;
                     while(1){
                        if( sum==p[i]){
                            r=1;
                            break;
                        }
                        if(sum<p[i])
                            break;
                        sum-=p[o++];
                        c--;
                     }

                        break;
                    }
            }
            if(r==1 && max<=c){
                max=c;
                res=p[i];
            }
    }
    cout<<"terms: "<<max<<endl;
    cout<<"result: "<<res<<endl;
    return 0;
}
