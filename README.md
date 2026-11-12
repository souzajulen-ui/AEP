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
| Sprint | Semana | Foco principal | Entrega da semana |
|---|---|---|---|
| 1 | Semana 1 | Levantamento de requisitos, escopo, contextualização e fluxograma geral | Documento escrito (1ª entrega) |
| 2 | Semana 2 | Modelagem da estrutura de dados (struct Acao) e pseudocódigos das operações | Fluxogramas detalhados e pseudocódigos revisados |
| 3 | Semana 3 | Revisão final da produção textual, dos requisitos e organização do repositório GitHub | Documento escrito completo e GitHub organizado (1ª entrega) |
| 4 | Semana 4 | Definição da estrutura do projeto em C, constantes, struct Acao e vetor de ações | Esqueleto do projeto em C no repositório |
| 5 | Semana 5 | Implementação do menu principal com estrutura de repetição e leitura de opção | Menu funcional no código-fonte |
| 6 | Semana 6 | Testes integrados, documentação do código e do README, ensaio da apresentação | Sistema final, documentação e apresentação |
| 7 | Semana 7 | Implementação da função listar ações, com apresentação organizada dos registros | Código-fonte parcial no repositório |
| 8 | Semana 8 | Implementação da função pesquisar ação por código, escola e tema | Código-fonte parcial no repositório |
| 9 | Semana 9 | Implementação da função atualizar situação, incluindo o registro da quantidade efetiva de participantes | Código-fonte parcial no repositório |
| 10 | Semana 10 | Implementação da função gerar resumo, com totais por situação e percentual de participação | Sistema funcional completo (todas as 6 funcionalidades) |
| 11 | Semana 11 | Testes integrados e tratamento de situações como registro inexistente e limite de armazenamento atingido | Registro de testes realizados |
| 12 | Semana 12 | Elaboração do diagrama de casos de uso e descrição dos casos de uso principais | Diagrama e descrições de casos de uso |
| 13 | Semana 13 | Elaboração do manual do usuário, com instruções de compilação, execução e capturas de tela | Manual do usuário com capturas de tela |
| 14 | Semana 14 | Revisão geral do código-fonte, nomes significativos, comentários, README e considerações finais | Documento final revisado e repositório atualizado |
| 15 | Semana 15 | Gravação, edição e revisão do vídeo de apresentação; conferência de todos os entregáveis | Sistema final, documentação e vídeo de apresentação (2ª entrega) |

## Limitações
- Os dados ficam apenas na memória e são perdidos ao fechar o programa.
- A pesquisa exige o nome da escola ou do tema exatamente como foi cadastrado.
- Os campos numéricos aceitam apenas números.

## Documentação
- [Documento da 1ª entrega (pdf)](primeiraentrega.pdf)
- [Documento final da 2ª entrega](segundaentrega.pdf)

## Vídeo de apresentação
▶️ [Assista ao vídeo no YouTube](https://youtu.be/KvIuRn5yuu8?is=Al4ntTNXUJ2HBFN3)

## Status
✅ Concluído — 2ª entrega: sistema funcional, documentação e vídeo de apresentação.
