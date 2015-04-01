


#pragma once
#include <string>


using namespace std;

class Menu {
    
public:
    
//  ===========
//  Constructor
    Menu( void );
//  =============
    
//  ==========
//  Destructor
    ~Menu(void);
//  ============
    
//  ==========================
//  Member-Function Prototypes
//  ===========================================
    MenuChoices Get( );             // Accessor
    void        Set( MenuChoices ); // Mutator
    void        Banner( );
    void        Display( );
    void        QueryUser( );
    bool        Continue( );
    void        ProcessCommand( Stack& );
//  =====================================
    
private:
    
//  ================
//  Member-Variables
//  ==============================
    MenuChoices userMenuSelection;
//  ==============================
    
    
};// Class Menu
//  ===========