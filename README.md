# Gustavo Donenech de Souza - Turma M5

# Smallest Subtree with all the Deepest Nodes
 
Dada a raiz de uma árvore binária, a profundidade de cada nó é a distância mais curta até a raiz.
Retorne a menor subárvore de forma que contenha todos os nós mais profundos da árvore original.
Um nó é chamado de mais profundo se tiver a maior profundidade possível entre qualquer nó da árvore inteira.
A subárvore de um nó é uma árvore que consiste nesse nó mais o conjunto de todos os descendentes desse nó.

# Casos Testados:
root = [3,5,1,6,2,0,8,null,null,7,4].  
root = [1].  
root = [0,1,3,null,2].  

# Problemas em Aula
Em aula eu não estava conseguindo fazer a leitura recursiva da árvore, e nessas tentativas eu sempre acabava fazendo "caso a caso", minha ideia era ler toda a árvore recursivamente e de alguma maneira determinar o nó mais profundo.
