#include <iostream>
using namespace std;

int main() {
	int t,n,m,x,y,count_f,count_p;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    cin>>x>>y;
	    char solve[n][m];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>solve[i][j];
	        }
	    }
	    count_f=0,count_p=0;
	    int ans[n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(solve[i][j]=='F')
	            count_f++;
	            if(solve[i][j]=='P')
	            count_p++;
	        }
	        if(count_f>=x||(count_f==x-1&&count_p>=y)){
	            ans[i]=1;
	        }
	        else
	        ans[i]=0;
	    }
	    for(int i=0;i<n;i++){
	        cout<<ans[i]<<" ";
	    }cout<<endl;
	}
	
	return 0;
}
