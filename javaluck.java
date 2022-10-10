// Java Program to Demonstrate that Annotations
// are Not Barely Comments

// Class 1
class Base {

	// Method
	public void display()
	{
		System.out.println("Base display()");
	}
}

// Class 2
// Main class
class Derived extends Base {

	// Overriding method as already up in above class
	@Override public void display(int x)
	{
		// Print statement when this method is called
		System.out.println("Derived display(int )");
	}

	// Method 2
	// Main driver method
	public static void main(String args[])
	{
		// Creating object of this class inside main()
		Derived obj = new Derived();

		// Calling display() method inside main()
		obj.display();
	}
}
