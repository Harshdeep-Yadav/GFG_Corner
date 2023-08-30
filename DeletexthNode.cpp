 if(x == 1){
         head = head->next;
     }
     int count  = 1 ;
     Node *start = head;
     // 1 2 3
     while(start->next != NULL){
         count += 1;
         if(count == x){
             start->next = start->next->next;
         }
         else{
             start = start->next;
         }
         
     }
     return head;
}