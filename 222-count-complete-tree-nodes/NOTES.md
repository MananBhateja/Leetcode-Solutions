if( root == NULL) return 0;
int d=depth(root);
cout<<d<<endl;
if(d==0) return 1;
int left=1,right=pow(2,d);
int n=0;
while(left <=right){
int pivot=(left+right)/2;
if(check(root,pivot,d)){
left=pivot+1;
n=pivot;
}
else{
right=pivot-1;
}
}
return pow(2,d)-1+n; // we have considered level1 as depth=0
}
};