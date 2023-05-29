import java.util.*; 
import java.io.*; 
import java.util.ArrayList; 
 
public class RoughPage1 { 
 
 static class FastReader { 
  BufferedReader br; 
  StringTokenizer st; 
 
  public FastReader() { 
   br = new BufferedReader(new InputStreamReader(System.in)); 
  } 
 
  String next() { 
   while (st == null || !st.hasMoreElements()) { 
    try { 
     st = new StringTokenizer(br.readLine()); 
    } catch (IOException e) { 
     e.printStackTrace(); 
    } 
   } 
   return st.nextToken(); 
  } 
 
  int nextInt() { 
   return Integer.parseInt(next()); 
  } 
 
  long nextLong() { 
   return Long.parseLong(next()); 
  } 
 
  double nextDouble() { 
   return Double.parseDouble(next()); 
  } 
 
  String nextLine() { 
   String str = ""; 
   try { 
    str = br.readLine(); 
   } catch (IOException e) { 
    e.printStackTrace(); 
   } 
   return str; 
  } 
 } 
 
 public static void main(String[] args) { 
  FastReader fr = new FastReader(); 
  int tc = fr.nextInt(); 
  while (tc-- > 0) { 
   solve(fr); 
  } 
 } 
 
 public static void solve(FastReader fr) { 
  int n = fr.nextInt(); 
  int[] arr = new int[n]; 
  int[] brr = new int[n]; 
  for (int i = 0; i < n; i++) 
   arr[i] = fr.nextInt(); 
  for (int i = 0; i < n; i++) 
   brr[i] = fr.nextInt(); 
  HashMap<Integer, Integer> a = new HashMap<Integer, Integer>(); 
  HashMap<Integer, Integer> b = new HashMap<Integer, Integer>(); 
  int count = 1; 
  for (int i = 1; i <= n; i++) { 
   if (i == n) { 
    a.put(arr[i - 1], Math.max(count, a.getOrDefault(arr[i - 1], 0))); 
    break; 
   } 
   if (arr[i] == arr[i - 1]) { 
    count++; 
   } else { 
    a.put(arr[i - 1], Math.max(count, a.getOrDefault(arr[i - 1], 0))); 
    count = 1; 
   } 
  } 
   
  count = 1; 
  for (int i = 1; i <= n; i++) { 
   if (i == n) { 
    b.put(brr[i - 1], Math.max(count, b.getOrDefault(brr[i - 1], 0))); 
    break; 
   } 
   if (brr[i] == brr[i - 1]) { 
    count++; 
   } else { 
    b.put(brr[i - 1], Math.max(count, b.getOrDefault(brr[i - 1], 0))); 
    count = 1; 
   } 
  } 
   
  int ans=0; 
  for(int e:arr) { 
   ans=Math.max(ans, a.get(e)+b.getOrDefault(e, 0)); 
  } 
  for(int e:brr) { 
   ans=Math.max(ans, b.get(e)+a.getOrDefault(e, 0)); 
  } 
  System.out.println(ans); 
 } 
 
}