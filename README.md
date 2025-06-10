# 🧠 Estudos do Curso de Programação em C

Iniciei meus estudos a partir da **aula 167**, pois já possuo uma noção prévia da linguagem C. Abaixo está o conteúdo estudado até agora:

---

## 📘 Aula 167 – Como criar novos tipos de dados em C com `typedef struct`

- 🎥 [Assistir no YouTube](https://www.youtube.com/watch?v=4B6kUBCcUWE&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=168)
- 📌 **Resumo**: Esta aula aborda como utilizar `typedef` junto com `struct` para criar novos tipos de dados personalizados em C, facilitando a organização e reutilização de estruturas complexas.

### ✍️ Anotações:
- `typedef` permite criar um **apelido** para um tipo existente.
- Ao combinar com `struct`, é possível criar tipos personalizados como:

  ```c
  typedef struct {
      int idade;
      char nome[50];
  } Pessoa;
