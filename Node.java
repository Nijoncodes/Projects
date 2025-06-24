
import java.util.*;
import javax.xml.crypto.NodeSetData;
import java.util.Stack;


class Graph{

    ArrayList<LinkedList<Node>> list; // Linked List 


    Graph(){ // Constructor

        list = new ArrayList<>();

    }

    public void addNode(Node node){
        LinkedList<Node> littlelist = new LinkedList<>();
        littlelist.add(node); // Adding Node into linked list
        list.add(littlelist);


    }


    public void addEdge(int src, int dst){
        LinkedList<Node> littList = list.get(src);
        Node dstNode = list.get(dst).get(0);  
        littList.add(dstNode);
        

    }

    public boolean Checkedge(int src, int dst){
        LinkedList<Node> littList = list.get(src);
        Node dstNode = list.get(dst).get(0);

        for(Node node: littList){
            if(node == dstNode){
                return true;

            }
        }
        return false;
        

    }

    public void print(){
        
        for(LinkedList<Node> littList: list){
            for(Node node: littList){
                System.out.print(node.data + " -> ");
            }
        }
        System.out.println();
        

    }

    // We have to implement a depth search model with a stack



    public void DepthSearch(){

    Stack<Node> stack = new Stack<>(); // Adding a stack

    for(LinkedList<Node> littList: list){
        for(Node node: littList){
        stack.push(node); // Adding Nodes to stack data structure

       while(!stack.empty()){
       node = stack.pop(); // Removes nodes from stack
       System.out.println("Visted Node " + node.data); // Will track modules depending on dependencies
   
    }

    }

}



    }





    



 


 
    }










public class Node{ // Creation of nodes 



    String data;
    boolean visted;
 


    Node(String data){ // Data inside nodes 

        this.data = data;   
        this.visted = visted;


    }

    



  
    public static void main(String[] args) { // Structure to design all modules 

       
        Graph graph = new Graph();   // Classes Called 


        graph.addNode(new Node("Module 1")); // Adding data from Nodes constructor
        graph.addNode(new Node("Module 2"));
        graph.addNode(new Node("Module 3"));
        graph.addNode(new Node("Module 4"));
        graph.addNode(new Node("Module 5"));

        graph.addEdge(0, 1); // Adding Edges 
        graph.addEdge(1, 2);
        graph.addEdge(1, 4);
        graph.addEdge(2, 3);
        graph.addEdge(4, 0);
        graph.addEdge(4, 2);

        graph.print(); // Print Graph 

        graph.DepthSearch();

       







        






        
    }



}