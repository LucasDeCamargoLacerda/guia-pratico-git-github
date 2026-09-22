# Prática de Git e GitHub

## 1. Verificar o repositório

Antes de começar a trabalhar em um projeto, é importante verificar o estado atual do repositório.

```bash
git status
```

Esse comando mostra informações como:

* Branch atual;
* Arquivos modificados;
* Arquivos novos;
* Alterações preparadas para commit;
* Alterações que ainda não foram preparadas.

---

## 2. Verificar as branches

Para visualizar as branches existentes:

```bash
git branch
```

A branch atual será identificada pelo símbolo `*`.

Exemplo:

```text
* main
```

Isso significa que o trabalho está sendo realizado na branch `main`.

---

## 3. Criar uma nova branch

Para criar uma branch e mudar para ela imediatamente:

```bash
git switch -c nome-da-branch
```

Exemplo:

```bash
git switch -c feature/pratica
```

A criação de branches permite desenvolver uma parte específica do projeto sem realizar as alterações diretamente na branch principal.

---

## 4. Alterar arquivos

Depois de criar uma branch, os arquivos do projeto podem ser modificados normalmente.

Por exemplo, pode ser criado ou alterado um arquivo:

```text
pratica/pratica.md
```

Depois das alterações, é possível verificar novamente o estado do projeto:

```bash
git status
```

---

## 5. Adicionar alterações ao Staging

Para preparar os arquivos modificados para o próximo commit:

```bash
git add .
```

O ponto (`.`) indica que as alterações encontradas no diretório atual serão adicionadas ao staging.

Também é possível adicionar um arquivo específico:

```bash
git add nome-do-arquivo
```

---

## 6. Criar um commit

Depois de preparar as alterações, é possível registrá-las no histórico:

```bash
git commit -m "descrição da alteração"
```

Exemplo:

```bash
git commit -m "docs: adiciona conteúdo prático de Git"
```

A mensagem do commit deve descrever de forma clara a alteração realizada.

---

## 7. Consultar o histórico

Para visualizar os commits realizados:

```bash
git log
```

Para visualizar o histórico de forma resumida:

```bash
git log --oneline
```

Exemplo:

```text
a83f21c docs: adiciona conteúdo prático de Git
5a91649 docs: atualiza README
```

O histórico permite acompanhar a evolução do projeto.

---

## 8. Enviar a branch para o GitHub

Depois de realizar um commit, a branch pode ser enviada para o repositório remoto:

```bash
git push -u origin nome-da-branch
```

Exemplo:

```bash
git push -u origin feature/pratica
```

O comando envia os commits da branch local para o GitHub.

A opção `-u` estabelece a relação entre a branch local e a branch remota, facilitando os próximos comandos `git push` e `git pull`.

---

## 9. Atualizar o projeto

Para obter alterações existentes no repositório remoto:

```bash
git pull
```

Esse comando busca as alterações do repositório remoto e tenta integrá-las à branch atual.

É importante atualizar o projeto antes de iniciar um trabalho colaborativo para reduzir a possibilidade de conflitos.

---

## 10. Trocar de branch

Para mudar para uma branch existente:

```bash
git switch nome-da-branch
```

Exemplo:

```bash
git switch main
```

Também é possível utilizar:

```bash
git switch feature/pratica
```

para retornar à branch de desenvolvimento.

---

## 11. Integrar alterações com Merge

Depois que uma funcionalidade foi desenvolvida em uma branch, suas alterações podem ser integradas a outra branch.

Primeiro, deve-se mudar para a branch que receberá as alterações:

```bash
git switch main
```

Depois, executar:

```bash
git merge feature/pratica
```

Nesse processo, o Git tenta combinar as alterações da branch `feature/pratica` com a `main`.

---

## 12. Pull Request

Em projetos hospedados no GitHub, uma alternativa comum ao merge realizado diretamente pelo terminal é utilizar um Pull Request.

O Pull Request permite propor a integração de uma branch em outra.

O fluxo pode ser:

```text
Branch de desenvolvimento
        ↓
Alterações
        ↓
Commit
        ↓
Push
        ↓
Pull Request
        ↓
Revisão
        ↓
Merge
        ↓
main
```

Durante a revisão, podem ser analisados:

* Conteúdo alterado;
* Organização dos arquivos;
* Qualidade das alterações;
* Mensagens dos commits;
* Possíveis problemas;
* Conflitos existentes.

---

## 13. Resolução de conflitos

Quando duas branches alteram a mesma parte de um arquivo de maneira incompatível, o Git pode gerar um conflito.

O arquivo poderá apresentar marcações semelhantes a:

```text
<<<<<<< HEAD
conteúdo da branch atual
=======
conteúdo da outra branch
>>>>>>> outra-branch
```

O desenvolvedor deve analisar as duas versões e decidir qual conteúdo deve permanecer.

Depois de resolver o conflito, o arquivo deve ser adicionado novamente ao staging:

```bash
git add .
```

Em seguida, a resolução pode ser registrada em um commit:

```bash
git commit -m "fix: resolve conflito de merge"
```

---

## 14. Fluxo completo de desenvolvimento

Um fluxo básico para trabalhar com Git e GitHub pode ser representado da seguinte forma:

```text
1. Verificar o projeto
       ↓
2. Criar uma branch
       ↓
3. Fazer alterações
       ↓
4. Verificar o status
       ↓
5. Adicionar ao staging
       ↓
6. Criar um commit
       ↓
7. Enviar a branch para o GitHub
       ↓
8. Criar um Pull Request
       ↓
9. Revisar as alterações
       ↓
10. Realizar o merge
       ↓
11. Atualizar a main
```

Esse fluxo separa o desenvolvimento da branch principal e permite que as alterações sejam analisadas antes de serem integradas.

---

## 15. Comandos principais

| Comando         | Função                                     |
| --------------- | ------------------------------------------ |
| `git status`    | Verifica o estado do projeto               |
| `git branch`    | Lista as branches                          |
| `git switch`    | Troca de branch                            |
| `git switch -c` | Cria e acessa uma nova branch              |
| `git add`       | Adiciona alterações ao staging             |
| `git commit`    | Registra alterações no histórico           |
| `git log`       | Exibe o histórico                          |
| `git push`      | Envia alterações para o repositório remoto |
| `git pull`      | Obtém alterações do repositório remoto     |
| `git merge`     | Integra alterações entre branches          |

---

## Conclusão

A prática de Git consiste em utilizar seus comandos dentro de um fluxo organizado de desenvolvimento.

O uso de branches permite separar diferentes tarefas, os commits registram as alterações e o GitHub possibilita compartilhar o projeto e utilizar Pull Requests para revisão e integração.

A combinação desses recursos forma um fluxo de trabalho utilizado para controlar versões e colaborar no desenvolvimento de projetos.
