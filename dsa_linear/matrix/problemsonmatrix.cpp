#include<iostream>
using namespace std;
void printsnake(int arr[3][3]){
    for(int i=0;i<3;i++){
        if(i%2==0){//even rows
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }

        }
        else{
            for(int j=2;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
const int R=3;
const int C=3;
void printboundary(int arr[R][C]){
    if(R==1){
        for(int i=0;i<C;i++){
            cout<<arr[0][i];
        }
    }
    else if(C==1){
        for(int i=0;i<R;i++){
            cout<<arr[i][0];
        }
    }
    else {
        for(int i=0;i<C;i++){
            cout<<arr[0][i]<<" ";
        }
        for(int j=1;j<R;j++){
            cout<<arr[j][C-1]<<" ";
        }
        for(int i=C-2;i>=0;i--){
            cout<<arr[R-1][i]<<" ";
        }
        for(int j=R-2;j>=1;j--){
            cout<<arr[j][0]<<" ";
        }
    }

}
void swap(int &i,int &j){
    int temp=i;
    i=j;
    j=temp;
}
void transpose(int arr[R][C]){
    // Brute force
    int temp[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
        temp[i][j]=arr[j][i];
    }
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
        cout<<temp[i][j]<<" ";
    }
    }
    
    //by swapping
    for(int i=0;i<R;i++){
        for(int j=i+1;j<C;j++){//i.e. we are swapping only uper diagonal elements. lower diagonal are covered automatically.
            swap(arr[i][j],arr[j][i]);
        }
    }

}

void rotate_90(int arr[R][C]){
    // brute force
    int temp[R][C];
    int n=R;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            temp[n-j-1][i]=arr[i][j];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            arr[i][j]=temp[i][j];
        }
    }

    //efficient method
    //getting transpose done
    transpose(arr);

    //reversing the columns
    for(int i=0;i<n/2;i++){//no. of rows 
        for(int j=0;j<n;j++){//no. of columns
            swap(arr[i][j],arr[n-i-1][j]);
        }
    }

}

void search_x(int arr[R][C],int x){
    int i=0,j=C-1;//top right corner
    while(i<R && j>=0){
        if(arr[i][j]==x){
            cout<<"Found at"<<i<<j<<endl;
            return;
        }else if(arr[i][j]>x) j--;
        else i++;
    }cout<<"Not found"<<endl;
}
int main(){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printsnake(arr);
    return 0;
}
