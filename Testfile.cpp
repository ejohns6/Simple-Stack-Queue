/**************************************************************
 * File:    Testfile.cpp
 * Project: CMSC 341 - Project 1
 * Author : Erich Johnson
 * Date   : 2/24/16
 * Section:
 * E-mail:  ejohns6@umbc.edu
 *
 * Sample driver file for project 1.
 *
 *************************************************************/
#include "List341.h"
#include "Stack341.h"
#include "Queue341.h"


int main(int argc, char *argv[]) {

    Stack341<string> *myStack = new Stack341<string>();
    Queue341<string> myQueue;


    try {
        for (int i = 0; i < 10; ++i){//test push
            myStack->Push("abba");
            myQueue.Push("abba");
        }
    cout << "Queue size: " << myQueue.Size() << endl;//test size
    cout << "Queue cleared = " << myQueue.Clear() << endl;//test clear

    }
    catch (Exceptions341 &E){
        cout << "Exception: " << E.GetMessage() << endl;
    }


    delete myStack;

    try{
        myQueue.Front();//test front when nothing there
    }
    catch(Exceptions341 &E){
        cout << "Exception: " << E.GetMessage() << endl;
    }

    try{
        myQueue.Back();//test back when nothing there
    }
    catch(Exceptions341 &E){
        cout << "Exception: " << E.GetMessage() << endl;
    }

    Queue341<int> myQueueInt;

    for (int i = 0; i < 10; ++i){
            myQueueInt.Push(i);
    }

    cout << "BackData: " << myQueueInt.Back() << " FrontData: " << myQueueInt.Front() << " Size: " << myQueueInt.Size() << endl;//tests back, front when data is there

    Stack341<int> myStackInt;

    for (int i = 0; i < 10; ++i){
            myStackInt.Push(i);
    }

    cout << "TopData: " <<  myStackInt.Top() << "Size: " << myStackInt.Size() <<  endl;//test top

    myStackInt.Clear();

    cout << "Size after clear: " << myStackInt.Size() << endl;//test size after deletion


    cout << "Test clear when empty which also checks empty: " << myStackInt.Clear() << endl;//test clear
    cout << "Test pop when there is nothing to pop stack:"  << myStackInt.Pop() << " Test pop when there is nothing to pop queue:"  << myQueue.Pop() << endl;//does as says
}
