//
//  Stack.h
//  Stack
//
//  Created by Fuddlebunker on 10/10/14.
//  Copyright (c) 2014 Benjamin Harrison. All rights reserved.
//

#ifndef Stack_Stack_h
#define Stack_Stack_h

#pragma once
#endif

class Stack {
    
//  ==========
//  Constants:
//  ======================================
    const static int MAX_STACK_SIZE = 100;
//  ======================================
    
public:
    
//  ============
//  Constructors
//  ============
    Stack(void);
//  ============

    
//  ==========
//  Destructor
//  =============
    ~Stack(void);
//  =============
    
//  ================
//  Member-Functions
//  ================
    void    Initialize( );
    void    Min( int& );
    void    Max( int& );
    void    Pop( int& );
    void    Print( );
    void    Purge( );
    void    Push( int );
    void    ReversePrint( );
    void    Roll( );
    bool    Empty( );
    bool    Full( );
    void    Sum( int& );
//  ====================
    
private:
    
//  =================
//  Member variables:
//  =================
    int top;
    int elements[MAX_STACK_SIZE];
//  =============================
};// class Stack