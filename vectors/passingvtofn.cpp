 #include<iostream>
 #include<vector>
 using namespace std;

void change(vector<int>& a){  // using & vectors are passed
    a[0] = 1000;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
}

 int main(){

    vector<int> v;
    v.push_back(4);
    v.push_back(43);
    v.push_back(99) ;
    v.push_back(0);
    v.push_back(99);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    


 }