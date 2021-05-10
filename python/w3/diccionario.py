nucleotidos = {
    "A" : "Adenina",
    "C" : "Citosina",
    "G" : "Guanina",
    "T" : "Tinina"
}

print(len(nucleotidos))
print(nucleotidos["A"])
print(nucleotidos["C"])
print(nucleotidos["T"])
print(nucleotidos["G"])

nucleotidos["A"] = "ADENINAN"

print(nucleotidos)

nucleotidos.pop('A',None)

print(nucleotidos)