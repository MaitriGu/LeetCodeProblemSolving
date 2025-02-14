class ProductOfNumbers {
private:
    vector<int> preProduct;
    int count=0;
public:
    ProductOfNumbers() {
        preProduct.push_back(1);
        count=0;
    }
    
    void add(int num) {
       if(num==0){
        preProduct={1}; 
        count=0;
       }
       else{
        preProduct.push_back(preProduct[count]*num);
        count++;
       }
    }
    
    int getProduct(int k) {
        if(k>count)
        return 0;
        return preProduct[count]/preProduct[count-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */