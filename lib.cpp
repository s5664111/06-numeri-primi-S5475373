
#include "lib.h"


bool primi(int n) {
  int div=1;
  conta=0;
  while(conta<=1 && div<=n/2){
    if(n%div==0){
      conta++;
    }
    if(conta==1){
      return true;
    }
    else{
      return false; 
    }

}
