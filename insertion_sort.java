//insertion_sort.java
import java.util.*;
import java.lang.*;

public class insertion_sort{
	static void sort(int a[],int n){
		
		for(int i=1;i<=n-1;i++){

			int e = a[i];
			//place the current element to the 'right' position in the sorted part
			int j=i-1;
			while(j>=0 && a[j]>e){
				a[j+1] = a[j];
				j=j-1;
			}
			a[j+1]=e;

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

		for(int i=0;i<n;i++){
			System.out.print(a[i] + " ");
		}

	}
}