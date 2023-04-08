# Документирование JavaDoc

Документирование в стандарте JavaDoc является распространенным и используется также другими генераторами документации, в частности PhpDoc и Doxygen. Поэтому в данной теме мы рассматриваем форматирование JavaDoc.

Блок комментария JavaDoc определяется следующим образом:

```java
/**
 * Some domentation is placed here.
 * 
 */
```

В блоке комментария можно определять дескрипторы, которые описывают каким-либо образом последующий программный код. Существуют следующие дескрипторы:

| Дескриптор | Описание | Область применения |
| ---------- | -------- | ------------------ |
| __@author__ _Author Name_ | Автор | класс, интерфейс |
| __@version__ _version_ | Версия. Не более одного дескриптора на класс | класс, интерфейс |
| __@since__ _from version_ | Указывает, с какой версии доступно | класс, интерфейс, поле, метод |
| __@param__ _name description_ | Входной параметр метода | метод |
| __@return__ _description_ | Описание возвращаемого значения | метод |
| __@exception__ _classname description_ | Описание исключения, которое может быть послано из метода | класс, интерфейс, поле, метод |
| __@throws__ _classname description_ | Описание исключения, которое может быть послано из метода | класс, интерфейс, поле, метод |
| __@deprecated__ _description_ | Описание устаревших блоков кода | класс, интерфейс, поле, метод |
| {__@link__ _reference_} | Ссылка | класс, интерфейс, поле, метод |
| {__@value__ #_STATIC\_FIELD_} | Описание значения переменной | статичное поле |
| --- | --- | --- |

Пример документированного кода:

```php
<?php

/**
 * @author Unknown Author
 * @version 1.0.1
 * @copyright GPL, 2020
 */

/**
 * Simple PDO wrapper. Compatible with sqlite and MySQL.
 */
class database {

    public function __construct(string $dsn, ?string $login = null, ?string $password = null);

    /**
     * Close connection. After this queries are invalid and object recreating is obligatory.
     */
    public function close();

    /**
     * Common query method
     * @global string $site
     * @param string $query
     * @param string $error
     * @param bool $need_fetch
     * @return array
     */
    public function query_sql(string $query, string $error = "Error: ", bool $need_fetch = true): array;

    /**
     * Method for dump parsing and execution
     * @param string $dump
     */
    public function parse_sqldump(string $dump);

    /**
     * Simplified selection.
     * @param string $table
     * @param array $data enumerate columns for selection. Sample: ['id', 'name'].
     * @param array $where associative conditions.
     * @param array $limit definition sample: ['from' => '1', 'total' => '100'].
     * @return array
     */
    public function select(string $table, array $data = ['*'], array $where = [], array $limit = []): array;

    /**
     * Delete rows from table <b>$table</b>. Condition is required.
     * @param string $table
     * @param array $conditions
     * @return array
     */
    public function delete(string $table, array $conditions): array;

    /**
     * Update fields <b>$values</b> in table <b>$table</b>. <b>$values</b> and 
     * <b>$conditions</b> are required. 
     * @param string $table
     * @param array $values
     * @param array $conditions
     * @return array
     */
    public function update(string $table, array $values, array $conditions): array;

    /**
     * insert values in table and returns id.
     * @param string $table
     * @param array $values
     * @return int
     */
    public function insert(string $table, array $values): int;

    /**
     * Check if exists row with value(s) in table.
     * @param string $table
     * @param array $where
     * @return bool
     */
    public function exists(string $table, array $where): bool;

    /**
     * Select unique values from column.
     * @param string $table
     * @param string $column
     */
    public function unique_values(string $table, string $column): array;

    /**
     * Execute a query object.
     * @param query $query
     * @return array
     */
    public function exec(\mc\sql\query $query): array;
}
```