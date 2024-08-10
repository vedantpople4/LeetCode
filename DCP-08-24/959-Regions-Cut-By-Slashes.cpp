class Solution {
public:
    vector<int>parent;

    int find(int x){
        if(parent[x]==x)return x;
        else
        return find(parent[x]);
    }
    int regionsBySlashes(vector<string>& grid) {
        vector<vector<int>>mat(grid.size()+1,vector<int>(grid.size()+1));
        int n=mat.size();
        parent.resize(n*n);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0 || i==n-1 || j==n-1){
                    parent[i*n+j]=0;//index of i,j in serialized parent array
                }else{
                    parent[i*n+j]=(i*n)+j;
                }
            }
        }
        int res=1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]=='/'){
                    int par1=find(i*n+(j+1));
                    int par2=find((i+1)*n+j);
                    if(par1==par2)res++;
                    else{
                        parent[par1]=par2;
                    }
                }
                else if(grid[i][j]=='\\'){
                    int par1=find(i*n+j);
                    int par2=find((i+1)*n+(j+1));
                    if(par1==par2)res++;
                    else{
                        parent[par1]=par2;
                    }
                }
            }
        }
        return res;
    }
};