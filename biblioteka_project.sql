-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Czas generowania: 25 Paź 2022, 09:06
-- Wersja serwera: 10.4.25-MariaDB
-- Wersja PHP: 8.1.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `biblioteka project`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `admin`
--

CREATE TABLE `admin` (
  `admin-id` int(11) NOT NULL,
  `first-name` text NOT NULL,
  `last-name` text NOT NULL,
  `login` text NOT NULL,
  `password` text NOT NULL,
  `last-active-time` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `bibliotekarz`
--

CREATE TABLE `bibliotekarz` (
  `bibliotekarz-id` int(11) NOT NULL,
  `first-name` text NOT NULL,
  `last-name` text NOT NULL,
  `work-since-date` date NOT NULL,
  `salary` int(11) NOT NULL,
  `floor` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Zrzut danych tabeli `bibliotekarz`
--

INSERT INTO `bibliotekarz` (`bibliotekarz-id`, `first-name`, `last-name`, `work-since-date`, `salary`, `floor`) VALUES
(1, 'Alfreds ', 'Futterkiste', '2013-07-23', 1300, 1),
(2, 'Patricio ', 'Simpson', '2002-04-29', 2500, 2),
(3, 'Yang', 'Wang', '2019-01-31', 900, 1),
(4, 'Ann ', 'Devon', '2014-03-12', 1100, 2);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `czytelnik`
--

CREATE TABLE `czytelnik` (
  `user-id` int(11) NOT NULL,
  `name` text NOT NULL,
  `lastname` text NOT NULL,
  `login` text NOT NULL,
  `password` text NOT NULL,
  `orders-number` int(4) NOT NULL,
  `book-id` int(4) NOT NULL,
  `last-order-date` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Zrzut danych tabeli `czytelnik`
--

INSERT INTO `czytelnik` (`user-id`, `name`, `lastname`, `login`, `password`, `orders-number`, `book-id`, `last-order-date`) VALUES
(1, 'Howard', 'Snyder', 'howarrdsnyder2002M', 'qYehHowwardSnyyyder1', 2, 3, '2022-10-18'),
(2, 'Helen', 'Bennett', 'bennettthebest', 'holaammmhelen14', 0, 0, '0000-00-00'),
(3, 'John', 'Steel', 'SteelSteelJohn', 'thesteeleststeel999', 1, 5, '2018-10-10'),
(4, 'Jaime', 'Yorres', 'Y0reS1993', '1YqGwMtaOres1', 8, 2, '2022-10-21'),
(5, 'Giovanni', 'Rovelli', 'rovelliitalygiovanni', 'giovanniauditore2022', 1, 6, '2022-08-05');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `kategoria`
--

CREATE TABLE `kategoria` (
  `category-id` int(11) NOT NULL,
  `book-genre` text NOT NULL,
  `genre-number` int(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `ksiazka`
--

CREATE TABLE `ksiazka` (
  `book-id` int(11) NOT NULL,
  `book-full-name` text NOT NULL,
  `book-genre` text NOT NULL,
  `category-id` int(4) NOT NULL,
  `available` int(1) NOT NULL,
  `last-order-date` date NOT NULL,
  `place-floor` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Zrzut danych tabeli `ksiazka`
--

INSERT INTO `ksiazka` (`book-id`, `book-full-name`, `book-genre`, `category-id`, `available`, `last-order-date`, `place-floor`) VALUES
(1, 'In Search of Lost Time by Marcel Proust', '', 0, 1, '2019-06-03', 2),
(2, 'Ulysses by James Joyce', '', 0, 0, '2022-10-21', 1),
(3, 'Don Quixote by Miguel de Cervantes', '', 0, 0, '2022-10-18', 2),
(4, 'One Hundred Years of Solitude by Gabriel Garcia Marquez', '', 0, 1, '2017-09-20', 1),
(5, 'The Great Gatsby by F. Scott Fitzgerald', '', 0, 0, '2018-10-10', 1),
(6, 'Moby Dick by Herman Melville', '', 0, 0, '2022-08-05', 2);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `zamowienie`
--

CREATE TABLE `zamowienie` (
  `order-id` int(4) NOT NULL,
  `book-id` int(4) NOT NULL,
  `book-genre` int(255) NOT NULL,
  `category-id` int(4) NOT NULL,
  `order-date` date NOT NULL,
  `price` int(8) NOT NULL,
  `place-floor` int(11) NOT NULL,
  `user-id` int(4) NOT NULL,
  `bibliotekarz-id` int(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `admin`
--
ALTER TABLE `admin`
  ADD PRIMARY KEY (`admin-id`);

--
-- Indeksy dla tabeli `bibliotekarz`
--
ALTER TABLE `bibliotekarz`
  ADD PRIMARY KEY (`bibliotekarz-id`);

--
-- Indeksy dla tabeli `czytelnik`
--
ALTER TABLE `czytelnik`
  ADD PRIMARY KEY (`user-id`);

--
-- Indeksy dla tabeli `kategoria`
--
ALTER TABLE `kategoria`
  ADD PRIMARY KEY (`category-id`);

--
-- Indeksy dla tabeli `ksiazka`
--
ALTER TABLE `ksiazka`
  ADD PRIMARY KEY (`book-id`);

--
-- Indeksy dla tabeli `zamowienie`
--
ALTER TABLE `zamowienie`
  ADD PRIMARY KEY (`order-id`);

--
-- AUTO_INCREMENT dla zrzuconych tabel
--

--
-- AUTO_INCREMENT dla tabeli `admin`
--
ALTER TABLE `admin`
  MODIFY `admin-id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT dla tabeli `bibliotekarz`
--
ALTER TABLE `bibliotekarz`
  MODIFY `bibliotekarz-id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT dla tabeli `czytelnik`
--
ALTER TABLE `czytelnik`
  MODIFY `user-id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT dla tabeli `kategoria`
--
ALTER TABLE `kategoria`
  MODIFY `category-id` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT dla tabeli `ksiazka`
--
ALTER TABLE `ksiazka`
  MODIFY `book-id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- AUTO_INCREMENT dla tabeli `zamowienie`
--
ALTER TABLE `zamowienie`
  MODIFY `order-id` int(4) NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
