// 해시 테이블이 비어 있을 때 0, 비어 있지 않으면 1
enum ElementStatus
{
    EMPTY = 0,
    OCCUPIED = 1
};

typedef struct _Node
{
    char *key;
    char *value;

    enum ElementStatus status;
} Node;

typedef struct _HashTable
{
    int occupiedCount;
    int tableSize;

    Node *table;
} HashTable;

// 해시 테이블 생성
HashTable *CreateHashTable(int tableSize);

// 해시 테이블 소멸
void DestroyHashTable(HashTable *table);

// 노드 클리어
void ClearNode(Node *node);

// 이중 해싱
int Hash(char *key, int keyLength, int tableSize);
int Hash2(char *key, int keyLength, int tableSize);

// 주소 내에 데이터 확인
char *GetValue(HashTable *table, char *key);

// 데이터 삽입
void Insert(HashTable **table, char *key, char *value);

// 재해싱
void Rehash(HashTable **table);
