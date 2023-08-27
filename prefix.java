//write a program to convert prefix expression *AB-CD into postfix expression
//input: *AB-CD
//output: AB*CD-
import java.util.*;
class prefix
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the prefix expression");
        String s=sc.next();
        Stack<String> st=new Stack<String>();
        for(int i=s.length()-1;i>=0;i--)
        {
            char ch=s.charAt(i);
            if(Character.isLetter(ch))
            {
                String s1=Character.toString(ch);
                st.push(s1);
            }
            else
            {
                String s2=st.pop();
                String s3=st.pop();
                String s4=s2+s3+ch;
                st.push(s4);
            }
        }
        System.out.println("The postfix expression is "+st.pop());
    }
}
