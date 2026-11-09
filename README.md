# PSE em Ação
Sistema de Planejamento e Acompanhamento de Ações de Saúde na Escola

Projeto acadêmico desenvolvido para as disciplinas de Algoritmos e Lógica de
Programação e Engenharia de Software.

## Sobre o projeto
Aplicação de terminal, em linguagem C, para cadastro, listagem, pesquisa,
atualização de situação e geração de resumo de ações coletivas do Programa
Saúde na Escola (PSE). O sistema utiliza apenas dados fictícios e coletivos,
sem armazenar informações sensíveis ou individuais de estudantes.

## Equipe
- Julen Tartarelli - RA: 260031662
- Pedro Zanchetti - RA: 26001798-2

## Como compilar e executar

### Dev-C++ 
1. Abra o arquivo `pse_em_acao.c`.
2. Aperte **F11** (Compilar e Executar).

### Terminal (GCC)
```bash
gcc pse_em_acao.c -o pse_em_acao
./pse_em_acao
```

## Funcionalidades
| Opção | Funcionalidade |
|---|---|
| 1 | Cadastrar ação (código, escola, tema, data, público-alvo, responsável e quantidade prevista) |
| 2 | Listar todas as ações |
| 3 | Pesquisar ações por escola ou tema |
| 4 | Atualizar situação (Planejada, Realizada ou Cancelada) e registrar participantes |
| 5 | Gerar resumo com totais por situação e percentual de participação |
| 6 | Sair |

## Validações
- Código repetido, zero ou negativo é recusado.
- Quantidade prevista deve ser maior que zero.
- Opção de menu inválida.
- Atualização de código inexistente ("Registro inexistente").
- Limite de 50 ações cadastradas.

## Organização do código
- Os dados ficam em vetores (`codigo`, `escola`, `tema`, `data`, `prevista`,
  `efetiva`, `situacao` etc.). A mesma posição em todos os vetores forma uma ação.
- O menu fica em um laço `while` que repete até a opção 6.
- Cada opção é tratada com `if` e `else if`.
- Laços `for` percorrem os vetores para buscar códigos, pesquisar e gerar o resumo.

## Planejamento das sprints
| Sprint | Semana | Foco |
|---|---|---|
| 1 | Semana 1 | Levantamento, escopo, contextualização e fluxograma geral |
| 2 | Semana 2 | Modelagem dos dados e pseudocódigos |
| 3 | Semana 3 | Menu principal e cadastro |
| 4 | Semana 4 | Listagem e pesquisa |
| 5 | Semana 5 | Atualização de situação e resumo geral |
| 6 | Semana 6 | Testes, documentação e apresentação final |

## Limitações
- Os dados ficam apenas na memória e são perdidos ao fechar o programa.
- A pesquisa exige o nome da escola ou do tema exatamente como foi cadastrado.
- Os campos numéricos aceitam apenas números.

## Documentação
- [Documento da 1ª entrega (pdf)](primeiraentrega.pdf)
- [Documento final da 2ª entrega](segundaentrega.pdf)

## Status
✅ Concluído — 2ª entrega: sistema funcional, documentação e vídeo de apresentação.
