// Program:           Stack Class Project
// Software Engineer: Benjamin E Harrison
// Date:              10/10/14
//
// Purpose:
//
//
//
//
//
#include "StdAfx.h"
#include <iostream>

using namespace std;

// Main ====
int main() {
    
    //  ================================
    //  Variable and Object Declarations
    //  ================================
    Menu menu;
    Stack intStack;
    
    menu.Banner();
    
    do{
        menu.Display();
        menu.QueryUser();
        menu.ProcessCommand( intStack);
        
    } while (menu.Continue() ); // do ... while loop
    //  ================================================
    
    return 0;
}// Function Main ()
//  ================


