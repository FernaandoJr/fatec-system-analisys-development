### O que é um framework?

Um framework é um conjunto de ferramentas, bibliotecas e convenções que acelera o desenvolvimento, oferecendo uma base pronta e padronizada para resolver problemas recorrentes, para que você foque na regra de negócio em vez de reinventar o básico.

### Qual o esquema de layout que o Bootstrap utiliza como padrão?

O Bootstrap usa um sistema de grid responsivo de 12 colunas baseado em Flexbox.

### Qual a função dos Breakpoints?

Breakpoints são larguras de tela que definem a partir de quando o layout muda. Eles permitem aplicar estilos e distribuições diferentes para tamanhos de dispositivos distintos (mobile, tablet, desktop).

### Qual classe podemos utilizar para formatar um campo de texto?

Para campos de formulário (ex.: input de texto), utiliza-se a classe `form-control`.

### Quais as cores padrões disponibilizadas pelo Bootstrap?

- **primary**
- **secondary**
- **success**
- **danger**
- **warning**
- **info**
- **light**
- **dark**

### Qual a função da classe `.container`?

A classe `.container` centraliza o conteúdo e define larguras máximas responsivas com espaçamentos horizontais (gutters), servindo de contêiner para o grid. Para largura total da tela, usa-se `.container-fluid`.

### Layout: 2 linhas de 4 colunas (25%) e 50% no celular

Cada coluna ocupa 25% em telas médias para cima e 50% (meia largura) em telas muito pequenas/celulares. Use `col-6 col-md-3`:

```html
<div class="container">
  <div class="row">
    <div class="col-6 col-md-3">Coluna 1</div>
    <div class="col-6 col-md-3">Coluna 2</div>
    <div class="col-6 col-md-3">Coluna 3</div>
    <div class="col-6 col-md-3">Coluna 4</div>
  </div>

  <div class="row mt-3">
    <div class="col-6 col-md-3">Coluna 5</div>
    <div class="col-6 col-md-3">Coluna 6</div>
    <div class="col-6 col-md-3">Coluna 7</div>
    <div class="col-6 col-md-3">Coluna 8</div>
  </div>
</div>
```

