(*
 *  Soluzione di reverseseq.
 *
 *  Autore: Romeo Rizzi
 *
 *  Descrizione: Banale.
 *)

var N, i : longint;
    vect :  array[1..1000000] of integer;
begin
{$ifdef EVAL}
    assign(input, 'input.txt'); reset(input);
    assign(output, 'output.txt'); rewrite(output);
{$endif}
    read(N);
    for i := 1 to N do
       read(vect[i]);
    writeln(N);
    for i := 1 to N do
       write(vect[i], ' ');
    writeln();
end.

