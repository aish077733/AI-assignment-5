#include <stdio.h> 
struct Triple 
{ 
}; 
char subject[20]; 
char relation[20]; 
char object[20]; 
int main() 
{ 
struct Triple kg[3] = { 
{"Student","studies","AI"}, 
{"AI","uses","KnowledgeGraph"}, 
{"KnowledgeGraph","builtUsing","Neo4j"} 
}; 
int i; 
printf("=== Knowledge Graph ===\n\n"); 
for(i=0;i<3;i++) 
{ 
printf("%s --> %s --> %s\n", 
kg[i].subject, 
kg[i].relation, 
kg[i].object); 
} 
return 0; 
}
