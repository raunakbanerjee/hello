/*
Basically I will create a freq array and push in all the char freq of string 1 and then I will remove the char freq of string 2.
If the freq array has any box with non zero value then it means its not an anagram basically.
*/

bool isAnagram(char a[], char b[]){
    
    int arr[256]={0};
    for(int i=0;i<strlen(a);i++){
        arr[a[i]-97]++;
    }
    for(int i=0;i<strlen(b);i++){
        arr[b[i]-97]--;
    }
    
    for(int i=0;i<256;i++){
        if(arr[i]!=0)
        return false;
    }
    return true;
}
