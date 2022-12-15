#include <iostream>
#include "QueueList.h"

using namespace std;

template <class T>
Node<T>::Node(){}

template <class T>
Node<T>::Node(T value){
    this->data = value;
    this->next = NULL;
}

template <class T>
QueueList<T>::QueueList()
{
    this->front = this->back = NULL;
    this->length = 0;
}

template <class T>
void QueueList<T>::enqueue(T value){
    Node<T> *newNode = new Node<T>(value);
    if(front == NULL){
        front = back = newNode;
    }
    else{
        back->next = newNode;
        back = newNode;
    }
    length++;
}

template <class T>
void QueueList<T>::dequeue(){
    if(front == NULL){
        cout << "Queue Underflow" << endl;
        return;
    }
    else if(front == back){
        front = back = NULL;
    }
    else{
        Node<T> *temp = front;
        front = front->next;
        delete(temp);
    }
    length--;
}

template <class T>
void QueueList<T>::print(){
    if(front == NULL){
        cout << "Queue is empty" << endl;
        return;
    }
    Node<T> *current = front;
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

template <class T>
T QueueList<T>::getFront(){
    if(front == NULL){
        cout << "Queue is empty" << endl;
        return NULL;
    }
    return front->data;
}

template <class T>
T QueueList<T>::getBack(){
    if(back == NULL){
        cout << "Queue is empty" << endl;
        return NULL;
    }
    return back->data;
}

template <class T>
int QueueList<T>::getLength(){
    return length;
}
