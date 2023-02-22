Node* mergeList(Node* list1, Node* list2) 
    {
        if(list1==NULL)
        {
            return list2;
        }
        
        if(list2==NULL)
        {
            return list1;
        }
        
        Node*ptr=list1;
        if(list1->data>list2->data)
        {
            ptr =list2;
            list2=list2->bottom;
        }
        else
        {
            list1=list1->bottom;    
        }
        
        Node*curr=ptr;
//         jab tak koi list nuLL tak na pahuch jaye 
        while(list1!=NULL&&list2!=NULL)
        {
            if(list1->data<list2->data)
            {
                curr->bottom=list1;
                list1=list1->bottom;
            }
            else
            {
                 curr->bottom = list2;
                list2 = list2 -> bottom;    
            }
            curr=curr->bottom;
        }
        // adding remaining elements of bigger list.
        if(!list1)
            curr -> bottom = list2;
        else
            curr -> bottom = list1;
            
        return ptr;
}

Node *flatten(Node *root)
{
    // base case 
    if(root==NULL) return NULL;
    if(root->next==NULL) return root;
    return mergeList(root,flatten(root->next));
}

