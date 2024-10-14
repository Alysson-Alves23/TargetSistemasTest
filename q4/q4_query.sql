SELECT c.codigo, c.razao_social, t.telefone,e.nome
FROM Cliente c
         JOIN Telefone t ON c.codigo = t.id_cliente
         JOIN Estado e ON c.estado_id = e.id
