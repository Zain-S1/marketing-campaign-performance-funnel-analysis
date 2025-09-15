def DayOfProgrammer(year):
    if year == 1918:
        return "26.09.1918"
    
    is_leap = False
    
    if year < 1918:
        is_leap = year%4==0
    else:
        is_leap = year%400==0 or (year%4==0 and year%100!=0)
        
    return f"12.09.{year}" if is_leap else f"13.09.{year}"
        

year = int(input())
print(DayOfProgrammer(year))
