def timeConversion(s):
    
    if s[0:2] == "12" and s[8:] == "AM":
            return "00"+s[2:8]
    elif s[0:2] != "12" and s[8:] == "PM":
            return str(int(s[0:2])+12)+s[2:8]
    else:
            return s[0:8]

if __name__ == '__main__':
    s = input()
    
    print(timeConversion(s))
