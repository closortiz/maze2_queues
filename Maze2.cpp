#include "Maze2.h"
#include <iostream>
#include <cassert>

using namespace std;

void Maze2::find_exit()
{
   // Use the BFS method to fill the array of predecessors
  Position nbr, current;
  direction d;
  
  M[start.row][start.col] = VISITED;
  Pred[start.row][start.col] = VISITED
  Q.push(start);
  
  while(!Q.empty())
  {
	  current = Q.back();
	  
	  for(d = DOWN, nbr = current.Neighbor(d); d != NONE; d = next_direction(d), nbr = current.Neighbor(d))
	  {
       cout << "executing for" << endl;
       cout << nbr << endl;
       
		  if(M[nbr.row][nbr.col] == OPEN)
		  {
        cout << "if " << endl;
			   M[nbr.row][nbr.col] = VISITED;
         Q.push(nbr);
         pred[current.row][current.col] = M[current.row][current.col];                       
         if(nbr == exitpos)
         { 
           return;
         }
         
		  }         
	  }
	  
  }

  
}





