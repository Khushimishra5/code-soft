#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    string name;
    char input;
    int inputuser;
    int score;

    cout<<"Enter your Name          ";
   cin>>name;
    cout<<endl;

    do{
        srand(0);
        int variable=rand()%5+1;
        cout<<"Enter any number in between range 1 to 5     ";
        cin>>inputuser;
        cout<<endl;
        if(inputuser==variable)
        {
            cout<<"congratulation ! you guessed a correct number well done!"<<endl;
            score++;

        }
        else{
            cout<<"sorry!,you guessed wrong number try again"<<endl;

        }
        cout<<"would you like to try again Y/N         ";
        cin>>input;
        cout<<endl;

    }while (input!='N');
    cout<<"your score is         "<<score<<endl; 
    cout<<"GAME END       "<<endl;
    
    
}