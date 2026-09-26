CREATE DATABASE IF NOT EXISTS guitarvibe;
USE guitarvibe;

-- =========================================
-- PESSOA
-- =========================================

CREATE TABLE Pessoa (
    id_pessoa INT PRIMARY KEY AUTO_INCREMENT,
    CPF VARCHAR(14) NOT NULL UNIQUE,
    RG VARCHAR(20) NOT NULL UNIQUE,
    primeiro_nome VARCHAR(50) NOT NULL,
    nome_meio VARCHAR(100),
    sobrenome VARCHAR(100) NOT NULL,
    data_nascimento DATE NOT NULL,
    email VARCHAR(150),
    telefone VARCHAR(20),
    rua VARCHAR(150),
    numero VARCHAR(10),
    bairro VARCHAR(100),
    cidade VARCHAR(100),
    estado VARCHAR(50),
    CEP VARCHAR(10)
);

-- =========================================
-- CLIENTE
-- =========================================

CREATE TABLE Cliente (
    id_cliente INT PRIMARY KEY AUTO_INCREMENT,
    id_pessoa INT NOT NULL UNIQUE,
    data_cadastro DATE NOT NULL,

    CONSTRAINT fk_cliente_pessoa
        FOREIGN KEY (id_pessoa)
        REFERENCES Pessoa(id_pessoa)
);

-- =========================================
-- FUNCIONARIO
-- =========================================

CREATE TABLE Funcionario (
    id_funcionario INT PRIMARY KEY AUTO_INCREMENT,
    id_pessoa INT NOT NULL UNIQUE,
    data_admissao DATE NOT NULL,
    salario DECIMAL(10,2) NOT NULL,
    tipo_funcionario VARCHAR(20) NOT NULL,

    CONSTRAINT fk_funcionario_pessoa
        FOREIGN KEY (id_pessoa)
        REFERENCES Pessoa(id_pessoa)
);

-- =========================================
-- ESPECIALIZAÇÃO DE FUNCIONARIO
-- =========================================

CREATE TABLE Gerente (
    id_funcionario INT PRIMARY KEY,

    CONSTRAINT fk_gerente_funcionario
        FOREIGN KEY (id_funcionario)
        REFERENCES Funcionario(id_funcionario)
);

CREATE TABLE Vendedor (
    id_funcionario INT PRIMARY KEY,

    CONSTRAINT fk_vendedor_funcionario
        FOREIGN KEY (id_funcionario)
        REFERENCES Funcionario(id_funcionario)
);

CREATE TABLE Tecnico (
    id_funcionario INT PRIMARY KEY,

    CONSTRAINT fk_tecnico_funcionario
        FOREIGN KEY (id_funcionario)
        REFERENCES Funcionario(id_funcionario)
);

-- Gerente supervisiona funcionários
ALTER TABLE Funcionario
ADD COLUMN id_gerente INT NULL;

ALTER TABLE Funcionario
ADD CONSTRAINT fk_funcionario_gerente
    FOREIGN KEY (id_gerente)
    REFERENCES Gerente(id_funcionario);

-- =========================================
-- FORNECEDOR
-- =========================================

CREATE TABLE Fornecedor (
    id_fornecedor INT PRIMARY KEY AUTO_INCREMENT,
    CNPJ VARCHAR(18) NOT NULL UNIQUE,
    razao_social VARCHAR(150) NOT NULL,
    nome_fantasia VARCHAR(150),
    telefone VARCHAR(20),
    email VARCHAR(150),
    rua VARCHAR(150),
    numero VARCHAR(10),
    bairro VARCHAR(100),
    cidade VARCHAR(100),
    estado VARCHAR(50),
    CEP VARCHAR(10)
);

-- =========================================
-- INSTRUMENTO
-- =========================================

