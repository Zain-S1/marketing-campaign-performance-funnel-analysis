def caesarCipher(s, k):
    # Write your code here
    lower = "abcdefghijklmnopqrstuvwxyz"
    upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    
    diff = k % 26
    
    ciphered = ""
    for char in s:
        if 'a' <= char <= 'z':
            ciphered += lower[(lower.find(char)+diff)%26]
        elif 'A' <= char <= 'Z':
            ciphered += upper[(upper.find(char)+diff)%26]
        else:
            ciphered += char
    
    return ciphered

if __name__ == '__main__':
    n = int(input())
    s = input()
    k = int(input())
    
    print(caesarCipher(s, k))
