#include<iostream>
#include<vector>

using namespace std;
void display (vector <int> v2)
{
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<"\t";
        
    }
};

int main()
{
    int i;
    vector<int>v1;
    cout<<"size of v before elements"<<v1.size()<<endl;
    cout<<"enter elements :"<<endl;
    int x;
    for(i=0;i<10;i++)
    { 
        cin >>x;
        v1.push_back(x);
    }
    cout<<"size of vector after elements:"<<v1.size()<<endl;
    display(v1);
    
    return 0;


}
    
    
