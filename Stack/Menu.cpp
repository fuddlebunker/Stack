

#include "StdAFx.h"
#include <string>
#include <iostream>

using namespace std;

//  ============
//  Constructors
//  ============

//      ===================
//      Default Constructor
//      ===================
        Menu:: Menu( void ){
            userMenuSelection = Quit;
    
        }// Constructor Menu
//      ====================

//  ================
//  End Constructors
//  ================

//  ==========
//  Destructor
//  =====================
    Menu:: ~Menu( void ){
        cout << "Boom! Blown up by the Destructor!" << endl;
    }// Destructor ~Menu
//  =====================

//  ==============
//  End Destructor
//  ==============

//  ================
//  Member-Functions
//  ================

//      ==============================
//      Accessor Member-Function Get()
//      ==============================
        MenuChoices Menu::Get(){
            return userMenuSelection;
            
        }// Accessor Method Get
//      =======================

//      =============================
//      Mutator Member-Function Set()
//      =============================
        void Menu::Set(MenuChoices newValue ){
            userMenuSelection = newValue;
        }// Mutator Method Set
//      ======================

//      ========================
//      Member-Function Banner()
//      ========================
        void Menu::Banner( ){
    
            cout << "===============================" << endl;
            cout << " Welcome to the Stack Project  " << endl;
            cout << " This program will utilize the " << endl;
            cout << "  the stack class to print,    " << endl;
            cout << " reverse print, push, pop      " << endl;
            cout << "          and roll.            " << endl;
            cout << "===============================" << endl;
            
        }// Member-Function Banner
//      ==========================


//      =========================
//      Member-Function Display()
//      =========================
        void Menu::Display(){
            cout << "1: Quit              4: Pop" << endl;
            cout << "2: PurgeStack        5: Push" << endl;
            cout << "3: Initialize Stack  6: Print Stack" << endl;
        
        }// Member-Function Display
//      ===========================

//      =========================
//      Member-Function QueryUser
//      =========================
        void Menu::QueryUser( ){
            int selection;
            
            cout << endl;
            cout << "   Enter Menu Selection: ";
            cin >> selection;
            
            switch (selection) {
                case 1:
                    userMenuSelection = Quit;
                    break;
                case 2:
                    userMenuSelection = PurgeStack;
                    break;
                case 3:
                    userMenuSelection = InitializeStack;
                    break;
                case 4:
                    userMenuSelection = Pop;
                    break;
                case 5:
                    userMenuSelection = Push;
                    break;
                case 6:
                    userMenuSelection = PrintStack;
                    break;
                default: userMenuSelection = Quit;
                    break;
            }// switch
//          ==========
            
            cout << endl;
            
        }// Method QueryUser()
//      ======================

//      =================
//      Method Continue()
//      =================
        bool Menu::Continue( ){
            
            return userMenuSelection !=Quit;
        }// Method Continue
//      ===================

//      ================================
//      Member-Function ProcessCommand()
//      ================================
        void Menu::ProcessCommand( Stack& stack ){

//          =========
//          Variables
//          =========
            int poppedValue;
            int integerValue;
            
            if (userMenuSelection !=Quit ) {

                switch ( userMenuSelection ) {

                    case PurgeStack:
                        stack.Purge();
                        break;
                        
                    case InitializeStack:
                        stack.Initialize();
                        break;
                        
                    case Pop:
                        if (stack.Empty() ) {
                            cout << "The stack is empty and cannot be popped. " << endl;
                            cout << endl;
                        }// if
                        else {
                            stack.Pop ( poppedValue );
                            cout << "Popped value = " << poppedValue << endl;
                        }// else
                        
                        break;
                    
                    case Push:
                        if (stack.Full() ) {
                            cout << "The stack is full and a value cannont be pushed." << endl;
                            cout << endl;
                        }// if
                        else {
                            cout << "Enter a value to push onto the stack. ";
                            cin >> integerValue;
                            stack.Push( integerValue );
                        }// else
                        
                        break;
                        
                    case PrintStack:
                        stack.Print();
                        
                        break;
                    
                    default:
                        cout << "Invalid selection" << endl;
                        stack.Print();
                        break;
                }// switch
                
                cout << endl;
                
            }// if
            
        }// Method ProcessCommand()
//      ===========================

//  ====================
//  End Member-Functions
//  ====================