CREATE TABLE Instrumento (
    id_instrumento INT PRIMARY KEY AUTO_INCREMENT,
    id_fornecedor INT NULL,
    marca VARCHAR(100) NOT NULL,
    tipo_especifico VARCHAR(100) NOT NULL,
    modelo VARCHAR(100) NOT NULL,
    cor VARCHAR(50),
    num_serie VARCHAR(100) NOT NULL UNIQUE,
    ano_fabricacao YEAR,
    estado_conservacao VARCHAR(100),
    preco DECIMAL(10,2) NOT NULL,
    data_entrada DATE NOT NULL,
    status VARCHAR(20) NOT NULL,
    tipo_instrumento VARCHAR(20) NOT NULL,

    CONSTRAINT fk_instrumento_fornecedor
        FOREIGN KEY (id_fornecedor)
        REFERENCES Fornecedor(id_fornecedor)
);

-- =========================================
-- ESPECIALIZAÇÃO DE INSTRUMENTO
-- =========================================

CREATE TABLE Cordas (
    id_instrumento INT PRIMARY KEY,
    num_cordas INT,
    tipo_encordoamento VARCHAR(100),
    marca_encordoamento VARCHAR(100),
    efeitos_embutidos VARCHAR(150),
    possui_captadores BOOLEAN,
    tipo_captadores VARCHAR(100),
    marca_captadores VARCHAR(100),

    CONSTRAINT fk_cordas_instrumento
        FOREIGN KEY (id_instrumento)
        REFERENCES Instrumento(id_instrumento)
);

CREATE TABLE Percussao (
    id_instrumento INT PRIMARY KEY,
    material VARCHAR(100),
    possui_pele BOOLEAN,
    material_pele VARCHAR(100),
    quantidade_tambores INT,

    CONSTRAINT fk_percussao_instrumento
        FOREIGN KEY (id_instrumento)
        REFERENCES Instrumento(id_instrumento)
);

CREATE TABLE Teclas (
    id_instrumento INT PRIMARY KEY,
    num_teclas INT,
    tipo_teclas VARCHAR(100),
    efeitos_embutidos VARCHAR(150),
    possui_pedais BOOLEAN,
    quantidade_pedais INT,

    CONSTRAINT fk_teclas_instrumento
        FOREIGN KEY (id_instrumento)
        REFERENCES Instrumento(id_instrumento)
);

-- =========================================
-- VENDA
-- =========================================

CREATE TABLE Venda (
    id_venda INT PRIMARY KEY AUTO_INCREMENT,
    id_cliente INT NOT NULL,
    id_vendedor INT NOT NULL,
    data_hora DATETIME NOT NULL,
    valor_total_itens DECIMAL(10,2) NOT NULL,
    desconto_total DECIMAL(10,2) NOT NULL,
    valor_final DECIMAL(10,2) NOT NULL,
    status VARCHAR(20) NOT NULL,

    CONSTRAINT fk_venda_cliente
        FOREIGN KEY (id_cliente)
        REFERENCES Cliente(id_cliente),

    CONSTRAINT fk_venda_vendedor
        FOREIGN KEY (id_vendedor)
        REFERENCES Vendedor(id_funcionario)
);

-- =========================================
-- ITEM DA VENDA
-- =========================================

CREATE TABLE ItemVenda (
    id_item_venda INT PRIMARY KEY AUTO_INCREMENT,
    id_venda INT NOT NULL,
    id_instrumento INT NOT NULL UNIQUE,
    preco DECIMAL(10,2) NOT NULL,
    desconto DECIMAL(10,2) NOT NULL,
    subtotal DECIMAL(10,2) NOT NULL,

    CONSTRAINT fk_item_venda
        FOREIGN KEY (id_venda)
        REFERENCES Venda(id_venda),

    CONSTRAINT fk_item_instrumento
        FOREIGN KEY (id_instrumento)
        REFERENCES Instrumento(id_instrumento)
);

-- =========================================
-- PAGAMENTO
-- =========================================

