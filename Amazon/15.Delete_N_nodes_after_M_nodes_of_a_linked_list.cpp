#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    void linkdelete(struct Node *head, int M, int N)
    {
        // Add code here

        Node *curr = head;
        Node *prev = NULL;

        while (curr != NULL)
        {
            int i = 0;
            while (i < M && curr != NULL)
            {
                prev = curr;
                curr = curr->next;
                i++;
            }

            int j = 0;
            while (j < N && curr != NULL)
            {
                curr = curr->next;
                j++;
            }

            prev->next = curr;
        }
    }
};