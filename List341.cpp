/*****************************************
** File:    List341.cpp
** Project: CMSC 341 Project 1, Fall 2015
** Author:  Erich Johnson
** Date:    2/24/16
** E-mail:  ejohns6@gl.umbc.edu
**
**   This file makes the methods of LinkingList and makes methods
**   so that it will be able to manuplate the files
**   with efficency
**
***********************************************/

#ifndef _LIST341_CPP_
#define _LIST341_CPP_


#include <iostream>
#include <stdlib.h>
#include "Node341.h"
#include "List341.h"
#include <stdexcept>
#include "MyExceptions.h"


using namespace std;

template <typename T>
List341<T>::List341(){//initializes m_head
    m_head = NULL;
    m_tail = NULL;
    m_size = 0;
}

template <typename T>
List341<T>::~List341(){//decostructs the linked list



    Node<T>* current;
    current = m_head;
    while (current != NULL) {//Goes through each node and deletes it separately
        Node<T>* next = current->m_next;
        delete current;
        current = next;

    }

}




#endif
