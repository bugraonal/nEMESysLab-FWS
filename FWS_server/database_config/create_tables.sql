-- ALTER DATABASE FWS CHARACTER SET utf8mb4 collate utf8mb4_unicode_ci;

DROP TABLE IF EXISTS Appointments;
DROP TABLE IF EXISTS Users;
DROP TABLE IF EXISTS FPGA;
DROP TABLE IF EXISTS TimesOfDay;

CREATE TABLE Users(
  user_id INT UNIQUE NOT NULL AUTO_INCREMENT,
  user_name VARCHAR(20) NOT NULL,
  user_surname VARCHAR(20) NOT NULL,
  user_email VARCHAR(40) UNIQUE NOT NULL,
  user_password VARCHAR(64) NOT NULL, 
  user_type CHAR(1) NOT NULL, -- S for student, T for teacher
  PRIMARY KEY (user_id)
);

CREATE TABLE FPGA(
  fpga_id INT UNIQUE NOT NULL AUTO_INCREMENT,
  fpga_type VARCHAR(20) NOT NULL,
  fpga_ide CHAR(1) NOT NULL, -- I for ISE, V for Vivado
  PRIMARY KEY (fpga_id)
);

CREATE TABLE Appointments(
  user_id INT NOT NULL,
  fpga_id INT NOT NULL,
  appointment DATETIME NOT NULL,
  PRIMARY KEY (user_id, appointment),
  FOREIGN KEY (user_id) REFERENCES Users(user_id),
  FOREIGN KEY (fpga_id) REFERENCES FPGA(fpga_id)
);

CREATE TABLE TimesOfDay(
timeofday TIME UNIQUE NOT NULL,
PRIMARY KEY (timeofday)
);
