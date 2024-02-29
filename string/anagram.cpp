#include <bits/stdc++.h>
using namespace std;





bool anagram(string str, string str1){
    if(str.length() != str1.length()){
        return false;
    }

    sort(str.begin(), str.end());
    sort(str1.begin(), str1.end());

    for(int i = 0; i < str.length(); i++){
        if(str[i] != str1[i]){
            return false; 
        }
        return true;
    }
}

int main()
{
	string str1 = "gram";
	string str2 = "arm";

	
	if (anagram(str1, str2))
		cout << "The two strings are anagram of each other";
	else
		cout << "The two strings are not anagram of each "
				"other";

	return 0;
}
