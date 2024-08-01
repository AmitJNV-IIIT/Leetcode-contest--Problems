class Solution {
    public int countSeniors(String[] details) {
        int s=0;
        for(String i:details){
            char t=i.charAt(11);
            char o=i.charAt(12);
            if(t>'6' ||(t=='6' && o> '0'))
            s++;
        }return s;
    }
}