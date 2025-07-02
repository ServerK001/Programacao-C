# 💣 Alocação Excessiva de Memória (RAM Bomb) com malloc – Uso em Red Team

> 📅 Data: 02/07/2025

## 🔍 Introdução

Nesta seção, estudamos o uso de `malloc` (e suas variantes) como ferramenta para **testes de negação de serviço local (DoS)** via esgotamento de RAM — prática conhecida como **RAM Bomb**.

---

## 📌 Objetivo

Criar um programa em C que aloca memória até travar o sistema operacional, como parte de cenários de Red Team para:

- Testar resiliência
- Provocar instabilidade
- Simular comportamento malicioso

---

## 🧠 Conceito

`malloc` aloca **vários blocos consecutivos de memória na heap**. Se não houver `free`, essa memória permanece ocupada enquanto o programa estiver em execução.

### Se muita memória for alocada:
- O sistema começa a usar **swap** (lento)
- Pode **travar completamente**
- Pode **forçar desligamento/reinício**
- Em alguns SOs, o processo é morto com "OOM Killer"

---

## ⚠️ Aviso de Segurança

> **NÃO execute esse tipo de código em máquinas principais ou servidores reais.**  
> Use **máquinas virtuais ou ambientes de laboratório.**

---

## 💻 Exemplo de RAM Bomb em C

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    long long bloco = 1024L * 1024L * 1024L; // 1 GB
    int i = 0;

    while (1) {
        void *ptr = malloc(bloco);
        if (ptr == NULL) {
            printf("Alocação falhou após %d GB\n", i);
            break;
        }
        printf("Alocado: %d GB\n", ++i);
    }

    getchar();  // Espera manual ou trava
    return 0;
}
```

---

## 🎯 Possíveis Aplicações Red Team

| Situação | Objetivo |
|----------|----------|
| Dispositivos embarcados | Testar limites de hardware |
| Máquinas virtuais | Forçar reinício |
| Estratégia de distração | Enquanto outro código atua |
| DoS local | Simular travamento sob carga |

---

## 🛡️ Detecção pela Blue Team

- Monitoramento de RAM anormal
- Uso de `ulimit` (Linux) para limitar uso de heap
- Ferramentas como Prometheus, Zabbix, etc
- Sandboxes que detectam comportamento malicioso

---

## 🧙 Variante furtiva (stealth RAM bomb)

Em vez de alocar tudo de uma vez:

- Alocar 10 MB a cada 10 segundos
- Simula uso legítimo de memória
- Evita detecção por picos repentinos

---

## ✅ Conclusão

O uso de `malloc` para esgotar RAM é uma técnica simples, porém poderosa. Mesmo sendo facilmente detectável em sua forma bruta, **variações furtivas** podem enganar monitoramentos básicos e causar impacto real em ambientes de teste controlados.

