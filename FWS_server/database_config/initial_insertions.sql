INSERT INTO Users 
(user_name, user_surname, user_email, user_password, user_type)
VALUES
("Cengiz Emre", "Dedeağaç", "emre.dedeagac@ozu.edu.tr", SHA("123465"), 'S');

INSERT INTO Users 
(user_name, user_surname, user_email, user_password, user_type)
VALUES
("Buğra", "Önal", "bugra.onal@ozu.edu.tr", SHA("564321"), 'S');

INSERT INTO FPGA 
(fpga_type, fpga_ide)
VALUES
("Basys2", 'I');
