
































    double Qf = af * Qp;
    double nf = Qf / qf;

    double Qt = (1 - af) * Qp;
    double nt = Qt / qt;

    int np_rounded = roundUp(np);
    int nf_rounded = roundUp(nf);
    int nt_rounded = roundUp(nt);

    cout << "\nРезультаты:" << endl;
    cout << "np (количество пельменей): " << np_rounded << endl;
    cout << "nf (количество фарша): " << nf_rounded << endl;
    cout << "nt (количество теста): " << nt_rounded << endl;

    return 0;
}