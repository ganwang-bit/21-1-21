x=0
y=0
fangxiang=0
n=eval(input("请输入指令的次数:"))
for i in range(n):
    each_str=input().split()
    print(each_str)
    letter_pat=each_str[0]
    num_pat=eval(each_str[1])
    if letter_pat=="left":
        fangxiang=(fangxiang-1+4)%4
    elif letter_pat=="right":
        fangxiang=(fangxiang+1+4)%4
    elif letter_pat=="back":
        fangxiang=(fangxiang+2+4)%4
    if fangxiang==0:
        x=x+num_pat
    elif fangxiang==1:
        y=y-num_pat
    elif fangxiang==2:
        x=x-num_pat
    elif fangxiang==3:
        y=y+num_pat
print(str(x)+" "+str(y))
