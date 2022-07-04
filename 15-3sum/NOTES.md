v.push_back(nums[i]);
v.push_back(nums[left]);
v.push_back(nums[right]);
s.insert(v);
//ans.push_back(v);
left++;
right--;
}
else if(nums[left] + nums[right] < tar)
{
cout<<"<"<<endl;
left++;
}
else
{
cout<<"else"<<endl;
right--;
}
}
}
for(auto x: s)
ans.push_back(x);
return ans;
}
};