#ifndef QUEUELIST_H
#define QUEUELIST_H

template <class T>
class Node{
public:
    T data;
    Node<T> *next;
    Node<T>();
    Node<T>(T value);
};

template <class T>
class QueueList
{
private:
    Node<T> *front,*back;
    int length;
public:
    QueueList<T>();
    void enqueue(T value);
    void dequeue();
    T getFront();
    T getBack();
    int getLength();
    void print();
};

#endif // QUEUELIST_H
