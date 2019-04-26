/*****************************************
* File:    Stack341.h
* Project: CMSC 341 Project 1, Spring 2016
* Author:  Erich Johnson
* Date:    2/24/16
* Section: 03
* E-mail:  ejohns6@gl.umbc.edu
*
*   This file makes a header for stacks and
*   implements the methods from List that are virtual
*
*
***********************************************/
#ifndef STACK341_H_INCLUDED
#define STACK341_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include "List341.h"
#include "Node341.h"
#include <stdexcept>


template <typename T>
class Stack341 : public List341<T> {

    public:
        //input:N/A
        //output: a stack object is created
        //Descriptaion: initiate a stack
        Stack341();

        //input:N/A
        //output: N/A
        //Descriptaion: deletes the stack object
        ~Stack341();

        T Top(); //Returns the top item on the stack
        int Size() const; //Returns the size of a list
        bool Empty() const; //Returns whether a list has data or not
        bool Push(T obj); //Pushes data into the list
        bool Pop(); //Pops data from a list
        bool Clear(); //Clears a list

    private:

        //Node<T>* m_top;
        Node<T>* m_head;
        Node<T>* m_tail;
        int m_size;
        bool m_empty;

};

#include "Stack341.cpp"
#endif // STACK341_H_INCLUDED
