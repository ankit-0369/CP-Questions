#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

// Website class to store URL and frequency of visits
class Website {
public:
    string URL;
    int visitCount;

    Website(string url, int count) : URL(url), visitCount(count) {}
    static vector<string> getMostVisitedPages(unordered_map<string, int>& url_cnt) {
        vector<Website> websites;

        for (auto& entry : url_cnt) {
            websites.push_back(Website(entry.first, entry.second));
        }

        sort(websites.begin(), websites.end(), [](Website &a, Website &b) {
            if (a.visitCount == b.visitCount)
                return a.URL < b.URL; 
            return a.visitCount > b.visitCount; 
        });


        vector<string> sortedURLs;
        for (auto& website : websites) {
            sortedURLs.push_back(website.URL);
        }
        return sortedURLs;
    }
};

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> url_cnt;
    for (int i = 0; i < n; ++i) {
        string url;
        cin >> url;
        url_cnt[url]++;
    }

    vector<string> sortedURLs = Website::getMostVisitedPages(url_cnt);

    cout << sortedURLs.size() << endl;
    for (const string& url : sortedURLs) {
        cout << url << endl;
    }

    return 0;
}
