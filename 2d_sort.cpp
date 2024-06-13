#include <bits/stdc++.h>
using namespace std;
vector<int> ans;

void sort(vector<int> v) {
	sort(v.begin(),v.end());
	ans.insert(ans.end(),v.begin(),v.end());
}

int main() {
    int n,m;
    cout << "Enter value for rows and columns: ";
    cin >> n >> m;
    int a[n][m];
    vector<int> v;
    cout << "Enter values for array: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            v.push_back(a[i][j]);
        }
        sort(v);
        v.clear(); 
    }
//    int aa[n][m];
//    int k=0;
//    		for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            aa[i][j]=ans[k];
//            k++;
//        }
//    }		
//	
//	    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cout<<aa[i][j]<<" ";
//        }
//        cout<<endl;
//    }
	int x=1;
	for(int i=0;i<ans.size();i++){
		if(x%m==0){
			cout<<ans[i]<<endl;
			x++;
		}
		else{
			cout<<ans[i]<<" ";
			x++;
		}
		
	}

    
    return 0;
}

