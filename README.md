# PSE em Ação
Sistema de Planejamento e Acompanhamento de Ações de Saúde na Escola

Projeto acadêmico desenvolvido para as disciplinas de Algoritmos e Lógica de
Programação e Engenharia de Software, do curso Técnico em Informática.

## Sobre o projeto
Aplicação de terminal, em linguagem C, para cadastro, listagem, pesquisa,
atualização de situação e geração de resumo de ações coletivas do Programa
Saúde na Escola (PSE), executada por uma equipe intersetorial fictícia
(IntegraPSE). O sistema utiliza apenas dados fictícios e coletivos, sem
armazenar informações sensíveis ou individuais de estudantes.

## Equipe
- Julen Tartarelli - RA: 260031662
- Pedro Zanchetti - RA: 26001798-2
- Emanuel Rizzo - RA: 26002943-2

## Documentação
- [Documento da 1ª entrega (pdf)](primeira-entrega.docx)

## Escopo mínimo do sistema
1. Cadastrar ação (código, escola, tema, data prevista, público-alvo, responsável, quantidade prevista).
2. Listar todas as ações cadastradas.
3. Pesquisar ações por código, escola ou tema.
4. Atualizar situação da ação (planejada, realizada ou cancelada).
5. Gerar resumo geral (totais por situação e percentual de participação).
6. Validar entradas (códigos repetidos, quantidades negativas, campos vazios, opções inválidas).

## Requisitos técnicos
- Linguagem C padrão (compilável com GCC).
- Sem interface gráfica, banco de dados ou bibliotecas avançadas.
- Armazenamento em memória (vetores/structs) durante a execução.

## Planejamento das sprints
| Sprint | Semana | Foco |
|---|---|---|
| 1 | Semana 1 | Levantamento, escopo, contextualização e fluxograma geral |
| 2 | Semana 2 | Modelagem da struct Ação e pseudocódigos |
| 3 | Semana 3 | Menu principal e função de cadastro |
| 4 | Semana 4 | Funções de listagem e pesquisa |
| 5 | Semana 5 | Atualização de situação e resumo geral |
| 6 | Semana 6 | Testes, documentação e apresentação final |

## Status
🔧 Em desenvolvimento — 1ª entrega concluída (documento escrito, requisitos e fluxogramas).
