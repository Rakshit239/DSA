class Solution {
  public:
    void bitManipulation(int n, int i) {
        // your code here
        i=i-1;
        if((n&(1<<i))==0){
            cout<<0<<" ";
        }else{
            cout<<1<<" ";
        }
        
        int n1 = (n|(1<<i));
        cout<<n1<<" ";
        
        int n2c= (n&~(1<<i));
        cout<<n2c<<" ";
    }
};