# Checkers Game

## Descriere
Acest proiect este o implementare a jocului de Dame (Checkers) folosind C++.

## Reguli jocului
- Jocul se joacă pe o tablă de 8x8 pătrate
- Fiecare jucător începe cu 12 piese
- Piesele se mișcă doar în diagonală
- Piesele normale se mișcă doar înainte
- Dacă o piesă ajunge pe ultimul rând, devine damă
- Damele se pot mișca în orice direcție diagonală
- Capturile sunt obligatorii când sunt posibile

## Structuri de date
- `Coord` - reprezintă coordonatele pe tablă (x, y)
- `Piece` - reprezintă o piesă de joc (tip, culoare, poziție)
- `Player` - reprezintă un jucător (nume, culoare, număr de piese)
- `Board` - reprezintă tabla de joc și starea curentă a jocului
- `Result` - reprezintă rezultatul jocului, starea finală sau intermediară
- `Engine` - gestionează logica jocului, controlul jucătorilor și actualizarea stării
- `Painter`- Painter este responsabil pentru afișarea vizuală a tablei și a pieselor
- `Main` - Punctul de intrare în program
