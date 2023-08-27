//write a program for binary search
import java.util.*;
class binary
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of elements: ");
        int n=sc.nextInt();
        int a[]=new int[n];
        System.out.println("Enter the elements: ");
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        System.out.println("Enter the element to be searched: ");
        int s=sc.nextInt();
        int l=0;
        int u=n-1;
        int m=(l+u)/2;
        while(l<=u)
        {
            if(a[m]<s)
            {
                l=m+1;
            }
            else if(a[m]==s)
            {
                System.out.println("Element found at "+(m+1)+" position");
                break;
            }
            else
            {
                u=m-1;
            }
            m=(l+u)/2;
        }
        if(l>u)
        {
            System.out.println("Element not found");
        }
    }
}