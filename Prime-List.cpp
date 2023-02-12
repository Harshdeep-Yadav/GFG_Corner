class Solution{
public:
    bool isPrime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    
    int nearestValue(int n){
        // if(isPrime(n)) return n;
        int i =1;
        while(1){
        if(isPrime(n-i)) 
            return n-i;
        if(isPrime(n+i))
            return n+i;   
        i++;
        }
        return 0;
    }
    
    Node *primeList(Node *head){
        Node*temp=head;
        while(temp){
            if(!isPrime(temp->val)){
                temp->val=nearestValue(temp->val);
            }
            temp=temp->next;
        }
        return head;
    }
};