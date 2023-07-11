-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 14, 2023 at 10:55 AM
-- Server version: 10.4.27-MariaDB
-- PHP Version: 8.0.25

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `kirtan`
--

-- --------------------------------------------------------

--
-- Table structure for table `t4customer`
--

CREATE TABLE `t4customer` (
  `CNM` int(11) NOT NULL,
  `Cname` varchar(20) DEFAULT NULL,
  `City` varchar(20) DEFAULT NULL,
  `Rating` int(11) DEFAULT NULL,
  `Sno` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `t4customer`
--

INSERT INTO `t4customer` (`CNM`, `Cname`, `City`, `Rating`, `Sno`) VALUES
(201, 'Hoffman', 'London', 100, 1001),
(202, 'Giovanne', 'Roe', 200, 1003),
(203, 'Liu', 'San Jose', 300, 1002),
(204, 'Grass', 'Barcelona', 100, 1002),
(206, 'Clemens', 'London', 300, 1007),
(207, 'Pereria', 'Roe', 100, 1004);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `t4customer`
--
ALTER TABLE `t4customer`
  ADD PRIMARY KEY (`CNM`),
  ADD KEY `Sno` (`Sno`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `t4customer`
--
ALTER TABLE `t4customer`
  ADD CONSTRAINT `t4customer_ibfk_1` FOREIGN KEY (`Sno`) REFERENCES `t4salesperson` (`Sno`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
