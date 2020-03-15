import java.util.*;

class Encrypter{

	char[][] Transpose(char[][] arr){

		int n = arr.length;
		char[][] transpose = new char[n][n];

		for(int i=0;i<n;i++){    
			for(int j=0;j<n;j++){    
				transpose[i][j]=arr[j][i];  
			}    
		}

		return transpose;
	}
		
	char[] flatternMatrix(char[][] arr){

		arr = Transpose(arr);
		char[] flat = new char[arr.length*arr.length];
		int index = 0;		
		
		for(int i=0;i<arr.length;i++){
			for(int j=0;j<arr.length;j++){
			
				flat[index] = arr[i][j]; 			
				index++;
			}
		}

		return flat;
	}

	int GetSquareRoot(char[] arr){
		
		int n = arr.length;
		return ((int)Math.floor(Math.sqrt(n)) + 1); 
	}

	char[] ConvertToArray(String str){

		return str.toCharArray();
	}

	String EncryptString(String str){

		str = str.replace(" ", "");
		
		char[] arr = ConvertToArray(str);
		int ArraySize = GetSquareRoot(arr);
		char[][] encryptMatrix = new char[ArraySize][ArraySize];
		char[] encryptedArray; 
		int update = 0;

		
		for(int i=0;i<ArraySize;i++){
			for(int j=0;j<ArraySize;j++){

				if(j+update < arr.length){
					encryptMatrix[i][j] = arr[j+update];
				}
				else{
					encryptMatrix[i][j] = '-';
				}

			}
			update += ArraySize;
		}
		
		encryptedArray = flatternMatrix(encryptMatrix);
		
		String encryptedString = new String(encryptedArray);
		
		encryptedString = encryptedString.replace("-","");

		return encryptedString;
	}

	public static void main(String []args){
		
		Scanner in =new Scanner(System.in);
		String str;
		Encrypter e = new Encrypter();

		System.out.println("Enter a string to encrypt : ");
		str = in.nextLine();

		String newStr = new String(e.EncryptString(str));
		
		System.out.println(newStr);
		
	}

}