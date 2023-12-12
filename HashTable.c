#include "HashTable.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

HashTable *CreateHashTable(int tableSize)
{
    // 테이블 생성
    HashTable *table = (HashTable *)malloc(sizeof(HashTable));
    table->table = (Node *)malloc(sizeof(Node) * tableSize);

    memset(table->table, 0, sizeof(Node) * tableSize);

    table->tableSize = tableSize;
    table->occupiedCount = 0;

    return table;
}

void DestroyHashTable(HashTable *table)
{
    int i = 0;

    // 링크드 리스트 제거
    for (i = 0; i < table->tableSize; i++)
    {
        ClearNode(&(table->table[i]));
    }

    // 해시 테이블 제거
    free(table->table);
    free(table);
}

void ClearNode(Node *node)
{
    if (node->status == EMPTY)
    {
        return;
    }

    free(node->key);
    free(node->value);
}

int Hash(char *key, int keyLength, int tableSize)
{
    int i = 0;
    int value = 0;

    for (i = 0; i < keyLength; i++)
    {
        value = (value << 3) + key[i];
    }

    value = value % tableSize;

    return value;
}

int Hash2(char *key, int keyLength, int tableSize)
{
    int i = 0;
    int value = 0;

    for (i = 0; i < keyLength; i++)
    {
        value = (value << 2) + key[i];
    }

    value = value % (tableSize - 3);

    return value + 1;
}

char *GetValue(HashTable *table, char *key)
{
    int keyLength = strlen(key);
    int address = Hash(key, keyLength, table->tableSize);
    int stepSize = Hash2(key, keyLength, table->tableSize);

    while (table->table[address].status != EMPTY && strcmp(table->table[address].key, key) != 0)
    {
        address = (address + stepSize) & table->tableSize;
    }

    return table->table[address].value;
}

void Insert(HashTable **table, char *key, char *value)
{
    // keyLength : key길이, adress : 해싱한 주소, stepSize : 이동폭
    int keyLength, address, stepSize;

    // 재해싱 여부
    double usage;

    usage = (double)(*table)->occupiedCount / (*table)->tableSize;

    if (usage > 0.5)
    {
        Rehash(table);
    }

    keyLength = strlen(key);
    address = Hash(key, keyLength, (*table)->tableSize);
    stepSize = Hash2(key, keyLength, (*table)->tableSize);

    while ((*table)->table[address].status != EMPTY && strcmp((*table)->table[address].key, key) != 0)
    {
        printf("Collision Occured Key : [%s], Address : [%d], StepSize : [%d]\n", key, address, stepSize);

        // 데이터를 삽입할 주소 재탐색
        address = (address + stepSize) % (*table)->tableSize;
    }

    (*table)->table[address].key = (char *)malloc(sizeof(char) * (keyLength) + 1);
    strcpy((*table)->table[address].key, key);

    (*table)->table[address].value = (char *)malloc(sizeof(char) * (strlen(value) + 1));
    strcpy((*table)->table[address].value, value);

    (*table)->table[address].status = OCCUPIED;
    (*table)->occupiedCount++;

    printf("Key[%s] enter at address : [%d]\n", key, address);
}

void Rehash(HashTable **table)
{
    int i = 0;
    Node *oldTable = (*table)->table;

    // 새로운 테이블 생성
    HashTable *newTable = CreateHashTable((*table)->tableSize * 2);

    printf("\n Rehash. New Table Size is : %d\n\n", newTable->tableSize);

    // 이전의 해시 테이블 데이터를 새 해시 테이블 데이트로 이동
    for (i = 0; i < (*table)->tableSize; i++)
    {
        if (oldTable[i].status == OCCUPIED)
        {
            Insert(&newTable, oldTable[i].key, oldTable[i].value);
        }
    }

    // 이전의 해시 테이블 소멸
    DestroyHashTable((*table));

    // 기존 테이블에 새로운 해시 테이블 주소 대입
    (*table) = newTable;
}
