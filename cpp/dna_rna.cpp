#include <iostream>
#include <string>

//Converts DNA to RNA and converts to codons - if STOP is met, then the loop stops


using namespace std;

int check(string codon) {

  if (codon == "AUG")  {

      cout << "MET-";
  }

  else if (codon == "GCU" || codon == "GCA" || codon == "GCG" || codon == "GCC") {

      cout << "ALA-";


  }

  else if (codon == "CGU" || codon == "CGC" || codon == "CGA" || codon == "CGG" || codon == "AGA" || codon == "AGG") {

      cout << "ARG-";

  }

  else if (codon == "AAU" || codon == "AAC") {

      cout << "ASN-";

  }

  else if (codon == "GAU" || codon == "GAC") {

      cout << "ASP-";

  }

  else if (codon == "UGU" || codon == "UGC") {

      cout << "CYS-";

  }

  else if (codon == "CAA" || codon == "CAG") {

      cout << "GLN-";

  }

  else if (codon == "GAA" || codon == "GAG") {

      cout << "GLU-";

  }

  else if (codon == "GGU" || codon == "GGC" || codon == "GGA" || codon == "GGG") {

      cout << "GLY-";

  }

  else if (codon == "CAU" || codon == "CAC") {

      cout << "HIS-";

  }

  else if (codon == "AUU" || codon == "AUC" || codon == "AUA") {

      cout << "ILE-";

  }

  else if (codon == "UUA" || codon == "UUG" || codon == "CUU" || codon == "CUC" || codon == "CUA" || codon == "CUG") {

      cout << "LEU-";

  }

  else if (codon == "AAA" || codon == "AAG") {

      cout << "LYS-";

  }

  else if (codon == "UUU" || codon == "UUC") {

      cout << "PHE-";

  }

  else if (codon == "CCU" || codon == "CCC" || codon == "CCA" || codon == "CCG") {

      cout << "PRO-";

  }

  else if (codon == "UCU" || codon == "UCC" || codon == "UCA" || codon == "UCG" || codon == "AGU" || codon == "AGC") {

      cout << "SER-";

  }

  else if (codon == "ACU" || codon == "ACC" || codon == "ACA" || codon == "ACG") {

      cout << "THR-";

  }

  else if (codon == "UGG") {

      cout << "TRP-";

  }

  else if (codon == "UAU" || codon == "UAC") {

      cout << "TYR-";


  }

  else if (codon == "GUU" || codon == "GUC" || codon == "GUA" || codon == "GUG") {

      cout << "VAL-";


  }



}

string generate_rna(string dna) {

  string mrna;

  int i = 0;

  while(i < dna.length()) {

    switch (dna[i]) {

      case 'A':
        mrna += 'A';
        break;
      case 'T':
        mrna += 'U';
        break;
      case 'G':
        mrna += 'G';
        break;
      case 'C':
        mrna += 'C';
        break;
      }

      i++;
  }

  return mrna;



}

void generate_codons(string rna) {

  int x = 0;
  int y = 0;

  string aug = "AUG";

  while (x < rna.length() / 3) {

      string codon = rna.substr(y, 3);

      if (codon == "UAA" || codon == "UGA" || codon == "UAG") {

        cout << "STOP ";
        break;

      }

      else {

        check(codon);

        y += 3;

      }


      x++;


  }

    cout << endl;

}


int main() {

  string q;

  string dna;
  string mrna;

  cout << "Enter your DNA strand: " << endl;
  cin >> dna;

  mrna = generate_rna(dna);

  cout << mrna << endl;

  generate_codons(mrna);


  return 0;

}
