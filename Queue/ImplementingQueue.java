/*
Implementing the Concepts of Queue using java.

Queue is a Linear Data Structure which follows FIFO(First In First Out) concept.

Inserting the element -> Enqueue;
Removing the Element -> Dequeue
 */

package Queue;

import java.util.NoSuchElementException;
import java.util.Scanner;

public class ImplementingQueue {

    private Node front;
    private Node rear;
    private int length;

    private static class Node{
        private int data;
        private Node next;

        public Node(int data){
            this.data = data;
        }
    }

    public ImplementingQueue(){
        this.front = null;
        this.rear = null;
        this.length = 0;
    }

    public boolean isEmpty(){
        return length == 0;
    }

    public int getLength(){
        return length;
    }




//    Method to insert data into the Queue
    public void Enqueue(int data){
        Node temp = new Node(data);
        if(isEmpty()){
            front = temp;
        }else{
            rear.next = temp;
        }
        rear = temp;
        length++;
    }

//    Method to Remove data from the Queue
    public int Dequeue(){
        if(isEmpty()){
            throw new NoSuchElementException();
        }
        int val = front.data;
        front = front.next;
        if(front == null){
            rear = null;
        }
        length--;
        return val;
    }

    //    Method to print the Element of the Queue

    public void print(){
        if(isEmpty()){
            return;
        }
        Node current = front;
        while(current != null){
            System.out.print(current.data + " -> ");
            current = current.next;
        }
        System.out.print("Null");
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ImplementingQueue queue = new ImplementingQueue();

        while(true){
            System.out.println("Please Enter your choice : \n" +
                                "Press 0 to Exit \n" +
                                "Press 1 to Insert Data \n" +
                                "Press 2 to Remove Data \n" +
                                "Press 3 to print Data \n");
            int choice = sc.nextInt();

            switch (choice){
                case 0  -> {
                    System.exit(0);
                }
                case 1 -> {
                    System.out.println("Enter the Data :");
                    int data = sc.nextInt();
                    queue.Enqueue(data);
                }
                case 2 -> {
                    System.out.println("Dequeued Element is " + queue.Dequeue());
                }

                case 3 -> {
                    queue.print();
                }

                default -> {
                    System.out.println("Wrong Input!!!");
                }
            }

        }
    }
}
