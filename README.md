# 📘 Plano de Estudos - C para Malware Development (89 Dias)

Este repositório contém um plano completo para aprender a linguagem C com foco em desenvolvimento de ferramentas ofensivas, engenharia reversa e análise de malware.

✅ = Concluído | 🔄 = Em andamento | ⬜ = Ainda não iniciado

---

## 🧱 Fase 1 – Fundamentos de C (10 dias)
| Dia | Tópico                                         | Status |
|-----|------------------------------------------------|--------|
| 1   | Tipos de dados, scanf, printf                  | ⬜      |
| 2   | if, else, switch, for, while                   | ⬜      |
| 3   | Arrays e char[]                                | ⬜      |
| 4   | Funções, retorno                               | ⬜      |
| 5   | Escopo, static                                 | ⬜      |
| 6   | Strings                                        | ⬜      |
| 7   | Const, define                                  | ⬜      |
| 8   | Structs                                        | ⬜      |
| 9   | Structs aninhadas                              | ⬜      |
| 10  | Projeto: Agenda com structs fixas              | ⬜      |

---

## 🧬 Fase 2 – Ponteiros e Alocação Dinâmica (10 dias)
| Dia | Tópico                                         | Status |
|-----|------------------------------------------------|--------|
| 11  | Ponteiros básicos                              | ⬜      |
| 12  | malloc, calloc, free, realloc                  | ⬜      |
| 13  | Vetores dinâmicos                              | ⬜      |
| 14  | Matrizes dinâmicas                             | ⬜      |
| 15  | Structs com malloc                             | ⬜      |
| 16  | Vetores de structs                             | ⬜      |
| 17  | char** (vetores de strings)                    | ⬜      |
| 18  | Buffer overflow simples                        | ⬜      |
| 19  | strdup manual e realloc com strings            | ⬜      |
| 20  | Projeto: Agenda dinâmica                       | ⬜      |

---

## 🔌 Fase 3 – Programação de Rede com C (10 dias)
| Dia | Tópico                                         | Status |
|-----|------------------------------------------------|--------|
| 21  | socket, bind, connect                          | ⬜      |
| 22  | Cliente TCP                                    | ⬜      |
| 23  | Servidor TCP                                   | ⬜      |
| 24  | send, recv                                     | ⬜      |
| 25  | Port scanner                                   | ⬜      |
| 26  | socket com múltiplos clientes                  | ⬜      |
| 27  | Bind shell                                     | ⬜      |
| 28  | Reverse shell                                  | ⬜      |
| 29  | XOR strings                                    | ⬜      |
| 30  | Projeto: Shell reverso funcional               | ⬜      |

---

## 🧠 Fase 4 – Sistema Operacional e Execução (10 dias)
| Dia | Tópico                                         | Status |
|-----|------------------------------------------------|--------|
| 31  | fork, execve, CreateProcess                    | ⬜      |
| 32  | pthreads, CreateThread                         | ⬜      |
| 33  | fopen, fwrite, manipulação de arquivos         | ⬜      |
| 34  | Arquivos temporários, registros (Windows)      | ⬜      |
| 35  | Carregar arquivos binários                     | ⬜      |
| 36  | Injeção de código básica                       | ⬜      |
| 37  | Monitoramento de processos                     | ⬜      |
| 38  | Criar Dropper                                  | ⬜      |
| 39  | Executar shellcode de arquivo                  | ⬜      |
| 40  | Projeto: Dropper + execução                    | ⬜      |

---

## 💣 Fase 5 – Exploração de Vulnerabilidades (10 dias)
| Dia | Tópico                                         | Status |
|-----|------------------------------------------------|--------|
| 41  | Stack Overflow                                 | ⬜      |
| 42  | Heap Overflow e UAF                            | ⬜      |
| 43  | Format String                                  | ⬜      |
| 44  | Escrita arbitrária com %n                      | ⬜      |
| 45  | Shellcode manual (x86)                         | ⬜      |
| 46  | NOP Sled e Jump ESP                            | ⬜      |
| 47  | GDB, objdump, Radare2                          | ⬜      |
| 48  | Projeto: Explorar binário vulnerável           | ⬜      |
| 49  | Projeto: Shellcode e Buffer Overflow           | ⬜      |
| 50  | Revisão e aplicação                            | ⬜      |

---

## 💉 Fase 6 – Injeção e Stealth (15 dias)
| Dia | Tópico                                         | Status |
|-----|------------------------------------------------|--------|
| 51  | VirtualAlloc, WriteProcessMemory               | ⬜      |
| 52  | CreateRemoteThread, DLL Injection              | ⬜      |
| 53  | Estrutura PE Header                            | ⬜      |
| 54  | XOR Encoding                                   | ⬜      |
| 55  | Polimorfismo simples                           | ⬜      |
| 56  | Anti-debugging                                 | ⬜      |
| 57  | Anti-VM e sandbox detection                    | ⬜      |
| 58–65 | Projeto: Loader com evasão stealth           | ⬜      |

---

## 🔍 Fase 7 – Reverse Engineering e Análise de Malware (8 dias)
| Dia | Tópico                                         | Status |
|-----|------------------------------------------------|--------|
| 66  | Introdução ao Ghidra / IDA Free                | ⬜      |
| 67  | Identificar funções, strings e fluxos          | ⬜      |
| 68  | Engenharia reversa básica                      | ⬜      |
| 69  | Estudo de malware real                         | ⬜      |
| 70  | Persistência e comportamento                   | ⬜      |
| 71  | PEStudio, strings, Procmon                     | ⬜      |
| 72  | Projeto: Análise de malware educativo          | ⬜      |
| 73  | Projeto: Análise de malware real               | ⬜      |

---

## 🛠️ Fase 8 – Projetos Finais e Portfólio (6 dias)
| Dia | Tópico                                         | Status |
|-----|------------------------------------------------|--------|
| 74  | Reescrever Port Scanner                        | ⬜      |
| 75  | Reescrever Reverse Shell                       | ⬜      |
| 76  | Criar Dropper + execução                       | ⬜      |
| 77  | Relatório de exploração (buffer, format)       | ⬜      |
| 78  | Criar Loader com evasão                        | ⬜      |
| 79  | Organizar GitHub, README e prints              | ⬜      |

---

## 🎓 Fase Final – Revisão e Aprofundamento (10 dias)
| Dia | Tópico                                         | Status |
|-----|------------------------------------------------|--------|
| 80–89 | Revisar, testar, corrigir código e preparar portfólio | ⬜  |
