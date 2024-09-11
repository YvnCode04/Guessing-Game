//
//  main.cpp
//  Guessing-Game
//
//  Created by Yvan Gauthier on 02/09/2024.
//

#include <iostream>
using namespace std;

// Function declaration
void user_input() {
    
    char rep;
    
    // Ask if the user want to play or no
    cout<<"#################################";
    cout<<" GUESSING GAME ";
    cout<<"#################################\n";
    cout<<"\n";
    cout<<"Hello, would you like to play a game y or n : ";
    cin>> rep;
    if (rep == 'y')
    {
        // Test
        cout<<"Yes\n";
    }
    else if (rep == 'Y')
    {
        // Test
        cout<<"Yes\n";
        
    }else if (rep == 'n')
    {
        cout<<"Ok may be later bye !\n";
    }else if (rep == 'N')
    {
        cout<<"Ok may be later bye !\n";
    }

}
/// Level hard
void hard_level() {
    //Code
    
}
/// Level medium
void meduim_level() {
    //Code
}
/// Level easy
void easy_level(){
    // Code
}

int main(int argc, const char * argv[]) {
    // Test
    user_input();
    return 0;
   
}
// This is a program written in C++.
// This is a game that you will play in a console. 
