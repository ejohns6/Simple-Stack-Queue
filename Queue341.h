/*****************************************
* File:    Queue341.h
* Project: CMSC 341 Project 1, Spring 2016
* Author:  Erich Johnson
* Date:    2/24/16
* Section: 03
* E-mail:  ejohns6@gl.umbc.edu
*
*   This file makes a header for queues and
*   implements the methods from List that are virtual
*
*
***********************************************/
#ifndef QUEUE341_H_INCLUDED
#define QUEUE341_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include "List341.h"
#include <stdexcept>




template <typename T>
class Queue341 : public List341<T> {

    public:
        //input:N/A
        //output: a queue object is created
        //Descriptaion: initiate a queue
        Queue341();

        //input:N/A
        //output: N/A
        //Descriptaion: deletes the queue object
        ~Queue341();


        T Front(); //Returns the item at the front of the queue
        T Back(); //Returns the item at the back of the queue
        int Size() const; //Returns the size of a list
        bool Empty() const; //Returns whether a list has data or not
        bool Push(T obj); //Pushes data into the list
        bool Pop(); //Pops data from a list
        bool Clear(); //Clears a list

    private:

        Node<T>* m_tail;
        Node<T>* m_head;
        int m_size;
        bool m_empty;

};

#include "Queue341.cpp"
#endif // QUEUE341_H_INCLUDED