CREATE TABLE Pagamento (
    id_pagamento INT PRIMARY KEY AUTO_INCREMENT,
    id_venda INT NOT NULL UNIQUE,
    data_pagamento DATE NOT NULL,
    valor_pago DECIMAL(10,2) NOT NULL,
    forma_pagamento VARCHAR(50) NOT NULL,
    status VARCHAR(20) NOT NULL,

    CONSTRAINT fk_pagamento_venda
        FOREIGN KEY (id_venda)
        REFERENCES Venda(id_venda)
);

-- =========================================
-- NOTA FISCAL
-- =========================================

CREATE TABLE NotaFiscal (
    id_NF INT PRIMARY KEY AUTO_INCREMENT,
    id_venda INT NOT NULL UNIQUE,
    numero VARCHAR(50) NOT NULL,
    serie VARCHAR(20) NOT NULL,
    data_emissao DATE NOT NULL,
    chave_acesso VARCHAR(100) UNIQUE,
    valor_total DECIMAL(10,2) NOT NULL,

    CONSTRAINT fk_nota_venda
        FOREIGN KEY (id_venda)
        REFERENCES Venda(id_venda)
);

-- =========================================
-- GARANTIA
-- =========================================

CREATE TABLE Garantia (
    id_garantia INT PRIMARY KEY AUTO_INCREMENT,
    id_instrumento INT NOT NULL UNIQUE,
    data_inicio DATE NOT NULL,
    periodo_cobertura INT NOT NULL,
    data_termino DATE,
    status VARCHAR(30) NOT NULL,
    termos_condicoes TEXT,

    CONSTRAINT fk_garantia_instrumento
        FOREIGN KEY (id_instrumento)
        REFERENCES Instrumento(id_instrumento)
);

-- =========================================
-- COMPRA DE USADO
-- =========================================

CREATE TABLE CompraUsado (
    id_compra_usado INT PRIMARY KEY AUTO_INCREMENT,
    id_cliente INT NOT NULL,
    id_tecnico INT NOT NULL,
    id_instrumento INT NOT NULL UNIQUE,
    data_aquisicao DATE NOT NULL,
    valor_avaliado DECIMAL(10,2) NOT NULL,
    valor_pago DECIMAL(10,2) NOT NULL,
    forma_pagamento VARCHAR(50) NOT NULL,
    condicao_fisica VARCHAR(100),
    observacoes TEXT,
    status VARCHAR(30) NOT NULL,

    CONSTRAINT fk_compra_cliente
        FOREIGN KEY (id_cliente)
        REFERENCES Cliente(id_cliente),

    CONSTRAINT fk_compra_tecnico
        FOREIGN KEY (id_tecnico)
        REFERENCES Tecnico(id_funcionario),

    CONSTRAINT fk_compra_instrumento
        FOREIGN KEY (id_instrumento)
        REFERENCES Instrumento(id_instrumento)
);

-- =========================================
-- CONSIGNAÇÃO
-- =========================================

CREATE TABLE Consignacao (
    id_consignacao INT PRIMARY KEY AUTO_INCREMENT,
    id_cliente INT NOT NULL,
    id_instrumento INT NOT NULL UNIQUE,
    data_recebimento DATE NOT NULL,
    data_limite DATE NOT NULL,
    preco_venda DECIMAL(10,2) NOT NULL,
    percentual_comissao DECIMAL(5,2) NOT NULL,
    valor_comissao DECIMAL(10,2) NOT NULL,
    valor_repassado DECIMAL(10,2) NOT NULL,
    status VARCHAR(30) NOT NULL,

    CONSTRAINT fk_consignacao_cliente
        FOREIGN KEY (id_cliente)
        REFERENCES Cliente(id_cliente),

    CONSTRAINT fk_consignacao_instrumento
        FOREIGN KEY (id_instrumento)
        REFERENCES Instrumento(id_instrumento)
);