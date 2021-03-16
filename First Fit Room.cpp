int solve(vector<int>& rooms, int target) {
    int res = -1;
    for(int i=0;i<rooms.size();i++)
    {
        if(target<=rooms[i])
        {
            res = rooms[i];
            break;
        }
    }
    return res;
}
