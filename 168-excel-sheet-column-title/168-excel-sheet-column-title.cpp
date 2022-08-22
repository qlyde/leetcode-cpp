class Solution {
public:
    string convertToTitle(int columnNumber) {
        //  1 * 26 +  2 = AB
        //  1 * 26 +  1 = AA
        // 26 * 26 + 25 = ZY
        //
        //  1 * 26 * 26 + 26 * 26 + 25 = AZY

        // return n == 0 ? "" : convertToTitle((n - 1) / 26) + (char) ((n - 1) % 26 + 'A');

        string tile;
        while (columnNumber > 0) {
            tile.insert(0, 1, 'A' + (columnNumber - 1) % 26);
            columnNumber = (columnNumber - 1) / 26;
        }
        return tile;
    }
};