
import java.util.ArrayList;
import java.util.Collections;

public class Main{
	public static void main(String[] args) {

	ArrayList<Integer>arr=new ArrayList<Integer>();
	arr.add(90);
	arr.add(70);
	arr.add(50);
	arr.add(20);
	arr.add(80);
	arr.add(60);
  
   System.out.println(arr.get(1));  // for accessing the elements
   System.out.println(arr);
 
   System.out.println(arr.set(5,100)); // for set the values at particular index;
   System.out.println(arr);
  
   System.out.println(arr.remove(2));  // for removing the elements 
   System.out.println(arr);
   
            //    arr.clear();   // for clear the all elements
  
   System.out.println(arr);
   System.out.println(arr.size());  // for getting the size of arraylist;
   
   for(int i=0;i<arr.size();i++){
        System.out.println(arr.get(i));
 }
	    
	Collections.sort(arr);
	System.out.print("The sorted list is " + arr);
  
  System.out.println();
	Collections.reverse(arr);
	System.out.print("The reverse list is " + arr);
	
	}
}
