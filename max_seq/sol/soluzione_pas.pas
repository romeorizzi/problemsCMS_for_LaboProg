(*
 *  Soluzione di max_seq.
 *
 *  Autore: Romeo Rizzi
 *
 *  Descrizione: Banale.
 *)

var N, i, max_so_far, spoon : longint;
begin
{$ifdef EVAL}
    assign(input, 'input.txt'); reset(input);
    assign(output, 'output.txt'); rewrite(output);
{$endif}
    read(N);
    read(max_so_far);
    for i := 2 to N do
    begin
       read(spoon);
       if spoon > max_so_far then max_so_far := spoon;
    end;
    writeln(max_so_far);
end.

