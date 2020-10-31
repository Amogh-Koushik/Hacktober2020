//Problem.java
import java.util.*;
import java.lang.*;

public class selection_sort{

	// public static void swap(int a,int b){
		
	// 	int temp = a;
	// 	a = b;
	// 	b = temp;
	// }

	public static void sort(int a[],int n){
		for(int i=0;i<n;i++){
			int min_index = i;

			for(int j=i;j<n;j++){
				if(a[j]<a[min_index]){
					min_index=j;	
				} 
			}

			//swap(a[i],a[min_index]);
			int temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;

		}
	}
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();

		int a[] = new int[n];
		for(int i=0;i<n;i++){
			a[i] = sc.nextInt();
		}

		sort(a,n);

		// int x=1;
		// int y= 3;
		//swap(x,y);
		for(int i=0;i<n;i++){
			System.out.print(a[i] + " ");
		}
		//System.out.println(x+" "+y);
	}
}