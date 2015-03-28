import java.io.BufferedReader;
import java.io.InputStreamReader;


public class Main2 {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader reader = new BufferedReader( new InputStreamReader(System.in));
		String[] input = reader.readLine().split(" ");
		int xy = Integer.parseInt(input[0]);
		int grid[][] = new int[xy][xy];
		int products[] = new int[4];
		for(int i=0;i<xy;i++){
			String temp[] = reader.readLine().split(" ");
			for(int j=0;j<xy;j++){
				grid[i][j] = Integer.parseInt(temp[j]);
			}
		}
		
		int n = Integer.parseInt(input[1]);
		int product = 1;	
		
		for(int i=0;i<xy;i++){
			for(int j=0;j<xy-(n-1);j++){
				for(int p=0;p<n;p++){
					product*=grid[i][j+p];
					
				}
				if(products[0] < product){
					products[0] = product;
				}
				product = 1;
			}
			
		}
		
		
		for(int i=0;i<xy;i++){
			for(int j=0;j<xy-(n-1);j++){
				for(int p=0;p<n;p++){
					product*=grid[j+p][i];
				}
				if(products[1] < product){
					products[1] = product;
				}
				product = 1;
				
			}
		}
		
		for(int i=0;i<xy-(n-1);i++){
			for(int j=0;j<xy-(n-1);j++){
				for(int p=0;p<n;p++){
					product*=grid[i+p][j+p];
				}
				if(products[2] < product){
					products[2] = product;
				}
				product = 1;
				
			}
		}
		
		for(int i=0;i<xy-(n-1);i++){
			for(int j=xy-1;j>xy-(n-1);j--){
				for(int p=0;p<n;p++){
					product*=grid[i+p][j-p];
				}
				if(products[3] < product){
					products[3] = product;
				}
				product = 1;
				
			}
		}
		
		int result = 0;
		for(int i=0;i<4;i++){
			if(products[i] > result){
				result = products[i];
			}
		}
		System.out.println(result);
	}

}
