-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1
-- Час створення: Січ 26 2024 р., 01:30
-- Версія сервера: 10.4.27-MariaDB
-- Версія PHP: 8.2.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- База даних: `grouporg`
--

-- --------------------------------------------------------

--
-- Структура таблиці `collects`
--

CREATE TABLE `collects` (
  `id_collect` int(11) NOT NULL,
  `collect_name` varchar(255) DEFAULT NULL,
  `end_date` date DEFAULT NULL,
  `id_group` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Структура таблиці `events`
--

CREATE TABLE `events` (
  `id_event` int(11) NOT NULL,
  `event_name` varchar(255) NOT NULL,
  `end_date` date DEFAULT NULL,
  `id_group` int(11) NOT NULL,
  `additional_information` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Структура таблиці `groups`
--

CREATE TABLE `groups` (
  `id` int(11) NOT NULL,
  `groupName` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Структура таблиці `idevent_idmember_duty`
--

CREATE TABLE `idevent_idmember_duty` (
  `idEvent` int(11) DEFAULT NULL,
  `idMember` int(11) DEFAULT NULL,
  `duty` varchar(255) DEFAULT NULL,
  `is_complited` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Структура таблиці `members`
--

CREATE TABLE `members` (
  `MemberID` int(11) NOT NULL,
  `GroupID` int(11) DEFAULT NULL,
  `FirstName` varchar(50) DEFAULT NULL,
  `LastName` varchar(50) DEFAULT NULL,
  `Email` varchar(100) DEFAULT NULL,
  `BirthDate` date DEFAULT NULL,
  `Gender` varchar(10) DEFAULT NULL,
  `PhoneNumber` varchar(15) DEFAULT NULL,
  `JoinDate` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Індекси збережених таблиць
--

--
-- Індекси таблиці `collects`
--
ALTER TABLE `collects`
  ADD PRIMARY KEY (`id_collect`),
  ADD KEY `id_group` (`id_group`);

--
-- Індекси таблиці `events`
--
ALTER TABLE `events`
  ADD PRIMARY KEY (`id_event`),
  ADD KEY `fk_id_group` (`id_group`);

--
-- Індекси таблиці `groups`
--
ALTER TABLE `groups`
  ADD PRIMARY KEY (`id`);

--
-- Індекси таблиці `idevent_idmember_duty`
--
ALTER TABLE `idevent_idmember_duty`
  ADD KEY `idevent_idmember_duty_1` (`idEvent`),
  ADD KEY `idevent_idmember_duty_2` (`idMember`);

--
-- Індекси таблиці `members`
--
ALTER TABLE `members`
  ADD PRIMARY KEY (`MemberID`),
  ADD KEY `fk_members_group` (`GroupID`);

--
-- AUTO_INCREMENT для збережених таблиць
--

--
-- AUTO_INCREMENT для таблиці `collects`
--
ALTER TABLE `collects`
  MODIFY `id_collect` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT для таблиці `events`
--
ALTER TABLE `events`
  MODIFY `id_event` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=355;

--
-- AUTO_INCREMENT для таблиці `groups`
--
ALTER TABLE `groups`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=313;

--
-- AUTO_INCREMENT для таблиці `members`
--
ALTER TABLE `members`
  MODIFY `MemberID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=183;

--
-- Обмеження зовнішнього ключа збережених таблиць
--

--
-- Обмеження зовнішнього ключа таблиці `collects`
--
ALTER TABLE `collects`
  ADD CONSTRAINT `collects_ibfk_1` FOREIGN KEY (`id_group`) REFERENCES `groups` (`id`);

--
-- Обмеження зовнішнього ключа таблиці `events`
--
ALTER TABLE `events`
  ADD CONSTRAINT `events_ibfk_1` FOREIGN KEY (`id_group`) REFERENCES `groups` (`id`),
  ADD CONSTRAINT `fk_id_group` FOREIGN KEY (`id_group`) REFERENCES `groups` (`id`) ON DELETE CASCADE;

--
-- Обмеження зовнішнього ключа таблиці `idevent_idmember_duty`
--
ALTER TABLE `idevent_idmember_duty`
  ADD CONSTRAINT `idevent_idmember_duty_1` FOREIGN KEY (`idEvent`) REFERENCES `events` (`id_event`) ON DELETE CASCADE,
  ADD CONSTRAINT `idevent_idmember_duty_2` FOREIGN KEY (`idMember`) REFERENCES `members` (`MemberID`) ON DELETE CASCADE,
  ADD CONSTRAINT `idevent_idmember_duty_ibfk_1` FOREIGN KEY (`idEvent`) REFERENCES `events` (`id_event`),
  ADD CONSTRAINT `idevent_idmember_duty_ibfk_2` FOREIGN KEY (`idMember`) REFERENCES `members` (`MemberID`);

--
-- Обмеження зовнішнього ключа таблиці `members`
--
ALTER TABLE `members`
  ADD CONSTRAINT `fk_members_group` FOREIGN KEY (`GroupID`) REFERENCES `groups` (`id`) ON DELETE CASCADE,
  ADD CONSTRAINT `members_ibfk_1` FOREIGN KEY (`GroupID`) REFERENCES `groups` (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
