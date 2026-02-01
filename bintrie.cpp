/* Author: alphoenix */
#include <bits/stdc++.h>
using namespace std;

#define LOG 30

struct TrieNode
{
    int value;
    TrieNode *arr[2];
};
 
TrieNode *newNode()
{
    TrieNode *temp = new TrieNode;
    temp->value = 0;
    temp->arr[0] = temp->arr[1] = NULL;
    return temp;
}
 
void insert(TrieNode *root, int k)
{
    TrieNode *temp = root;
 
    for (int i = LOG-1; i >= 0; i--)
    {
        bool val = k & (1 << i);
        if (temp->arr[val] == NULL){
            temp->arr[val] = newNode();
        }
        temp = temp->arr[val];
    }

    temp->value = k;
}
 
int query(TrieNode *root, int k)
{
    TrieNode *temp = root;

    for (int i = LOG-1; i >= 0; i--)
    {
        bool val = k & (1 << i);
 
        if (temp->arr[1-val]!=NULL)
            temp = temp->arr[1-val];
        else if (temp->arr[val] != NULL)
            temp = temp->arr[val];
    }

    return k^(temp->value);
}

 
int maxSubarrayXOR(int* arr, int n)
{
    TrieNode *root = newNode();
    insert(root, 0);
 
    int result = INT_MIN, pre_xor =0;
 
    for (int i = 0; i < n; i++)
    {
        pre_xor = pre_xor^arr[i];
        insert(root, pre_xor);
        result = max(result, query(root, pre_xor));
    }
    return result;
}
