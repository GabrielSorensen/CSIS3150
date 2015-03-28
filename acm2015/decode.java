import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader reader = new BufferedReader( new InputStreamReader(System.in));
		int cases = Integer.parseInt(reader.readLine());
		for(int ca=0;ca<cases;ca++){
			StringBuilder builder = new StringBuilder(reader.readLine());
			StringBuilder temp = new StringBuilder();
			for(int i=0;i<builder.length();i++){
				if(builder.charAt(i) == 'a'){
					builder = builder.replace(i, i+1, "z");
				}
				else{
					int c = builder.charAt(i);
					c--;
					builder = builder.replace(i, i+1, ((char) c)+"");
				}
			}
			int appendBegin = builder.length()-(builder.length()/3);
			int appendEnd = builder.length();
			StringBuilder appended = new StringBuilder(builder.substring(appendBegin,appendEnd));
			builder = builder.replace(appendBegin, appendEnd, "");
			int count = 2;
			while(appended.length()!=0){
				builder.insert(count, appended.charAt(0));
				appended.replace(0, 1, "");
				count+=3;
			}
			builder = builder.reverse();
			System.out.println(builder);
		}
	}
}
