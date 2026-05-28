class Solution {
public:

    vector<array<int,26>> trie;
    vector<int> bestIdx;

    int better(int oldIdx, int newIdx,
               vector<string>& words) {

        if(oldIdx == -1)
            return newIdx;

        if(words[newIdx].size() < words[oldIdx].size())
            return newIdx;

        if(words[newIdx].size() == words[oldIdx].size()
           && newIdx < oldIdx)
            return newIdx;

        return oldIdx;
    }

    vector<int> stringIndices(vector<string>& wordsContainer,
                              vector<string>& wordsQuery) {

        trie.push_back({});
        for(int i=0;i<26;i++)
            trie[0][i] = -1;

        bestIdx.push_back(-1);

        // INSERT
        for(int i = 0; i < wordsContainer.size(); i++) {

            string &s = wordsContainer[i];

            int node = 0;

            bestIdx[node] =
                better(bestIdx[node], i, wordsContainer);

            for(int j = s.size()-1; j >= 0; j--) {

                int c = s[j] - 'a';

                if(trie[node][c] == -1) {

                    trie[node][c] = trie.size();

                    trie.push_back({});
                    for(int k=0;k<26;k++)
                        trie.back()[k] = -1;

                    bestIdx.push_back(-1);
                }

                node = trie[node][c];

                bestIdx[node] =
                    better(bestIdx[node], i, wordsContainer);
            }
        }

        vector<int> ans;

        // SEARCH
        for(string &q : wordsQuery) {

            int node = 0;

            for(int j = q.size()-1; j >= 0; j--) {

                int c = q[j] - 'a';

                if(trie[node][c] == -1)
                    break;

                node = trie[node][c];
            }

            ans.push_back(bestIdx[node]);
        }

        return ans;
    }
};