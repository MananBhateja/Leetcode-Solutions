class Solution {
public:
    bool validPalindrome(string s) {
	int l = 0, r = s.length() - 1;
	while (l < r) {
		if (s[l] != s[r]) {
			return ispalind(s, l + 1, r) || ispalind(s, l, r - 1);
		}
		l++;
		r--;
	}
	return true;
}

bool ispalind(string s, int left, int right) {
    // left 
	while (left < right) {
		if (s[left] != s[right]) return false;
		left++;
		right--;
	}
	return true;
}

};