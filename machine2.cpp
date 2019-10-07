int buildMachine(const vector<string> &words, char lowestChar = 'a', char highestChar = 'z')
{       
     memset(out, 0, sizeof out); //intializing out with 0s
     memset(fail, -1, sizeof fail);	//intializing fail with -1s
     memset(g, -1, sizeof g);	//intializing g with -1s
     int states = 1; // Initially, we just have the 0 state

     for (int i = 0; i < words.size(); i++)
     {               
          const string &keyword = words[i];
          int currentState = 0;
          for (int j = 0; j < keyword.size(); j++)
          {              
	       int c = keyword[j] - lowestChar;
               if (g[currentState][c] == -1)
               {     	
		    // Allocate a new node
            	    g[currentState][c] = states++;
		       
               }
               currentState = g[currentState][c];  
          }
          out[currentState] |= (1 << i); 
	  // There's a match of keywords[i] at node currentState.	
     }
     // State 0 should have an outgoing edge for all characters.
     for (int c = 0; c < MAXCHAR; c++)
     {    		
          if (g[0][c] == -1)
          {    				
               g[0][c] = 0;	
          }	
     }
     //building the failure function
     queue<int> q;	
     for (int c = 0; c <= highestChar - lowestChar; c++)
     {     
	  // Iterate over every possible input. All nodes s of depth 1 have fail[s] = 0
          if (g[0][c] != -1 && g[0][c] != 0)
          {       
               fail[g[0][c]] = 0;
               q.push(g[0][c]);	
          }
     }

     while (q.size())
     {                
	  int state = q.front();
          q.pop();
          for (int c = 0; c <= highestChar - lowestChar; c++)
          {    
               if (g[state][c] != -1)
               {      
		    int failure = fail[state];
		    int failure = fail[state];
                    while (g[failure][c] == -1)
                    {
                         failure = fail[failure];
                    }
                    failure = g[failure][c];
                    fail[g[state][c]] = failure;
                    out[g[state][c]] |= out[failure]; // Merge out values
                    q.push(g[state][c]);
               }
          }
     }
     return states;
}

//dobara dal rhahu saale
