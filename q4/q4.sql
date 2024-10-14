
PRAGMA foreign_keys = ON;

CREATE TABLE Estado (
    id INTEGER PRIMARY KEY,
    nome VARCHAR
);


CREATE TABLE Telefone_Tipo (
    id INTEGER PRIMARY KEY,
    nome VARCHAR
);


CREATE TABLE Cliente (
    codigo INTEGER PRIMARY KEY,
    razao_social VARCHAR,
    estado_id INTEGER,
    FOREIGN KEY (estado_id) REFERENCES Estado(id)
);


CREATE TABLE Telefone (
    telefone VARCHAR,
    id_cliente INTEGER PRIMARY KEY,
    id_tipo INTEGER,
    FOREIGN KEY (id_cliente) REFERENCES Cliente(codigo),
    FOREIGN KEY (id_tipo) REFERENCES Telefone_Tipo(id)
);

INSERT INTO Estado (id, nome) VALUES (1, 'São Paulo');
INSERT INTO Estado (id, nome) VALUES (2, 'Rio de Janeiro');
INSERT INTO Estado (id, nome) VALUES (3, 'Bahia');

INSERT INTO Telefone_Tipo (id, nome) VALUES (1, 'Residencial');
INSERT INTO Telefone_Tipo (id, nome) VALUES (2, 'Celular');
INSERT INTO Telefone_Tipo (id, nome) VALUES (3, 'Comercial');

INSERT INTO Cliente (codigo, razao_social, estado_id) VALUES (1, 'Empresa A', 1);
INSERT INTO Cliente (codigo, razao_social, estado_id) VALUES (2, 'Empresa B', 2);
INSERT INTO Cliente (codigo, razao_social, estado_id) VALUES (3, 'Empresa C', 3);

INSERT INTO Telefone (telefone, id_cliente, id_tipo) VALUES ('(11) 1234-5678', 1, 1);
INSERT INTO Telefone (telefone, id_cliente, id_tipo) VALUES ('(21) 9876-5432', 2, 2);
INSERT INTO Telefone (telefone, id_cliente, id_tipo) VALUES ('(71) 2345-6789', 3, 3);