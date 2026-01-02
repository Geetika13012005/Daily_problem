#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int x,y;
    int matrix[5][5];
    
    //for input
    for(int i=0;i<5;i++){          // for rows
        for(int j=0;j<5;j++)  //for columns
        {                     
             cin>>matrix[i][j];
                if (matrix[i][j]==1)
                {
                    x=i+1;
                    y=j+1;  //bcz in matrix indexing start from 0 
                }
            
        }
      
    }
    int moves = abs(x-3)+abs(y-3);
        cout<<moves<<endl;
    

   return 0; 
}