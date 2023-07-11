-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 14, 2023 at 10:39 AM
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
-- Table structure for table `t4salesperson`
--

CREATE TABLE `t4salesperson` (
  `Sno` int(11) NOT NULL,
  `Sname` varchar(20) DEFAULT NULL,
  `City` varchar(20) DEFAULT NULL,
  `Comm` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `t4salesperson`
--

INSERT INTO `t4salesperson` (`Sno`, `Sname`, `City`, `Comm`) VALUES
(1001, 'Peel', 'London', '.12'),
(1002, 'Serres', 'San jose', '.13'),
(1003, 'Axelrod', 'New York', '.1'),
(1004, 'Motika', 'London', '.11'),
(1007, 'Rafkin', 'Barcelona', '.15');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `t4salesperson`
--
ALTER TABLE `t4salesperson`
  ADD PRIMARY KEY (`Sno`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
