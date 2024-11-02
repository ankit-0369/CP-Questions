#include <bits/stdc++.h>

using namespace std;

int INF = 1e9 + 7, MOD = 1e9 + 7;
int idCounter = 1;

struct Node {
    bool isLocked;
    bool isLockable;
    int uid;
    int nid;
    Node* parent;
    vector<Node*> children;

    Node() {
        isLocked = false;
        isLockable = true;
        uid = -1;
        nid = idCounter++;
        parent = NULL;
    }

    Node(Node* p) {
        isLocked = false;
        isLockable = true;
        uid = -1;
        nid = idCounter++;
        parent = p;
    }
};

bool lock(Node* node, int userId) {
    if (!node->isLockable || node->isLocked) return false;

    queue<Node*> q;
    q.push(node);
    while (!q.empty()) {
        Node* cur = q.front();
        q.pop();
        for (auto child : cur->children) {
            if (child->isLocked) return false;
            q.push(child);
        }
    }

    node->uid = userId;
    node->isLocked = true;
    q.push(node);
    while (!q.empty()) {
        Node* cur = q.front();
        q.pop();
        for (auto child : cur->children) {
            child->isLockable = false;
            q.push(child);
        }
    }
    return true;
}

bool unlock(Node* node, int userId) {
    if (!node->isLockable || !node->isLocked || node->uid != userId) return false;

    node->isLocked = false;
    node->uid = -1;

    queue<Node*> q;
    q.push(node);
    while (!q.empty()) {
        Node* cur = q.front();
        q.pop();
        for (auto child : cur->children) {
            child->isLockable = true;
            q.push(child);
        }
    }
    return true;
}

bool upgrade(Node* node, int userId) {
    if (!node->isLockable || node->isLocked) return false;

    queue<Node*> q;
    q.push(node);
    bool hasLockedDescendant = false;

    while (!q.empty()) {
        Node* cur = q.front();
        q.pop();
        for (auto child : cur->children) {
            if (child->isLocked && child->uid != userId) return false;
            if (child->isLocked) hasLockedDescendant = true;
            q.push(child);
        }
    }

    if (!hasLockedDescendant) return false;

    q.push(node);
    while (!q.empty()) {
        Node* cur = q.front();
        q.pop();
        for (auto child : cur->children) {
            if (child->isLocked) {
                if (!unlock(child, userId)) return false;
            }
            q.push(child);
        }
    }

    return lock(node, userId);
}

unordered_map<string, Node*> nameToNodeMap;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    Node* root = new Node();
    string rootName;
    cin >> rootName;
    nameToNodeMap[rootName] = root;

    queue<Node*> nodeQueue;
    nodeQueue.push(root);
    int nodeCount = 1;

    while (!nodeQueue.empty()) {
        auto cur = nodeQueue.front();
        nodeQueue.pop();

        while (nodeCount < n && (int)cur->children.size() < m) {
            string nodeName;
            cin >> nodeName;
            Node* newNode = new Node(cur);
            nameToNodeMap[nodeName] = newNode;
            cur->children.push_back(newNode);
            nodeQueue.push(newNode);
            nodeCount++;
        }
    }

    vector<string> results;

    for (int i = 0; i < q; i++) {
        int queryType, userId;
        string nodeName;
        bool result;
        cin >> queryType >> nodeName >> userId;

        if (queryType == 1) {
            result = lock(nameToNodeMap[nodeName], userId);
        } else if (queryType == 2) {
            result = unlock(nameToNodeMap[nodeName], userId);
        } else {
            result = upgrade(nameToNodeMap[nodeName], userId);
        }

        // Store result as a string "true" or "false"
        results.push_back(result ? "true" : "false");
    }

    for (const auto& res : results) {
        cout << res << endl; 
    }

    return 0;
}




