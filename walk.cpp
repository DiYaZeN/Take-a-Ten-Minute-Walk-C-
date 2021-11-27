#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isValidWalk(std::vector<char> walk) {
  int countx=0;
  int county=0;
  int x=walk.size();
  
  if(x==10){
  
      for(int i=0;i<x;i++){
        if(walk[i]=='n'){
          county++;
        }
        else if(walk[i]=='s'){
          county--;
        }
        else if(walk[i]=='w'){
          countx++;
        }
        else if(walk[i]=='e'){
          countx--;
        }
        else{
          countx=0;
          county=0;
        }
     
   
    
        }

    
        }

    
        return(walk.size()==10 && countx==0 && county==0);

  }
