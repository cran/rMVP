// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// getRow
NumericVector getRow(SEXP pBigMat, const int row);
RcppExport SEXP _rMVP_getRow(SEXP pBigMatSEXP, SEXP rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const int >::type row(rowSEXP);
    rcpp_result_gen = Rcpp::wrap(getRow(pBigMat, row));
    return rcpp_result_gen;
END_RCPP
}
// glm_c
SEXP glm_c(const arma::vec& y, const arma::mat& X, const arma::mat& iXX, SEXP pBigMat, const Nullable<arma::uvec> geno_ind, const Nullable<arma::uvec> marker_ind, const bool marker_bycol, const int step, const bool verbose, const int threads);
RcppExport SEXP _rMVP_glm_c(SEXP ySEXP, SEXP XSEXP, SEXP iXXSEXP, SEXP pBigMatSEXP, SEXP geno_indSEXP, SEXP marker_indSEXP, SEXP marker_bycolSEXP, SEXP stepSEXP, SEXP verboseSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type iXX(iXXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type geno_ind(geno_indSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type marker_ind(marker_indSEXP);
    Rcpp::traits::input_parameter< const bool >::type marker_bycol(marker_bycolSEXP);
    Rcpp::traits::input_parameter< const int >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(glm_c(y, X, iXX, pBigMat, geno_ind, marker_ind, marker_bycol, step, verbose, threads));
    return rcpp_result_gen;
END_RCPP
}
// mlm_c
SEXP mlm_c(const arma::vec& y, const arma::mat& X, const arma::mat& U, const double vgs, SEXP pBigMat, const Nullable<arma::uvec> geno_ind, const Nullable<arma::uvec> marker_ind, const bool marker_bycol, const int step, const bool verbose, const int threads);
RcppExport SEXP _rMVP_mlm_c(SEXP ySEXP, SEXP XSEXP, SEXP USEXP, SEXP vgsSEXP, SEXP pBigMatSEXP, SEXP geno_indSEXP, SEXP marker_indSEXP, SEXP marker_bycolSEXP, SEXP stepSEXP, SEXP verboseSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const double >::type vgs(vgsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type geno_ind(geno_indSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type marker_ind(marker_indSEXP);
    Rcpp::traits::input_parameter< const bool >::type marker_bycol(marker_bycolSEXP);
    Rcpp::traits::input_parameter< const int >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(mlm_c(y, X, U, vgs, pBigMat, geno_ind, marker_ind, marker_bycol, step, verbose, threads));
    return rcpp_result_gen;
END_RCPP
}
// vcf_parser_map
List vcf_parser_map(std::string vcf_file, std::string out);
RcppExport SEXP _rMVP_vcf_parser_map(SEXP vcf_fileSEXP, SEXP outSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcf_file(vcf_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type out(outSEXP);
    rcpp_result_gen = Rcpp::wrap(vcf_parser_map(vcf_file, out));
    return rcpp_result_gen;
END_RCPP
}
// vcf_parser_genotype
void vcf_parser_genotype(std::string vcf_file, SEXP pBigMat, long maxLine, int threads, bool verbose);
RcppExport SEXP _rMVP_vcf_parser_genotype(SEXP vcf_fileSEXP, SEXP pBigMatSEXP, SEXP maxLineSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type vcf_file(vcf_fileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< long >::type maxLine(maxLineSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    vcf_parser_genotype(vcf_file, pBigMat, maxLine, threads, verbose);
    return R_NilValue;
END_RCPP
}
// hapmap_parser_map
List hapmap_parser_map(std::string hmp_file, std::string out);
RcppExport SEXP _rMVP_hapmap_parser_map(SEXP hmp_fileSEXP, SEXP outSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type hmp_file(hmp_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type out(outSEXP);
    rcpp_result_gen = Rcpp::wrap(hapmap_parser_map(hmp_file, out));
    return rcpp_result_gen;
END_RCPP
}
// hapmap_parser_genotype
void hapmap_parser_genotype(std::string hmp_file, std::vector<std::string> Major, SEXP pBigMat, long maxLine, int threads, bool verbose);
RcppExport SEXP _rMVP_hapmap_parser_genotype(SEXP hmp_fileSEXP, SEXP MajorSEXP, SEXP pBigMatSEXP, SEXP maxLineSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type hmp_file(hmp_fileSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type Major(MajorSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< long >::type maxLine(maxLineSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    hapmap_parser_genotype(hmp_file, Major, pBigMat, maxLine, threads, verbose);
    return R_NilValue;
END_RCPP
}
// numeric_scan
List numeric_scan(std::string num_file);
RcppExport SEXP _rMVP_numeric_scan(SEXP num_fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type num_file(num_fileSEXP);
    rcpp_result_gen = Rcpp::wrap(numeric_scan(num_file));
    return rcpp_result_gen;
END_RCPP
}
// write_bfile
void write_bfile(SEXP pBigMat, std::string bed_file, bool mrkbycol, int threads, bool verbose);
RcppExport SEXP _rMVP_write_bfile(SEXP pBigMatSEXP, SEXP bed_fileSEXP, SEXP mrkbycolSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< std::string >::type bed_file(bed_fileSEXP);
    Rcpp::traits::input_parameter< bool >::type mrkbycol(mrkbycolSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    write_bfile(pBigMat, bed_file, mrkbycol, threads, verbose);
    return R_NilValue;
END_RCPP
}
// read_bfile
void read_bfile(std::string bed_file, SEXP pBigMat, long maxLine, int threads, bool verbose);
RcppExport SEXP _rMVP_read_bfile(SEXP bed_fileSEXP, SEXP pBigMatSEXP, SEXP maxLineSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type bed_file(bed_fileSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< long >::type maxLine(maxLineSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    read_bfile(bed_file, pBigMat, maxLine, threads, verbose);
    return R_NilValue;
END_RCPP
}
// fit_diago_brent
List fit_diago_brent(NumericVector Y, NumericMatrix X, IntegerVector p_, NumericVector Sigma, NumericMatrix U, double min_h2, double max_h2, double tol, double verbose);
RcppExport SEXP _rMVP_fit_diago_brent(SEXP YSEXP, SEXP XSEXP, SEXP p_SEXP, SEXP SigmaSEXP, SEXP USEXP, SEXP min_h2SEXP, SEXP max_h2SEXP, SEXP tolSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type p_(p_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type U(USEXP);
    Rcpp::traits::input_parameter< double >::type min_h2(min_h2SEXP);
    Rcpp::traits::input_parameter< double >::type max_h2(max_h2SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_diago_brent(Y, X, p_, Sigma, U, min_h2, max_h2, tol, verbose));
    return rcpp_result_gen;
END_RCPP
}
// crossprodcpp
SEXP crossprodcpp(SEXP X);
RcppExport SEXP _rMVP_crossprodcpp(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(crossprodcpp(X));
    return rcpp_result_gen;
END_RCPP
}
// geninv
SEXP geninv(SEXP GG);
RcppExport SEXP _rMVP_geninv(SEXP GGSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type GG(GGSEXP);
    rcpp_result_gen = Rcpp::wrap(geninv(GG));
    return rcpp_result_gen;
END_RCPP
}
// impute_marker
void impute_marker(SEXP pBigMat, bool mrkbycol, int threads, bool verbose);
RcppExport SEXP _rMVP_impute_marker(SEXP pBigMatSEXP, SEXP mrkbycolSEXP, SEXP threadsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< bool >::type mrkbycol(mrkbycolSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    impute_marker(pBigMat, mrkbycol, threads, verbose);
    return R_NilValue;
END_RCPP
}
// hasNA
bool hasNA(SEXP pBigMat, bool mrkbycol, const Nullable<arma::uvec> geno_ind, const Nullable<arma::uvec> marker_ind, const int threads);
RcppExport SEXP _rMVP_hasNA(SEXP pBigMatSEXP, SEXP mrkbycolSEXP, SEXP geno_indSEXP, SEXP marker_indSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< bool >::type mrkbycol(mrkbycolSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type geno_ind(geno_indSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type marker_ind(marker_indSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(hasNA(pBigMat, mrkbycol, geno_ind, marker_ind, threads));
    return rcpp_result_gen;
END_RCPP
}
// BigRowMean
arma::vec BigRowMean(SEXP pBigMat, bool marker_bycol, size_t step, int threads, const Nullable<arma::uvec> geno_ind, const bool verbose);
RcppExport SEXP _rMVP_BigRowMean(SEXP pBigMatSEXP, SEXP marker_bycolSEXP, SEXP stepSEXP, SEXP threadsSEXP, SEXP geno_indSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< bool >::type marker_bycol(marker_bycolSEXP);
    Rcpp::traits::input_parameter< size_t >::type step(stepSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type geno_ind(geno_indSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(BigRowMean(pBigMat, marker_bycol, step, threads, geno_ind, verbose));
    return rcpp_result_gen;
END_RCPP
}
// kin_cal
SEXP kin_cal(SEXP pBigMat, const Nullable<arma::uvec> geno_ind, const Nullable<arma::uvec> marker_ind, const Nullable<arma::vec> marker_freq, const bool marker_bycol, int threads, size_t step, bool mkl, bool verbose);
RcppExport SEXP _rMVP_kin_cal(SEXP pBigMatSEXP, SEXP geno_indSEXP, SEXP marker_indSEXP, SEXP marker_freqSEXP, SEXP marker_bycolSEXP, SEXP threadsSEXP, SEXP stepSEXP, SEXP mklSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pBigMat(pBigMatSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type geno_ind(geno_indSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::uvec> >::type marker_ind(marker_indSEXP);
    Rcpp::traits::input_parameter< const Nullable<arma::vec> >::type marker_freq(marker_freqSEXP);
    Rcpp::traits::input_parameter< const bool >::type marker_bycol(marker_bycolSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< size_t >::type step(stepSEXP);
    Rcpp::traits::input_parameter< bool >::type mkl(mklSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(kin_cal(pBigMat, geno_ind, marker_ind, marker_freq, marker_bycol, threads, step, mkl, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rMVP_getRow", (DL_FUNC) &_rMVP_getRow, 2},
    {"_rMVP_glm_c", (DL_FUNC) &_rMVP_glm_c, 10},
    {"_rMVP_mlm_c", (DL_FUNC) &_rMVP_mlm_c, 11},
    {"_rMVP_vcf_parser_map", (DL_FUNC) &_rMVP_vcf_parser_map, 2},
    {"_rMVP_vcf_parser_genotype", (DL_FUNC) &_rMVP_vcf_parser_genotype, 5},
    {"_rMVP_hapmap_parser_map", (DL_FUNC) &_rMVP_hapmap_parser_map, 2},
    {"_rMVP_hapmap_parser_genotype", (DL_FUNC) &_rMVP_hapmap_parser_genotype, 6},
    {"_rMVP_numeric_scan", (DL_FUNC) &_rMVP_numeric_scan, 1},
    {"_rMVP_write_bfile", (DL_FUNC) &_rMVP_write_bfile, 5},
    {"_rMVP_read_bfile", (DL_FUNC) &_rMVP_read_bfile, 5},
    {"_rMVP_fit_diago_brent", (DL_FUNC) &_rMVP_fit_diago_brent, 9},
    {"_rMVP_crossprodcpp", (DL_FUNC) &_rMVP_crossprodcpp, 1},
    {"_rMVP_geninv", (DL_FUNC) &_rMVP_geninv, 1},
    {"_rMVP_impute_marker", (DL_FUNC) &_rMVP_impute_marker, 4},
    {"_rMVP_hasNA", (DL_FUNC) &_rMVP_hasNA, 5},
    {"_rMVP_BigRowMean", (DL_FUNC) &_rMVP_BigRowMean, 6},
    {"_rMVP_kin_cal", (DL_FUNC) &_rMVP_kin_cal, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_rMVP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
