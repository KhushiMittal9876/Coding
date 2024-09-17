// 
if(n%k==0){
       for(int i=0;i<n;i+=k){
           int f=i+(k-1); 
           if(f>=n){
               f=n-1;
           }                                //1 2 3 4 5 6 7 8    elements k=3,n=8
           cout<<reverse(i,f)<<" ";//0,2 3,5 6,8         // 0 1 2 3 4 5 6 7    index
    }
    }
    }
    
}
