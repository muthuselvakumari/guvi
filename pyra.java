import java.util.Scanner;
public class pyra{
public static void main(String[] args){
Scanner scn=new Scanner(System.in);
int n=scn.nextInt();
for(int i=1;i<=n;i=i+2)
{
for(int j=n-i;j>1;j=j-2)
{
System.out.println(" ");
}
for(int k=1;k<=i;k++)
{
System.out.println("*");
}}}
