/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include<ctime>
int main()
{
    int randomnumber=0;
    int guess=0;
    int attempts=0;
    srand(time(0));
    randomnumber = rand()%100-1;
do{
    std::cout<<"\n Guess a number become 1 to 100:";
    std::cin>>guess;
    attempts++;
    if(guess > randomnumber){
        std::cout<<"too high"<<"\n";}
    else if(guess<randomnumber){
        std::cout<<"to low"<<"\n";
    }
    else{
        std::cout<<"congratulations"<<"\n";
    }
}while(guess!=randomnumber);
    return 0;
}

