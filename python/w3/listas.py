adnseq = ["A","C","T","G","T","A","C"]
adnsq2 = ["T","G","A","T","G"]

print(adnseq)
print(adnseq[:-1])
print(adnseq[0])
print(adnseq[1:3])


print("interting one item")
adnseq.append("T")
n = len(adnseq)
print(adnseq)
print("length :",n)


print("replace first positiion with T")
adnseq[0] = "T"
print (adnseq)

print("Delete last position")
adnseq.pop(n-1)
print(adnseq)

print("seq1 + seq2 ")

newadnseq = adnseq + adnsq2

print(newadnseq)
n = len(newadnseq)
print("length -> "+n)