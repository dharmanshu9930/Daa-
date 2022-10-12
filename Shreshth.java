
import java.util.*;
abstract class shape{

}
class circle extends shape{
	public circle(int r) {
		double a=3.14*r*r;
		System.out.println("Area of circle = "+a);

	}
}
class triangle extends shape{
	public triangle(int b, int h) {
		double a=b*h/2;
		System.out.println("Area of triangle = "+a);
	}
	
}
class square extends shape{
	public square(int s) {
		double a= s*s;
		System.out.println("Area of square = "+a);
	}
	
}
class rectangle extends shape{
	public rectangle(int l, int b) {
		double a=l*b;
		System.out.println("Area of rectangle = "+a);
}	
}
public class shapes {
	public static void main(String[] args) {
		boolean x = true;
		while (x==true) {
			
		
		System.out.println("Select Option: ");
		System.out.println("1) Circle");
		System.out.println("2) Triangle");
		System.out.println("3) Square");
		System.out.println("4) Rectangle");
		System.out.println("5) Exit");
		Scanner sc= new Scanner(System.in);
		int opt = sc.nextInt();
		if (opt == 1)
        {
            System.out.println("Enter Radius: ");
            int r=sc.nextInt();
            circle c= new circle(r);
        }
        else if (opt == 2)
        {
        	System.out.println("Enter Base: ");
        	int b=sc.nextInt();
        	System.out.println("Enter Height: ");
        	int h=sc.nextInt();
        	triangle t= new triangle(b,h);

        }
        else if (opt == 3)
        {
        	System.out.println("Enter Side: ");
        	int s=sc.nextInt();
        	square sq= new square(s);

        }
        else if (opt == 4)
        {
        	System.out.println("Enter Length: ");
        	int l=sc.nextInt();
        	System.out.println("Enter Breadth: ");
        	int b=sc.nextInt();
        	rectangle r= new rectangle(l,b);

        }
        else if (opt == 5)
        {
        	x=false;
        } else {
			System.out.println("Invalid Option");
		}
	}
		}
}
