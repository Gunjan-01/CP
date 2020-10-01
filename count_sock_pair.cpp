int sockMerchant(int n, vector<int> ar) {
    unordered_map<int,int>sockmatch;
    int num;
    for(auto i=ar.begin();i!=ar.end();i++){
        num= *i;
        sockmatch[num]++;
    } 
    int count =0;
    unordered_map<int,int> :: iterator it;
    for(it=sockmatch.begin();it!=sockmatch.end();it++){
        if(it->second%2==0){
            count=count+((it->second)/2);
        }
        else if(it->second>2&&it->second%2!=0){
            count=count+((it->second)/2);
        }
    }
    return count;

}