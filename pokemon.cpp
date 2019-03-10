
#include <vector>
#include <fstream>
#include<iostream>

using namespace std;

vector <int> state;
vector <vector <int> > ls; //graph
/*vector <vector <int> > cycles;*/
vector  <int> dimcicl;
vector <int> parent; 
int theNodeInTheCycle;
int l=0,cont=0;

void dfs(int x)
{   
if (state[x]==0) { 
    state[x] = 1;
    for(int j = 0; j < ls[x].size(); j++)
    {  
        if (ls[x][j] >= state.size()) cout << "it's state dim ls xj";
        if(state[ls[x][j]] == 1 && parent[x] != ls[x][j] )
        {   
	    if (parent.size() <= ls[x][j]) cout << "it's parent dim ls xj";
            int firstNodeInTheCycle = theNodeInTheCycle;
            parent[ls[x][j]] = x;
            theNodeInTheCycle = ls[x][j]; //ls[x][j] belongs to the cycle since state[ls[x][j]]==1
            //cycles.resize (l+1);
            //theNodeInTheCycle = x;
            
            
            
            do 
            {   
                cont++;
		theNodeInTheCycle = parent[theNodeInTheCycle]; 
		/*
		if (parent.size() <= theNodeInTheCycle) cout << "it's parent dim tnitc";
                theNodeInTheCycle = parent[theNodeInTheCycle];    
                if (cycles.size() <= l) cout << "it's cycles dim l";       
                cycles[l].push_back(theNodeInTheCycle);*/

            } while (theNodeInTheCycle != firstNodeInTheCycle);
            cout << cont << endl;
	    dimcicl.push_back(cont);
	    cont=0;

            //l++;
        }
        cout<<"state["<<ls[x][j]<<"]="<<state[ls[x][j]]<<endl;
        if(state[ls[x][j]] == 0)
        { 
            parent[ls[x][j]] = x;
            dfs(ls[x][j]);
        } 
    }  cout << endl << x << "x  " << parent[x] << "padre" << endl; 
	/*for (int j=0; j< cycles.size(); j++){
	  cout <<"ciclo  " << j << endl;
	  for (int k=0; k< cycles[j].size(); k++)
		cout  << "    " << cycles[j][k]; 
	}*/
}
}

int gcd(int a,int b)
{
    int t;
    while(a)
    {
        t = a;
        a = b%a;
        b = t;
    }
    return b;
}

int main()
{   
    int n=0; 
    int m=0; 

    string line;
    ifstream myfile ("input.txt");
    if (myfile.is_open())
    {
        myfile>>n;
        //cout<<"nodi"<<n<<endl; //the number of nodes (from 0 to n-1)
        myfile>>m; 
        //cout<<"edge"<<m<<endl; //the number of edges

        state.resize (n*m);
        ls.resize (n*m);
        parent.resize (n*m);

        for (int i = 0; i < m; ++i)
        {
            int a, b;
            myfile>>a;
            //cout<<"a="<<a;
            myfile>>b;
            //cout<<" b="<<b<<endl;
            ls[a].push_back(b);
            ls[b].push_back(a);
        }
        myfile.close();
    }


    for (int i = 0; i<n; ++i)
        if (state[i]==0){
	    cout  << endl << "i  " << i << "  is fine"  << endl;
            dfs(i);
    	}

    //cout<<"The cycle:\n";
    
    ofstream myfile2 ("output.txt");
    if (myfile2.is_open())
    {   
              
    /*for(int i=0;i<l;i++)
        {
        for (int j = 0; j < cycles[i].size (); j++)
            cout<<cycles[i][j]<<" ";

        cout<<"\n";
        myfile2<<cycles[i].size ()<<" ";
        }
    }*/
        int ans;
        //ans=cycles[0].size();
	ans = dimcicl[0];

        for(int i=1;i<l;i++)
        {
            ans = gcd(ans,/*cycles[i].size()*/dimcicl[i]); //calls the gcd()
        }
    
        myfile2<<ans;
        myfile2.close();
    }
    return 0;
}


