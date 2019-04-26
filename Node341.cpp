/*****************************************
* File:    Node341.cpp
* Project: CMSC 341 Project 1, Spring 2016
* Author:  Erich Johnson
* Date:    2/24/16
* Section: 03
* E-mail:  ejohns6@gl.umbc.edu
*
*   This file creates the node methods so data can be made
*   and the list can be manepulated
*
*
***********************************************/
#ifndef _NODE341_CPP_
#define _NODE341_CPP_

#include <iostream>
#include <stdlib.h>
#include "Node341.h"

using namespace std;

template <typename T>
Node<T>::Node(){//Make m_next into a dummy
    m_next = NULL;
    m_previous = NULL;
    m_data = NULL;
}

template <typename T>
Node<T>::Node(T data){//Sets a Node that initializing the coefficient and degrre to the node
    m_data = data;
    m_next = NULL;
    m_previous = NULL;
}

#endif
