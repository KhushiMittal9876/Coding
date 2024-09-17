#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    int choice,in_front,in_back;
        cout<<"                 *** Welcome to Deque data structure!! ***"<<endl<<endl;
        cout<<"1.  Press key 1 to insert element in deque in front."<<endl;
        cout<<"2.  Press key 2 to insert element in deque in back."<<endl;
        cout<<"3.  Press key 3 to delete element in deque from front."<<endl;
        cout<<"4.  Press key 4 to delete element in deque from back."<<endl;
        cout<<"5.  Press key 5 to display size of deque."<<endl;
        cout<<"6.  Press key 6 to display max size of deque."<<endl;
        cout<<"7.  Press key 7 to display all elements of deque."<<endl;
        cout<<"8.  To take you out of loop."<<endl<<endl<<endl;
    do{//do while loop is used becoz I want these switch statement to execute again and again. 
        cin>>choice;
        switch(choice){
        case 1:
        {
            cout<<"You pressed 1."<<endl;
            cout<<"Type the element to be inserted in front of deque : "<<endl;
            cin>>in_front;
            d.push_front(in_front);
            cout<<"Enter your Next choice: "<<endl;
            break;
        }
        case 2:
        {
            cout<<"You pressed 2."<<endl;
            cout<<"Type the element to be inserted in back of deque : "<<endl;
            cin>>in_back;
            d.push_back(in_back);
            cout<<"Enter your Next choice: "<<endl;
            break;
        }
        case 3:
        {
            cout<<"You pressed 3."<<endl;
            cout<<"Successfully deleted the element from front of deque : "<<endl;
            d.pop_front();
            cout<<"Enter your Next choice: "<<endl;
            break;
        }
        case 4:
        {
            cout<<"You pressed 4."<<endl;
            cout<<"Successfully deleted the element from back of deque : "<<endl;
            d.pop_back();
            cout<<"Enter your Next choice: "<<endl;
            break;
        }
        case 5:
        {
            cout<<"You pressed 5."<<endl;
            cout<<"Size of deque is : "<<d.size()<<endl;
            cout<<"Enter your Next choice: "<<endl;
            break;
        }
        case 6:
        {
            cout<<"You pressed 6."<<endl;
            cout<<"Maximum size of deque is : "<<d.max_size()<<endl;
            cout<<"Enter your Next choice: "<<endl;
            break;
        }
        case 7:
        {
            cout<<"You pressed 7."<<endl;
            cout<<"Elements of deque are : ";
            for(auto x:d){
                 cout<<x<<" ";
            }cout<<endl;
            cout<<"Enter your Next choice: "<<endl;
            break;
        }case 8:
        {
            cout<<"You pressed 8."<<endl;
            cout<<"Taking you out of loop........."<<endl;
            cout<<"* _ *    Bye - Bye    * _ *";
            break;
        }
        default:
         cout<<"Please enter valid input........."<<endl;
         cout<<"Enter your Next choice: "<<endl;
         break;
        }
    }
    while(choice!=8);
    
    return 0;
}