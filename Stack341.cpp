/*****************************************
* File:    Stack341.h
* Project: CMSC 341 Project 1, Spring 2016
* Author:  Erich Johnson
* Date:    2/24/16
* Section: 03
* E-mail:  ejohns6@gl.umbc.edu
*
*   This file inharets the class list341 and simulates the
*   stack class without using any stp
*
*
***********************************************/

#ifndef _STACK341_CPP_
#define _STACK341_CPP_


#include <iostream>
#include <stdlib.h>
#include <stdexcept>

#include "Stack341.h"
#include "Node341.h"

//initaties the stack
template <typename T>
Stack341<T>::Stack341(){
    m_head = NULL;
    m_tail = NULL;
    m_size = 0;
}

//deconstrucs the stack
template <typename T>
Stack341<T>::~Stack341(){
    Clear();

   delete m_head;
   delete m_tail;

}

//returns the top object
template <typename T>
T Stack341<T>::Top(){
    if(m_head == NULL){//makes sure the list is not empty
        throw Exceptions341("The list is empty");
    }

    return(m_head->m_data);
}

//returns the size of the linked list
template <typename T>
int Stack341<T>::Size() const{
    return(m_size);
}

//checks to see if the linked list is empty
template <typename T>
bool Stack341<T>::Empty() const{
    if(m_head == NULL and m_tail == NULL){
        return(true);
    }else{
        return(false);
    }
}

//pushes the data into the front of the linked list
template <typename T>
bool Stack341<T>::Push(T obj){
    Node<T>* temp = new Node<T>(obj);
    if(m_head == NULL){//checks to see if there is already a node
        m_head = temp;
        m_tail = temp;
    }else{
        temp -> m_next = m_head;//makes a doubly linked list where there is node dumby nodes
        m_head->m_previous = temp;
        m_head = temp;
    }

    m_size++;//increases size
    return(true);
}

//deletes the front node of the linked list
template <typename T>
bool Stack341<T>::Pop(){
    if(m_head != NULL and m_tail != NULL){
        if(m_head == m_tail){//if there is only one node the node is delete and m_head and m_tail to null
            delete(m_tail);
            m_head = NULL;
            m_tail = NULL;
        }else{//deletes the nodes from the front and resets the arrow
            Node<T>* rmv = m_head;
            Node<T>* next = rmv -> m_next;
            next -> m_previous = NULL;
            m_head = next;

            delete(rmv);
        }
    }else{
        return(false);
    }
    m_size--;//decrease the size
    return(true);
}

//deletes all the nodes in the linked list and sets the varibles as if it was just initiated
template <typename T>
bool Stack341<T>::Clear(){
    if(m_head == NULL){
        return(false);//checks to see of the list is empty
   }
   while(!Empty()){//delets the nodes while the list is not empty
        Pop();
   }
    return(true);
}

#endif
