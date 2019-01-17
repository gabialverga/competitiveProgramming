d = {
	"vertebrado":{"ave":{"carnivoro":"aguia","onivoro":"pomba"},
		      "mamifero":{"onivoro":"homem","herbivoro":"vaca"}
	},
	"invertebrado":{"inseto":{"hematofago":"pulga","herbivoro":"lagarta"},
		        "anelideo":{"hematofago":"sanguessuga","onivoro":"minhoca"}
	}
}

n1 = raw_input()
n2 = raw_input()
n3 = raw_input()
print d[n1][n2][n3]