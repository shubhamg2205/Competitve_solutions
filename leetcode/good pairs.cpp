class Solution {
public:
    int numIdenticalPairs(vector<int> a) {
        int s=0;
            sort(a.begin(),a.end());
            for(int i=0;i<a.size()-1;i++){
                    if(a[i]!=a[i+1]) continue;
                    else{
                            int j=i+1;
                            while(j<a.size()){
                               if(a[i]==a[j]) s++;
                                   else break;
                                    j++;
                            }
                    }
            }
            return s;
    }
};
