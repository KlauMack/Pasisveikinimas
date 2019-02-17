## Programos tikslas

**Programa atspausdina įrėmintą pasisveikiną sudarytą iš 5 eilučių:**

## Programos išvedimas 

Įvedus vartotojo vardą **Klaudijus** ir pageidautiną rėmelio dydį (nuo 1 iki 10) **3**, programos išvedimas (output'as) atrodo taip:

```shell
Koks Jūsų vardas: Klaudijus
Įveskite rėmelio dydį (nuo 1 iki 10): 3

***************************
*                         *
*                         *
*                         *
*   Sveikas, Klaudijus!   *
*                         *
*                         *
*                         *
***************************
```
## Įdiegimas (Unix kompiuteryje) naudojant `gcc`kompiliatorių 

- `git clone https://github.com/KlauMack/Pasisveikinimas.git`
- `cd Pasisveikinimas`
- `g++ -std=c++11 Pasisveikinimas.cpp -o Pasisveikinimas`
- `./Pasisveikinimas`

## Versijų istorija (changelog)

### [v1.0](https://github.com/KlauMack/Pasisveikinimas/releases/tag/v1.0)

**Pridėta**

- Atsirado galimybė kontroliuoti rėmelio dydį

**Koreguota**

- Atnaujintas **README** failas

### [v0.2](https://github.com/KlauMack/Pasisveikinimas/releases/tag/v0.2)

**Pridėta**

- Papildyta programa taip, kad atpažįsta vartotojo lytį ir pagal ją pakoreguoja sveikinimo tekstą
- Programos logotipas

**Koreguota**

- Papildytas **README** failas

### [v0.1](https://github.com/KlauMack/Pasisveikinimas/releases/tag/v0.1)

***Pridėta***

- Pirminė programos versija
