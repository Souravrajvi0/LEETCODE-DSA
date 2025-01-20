class Solution {
    public int firstCompleteIndex(int[] arr, int[][] mat) {
        int m=mat.length;
        int n=mat[0].length;
        Map<Integer, int[]> position= new HashMap<>();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                position.put(mat[i][j], new int[]{i,j});
            }
        }
        int[] rowPainted = new int[m];
        int[] colPainted = new int[n];
        for(int i=0;i<arr.length;i++){
            int num=arr[i];
            int[] pos=position.get(num);
            int row = pos[0];
            int col = pos[1];
            rowPainted[row]++;
            colPainted[col]++;
            if(rowPainted[row]==n||colPainted[col]==m){
                return i;
            }
        }
        return -1;
    }
}