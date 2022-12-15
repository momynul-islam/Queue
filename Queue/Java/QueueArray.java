public class QueueArray<T> {
    private T[] arr;
    private int front,back,length,size;
    QueueArray(){
        arr = (T[]) new Object[10];
        this.size = 10;
        this.length = 0;
        this.front = -1;
        this.back = -1;
    }
    QueueArray(int size){
        arr = (T[]) new Object[size];
        this.size = size;
        this.length = 0;
        this.front = -1;
        this.back = -1;
    }
    void enqueue(T value){
        if(length >= size){
            System.out.println("Queue Overflow");
            return;
        }
        else if(front <= -1){
            arr[++front] = value;
            back ++;
        }
        else {
            arr[++back] = value;
        }
        length++;
    }
    void dequeue(){
        if(length <= 0 || front > back){
            front = back = -1;
            System.out.println("Queue Underflow");
            return;
        }
        front--;
        length--;
    }
    void print(){
        if(length <= 0){
            System.out.println("Queue is empty");
            return;
        }
        for(int i=front; i<length; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    T getFront(){
        if(length <= 0){
            System.out.println("Queue is empty");
            return null;
        }
        return arr[front];
    }
    T getBack(){
        if(length <= 0){
            System.out.println("Queue is empty");
            return null;
        }
        return arr[back];
    }
    int getLength(){
        return length;
    }
    int getSize(){
        return size;
    }
}
