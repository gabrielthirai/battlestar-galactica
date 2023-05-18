# Battle Star Galactica 

## Analise e Introdução do projeto

### Temática

<p>No dia 23 de maio do ano de 2023, a Terra ira receber um ataque de forças desconhecidas do universo que
foi alertados por sinais marcados por toda a parte da terra.
</p>

### Personagens

<p>
Eram 2 naves vindas de lugares desconhecidos, a Delta e a Prisma. Cada uma tinha um poder que foi
adquirido no seu planeta de origem. A terra por sua vez, tinha 2 grandes naves de defesa, a Mundo e a
Universo, para enfrentar uma ameaça desse nível.
</p>

### Ações

<p>
As naves de ataque entraram no planeta e entraram em combate com as duas naves de defesa da Terra.
Entretanto, a nave Delta só poderá enfrentar a nave Mundo, e a Prisma só enfrentará a nave Universo. Será
decidido, então, em um número sorteado, qual que será a primeira batalha, par vai ser o Delta e Mundo e
ímpar vai ser Prisma e Universo. Começado essa batalha, cada nave irá ter seu momento de ataque, nesses
ataques, será levado em consideração o ataque e defesa de cada nave, definida no início do jogo por cada
um. Só terminará essa batalha, quando o LIFE de uma determinada nave chegar a 0. Com isso,
imediatamente, começará a batalha das outras 2 naves.
No fim dessas 2 batalhas, sobrará 2 naves (detalhe técnico), a nave que tiver maior número de LIFE,
ganhará a guerra, se a nave que ganhou for a atacante, a terra será dominada, se a nave for a que defende
a terra, então ela será salva da ameaça.
</p>

### Atributos
<p>
Cada nave terá seus pontos de ataque (ObjAtaque), seus pontos de defesa (ObjDefesa), seu level
(ObjLevel), seu life (ObjLife) e seus pontos que distribui em ataque e defesa (ObjPontos)
</p>

### Métodos
<p>
void set_atk(int atk); //essa função irá definir o ataque da nave.
void set_def(int def); //essa função irá definir a defesa da nave.
void set_lvl(int lvl); //essa função irá definir o level da nave, que será incrementado a cada fim de batalha,
somente na nave vencedora.void set_lf(int lf); //essa função irá definir o life da nave, sempre mudando a cada ataque.
void set_pt(int pt); //essa função irá definir o pontos de atributos da nave, só irá acrescentar no final da
guerra, a vencedora recebe 5 extras.
int get_atk(); //essa função irá buscar o valor de ataque da nave.
int get_def(); //essa função irá buscar o valor de defesa da nave.
int get_lvl(); //essa função irá buscar o level da nave.
int get_lf(); //essa função irá buscar os pontos de life da nave.
int get_pt(); //essa função irá buscar quantos pontos a nave tem para serem distribuídos.
</p>

### Critérios:
<p>
Codificação – crie um código limpo e objetivo. Evite “malabarismos”
Lay-out – crie uma interface que seja agradável de ser utilizada
Criatividade – a criatividade para a criação de um projeto de sucesso é tudo.
</p>