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
#ifndef NODE341_H_INCLUDED
#define NODE341_H_INCLUDED

template <typename T>
class Node {

    public:
        //input:N/A
        //output:Country of with the highest Literacy Rate
        //Descriptaion: gets the country highest Literacy Rate
        Node();

        //input:N/A
        //output:Country of with the highest Literacy Rate
        //Descriptaion: gets the country highest Literacy Rate
        Node(T data);

        T m_data;
        Node *m_next;
        Node *m_previous;
};


#include "Node341.cpp"
#endif // NODE341_H_INCLUDED
