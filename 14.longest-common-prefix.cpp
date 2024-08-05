struct TrieNode
{
    TrieNode *childNode[26];
    bool wordEnd;
    int childCount;
    TrieNode()
    {
        childCount = 0;
        wordEnd = false;
        for (int i = 0; i < 26; i++)
        {
            childNode[i] = NULL;
        }
    }
};

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        TrieNode *root = new TrieNode();
        for (int i = 0; i < strs.size(); i++)
        {
            insert_key(root, strs[i]);
        }
        return findLongestCommonPrefix(root);
    }

    void insert_key(TrieNode *root, string &key)
    {

        TrieNode *currentNode = root;

        for (auto c : key)
        {

            if (currentNode->childNode[c - 'a'] == NULL)
            {

                TrieNode *newNode = new TrieNode();
                currentNode->childNode[c - 'a'] = newNode;
                currentNode->childCount++;
            }

            currentNode = currentNode->childNode[c - 'a'];
        }
        currentNode->wordEnd = 1;
    }

    string findLongestCommonPrefix(TrieNode *root)
    {
        string prefix;
        TrieNode *currentNode = root;

        while (currentNode != NULL && currentNode->childCount == 1 && !currentNode->wordEnd)
        {
            for (int i = 0; i < 26; ++i)
            {
                if (currentNode->childNode[i] != NULL)
                {
                    prefix += (char)(i + 'a');
                    currentNode = currentNode->childNode[i];
                    break;
                }
            }
        }

        return prefix;
    }
};
