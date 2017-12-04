#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
    char transition[10]={0},rii[50]={0},rij[50]={0},rjj[50]={0},rji[50]={0},q[2]={0},w[2]={0},e[2]={0},r[2]={0},t[2]={0},y[2]={0},u[2]={0},i[2]={0},o[2]={0},m[2]={0},regexp[100];
int nstates,nfinalstates,initialstate,finalstate,trans;

void two(){
    int nstates=2,c=0;
for ( int x=0;x<=nstates-1;x++)                //transitions corresponding to the states
    {
       for(int j=0;j<=nstates-1;j++)
       {
          cout<<"enter the transition variable from state  "<<x<<"  to state  "<< j<<"\n";
          if(x==0 && j==0)
           { c=0;
               cin>>q;
             for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==q[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }

           }
           else if(x==0 && j==1)
           {
            cin>>w;
            c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==w[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
            }
        else if(x==1 && j==1)
           { c=0;
           cin>>e;
             for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==e[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
           }
        else if(x==1 && j==0)
        {
            cin>>r;
            c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==r[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }
       }
    }
rii[0]=q[0];
rij[0]=w[0];
rji[0]=r[0];
rjj[0]=e[0];


}
void three()
{
    int nstates=3,c=0;
    for ( int x=0;x<=nstates-1;x++)                //transitions corresponding to the states
    {
       for(int j=0;j<=nstates-1;j++)
       {
          cout<<"enter the transition variable from state  "<<x<<"  to state  "<< j<<"\n";
          if(x==0 && j==0)
           { c=0;
               cin>>q;
             for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==q[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }

           }
        else if(x==0 && j==1)
           {
            cin>>w;
            c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==w[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
            }
        else if(x==1 && j==1)
           { c=0;
           cin>>e;
             for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==e[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
           }
        else if(x==1 && j==0)
        {
            cin>>r;
            c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==r[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }
        else if(x==0 && j==2)
           {

            cin>>t;
             c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==t[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }

        else if(x==1 && j==2)
        {
       cin>>y;
        c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==y[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }
        else if(x==2 && j==2)
        {
            cin>>u;
             c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==u[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }
        else if(x==2 && j==1)
        {

         cin>>i;
          c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==i[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }
        else if(x==2 && j==0)
        {
            cin>>o;
             c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==o[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }


        cout<<"\n";


       }
    }
    //initial to initial
rii[0]=q[0];
strcat(rii,"/");
strcat(rii,w);
strcat(rii,e);
strcat(rii,"*");
strcat(rii,r);

//inintial to final
rij[0]=t[0];
strcat(rij,"/");
strcat(rij,w);
strcat(rij,e);
strcat(rij,"*");
strcat(rij,y);

//final to final
rjj[0]=u[0];
strcat(rjj,"/");
strcat(rjj,i);
strcat(rjj,e);
strcat(rjj,"*");
strcat(rjj,y);

//final to initial
rji[0]=o[0];
strcat(rji,"/");
strcat(rji,i);
strcat(rji,e);
strcat(rji,"*");
strcat(rji,r);
}

int main()
{

cout<<"enter number of states : ";
cin>>nstates;

cout<<"enter the number of final states [for now enter nfinal states as 1 ]:";
cin>>nfinalstates;

cout<<"the states are \n";                 //output of states
cout<<"---------------------------------------------------------------- \n";
for(int x=0;x<nstates;x++)
{

    cout<<x<< "\t";
}
cout<<"\n----------------------------------------------------------------";
cout <<"\n";

cout<<"Enter initial state :";         //state recognition
cin>>initialstate;
cout<<"Enter final state :";
cin>>finalstate;

if((initialstate<0 || initialstate>nstates-1)||(finalstate<0 || finalstate>nstates-1))   //program out of scope
{
        cout<<" ERROR:the input states are not in the given states \n";
}

else if((initialstate>=0 && initialstate<=nstates-1)||(finalstate>=0 && finalstate<=nstates-1))   //MAIN PROGRAM
{
    cout<<"number of transitions :";              // maximum 10
    cin>>trans;
    cout<<"enter the transitions used in the automaton one by one \n";
    for (int x=0;x<trans;x++)
    {
        cin>>transition[x];
    }
    cout<<"the transitions used are : \n";

    for (int x=0;x<trans;x++)                 // transitions shown
    {
        cout<<transition[x]<<"\t";
    }
    cout<<"\n";
if(nstates==2)
    two();
else if(nstates==3)
    three();
else
{
    int c=0;
    char s;
    for ( int x=0;x<=nstates-1;x++)                //transitions corresponding to the states
    {
       for(int j=0;j<=nstates-1;j++)
       {
          cout<<"enter the transition variable from state  "<<x<<"  to state  "<< j<<"\n";
          if(x==0 && j==0)
           { c=0;
               cin>>q;
             for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==q[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }

           }
        else if(x==0 && j==1)
           {
            cin>>w;
            c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==w[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
            }
        else if(x==1 && j==1)
           { c=0;
           cin>>e;
             for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==e[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
           }
        else if(x==1 && j==0)
        {
            cin>>r;
            c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==r[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }
        else if(x==0 && j==2)
           {

            cin>>t;
             c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==t[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }

        else if(x==1 && j==2)
        {
       cin>>y;
        c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==y[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }
        else if(x==2 && j==2)
        {
            cin>>u;
             c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==u[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }
        else if(x==2 && j==1)
        {

         cin>>i;
          c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==i[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }
        else if(x==2 && j==0)
        {
            cin>>o;
             c=0;
              for (int x=0;x<trans;x++)                 // transitions shown
            {
            if (transition[x]==o[0])
                c+=1;

            }
            if (c==0)
            {
            cout<<"ERROR : the  transition given for the following inter states is not matched to the given transitions \n ";
            exit(0);
            }
        }
        else
        {
        cin>>s;
        }


        cout<<"\n";


       }
    }
    //initial to initial
rii[0]=q[0];
strcat(rii,"/");
strcat(rii,w);
strcat(rii,e);
strcat(rii,"*");
strcat(rii,r);

//inintial to final
rij[0]=t[0];
strcat(rij,"/");
strcat(rij,w);
strcat(rij,e);
strcat(rij,"*");
strcat(rij,y);

//final to final
rjj[0]=u[0];
strcat(rjj,"/");
strcat(rjj,i);
strcat(rjj,e);
strcat(rjj,"*");
strcat(rjj,y);

//final to initial
rji[0]=o[0];
strcat(rji,"/");
strcat(rji,i);
strcat(rji,e);
strcat(rji,"*");
strcat(rji,r);
}



regexp[0]=m[0];
strcat(regexp,"(");
strcat(regexp,rii);
strcat(regexp,")");
strcat(regexp,"*");
strcat(regexp,rij);
strcat(regexp,"(");
strcat(regexp,"(");
strcat(regexp,rjj);
strcat(regexp,")");
strcat(regexp,"*");
strcat(regexp,"/");
strcat(regexp,rji);
strcat(regexp,"(");
strcat(regexp,rii);
strcat(regexp,")");
strcat(regexp,"*");
strcat(regexp,rij);
strcat(regexp,")");
strcat(regexp,"*");
cout<<"\n***************************************************************************";
cout<<"\nRegular expression for the given automaton : "<<regexp;
cout<<"\n****************************************************************************";
}

// do inside this only

return 0;

}
