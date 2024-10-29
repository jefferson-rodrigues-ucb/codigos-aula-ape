# Calculadora de números complexos

$$
z_1 = a + j b
$$

$$
z_2 = c + j d
$$

#### Soma
$$
z_1 + z_2 = (a + c) + j (b + d)
$$

#### Subtração
$$
z_1 - z_2 = (a - c) + j (b - d)
$$

#### Multiplicação
$$
z_1 \times z_2 = (ac - bd) + j (ad + bc)
$$

#### Divisão
$$
\frac{z_1}{z_2} = \frac{z_1}{z_2}\frac{\overline{z_2}}{\overline{z_2}} = \frac{(ac - bd)}{c^2 + d^2} + j \frac{(bc - ad)}{c^2 + d^2}
$$

## Compilação
### Windows
```cmd
gcc -o complexo.exe main.c complexo.h
```
### Unix
```cmd
gcc -o complexo main.c complexo.h
```
## Execução
### Windows
```cmd
complexo.exe
```
### Unix
```cmd
./complexo
```