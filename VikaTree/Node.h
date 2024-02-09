#pragma once

struct Node
{
    char name[15];
	char lastName[15];
    char surname[15];
    char grade[3];

	Node* m_parent;

    Node* m_left;  
    Node* m_right;
	

    char* GetName();
    char* GetLastName();
    char* GetSurname();
    char* GetGrade();
};