function probabilidade = FuncaoProb(k,o,t,N)
    lac = rand(k,N) >t;
    suc = sum(lac) >=o;
    probabilidade = sum(suc)/N;

end