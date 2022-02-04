#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;
    int a;
    if (argc > 1) {
        n = atoi(argv[1]);	
    }else if(argc >= 3){
      n = atoi(argv[1]);
      from = atoi(argv[2]);
      a = atoi(argv[3]);
      if(dest == from){
	from = a;
      }else if(a != from){
	dest = a;
      }else if( a != dest){
        from = a;
      }else if(dest != from){
	dest = a;
      }else{
          fprintf(stderr, "Invalid Input, Pls enter a valid input");
          exit(0);
       }
    }
    towers(n, from, dest);
    exit(0);
}

