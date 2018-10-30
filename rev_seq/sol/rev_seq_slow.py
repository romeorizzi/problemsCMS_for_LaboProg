in_file = open("input.txt","r")
N = in_file.readline()
seq = in_file.readline()
in_file.close()

N=int(N)
seq=seq.split(' ')
seq=map(int,seq)

out_file = open("output.txt","w")
risultato=''
#    rev_seq=[]
#    for i in seq:
#        rev_seq=[i]+rev_seq
#    for i in rev_seq:
#        risultato=risultato+' '+repr(i)
for i in seq:
    risultato=repr(i) + ' ' + risultato
out_file.write(repr(N) +"\n" +risultato +"\n")
out_file.close()


