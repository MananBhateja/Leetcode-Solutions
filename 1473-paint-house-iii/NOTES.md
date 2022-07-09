cout<<k<<endl;
mini=min(mini,k);
}
}
if(mini == 1e7) return -1;
else
return mini;
}
int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
for(int i=0;i<cost.size();i++){
for(int j=0;j<cost[0].size();j++){
cout<<cost[i][j]<<" ";
}
cout<<endl;
}
cout<<".................."<<endl;
return func(0,-1,houses,cost,n,target);
}
};