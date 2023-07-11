-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 14, 2023 at 09:59 AM
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
-- Table structure for table `t3emp`
--

CREATE TABLE `t3emp` (
  `Emp_id` int(11) DEFAULT NULL,
  `First_Name` varchar(20) DEFAULT NULL,
  `Last_Name` varchar(20) DEFAULT NULL,
  `Salary` int(11) DEFAULT NULL,
  `Joining_date` varchar(20) DEFAULT NULL,
  `Department` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `t3emp`
--

INSERT INTO `t3emp` (`Emp_id`, `First_Name`, `Last_Name`, `Salary`, `Joining_date`, `Department`) VALUES
(1, 'john', 'Abraham', 1000000, '01-JAN-13 12:00:00 A', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '01-JAN-13 12:00:00 A', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '01-FEB-13 12:00:00 A', 'Banking'),
(4, 'Tom', 'Jose', 600000, '01-FEB-13 12:00:00 A', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '01-FEB-13 12:00:00 A', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '01-FEB-13 12:00:00 A', 'Services'),
(7, 'TestName1', '123', 650000, '01-JAN-13 12:00:00 A', 'Services'),
(8, 'TestName2', 'Lname%', 600000, '01-FEB-13 12:00:00 A', 'Insurance');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
