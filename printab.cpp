// The c++ solution for a question from Baidu
/*
 * How to print out "ab":
 * 
 * public void print()
 * {
 * 		if(		)
 * 		{
 * 			System.out.print("a");
 * 		}
 * 		else
 * 		{
 * 			System.out.print("b");
 * 		}
 * }
 * 
 * ------------------------------------------- Java 8(with lambda) By: RednaxelaFX ------------------------------------
 * 
 * import java.util.function.BooleanSupplier;
 * 
 * public class xx
 * {
 * 		public static void main(String[]args)
 * 		{
 * 			if ( ((BooleanSupplier)( () -> {System.out.print("a"); return false;} )).getAsBoolean() )
 * 			{
 * 				System.out.print("a");
 * 			}
 * 			else
 * 			{
 * 				System.out.print("b");
 * 			}
 * 		}
 * }
 * 
 * ------------------------------------------- Java 8(without lambda) By: RednaxelaFX ------------------------------------
 * 
 * public class xx
 * {
 * 		public static void main(String[]args)
 * 		{
 * 			if ( foo() )
 * 			{
 * 				System.out.print("a");
 * 			}
 * 			else
 * 			{
 * 				System.out.print("b");
 * 			}
 * 		}
 * 
 * 		public static boolean foo()
 * 		{
 * 			System.out.print("a");
 * 			return false;
 * 		}
 * }
 *  
 */

#include <iostream>

using namespace std;

void print()
{
	if (cout << "a", false) //print out "a" and return false
	{
		cout << "a";  //leap 
	}
	else //which means when false
	{
		cout << "b" ; //print out "b"
	}
}

int main()
{
	print();
	return 0;
}
