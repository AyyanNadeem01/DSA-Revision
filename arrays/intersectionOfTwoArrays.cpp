#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findArrayIntersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    
    int i = 0, j = 0;
    vector<int> intersection;
    
    while(i < nums1.size() && j < nums2.size()) {
        if(nums1[i] < nums2[j]) i++;
        else if(nums1[i] > nums2[j]) j++;
        else {
            if(intersection.empty() || intersection.back() != nums1[i]) {
                intersection.push_back(nums1[i]);
            }
            i++; j++;
        }
    }
    
    return intersection;
}

int main() {
    vector<int> array1 = {2,3,5,2,16,8,9,4,51,0};
    vector<int> array2 = {1,2,3,4,5,6,7,8,9,10};
    
    vector<int> result = findArrayIntersection(array1, array2);
    
    cout << "Intersection: ";
    for(int x : result) cout << x << " ";
    cout << endl;
    
    return 0;
}
