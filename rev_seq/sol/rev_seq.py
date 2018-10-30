in_file = open("input.txt","r")
N = in_file.readline()
seq = in_file.readline()
in_file.close()

N=int(N)
seq=seq.split(' ')
seq=map(int,seq)

out_file = open("output.txt","w")        
out_file.write(repr(N) +"\n")
for i in range(len(seq) -1, -1, -1):   #range(start, stop, step)
       out_file.write(repr(seq[i]) + ' ')
    
out_file.write("\n")
out_file.close()


