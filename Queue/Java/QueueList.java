public class QueueList<T>{
    private class Node<T>{
        T data;
        Node<T> next;
        Node(){}
        Node(T value){
            this.data = value;
            this.next = null;
        }
    }
    private Node<T> front,back;
    int length;
    void enqueue(T value){
        Node<T> newNode = new Node<>(value);
        if(front == null){
            front = back = newNode;
        }
        else {
            back.next = newNode;
            back = newNode;
        }
        length++;
    }
    void dequeue(){
        if(front == null){
            System.out.println("Queue Underflow");
            return;
        }
        else if(front == back)
            front = back = null;
        else
            front = front.next;
        length--;
    }
    void print(){
        if(front == null){
            System.out.println("Queue is empty");
            return;
        }
        Node<T> current = front;
        while (current != null){
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }
    T getFront(){
        if(front == null){
            System.out.println("Queue is empty");
            return null;
        }
        return front.data;
    }
    T getBack(){
        if(back == null){
            System.out.println("Queue is empty");
            return null;
        }
        return back.data;
    }
    int getLength(){
        return length;
    }
}
