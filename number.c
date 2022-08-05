import random
if __name__=="__main__":
    mini=101
    maxi=0
    num=random.randint(1,100)
    flag=0
    if num > 1:
        for i in range(2, int(num/2)+1):
            if (num % i) == 0:
                flag=-1
                break
        flag+=1
    win=0
    lives=7
    print("Guess the number")
    while(lives>0):
        print(lives,"lives left")
        n=int(input("Num: "))
        if(n==num):
            win=1
            print("You won with",lives,"lives left")
            break
        else:
            lives-=1
            if(flag):
                x=random.randint(0,1)
            else:
                x=random.randint(0,3)
            print("Wrong.")
            if x==0:
                while True:
                    hint = random.randint(1, 100)
                    if hint<num and hint>mini: 
                        mini=hint
                        break
                print("The number is less than",hint)
            elif x==1:
                while True:
                    hint = random.randint(1, 100)
                    if hint>num and hint<maxi: 
                        maxi=hint
                        break
                print("The number is greater than",hint)
            elif x==2:
                while True:
                    hint = random.randint(2, 100)
                    if hint%num==0:
                        break
                print("The number is a divisor of",hint)
                
            elif x==3:
                while True:
                    hint = random.randint(2, 100)
                    if num%hint==0: 
                        break
                
                print("The number is a multiple of",hint)
    if lives<=0:
        print("Answer was",num)
        print("Sorry. Better luck next time.")
                      
        
