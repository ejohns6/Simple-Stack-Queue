/*****************************************
* File:    List341.cpp
* Project: CMSC 341 Project 1, Spring 2016
* Author:  Erich Johnson
* Date:    2/24/16
* Section: 03
* E-mail:  ejohns6@gl.umbc.edu
*
*   This file makes a header for LinkingList and is virtual
*   so that Queue and Stack can create methods that are limiting
*
*
***********************************************/
#ifndef LIST341_H_INCLUDED
#define LIST341_H_INCLUDED

#include <stdexcept>
#include <iostream>
#include <stdlib.h>
#include "Node341.h"



template <typename T>
class List341 {

    public:

        //input:N/A
        //output:Country of with the highest Literacy Rate
        //Descriptaion: gets the country highest Literacy Rate
        List341();

    protected:

        //input:N/A
        //output:Country of with the highest Literacy Rate
        //Descriptaion: gets the country highest Literacy Rate
        virtual ~List341();


        virtual int Size() const = 0; //Returns the size of a list
        virtual bool Empty() const = 0; //Returns whether a list has data or not
        virtual bool Push(T obj) = 0; //Pushes data into the list
        virtual bool Pop() = 0; //Pops data from a list
        virtual bool Clear() = 0; //Clears a list

    private:

        unsigned int m_size;
        Node<T>* m_head;
        Node<T>* m_tail;
        Node<T>* m_cache;
        bool m_Empty;



};

#include "List341.cpp"
#endif // LIST341_H_INCLUDED
