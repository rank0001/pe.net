#include<bits/stdc++.h>
using namespace std;
int main()
{
    char res1[1000]="100";
    int res3,carry=0,j;
    char res[1000];
    long long sum=0;
    for(int i=99;i>=1;i--){
        int k=strlen(res1)-1;
        int j=0;
        while(k>=0){
            res3=(res1[k]-'0')*i+carry;
            if(res3>=10 && k==0){
                res[j++]=(res3%10)+'0';
                carry=res3/10;
                while(carry>0){
                    res[j++]=(carry%10)+'0';
                    carry/=10;
                }
            }
            else{
                res[j++]=(res3%10)+'0';
                carry=res3/10;

            }
            k--;
        }
        res[j]='\0';
        int g=strlen(res)-1;
        int p=0;
        while(res[g]!='\0'){
            res1[p++]=res[g];
            g--;
        }
    }
    int m=0;
    while(res1[m]!='\0'){
        sum+=(res1[m]-'0');
        m++;
    }
    cout<<sum<<endl;
    return 0;
}
//ANSWER:648
