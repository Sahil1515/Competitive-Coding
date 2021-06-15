
void preorder(Node *root,vector<int> &vec,int *maxi,int count)
{       
    if(root!=NULL)
    {
        
        // cout<<"data "<<root->data<<"max"<<*maxi<<"count"<<count"\n";
        
        if(count>*maxi)
        vec.push_back(root->data),*maxi=max(*maxi,count);
        
        
        //    Pre-increment does not work

        // preorder(root->left,vec,maxi,count+1);
        // preorder(root->right,vec,maxi,count+1);


        preorder(root->left,vec,maxi,count+1);
        preorder(root->right,vec,maxi,count+1);
    }
}
vector<int> leftView(Node *root)
{
   // Your code here
    
    vector<int> vec;
    int maxi=0;
    
    preorder(root,vec,&maxi,1);
    
    return vec;
}













Update_Centre_ID
LevelMovement
Update-FOLK-Guide-Name-copy-test
update_dnd
calling_notification_to_bigquery






centre_id(string):	SENd3S7nHG231Ewj4OH
centre_name(string):	Bangalore, 560010

folk_id(string):	NV19W110607S



folk_level(string):	No Level 

guidance_level(string):	No Level

time_stamps(map)-->folk_guide(string):	1571555786// when info is given
time_stamps(map)-->origin(string):	1571555786
time_stamps(map)-->primary_info(string):1571555786



zone(string):	VCM


folk_guide(string):	VGND


source(maps) --> Zone(string):	VCM
source(maps) --> location(string):	Temple Desk
source(maps) --> campaign(string):	yoga_for_happiness
source(maps) --> referrer(string):	cGHgvv85qrbe16RDohXk
 

flags(maps)-->tertiary_data(string)	TRUE
address(map)-->stay(string)	Peenya 4th phase , Bengaluru
address(map)-->stay_map(string)	Peenya Industrial Gases Pvt Ltd 4th Phase



folk_dnd(map)-->calling_dnd(boolean):	FALSE
folk_dnd(map)-->messaging_dnd(boolean):	FALSE
folk_dnd(map)-->notify_dnd(boolean):	FALSE


Hi sir! Sahil here, FOLKDevelopers intern. Got your number from Mitank sir. First of all sorry for delay in form filling process.