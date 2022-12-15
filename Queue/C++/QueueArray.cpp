#include <iostream>
#include "QueueArray.h"

using namespace std;

template <class T>
QueueArray<T>::QueueArray()
{
    arr = new T[10];
    this->size = 10;
    this->length = 0;
    this->front = -1;
    this->back = -1;
}

template <class T>
QueueArray<T>::QueueArray(int size){
    arr = new T[size];
    this->size =size;
    this->length = 0;
    this->front = -1;
    this->back = -1;
}

template <class T>
void QueueArray<T>::enqueue(T value){
    if(length >= size){
        cout << "Queue Overflow" << endl;
        return;
    }
    else if(front < 0){
        arr[++front] = value;
        back++;
    }
    else if(front >= size-1){
        front = -1;
        arr[++front] = value;
    }
    else{
        arr[++back] = value;
    }
    length++;
}

template <class T>
void QueueArray<T>::dequeue(){
    if(front > back || length <= 0){
        cout << "Queue Underflow" << endl;
        return;
    }
    front++;
    length--;
}

template <class T>
void QueueArray<T>::print(){
    if(front == back || length <= 0){
        cout << "Queue is empty" << endl;
        return;
    }
    for(int i=front; i<length; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template <class T>
T QueueArray<T>::getFront(){
    if(length <= 0){
        cout << "Queue is empty" << endl;
        return NULL;
    }
    return arr[front];
}

template <class T>
T QueueArray<T>::getBack(){
    if(length <= 0){
        cout << "Queue is empty" << endl;
        return NULL;
    }
    return arr[back];
}

template <class T>
int QueueArray<T>::getLength(){
    return length;
}

template <class T>
int QueueArray<T>::getSize(){
    return size;
}
