import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		int t=s.nextInt();
		for(int x=0;x<t;x++){
		    int n=s.nextInt();
		    int k=s.nextInt();
		    int max = n*(n-1)/2 - (n-1);
		    if(k > max && k!=(n*(n-1)/2))
		        System.out.println(-1);
		    else if(k==(n*(n-1)/2)){
		        System.out.println(k);
		        for(int i=1;i<=n;i++){
		            for(int j=i+1;j<=n;j++){
		                System.out.println(i+" "+j);
		            }
		        }
		    }
		    else{
		        int count=0;
		        System.out.println(max-k+(n-1));
		        for(int i=1;i<n;i++){
		            System.out.println(i+" "+n);
		        }
		        for(int i=1;i<n;i++){
		            for(int j=i+1;j<n;j++){
		                count++;
		                if(count>k){
		                    System.out.println(i+" "+j);
		                }
		            }
		        }
		    }
		}
	}
}