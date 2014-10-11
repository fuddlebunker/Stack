//
//  Member-Function.cpp
//
//  Created by Fuddlebunker on 10/9/14.
//  Copyright (c) 2014 Benjamin Harrison. All rights reserved.
//
#include "StdAfx.h"
#include <iostream>

using namespace std;

//  ============
//  Constructors
//  ============

    Stack::Stack( void ){
        cout << "Constructor Stack( void ) invoked." << endl;
        Purge();
        
    }// Constructor Stack
//  =====================

//  =================
//  Destructor ~Stack
//  =================
    Stack::~Stack( void ){
        cout << "Destructor ~Stack( void ) invoked." << endl;
        
    }// Destructor ~Stack
//  =====================

//  ================
//  Member-Functions
//  ================

//  =======================
//  Member-Function Purge()
//  =======================
    void Stack::Purge( ){
        for (int ii = 0; ii < MAX_STACK_SIZE; ii++) {
            elements[ii] = 0;
        }// for
        
        top = 0;
        
    }// Member-Function Purge()
//  ===========================

//  ============================
//  Member-Function Initialize()
//  ============================
    void Stack::Initialize( ){
        top =0;
        
    }// Member-Function Initialize()
//  ================================

//  =====================
//  Member-Function Pop()
//  ====================================
    void Stack::Pop( int& poppedValue ){
        top--;
        poppedValue = elements[top];
        
    }// Member-Function Pop()
//  =========================

//  =======================
//  Member-Function Print()
//  =======================
    void Stack::Print( ){
        cout << "Stack Top" << endl;
        
        if( Empty() )
            cout << "The stack is empty." << endl;
        else{
            for ( int ii= top -1; ii >=0; ii-- ){
                cout << "elements[" << ii << "] = "
                     << elements[ii] << endl;
            }// for
        }// else
        
        cout << "Stack Bottom" << endl << endl;
    
    }// Member-Function Print()
//  ===========================

//  ======================
//  Member-Function Push()
//  ====================================
    void Stack::Push( int pushedValue ){
        elements[top] = pushedValue;
        top++;
        
    }// Member-Function Push()
//  ==========================

//  =======================
//  Member-Function Empty()
//  =======================
    bool Stack::Empty( ){
        return (top == 0);
        
    }// Member-Function Empty()
//  ===========================

//  ======================
//  Member-Function Full()
//  ======================
    bool Stack::Full( ){
        return (top == MAX_STACK_SIZE);
        
    }// Member-Function Full()
//  ==========================

//  ====================
//  End Member-Functions
//  ====================





















