# We Pink - Body Splashs Website

Projeto desenvolvido para aplicar conceitos de JavaScript em um site responsivo de venda de body splashs.

## 🚀 Funcionalidades Implementadas

### 📱 Menu Mobile

-   **Botão hamburger animado** que aparece em dispositivos móveis
-   **Menu overlay** com animação suave de abertura/fechamento
-   **Animação escalonada** dos itens do menu
-   **Fechamento automático** ao clicar em links ou redimensionar para desktop

### 📝 Formulário de Contato

-   **Validação em tempo real** dos campos obrigatórios
-   **Validação de email** com regex
-   **Mensagens de erro** personalizadas para cada campo
-   **Alertas de sucesso** com auto-remoção
-   **Prevenção de envio** com campos inválidos

### 🛍️ Página de Produtos (Informações)

-   **Filtro de produtos** por categoria (Todos, Premium, Regular)
-   **Animações de entrada** escalonadas para os produtos
-   **Interação ao clicar** nos produtos com alertas informativos
-   **Animações de hover** aprimoradas

### 🎨 Sistema de Alertas

-   **Múltiplos tipos** de alertas (sucesso, erro, informação)
-   **Posicionamento fixo** com animações suaves
-   **Botão de fechamento** manual
-   **Auto-remoção** após tempo determinado
-   **Design responsivo** para mobile

### ✨ Animações e Interações

-   **Scroll animations** com Intersection Observer
-   **Animações CSS** personalizadas
-   **Transições suaves** em todos os elementos interativos
-   **Feedback visual** para ações do usuário

## 🛠️ Tecnologias Utilizadas

-   **HTML5** - Estrutura semântica
-   **CSS3** - Estilos e animações
-   **JavaScript ES6+** - Funcionalidades interativas
-   **Flexbox** - Layout responsivo
-   **CSS Grid** - Organização de produtos
-   **Media Queries** - Responsividade

## 📁 Estrutura de Arquivos

```
exercicio-javascript/
├── index.html          # Página inicial
├── contatos.html       # Formulário de contato
├── informacoes.html    # Página de produtos
├── preços.html         # Tabela de preços
├── styles.css          # Estilos CSS
├── script.js           # Funcionalidades JavaScript
├── img/                # Imagens dos produtos
└── README.md           # Documentação
```

## 🎯 Conceitos JavaScript Aplicados

### 1. **DOM Manipulation**

-   `document.querySelector()` e `document.querySelectorAll()`
-   `createElement()` e `appendChild()`
-   Manipulação de classes com `classList`

### 2. **Event Handling**

-   `addEventListener()` para múltiplos eventos
-   `preventDefault()` para controle de formulários
-   Event delegation e bubbling

### 3. **Form Validation**

-   Validação customizada de campos
-   Regex para validação de email
-   Feedback visual de erros

### 4. **Responsive Design**

-   Media queries em JavaScript
-   Detecção de redimensionamento de tela
-   Menu mobile adaptativo

### 5. **Animations & Transitions**

-   Intersection Observer API
-   CSS animations controladas por JavaScript
-   Timeouts e intervals para animações

### 6. **Modern JavaScript Features**

-   Arrow functions
-   Template literals
-   Destructuring
-   Async operations com setTimeout

## 🎨 Design System

### Cores Principais

-   **Primary**: `rgb(150, 100, 180)` - Roxo principal
-   **Secondary**: `rgb(255, 170, 230)` - Rosa claro
-   **Success**: `#2ecc71` - Verde sucesso
-   **Error**: `#e74c3c` - Vermelho erro
-   **Info**: `#3498db` - Azul informação

### Tipografia

-   **Font Family**: Arial, sans-serif
-   **Headings**: Gradiente colorido
-   **Body**: `rgb(65, 65, 65)`

## 📱 Responsividade

-   **Desktop**: Layout completo com navegação horizontal
-   **Tablet**: Adaptações de espaçamento e tamanhos
-   **Mobile**: Menu hamburger e layout vertical

## 🚀 Como Usar

1. Abra o arquivo `index.html` em um navegador
2. Navegue pelas páginas usando o menu
3. Teste o formulário de contato com validações
4. Experimente o filtro de produtos na página de informações
5. Redimensione a tela para ver o menu mobile

## 📋 Checklist de Funcionalidades

-   ✅ Menu mobile responsivo
-   ✅ Validação de formulário
-   ✅ Alertas de feedback
-   ✅ Interações na página de produtos
-   ✅ Animações suaves
-   ✅ Design responsivo
-   ✅ Acessibilidade básica

## 🎓 Conceitos de Programação Web Aplicados

Este projeto demonstra a aplicação prática de:

-   **Progressive Enhancement**: Funcionalidades básicas sem JavaScript
-   **Unobtrusive JavaScript**: JS não interfere na estrutura HTML
-   **Mobile First**: Design pensado primeiro para dispositivos móveis
-   **User Experience**: Feedback visual e interações intuitivas
-   **Performance**: Código otimizado e animações suaves
