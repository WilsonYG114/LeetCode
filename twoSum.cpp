#include<bits/stdc++.h>
using namespace std;
int main() {
    int target =6;
    vector<int> num = {3,2,4};
    int index1= 0; int index2=0;
    for(int i=0; i<num.size(); i++) 
    {

        for (int j = 0; j < num.size(); j++)
        {
            if(i !=j ) 
            {
             if(num[i] + num [j] == target) 
             {
                 index1 = i;
                 index2 = j;
                 break;
             }
            }

        }
        
    }
    cout<<index2<<index1;

}