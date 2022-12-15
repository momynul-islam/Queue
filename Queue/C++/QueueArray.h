#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

template <class T>
class QueueArray
{
private:
    T *arr;
    int front,back,length,size;
public:
    QueueArray<T>();
    QueueArray<T>(int size);
    void enqueue(T value);
    void dequeue();
    void print();
    int getLength();
    int getSize();
    T getFront();
    T getBack();
};

#endif // QUEUEARRAY_H
