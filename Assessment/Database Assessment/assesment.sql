-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 23, 2023 at 08:18 AM
-- Server version: 10.4.28-MariaDB
-- PHP Version: 8.0.28

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `assesment`
--

-- --------------------------------------------------------

--
-- Table structure for table `accountholder`
--

CREATE TABLE `accountholder` (
  `account_holder_id` int(11) NOT NULL,
  `account_no` int(11) DEFAULT NULL,
  `account_holder_name` varchar(30) DEFAULT NULL,
  `city` varchar(30) DEFAULT NULL,
  `contact` varchar(30) DEFAULT NULL,
  `date_created` date DEFAULT NULL,
  `account_status` varchar(30) DEFAULT NULL,
  `account_type` varchar(30) DEFAULT NULL,
  `balance` decimal(10,2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `accountholder`
--

INSERT INTO `accountholder` (`account_holder_id`, `account_no`, `account_holder_name`, `city`, `contact`, `date_created`, `account_status`, `account_type`, `balance`) VALUES
(0, 81608, 'jay', 'amreli', '8160852926', '0000-00-00', 'services', 'saving', 50000.00),
(1, 95102, 'kirtan', 'surat', '9510232723', '0000-00-00', 'service', 'saving', 100000.00);

-- --------------------------------------------------------

--
-- Table structure for table `bank`
--

CREATE TABLE `bank` (
  `b_id` int(11) NOT NULL,
  `b_name` varchar(30) DEFAULT NULL,
  `b_city` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `bank`
--

INSERT INTO `bank` (`b_id`, `b_name`, `b_city`) VALUES
(1, 'kirtan', 'surat'),
(2, 'jay', 'amreli');

-- --------------------------------------------------------

--
-- Table structure for table `loan`
--

CREATE TABLE `loan` (
  `l_no` int(11) NOT NULL,
  `b_id` int(11) DEFAULT NULL,
  `account_holder_id` int(11) DEFAULT NULL,
  `l_amount` decimal(10,2) DEFAULT NULL,
  `l_type` varchar(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `loan`
--

INSERT INTO `loan` (`l_no`, `b_id`, `account_holder_id`, `l_amount`, `l_type`) VALUES
(123, 1, 1, 50000.00, 'home loan'),
(456, 2, 0, 40000.00, 'car loan');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `accountholder`
--
ALTER TABLE `accountholder`
  ADD PRIMARY KEY (`account_holder_id`);

--
-- Indexes for table `bank`
--
ALTER TABLE `bank`
  ADD PRIMARY KEY (`b_id`);

--
-- Indexes for table `loan`
--
ALTER TABLE `loan`
  ADD PRIMARY KEY (`l_no`),
  ADD KEY `b_id` (`b_id`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `loan`
--
ALTER TABLE `loan`
  ADD CONSTRAINT `loan_ibfk_1` FOREIGN KEY (`b_id`) REFERENCES `bank` (`b_id`),
  ADD CONSTRAINT `loan_ibfk_2` FOREIGN KEY (`b_id`) REFERENCES `bank` (`b_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
