import java.util.*;

public class leastnumber 
{

	@SuppressWarnings({ "null", "unused" })
	public static void main(String[] args) 
	{
		String number;
		int n;
		char[] temp = null;
		String num="";
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the num");
		number=s.nextLine();
		System.out.print("Enter the number of digits to be removed");
		n=s.nextInt();
		char[] s1=number.toCharArray();
		Arrays.sort(s1);
		for(int i=0;i<(s1.length-n);i++)
		{
		 num=num+s1[i];	
		}
		System.out.println(Integer.valueOf(num));
		s.close();		
		}
	
}
