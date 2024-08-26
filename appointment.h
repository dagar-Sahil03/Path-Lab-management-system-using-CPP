  void showlist1();
    void showlist2();
  void test_list(){
    system("cls");
    int choice;
  cout<<"\n*************************We are here to help you.*************************";
  cout<<"\n Here you can choose your test by two type";
    cout<<"\n 1. Test by organ";
    cout<<"\n 2. Test by condition";
    cout<<"\n enter your choice: ";
    cin>>choice;
  
    switch(choice){
            case 1:
            showlist1();
            break;
            case 2:
            showlist2();
            break;
            default:
            cout<<"Please select from the given options.";
            system("cls");
            test_list();
            }
 }
 void showlist1(){
  cout<<"\n1. Heart test";
  cout<<"\n2. Liver test";
  cout<<"\n3. Lungs test";
  cout<<"\n4. Infertiflity";
  cout<<"\n5. Diabetes";
  cout<<"\n6. Kidney";
  cout<<endl;
  system("pause");
 }
 void showlist2(){
  cout<<"\n1. Allergy";
  cout<<"\n2. Diabetes";
  cout<<"\n3. HIV";
  cout<<"\n4. Viral infections";
  cout<<"\n5. Fever";
  cout<<"\n6. Heart diseases";
  cout<<"\n7. Hypertension";
  cout<<"\n8. Infertility";
  cout<<endl;
  system("pause");
 }
