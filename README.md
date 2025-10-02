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
- `Board` - reprezintă tabla de joc și starea curentă a jocului`
- `Game Engine` - motorul jocului; coordonează logica jocului, mutările, validarea și starea jocului.
- `Main` - Loc De Intrare

### Pași de compilare

1. Deschideți un terminal în directorul rădăcină al proiectului.
2. Rulați următoarele comenzi:

```bash
# Curăță fișierele obiect și executabile vechi
make clean

# Compilează toate modulele și generează executabilul
make