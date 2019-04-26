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
#ifndef _QUEUE341_CPP_
#define _QUEUE341_CPP_

#include <iostream>
#include <stdlib.h>
#include <stdexcept>

#include "Queue341.h"
#include "Node341.h"


//initalizes the queue object
template <typename T>
Queue341<T>::Queue341(){
    m_size = 0;
    m_tail = NULL;
    m_head = NULL;
}

//decunstucts the queue
template <typename T>
Queue341<T>::~Queue341(){
    Clear();

    delete(m_tail);
    delete(m_head);
}

//gets the size of the linked list
template <typename T>
int Queue341<T>::Size() const{
    return(m_size);
}

//checks to see if the linked list is empty
template <typename T>
bool Queue341<T>::Empty() const{
    if(m_head == NULL and m_tail == NULL){
        return(true);
    }else{
        return(false);
    }
}

//inserts a node with info in the front of the linked list
template <typename T>
bool Queue341<T>::Push(T obj){
    Node<T>* temp = new Node<T>(obj);//checks to see if there is already a node
    if(m_head == NULL){
        m_tail = temp;
        m_head = temp;
    }else{//makes a doubly linked list where there is node dumby nodes
        temp -> m_next = m_head;
        m_head -> m_previous = temp;
        m_head = temp;
    }
    m_size++;//increases size
    return(true);
}

//gets the front object of the linked list
template <typename T>
T Queue341<T>::Front(){
    if(m_head ==  NULL){//checks to see if the list is empty
        throw Exceptions341("The list is empty");
    }
    return(m_head->m_data);
}

//gets the end object of the list
template <typename T>
T Queue341<T>::Back(){
    if(m_tail ==  NULL){//checks to see if the list is empty
        throw Exceptions341("The list is empty");
    }
    return(m_tail->m_data);
}

//deletes the last object of the linked list
template <typename T>
bool Queue341<T>::Pop(){//if there is only one node the node is deleted and m_head and m_tail are set to NULL
    if(m_head == NULL and m_tail == NULL){
       return(false);
    }
    if(m_head == m_tail){
        delete(m_tail);
        m_head = NULL;
        m_tail = NULL;
    }else{//delets the nodes from the back and resets the arrow
        Node<T>* rmv = m_tail;
        Node<T>* previous = rmv -> m_previous;
        previous -> m_next = NULL;
        m_tail = previous;

        delete(rmv);
    }
    m_size--;//decreases the size
    return(true);
}

//deletes all the nodes in the linked list and sets the varibles as if it was just initiated
template <typename T>
bool Queue341<T>::Clear(){
    if(m_tail == NULL){//checks to see if the list is empty
        return(false);
   }
   while(!Empty()){//delets the nodes while the list is not empty
        Pop();
   }



   m_head = NULL;
    return(true);
}


#endif // _QUEUE341_CPP
