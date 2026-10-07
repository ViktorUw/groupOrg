# GroupOrg

A Windows desktop application for organizing a group of people: members, events, duties and money collections. It was my first C++ project, built with **C++/CLI and Windows Forms** on top of a **MySQL** database.

## Features

- Create and manage **groups**
- Add **members** with personal data (name, e-mail, birth date, gender, phone, join date) and view their details
- Plan **events** with an end date and extra information; create, edit and delete them
- Assign **duties** to members for an event and mark them as completed
- Organize **collections** (e.g. fundraising) with a deadline

## Tech stack

- **C++/CLI** (.NET Framework 4.7.2), **Windows Forms**
- **MySQL** with **MySQL Connector/NET** (`MySql.Data`)
- Visual Studio 2022 (platform toolset v143)

## Database

The schema and sample data are in [`grouporg.sql`](grouporg.sql). Tables:

| Table | Purpose |
|---|---|
| `groups` | Groups |
| `members` | Group members |
| `events` | Events of a group |
| `idevent_idmember_duty` | Duties of members in events |
| `collects` | Collections with a deadline |

## Getting started

1. Install **Visual Studio 2022** with the *Desktop development with C++* workload and **C++/CLI support**.
2. Install **MySQL Server** (or XAMPP) and **MySQL Connector/NET**. The project references
   `C:\Program Files (x86)\MySQL\MySQL Connector NET 8.1.0\MySql.Data.dll`; update the reference if your version or path is different.
3. Create a database named `grouporg` and import the dump:
   ```bash
   mysql -u root -e "CREATE DATABASE grouporg"
   mysql -u root grouporg < grouporg.sql
   ```
4. The app connects to `localhost:3306` as `root` with an empty password. Change the connection string in the `.cpp` files if your setup differs.
5. Open `groupOrg.sln`, select the **x64** configuration and run the project.

A project presentation (in Polish) is included: `Prezentacja Proekt w C++.pptx`.

> The interface is in Polish.
