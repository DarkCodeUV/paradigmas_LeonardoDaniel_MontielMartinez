adn = ""

f = open("covid19.txt","r")

for x in f: 
    adn += x
    
adn = adn.replace('\n',"")

n = len(adn)
print("adn length = ",n)

for i in range(0,n):
    print(i+1,adn[i])