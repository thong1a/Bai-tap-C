/*
* File: linkedlist.h
* Author: Nguyen Minh Thong
* Date: 28/03/2023
* Description: This is a libary for using linkedlist in C
*/
#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
/**
 *  Structure containing the information of a node
 */
typedef struct NODE
{
    uint8_t data; /**< data of node */
    struct NODE *next; /**< adress of next node  */   
}node;
/*
* Function: createnewnode
* Description: This function create a newnode
* Input:
*   *CurrentNode - a pointer to back address of newnode up
*   data - an  8 bit unsigned interger value 
* Output:
*    no return
*/
//void createnewnode()
node* createnewnode( uint8_t data);
/*
* Function: pushback
* Description: This function create a newnode and transmit data to newnode
* Input:
*   *CurrentNode - pointer to the address of frist Node
*   data - an  8 bit unsigned interger value
* Output:
*   no return 
*/
void pushback(node* CurrentNode, uint8_t data);
/*
* Function: assign
* Description: This function change the value of a node whose order is index
* Input:
*   *CurrentNode - pointer to the address of frist Node
*   data - an  8 bit unsigned interger value
*   index - an  8 bit unsigned interger value is location of changing node
* Output:
*   no return 
*/
void assign(node* CurrentNode,uint8_t data, uint8_t index);
/*
* Function: earse
* Description: This function remove the node with index is location of this node
* Input:
*   *CurrentNode - pointer to the address of frist Node
*   data - an  8 bit unsigned interger value
*   index - an  8 bit unsigned interger value is location of removing node
* Output:
*   no return 
*/
void earse(node* CurrentNode,uint8_t index);
void print(node* CurrentNode);
void popback(node *CurrentNode); // xoa phan tu cuoi
void clear(node* CurrentNode); // xoa tat ca cac node
void getdata(node* CurrentNode, uint8_t index); // lay gia tri cua nodegbcvh 
#endif
