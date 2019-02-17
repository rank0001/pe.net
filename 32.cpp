#include <bits/stdc++.h>
using namespace std;
#include <vector>
int main(){
	int c,l,b,res,p,count=0;
	long long sum=0;
	vector<int>v;
	vector<int>v1;
	vector<int>v2;
	for(int i=1;i<=99;i++){
            v.clear();
            v.push_back(-1);
		c=0;
		b=i;
		while(b>0){
			l=b%10;
			p=0;
			for(int j=0;j<v.size();j++){
				if(l==v[j] || l==0){
					p=1;
					break;
				}
			}
			if(p==0 && l!=0){
				c++;
				v.push_back(l);
			}
				b/=10;
		}
            ostringstream s1;
			s1<<i;
			string res2=s1.str();
			int u1=res2.length();
        //cout<<c<<endl;
		for(int k=10;k<=2000;k++){
            count+=c;
			b=k;
			while(b>0){
				l=b%10;
				p=0;
				for(int r=0;r<v.size();r++){
					if(l==v[r] || l==0){
						p=1;
						break;
					}
				}
				if(p==0 && l!=0){
					count++;
					v.push_back(l);
				}
					b/=10;
			}
            //cout<<count<<endl;
			res=k*i;
			//cout<<res<<endl;
			int z=res;
			while(res>0){
				l=res%10;
				p=0;
				for(int w=0;w<v.size();w++){
					if(l==v[w] || l==0){
						p=1;
						break;
					}
				}
				if(p==0 && res!=0){
					count++;
					v.push_back(l);

				}
					res/=10;
			}
			ostringstream s2;
			s2<<k;
			string res2=s2.str();
			int u2=res2.length();
			ostringstream s3;
			s3<<z;
			string r=s3.str();
			int u=r.length();
			//cout<<u<<endl;
			if(u+u1+u2==9){
			if(count==9){
                b=0;
                for(int m=0;m<v2.size();m++){
                    if(z==v2[m]){
                        b=1;
                        break;
                    }
                }
                if(b==0){
                    cout<<"i : "<<i<<" "<<"k: "<<k<<" z :"<<z<<endl;
                    sum+=z;
                }
				v2.push_back(z);
                //cout<<i<<j<<sum<<endl;
			}
			}
            //cout<<count<<endl;
				count=0;
				v.clear();
				int g=i;
				while(g>0){
                    l=g%10;
                    if(l!=0)
                        v.push_back(l);
                    g/=10;
				}

			}
	}
	cout<<sum<<endl;
	return 0;
}
