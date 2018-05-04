/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 5011:  /* atomic_bit_test_and_complementdi_1 */
    case 5010:  /* atomic_bit_test_and_complementsi_1 */
    case 5009:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 5014:  /* atomic_bit_test_and_resetdi_1 */
    case 5013:  /* atomic_bit_test_and_resetsi_1 */
    case 5012:  /* atomic_bit_test_and_resethi_1 */
    case 5008:  /* atomic_bit_test_and_setdi_1 */
    case 5007:  /* atomic_bit_test_and_setsi_1 */
    case 5006:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5005:  /* atomic_xordi */
    case 5004:  /* atomic_ordi */
    case 5003:  /* atomic_anddi */
    case 5002:  /* atomic_xorsi */
    case 5001:  /* atomic_orsi */
    case 5000:  /* atomic_andsi */
    case 4999:  /* atomic_xorhi */
    case 4998:  /* atomic_orhi */
    case 4997:  /* atomic_andhi */
    case 4996:  /* atomic_xorqi */
    case 4995:  /* atomic_orqi */
    case 4994:  /* atomic_andqi */
    case 4993:  /* atomic_subdi */
    case 4992:  /* atomic_subsi */
    case 4991:  /* atomic_subhi */
    case 4990:  /* atomic_subqi */
    case 4989:  /* atomic_adddi */
    case 4988:  /* atomic_addsi */
    case 4987:  /* atomic_addhi */
    case 4986:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4985:  /* atomic_exchangedi */
    case 4984:  /* atomic_exchangesi */
    case 4983:  /* atomic_exchangehi */
    case 4982:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4981:  /* *atomic_fetch_add_cmpdi */
    case 4980:  /* *atomic_fetch_add_cmpsi */
    case 4979:  /* *atomic_fetch_add_cmphi */
    case 4978:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 4977:  /* atomic_fetch_adddi */
    case 4976:  /* atomic_fetch_addsi */
    case 4975:  /* atomic_fetch_addhi */
    case 4974:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 4973:  /* atomic_compare_and_swapdi_1 */
    case 4972:  /* atomic_compare_and_swapsi_1 */
    case 4971:  /* atomic_compare_and_swaphi_1 */
    case 4970:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4969:  /* atomic_compare_and_swapti_doubleword */
    case 4968:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4957:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4834:  /* avx512dq_vmfpclassv2df */
    case 4833:  /* avx512dq_vmfpclassv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 4788:  /* avx512vl_compressstorev2df_mask */
    case 4787:  /* avx512vl_compressstorev2di_mask */
    case 4786:  /* avx512vl_compressstorev4sf_mask */
    case 4785:  /* avx512vl_compressstorev4si_mask */
    case 4784:  /* avx512vl_compressstorev4df_mask */
    case 4783:  /* avx512vl_compressstorev4di_mask */
    case 4782:  /* avx512vl_compressstorev8sf_mask */
    case 4781:  /* avx512vl_compressstorev8si_mask */
    case 4780:  /* avx512f_compressstorev8df_mask */
    case 4779:  /* avx512f_compressstorev8di_mask */
    case 4778:  /* avx512f_compressstorev16sf_mask */
    case 4777:  /* avx512f_compressstorev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4764:  /* *avx512f_scatterdiv2df */
    case 4763:  /* *avx512f_scatterdiv2df */
    case 4762:  /* *avx512f_scatterdiv2di */
    case 4761:  /* *avx512f_scatterdiv2di */
    case 4760:  /* *avx512f_scatterdiv4sf */
    case 4759:  /* *avx512f_scatterdiv4sf */
    case 4758:  /* *avx512f_scatterdiv4si */
    case 4757:  /* *avx512f_scatterdiv4si */
    case 4756:  /* *avx512f_scatterdiv4df */
    case 4755:  /* *avx512f_scatterdiv4df */
    case 4754:  /* *avx512f_scatterdiv4di */
    case 4753:  /* *avx512f_scatterdiv4di */
    case 4752:  /* *avx512f_scatterdiv8sf */
    case 4751:  /* *avx512f_scatterdiv8sf */
    case 4750:  /* *avx512f_scatterdiv8si */
    case 4749:  /* *avx512f_scatterdiv8si */
    case 4748:  /* *avx512f_scatterdiv8df */
    case 4747:  /* *avx512f_scatterdiv8df */
    case 4746:  /* *avx512f_scatterdiv8di */
    case 4745:  /* *avx512f_scatterdiv8di */
    case 4744:  /* *avx512f_scatterdiv16sf */
    case 4743:  /* *avx512f_scatterdiv16sf */
    case 4742:  /* *avx512f_scatterdiv16si */
    case 4741:  /* *avx512f_scatterdiv16si */
    case 4740:  /* *avx512f_scattersiv2df */
    case 4739:  /* *avx512f_scattersiv2df */
    case 4738:  /* *avx512f_scattersiv2di */
    case 4737:  /* *avx512f_scattersiv2di */
    case 4736:  /* *avx512f_scattersiv4sf */
    case 4735:  /* *avx512f_scattersiv4sf */
    case 4734:  /* *avx512f_scattersiv4si */
    case 4733:  /* *avx512f_scattersiv4si */
    case 4732:  /* *avx512f_scattersiv4df */
    case 4731:  /* *avx512f_scattersiv4df */
    case 4730:  /* *avx512f_scattersiv4di */
    case 4729:  /* *avx512f_scattersiv4di */
    case 4728:  /* *avx512f_scattersiv8sf */
    case 4727:  /* *avx512f_scattersiv8sf */
    case 4726:  /* *avx512f_scattersiv8si */
    case 4725:  /* *avx512f_scattersiv8si */
    case 4724:  /* *avx512f_scattersiv8df */
    case 4723:  /* *avx512f_scattersiv8df */
    case 4722:  /* *avx512f_scattersiv8di */
    case 4721:  /* *avx512f_scattersiv8di */
    case 4720:  /* *avx512f_scattersiv16sf */
    case 4719:  /* *avx512f_scattersiv16sf */
    case 4718:  /* *avx512f_scattersiv16si */
    case 4717:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 4716:  /* *avx512f_gatherdiv2df_2 */
    case 4715:  /* *avx512f_gatherdiv2df_2 */
    case 4714:  /* *avx512f_gatherdiv2di_2 */
    case 4713:  /* *avx512f_gatherdiv2di_2 */
    case 4712:  /* *avx512f_gatherdiv4sf_2 */
    case 4711:  /* *avx512f_gatherdiv4sf_2 */
    case 4710:  /* *avx512f_gatherdiv4si_2 */
    case 4709:  /* *avx512f_gatherdiv4si_2 */
    case 4708:  /* *avx512f_gatherdiv4df_2 */
    case 4707:  /* *avx512f_gatherdiv4df_2 */
    case 4706:  /* *avx512f_gatherdiv4di_2 */
    case 4705:  /* *avx512f_gatherdiv4di_2 */
    case 4704:  /* *avx512f_gatherdiv8sf_2 */
    case 4703:  /* *avx512f_gatherdiv8sf_2 */
    case 4702:  /* *avx512f_gatherdiv8si_2 */
    case 4701:  /* *avx512f_gatherdiv8si_2 */
    case 4700:  /* *avx512f_gatherdiv8df_2 */
    case 4699:  /* *avx512f_gatherdiv8df_2 */
    case 4698:  /* *avx512f_gatherdiv8di_2 */
    case 4697:  /* *avx512f_gatherdiv8di_2 */
    case 4696:  /* *avx512f_gatherdiv16sf_2 */
    case 4695:  /* *avx512f_gatherdiv16sf_2 */
    case 4694:  /* *avx512f_gatherdiv16si_2 */
    case 4693:  /* *avx512f_gatherdiv16si_2 */
    case 4668:  /* *avx512f_gathersiv2df_2 */
    case 4667:  /* *avx512f_gathersiv2df_2 */
    case 4666:  /* *avx512f_gathersiv2di_2 */
    case 4665:  /* *avx512f_gathersiv2di_2 */
    case 4664:  /* *avx512f_gathersiv4sf_2 */
    case 4663:  /* *avx512f_gathersiv4sf_2 */
    case 4662:  /* *avx512f_gathersiv4si_2 */
    case 4661:  /* *avx512f_gathersiv4si_2 */
    case 4660:  /* *avx512f_gathersiv4df_2 */
    case 4659:  /* *avx512f_gathersiv4df_2 */
    case 4658:  /* *avx512f_gathersiv4di_2 */
    case 4657:  /* *avx512f_gathersiv4di_2 */
    case 4656:  /* *avx512f_gathersiv8sf_2 */
    case 4655:  /* *avx512f_gathersiv8sf_2 */
    case 4654:  /* *avx512f_gathersiv8si_2 */
    case 4653:  /* *avx512f_gathersiv8si_2 */
    case 4652:  /* *avx512f_gathersiv8df_2 */
    case 4651:  /* *avx512f_gathersiv8df_2 */
    case 4650:  /* *avx512f_gathersiv8di_2 */
    case 4649:  /* *avx512f_gathersiv8di_2 */
    case 4648:  /* *avx512f_gathersiv16sf_2 */
    case 4647:  /* *avx512f_gathersiv16sf_2 */
    case 4646:  /* *avx512f_gathersiv16si_2 */
    case 4645:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4692:  /* *avx512f_gatherdiv2df */
    case 4691:  /* *avx512f_gatherdiv2df */
    case 4690:  /* *avx512f_gatherdiv2di */
    case 4689:  /* *avx512f_gatherdiv2di */
    case 4688:  /* *avx512f_gatherdiv4sf */
    case 4687:  /* *avx512f_gatherdiv4sf */
    case 4686:  /* *avx512f_gatherdiv4si */
    case 4685:  /* *avx512f_gatherdiv4si */
    case 4684:  /* *avx512f_gatherdiv4df */
    case 4683:  /* *avx512f_gatherdiv4df */
    case 4682:  /* *avx512f_gatherdiv4di */
    case 4681:  /* *avx512f_gatherdiv4di */
    case 4680:  /* *avx512f_gatherdiv8sf */
    case 4679:  /* *avx512f_gatherdiv8sf */
    case 4678:  /* *avx512f_gatherdiv8si */
    case 4677:  /* *avx512f_gatherdiv8si */
    case 4676:  /* *avx512f_gatherdiv8df */
    case 4675:  /* *avx512f_gatherdiv8df */
    case 4674:  /* *avx512f_gatherdiv8di */
    case 4673:  /* *avx512f_gatherdiv8di */
    case 4672:  /* *avx512f_gatherdiv16sf */
    case 4671:  /* *avx512f_gatherdiv16sf */
    case 4670:  /* *avx512f_gatherdiv16si */
    case 4669:  /* *avx512f_gatherdiv16si */
    case 4644:  /* *avx512f_gathersiv2df */
    case 4643:  /* *avx512f_gathersiv2df */
    case 4642:  /* *avx512f_gathersiv2di */
    case 4641:  /* *avx512f_gathersiv2di */
    case 4640:  /* *avx512f_gathersiv4sf */
    case 4639:  /* *avx512f_gathersiv4sf */
    case 4638:  /* *avx512f_gathersiv4si */
    case 4637:  /* *avx512f_gathersiv4si */
    case 4636:  /* *avx512f_gathersiv4df */
    case 4635:  /* *avx512f_gathersiv4df */
    case 4634:  /* *avx512f_gathersiv4di */
    case 4633:  /* *avx512f_gathersiv4di */
    case 4632:  /* *avx512f_gathersiv8sf */
    case 4631:  /* *avx512f_gathersiv8sf */
    case 4630:  /* *avx512f_gathersiv8si */
    case 4629:  /* *avx512f_gathersiv8si */
    case 4628:  /* *avx512f_gathersiv8df */
    case 4627:  /* *avx512f_gathersiv8df */
    case 4626:  /* *avx512f_gathersiv8di */
    case 4625:  /* *avx512f_gathersiv8di */
    case 4624:  /* *avx512f_gathersiv16sf */
    case 4623:  /* *avx512f_gathersiv16sf */
    case 4622:  /* *avx512f_gathersiv16si */
    case 4621:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4620:  /* *avx2_gatherdiv8sf_4 */
    case 4619:  /* *avx2_gatherdiv8sf_4 */
    case 4618:  /* *avx2_gatherdiv8si_4 */
    case 4617:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4616:  /* *avx2_gatherdiv8sf_3 */
    case 4615:  /* *avx2_gatherdiv8sf_3 */
    case 4614:  /* *avx2_gatherdiv8si_3 */
    case 4613:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4612:  /* *avx2_gatherdiv8sf_2 */
    case 4611:  /* *avx2_gatherdiv8sf_2 */
    case 4610:  /* *avx2_gatherdiv8si_2 */
    case 4609:  /* *avx2_gatherdiv8si_2 */
    case 4608:  /* *avx2_gatherdiv4sf_2 */
    case 4607:  /* *avx2_gatherdiv4sf_2 */
    case 4606:  /* *avx2_gatherdiv4si_2 */
    case 4605:  /* *avx2_gatherdiv4si_2 */
    case 4604:  /* *avx2_gatherdiv4df_2 */
    case 4603:  /* *avx2_gatherdiv4df_2 */
    case 4602:  /* *avx2_gatherdiv4di_2 */
    case 4601:  /* *avx2_gatherdiv4di_2 */
    case 4600:  /* *avx2_gatherdiv2df_2 */
    case 4599:  /* *avx2_gatherdiv2df_2 */
    case 4598:  /* *avx2_gatherdiv2di_2 */
    case 4597:  /* *avx2_gatherdiv2di_2 */
    case 4580:  /* *avx2_gathersiv8sf_2 */
    case 4579:  /* *avx2_gathersiv8sf_2 */
    case 4578:  /* *avx2_gathersiv8si_2 */
    case 4577:  /* *avx2_gathersiv8si_2 */
    case 4576:  /* *avx2_gathersiv4sf_2 */
    case 4575:  /* *avx2_gathersiv4sf_2 */
    case 4574:  /* *avx2_gathersiv4si_2 */
    case 4573:  /* *avx2_gathersiv4si_2 */
    case 4572:  /* *avx2_gathersiv4df_2 */
    case 4571:  /* *avx2_gathersiv4df_2 */
    case 4570:  /* *avx2_gathersiv4di_2 */
    case 4569:  /* *avx2_gathersiv4di_2 */
    case 4568:  /* *avx2_gathersiv2df_2 */
    case 4567:  /* *avx2_gathersiv2df_2 */
    case 4566:  /* *avx2_gathersiv2di_2 */
    case 4565:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4596:  /* *avx2_gatherdiv8sf */
    case 4595:  /* *avx2_gatherdiv8sf */
    case 4594:  /* *avx2_gatherdiv8si */
    case 4593:  /* *avx2_gatherdiv8si */
    case 4592:  /* *avx2_gatherdiv4sf */
    case 4591:  /* *avx2_gatherdiv4sf */
    case 4590:  /* *avx2_gatherdiv4si */
    case 4589:  /* *avx2_gatherdiv4si */
    case 4588:  /* *avx2_gatherdiv4df */
    case 4587:  /* *avx2_gatherdiv4df */
    case 4586:  /* *avx2_gatherdiv4di */
    case 4585:  /* *avx2_gatherdiv4di */
    case 4584:  /* *avx2_gatherdiv2df */
    case 4583:  /* *avx2_gatherdiv2df */
    case 4582:  /* *avx2_gatherdiv2di */
    case 4581:  /* *avx2_gatherdiv2di */
    case 4564:  /* *avx2_gathersiv8sf */
    case 4563:  /* *avx2_gathersiv8sf */
    case 4562:  /* *avx2_gathersiv8si */
    case 4561:  /* *avx2_gathersiv8si */
    case 4560:  /* *avx2_gathersiv4sf */
    case 4559:  /* *avx2_gathersiv4sf */
    case 4558:  /* *avx2_gathersiv4si */
    case 4557:  /* *avx2_gathersiv4si */
    case 4556:  /* *avx2_gathersiv4df */
    case 4555:  /* *avx2_gathersiv4df */
    case 4554:  /* *avx2_gathersiv4di */
    case 4553:  /* *avx2_gathersiv4di */
    case 4552:  /* *avx2_gathersiv2df */
    case 4551:  /* *avx2_gathersiv2df */
    case 4550:  /* *avx2_gathersiv2di */
    case 4549:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4543:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4462:  /* avx2_maskstoreq256 */
    case 4461:  /* avx2_maskstored256 */
    case 4460:  /* avx2_maskstoreq */
    case 4459:  /* avx2_maskstored */
    case 4458:  /* avx_maskstorepd256 */
    case 4457:  /* avx_maskstoreps256 */
    case 4456:  /* avx_maskstorepd */
    case 4455:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 4454:  /* avx2_maskloadq256 */
    case 4453:  /* avx2_maskloadd256 */
    case 4452:  /* avx2_maskloadq */
    case 4451:  /* avx2_maskloadd */
    case 4450:  /* avx_maskloadpd256 */
    case 4449:  /* avx_maskloadps256 */
    case 4448:  /* avx_maskloadpd */
    case 4447:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4420:  /* *avx_vperm2f128v4df_nozero */
    case 4419:  /* *avx_vperm2f128v8sf_nozero */
    case 4418:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4414:  /* avx512bw_vpermt2varv32hi3_mask */
    case 4413:  /* avx512vl_vpermt2varv16hi3_mask */
    case 4412:  /* avx512vl_vpermt2varv8hi3_mask */
    case 4411:  /* avx512vl_vpermt2varv32qi3_mask */
    case 4410:  /* avx512vl_vpermt2varv16qi3_mask */
    case 4409:  /* avx512bw_vpermt2varv64qi3_mask */
    case 4408:  /* avx512vl_vpermt2varv2df3_mask */
    case 4407:  /* avx512vl_vpermt2varv2di3_mask */
    case 4406:  /* avx512vl_vpermt2varv4sf3_mask */
    case 4405:  /* avx512vl_vpermt2varv4si3_mask */
    case 4404:  /* avx512vl_vpermt2varv4df3_mask */
    case 4403:  /* avx512vl_vpermt2varv4di3_mask */
    case 4402:  /* avx512vl_vpermt2varv8sf3_mask */
    case 4401:  /* avx512vl_vpermt2varv8si3_mask */
    case 4400:  /* avx512f_vpermt2varv8df3_mask */
    case 4399:  /* avx512f_vpermt2varv8di3_mask */
    case 4398:  /* avx512f_vpermt2varv16sf3_mask */
    case 4397:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4360:  /* avx512bw_vpermi2varv32hi3_mask */
    case 4359:  /* avx512vl_vpermi2varv16hi3_mask */
    case 4358:  /* avx512vl_vpermi2varv8hi3_mask */
    case 4357:  /* avx512vl_vpermi2varv32qi3_mask */
    case 4356:  /* avx512vl_vpermi2varv16qi3_mask */
    case 4355:  /* avx512bw_vpermi2varv64qi3_mask */
    case 4354:  /* avx512vl_vpermi2varv2df3_mask */
    case 4353:  /* avx512vl_vpermi2varv2di3_mask */
    case 4352:  /* avx512vl_vpermi2varv4sf3_mask */
    case 4351:  /* avx512vl_vpermi2varv4si3_mask */
    case 4350:  /* avx512vl_vpermi2varv4df3_mask */
    case 4349:  /* avx512vl_vpermi2varv4di3_mask */
    case 4348:  /* avx512vl_vpermi2varv8sf3_mask */
    case 4347:  /* avx512vl_vpermi2varv8si3_mask */
    case 4346:  /* avx512f_vpermi2varv8df3_mask */
    case 4345:  /* avx512f_vpermi2varv8di3_mask */
    case 4344:  /* avx512f_vpermi2varv16sf3_mask */
    case 4343:  /* avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4294:  /* *avx_vpermilpv2df_mask */
    case 4292:  /* *avx_vpermilpv4df_mask */
    case 4290:  /* *avx512f_vpermilpv8df_mask */
    case 4288:  /* *avx_vpermilpv4sf_mask */
    case 4286:  /* *avx_vpermilpv8sf_mask */
    case 4284:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4426:  /* *ssse3_palignrv2df_perm */
    case 4425:  /* *ssse3_palignrv4sf_perm */
    case 4424:  /* *ssse3_palignrv2di_perm */
    case 4423:  /* *ssse3_palignrv4si_perm */
    case 4422:  /* *ssse3_palignrv8hi_perm */
    case 4421:  /* *ssse3_palignrv16qi_perm */
    case 4293:  /* *avx_vpermilpv2df */
    case 4291:  /* *avx_vpermilpv4df */
    case 4289:  /* *avx512f_vpermilpv8df */
    case 4287:  /* *avx_vpermilpv4sf */
    case 4285:  /* *avx_vpermilpv8sf */
    case 4283:  /* *avx512f_vpermilpv16sf */
    case 4282:  /* *avx_vperm_broadcast_v4df */
    case 4281:  /* *avx_vperm_broadcast_v8sf */
    case 4280:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4247:  /* avx_vbroadcastf128_v4df */
    case 4246:  /* avx_vbroadcastf128_v8sf */
    case 4245:  /* avx_vbroadcastf128_v4di */
    case 4244:  /* avx_vbroadcastf128_v8si */
    case 4243:  /* avx_vbroadcastf128_v16hi */
    case 4242:  /* avx_vbroadcastf128_v32qi */
    case 4231:  /* avx2_vbroadcasti128_v4di */
    case 4230:  /* avx2_vbroadcasti128_v8si */
    case 4229:  /* avx2_vbroadcasti128_v16hi */
    case 4228:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4069:  /* xop_maskcmp_uns2v2di3 */
    case 4068:  /* xop_maskcmp_uns2v4si3 */
    case 4067:  /* xop_maskcmp_uns2v8hi3 */
    case 4066:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 4065:  /* xop_maskcmp_unsv2di3 */
    case 4064:  /* xop_maskcmp_unsv4si3 */
    case 4063:  /* xop_maskcmp_unsv8hi3 */
    case 4062:  /* xop_maskcmp_unsv16qi3 */
    case 4061:  /* xop_maskcmpv2di3 */
    case 4060:  /* xop_maskcmpv4si3 */
    case 4059:  /* xop_maskcmpv8hi3 */
    case 4058:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4049:  /* xop_shlv2di3 */
    case 4048:  /* xop_shlv4si3 */
    case 4047:  /* xop_shlv8hi3 */
    case 4046:  /* xop_shlv16qi3 */
    case 4045:  /* xop_shav2di3 */
    case 4044:  /* xop_shav4si3 */
    case 4043:  /* xop_shav8hi3 */
    case 4042:  /* xop_shav16qi3 */
    case 4041:  /* xop_vrotlv2di3 */
    case 4040:  /* xop_vrotlv4si3 */
    case 4039:  /* xop_vrotlv8hi3 */
    case 4038:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 4029:  /* xop_pperm_pack_v8hi_v16qi */
    case 4028:  /* xop_pperm_pack_v4si_v8hi */
    case 4027:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4016:  /* xop_phaddubq */
    case 4015:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 4020:  /* xop_phadduwq */
    case 4019:  /* xop_phaddwq */
    case 4014:  /* xop_phaddubd */
    case 4013:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4025:  /* xop_phsubdq */
    case 4024:  /* xop_phsubwd */
    case 4023:  /* xop_phsubbw */
    case 4022:  /* xop_phaddudq */
    case 4021:  /* xop_phadddq */
    case 4018:  /* xop_phadduwd */
    case 4017:  /* xop_phaddwd */
    case 4012:  /* xop_phaddubw */
    case 4011:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4010:  /* xop_pcmov_v2df */
    case 4009:  /* xop_pcmov_v4df256 */
    case 4008:  /* xop_pcmov_v8df512 */
    case 4007:  /* xop_pcmov_v4sf */
    case 4006:  /* xop_pcmov_v8sf256 */
    case 4005:  /* xop_pcmov_v16sf512 */
    case 4004:  /* xop_pcmov_v2di */
    case 4003:  /* xop_pcmov_v4di256 */
    case 4002:  /* xop_pcmov_v8di512 */
    case 4001:  /* xop_pcmov_v4si */
    case 4000:  /* xop_pcmov_v8si256 */
    case 3999:  /* xop_pcmov_v16si512 */
    case 3998:  /* xop_pcmov_v8hi */
    case 3997:  /* xop_pcmov_v16hi256 */
    case 3996:  /* xop_pcmov_v16qi */
    case 3995:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3994:  /* xop_pmadcsswd */
    case 3993:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3992:  /* xop_pmacsswd */
    case 3991:  /* xop_pmacswd */
    case 3990:  /* xop_pmacssdqh */
    case 3989:  /* xop_pmacsdqh */
    case 3988:  /* xop_pmacssdql */
    case 3987:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3982:  /* avx512er_vmrsqrt28v2df_round */
    case 3980:  /* avx512er_vmrsqrt28v4sf_round */
    case 3970:  /* avx512er_vmrcp28v2df_round */
    case 3968:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 3950:  /* *avx512pf_scatterpfv8didf_mask */
    case 3949:  /* *avx512pf_scatterpfv8didf_mask */
    case 3948:  /* *avx512pf_scatterpfv8sidf_mask */
    case 3947:  /* *avx512pf_scatterpfv8sidf_mask */
    case 3946:  /* *avx512pf_scatterpfv8disf_mask */
    case 3945:  /* *avx512pf_scatterpfv8disf_mask */
    case 3944:  /* *avx512pf_scatterpfv16sisf_mask */
    case 3943:  /* *avx512pf_scatterpfv16sisf_mask */
    case 3942:  /* *avx512pf_gatherpfv8didf_mask */
    case 3941:  /* *avx512pf_gatherpfv8didf_mask */
    case 3940:  /* *avx512pf_gatherpfv8sidf_mask */
    case 3939:  /* *avx512pf_gatherpfv8sidf_mask */
    case 3938:  /* *avx512pf_gatherpfv8disf_mask */
    case 3937:  /* *avx512pf_gatherpfv8disf_mask */
    case 3936:  /* *avx512pf_gatherpfv16sisf_mask */
    case 3935:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 3934:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 3933:  /* sse4_2_pcmpistrm */
    case 3932:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 3931:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 3930:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 3929:  /* sse4_2_pcmpestrm */
    case 3928:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 3927:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 3926:  /* sse4_1_roundsd */
    case 3925:  /* sse4_1_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 3742:  /* *ssse3_pmulhrswv8hi3_mask */
    case 3740:  /* *avx2_pmulhrswv16hi3_mask */
    case 3738:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3743:  /* *ssse3_pmulhrswv4hi3 */
    case 3741:  /* *ssse3_pmulhrswv8hi3 */
    case 3739:  /* *avx2_pmulhrswv16hi3 */
    case 3737:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3734:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3733:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 3721:  /* avx2_phsubdv8si3 */
    case 3720:  /* avx2_phadddv8si3 */
    case 3715:  /* ssse3_phsubswv8hi3 */
    case 3714:  /* ssse3_phsubwv8hi3 */
    case 3713:  /* ssse3_phaddswv8hi3 */
    case 3712:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 3711:  /* avx2_phsubswv16hi3 */
    case 3710:  /* avx2_phsubwv16hi3 */
    case 3709:  /* avx2_phaddswv16hi3 */
    case 3708:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[10] = 1;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[11] = 1;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 1), 0);
      recog_data.dup_num[12] = 1;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[13] = 1;
      recog_data.dup_loc[14] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 1), 0);
      recog_data.dup_num[14] = 1;
      recog_data.dup_loc[15] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[15] = 2;
      recog_data.dup_loc[16] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[16] = 2;
      recog_data.dup_loc[17] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[17] = 2;
      recog_data.dup_loc[18] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[18] = 2;
      recog_data.dup_loc[19] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[19] = 2;
      recog_data.dup_loc[20] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[20] = 2;
      recog_data.dup_loc[21] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[21] = 2;
      recog_data.dup_loc[22] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[22] = 2;
      recog_data.dup_loc[23] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[23] = 2;
      recog_data.dup_loc[24] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[24] = 2;
      recog_data.dup_loc[25] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[25] = 2;
      recog_data.dup_loc[26] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[26] = 2;
      recog_data.dup_loc[27] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[27] = 2;
      recog_data.dup_loc[28] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[28] = 2;
      recog_data.dup_loc[29] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[29] = 2;
      break;

    case 3684:  /* *sse2_uavgv8hi3_mask */
    case 3682:  /* *avx2_uavgv16hi3_mask */
    case 3680:  /* *avx512bw_uavgv32hi3_mask */
    case 3678:  /* *sse2_uavgv16qi3_mask */
    case 3676:  /* *avx2_uavgv32qi3_mask */
    case 3674:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 3683:  /* *sse2_uavgv8hi3 */
    case 3681:  /* *avx2_uavgv16hi3 */
    case 3679:  /* *avx512bw_uavgv32hi3 */
    case 3677:  /* *sse2_uavgv16qi3 */
    case 3675:  /* *avx2_uavgv32qi3 */
    case 3673:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3649:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3648:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3647:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3646:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 3641:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3640:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 4138:  /* avx512f_permv8di_1_mask */
    case 4136:  /* avx512f_permv8df_1_mask */
    case 3635:  /* avx2_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4137:  /* avx512f_permv8di_1 */
    case 4135:  /* avx512f_permv8df_1 */
    case 3634:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3633:  /* avx512f_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3632:  /* avx512f_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4438:  /* vec_set_lo_v8sf_mask */
    case 4436:  /* vec_set_lo_v8si_mask */
    case 4430:  /* vec_set_lo_v4df_mask */
    case 4428:  /* vec_set_lo_v4di_mask */
    case 3611:  /* vec_set_lo_v8di_mask */
    case 3609:  /* vec_set_lo_v8df_mask */
    case 3603:  /* vec_set_lo_v16si_mask */
    case 3601:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3599:  /* avx512f_vinserti32x4_1_mask */
    case 3597:  /* avx512f_vinsertf32x4_1_mask */
    case 3595:  /* avx512dq_vinserti64x2_1_mask */
    case 3593:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3598:  /* *avx512f_vinserti32x4_1 */
    case 3596:  /* *avx512f_vinsertf32x4_1 */
    case 3594:  /* *avx512dq_vinserti64x2_1 */
    case 3592:  /* *avx512dq_vinsertf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3824:  /* sse4_1_packusdw_mask */
    case 3822:  /* avx2_packusdw_mask */
    case 3820:  /* avx512bw_packusdw_mask */
    case 3551:  /* sse2_packuswb_mask */
    case 3549:  /* avx2_packuswb_mask */
    case 3547:  /* avx512bw_packuswb_mask */
    case 3545:  /* sse2_packssdw_mask */
    case 3543:  /* avx2_packssdw_mask */
    case 3541:  /* avx512bw_packssdw_mask */
    case 3539:  /* sse2_packsswb_mask */
    case 3537:  /* avx2_packsswb_mask */
    case 3535:  /* avx512bw_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4832:  /* avx512dq_fpclassv2df_mask */
    case 4830:  /* avx512dq_fpclassv4df_mask */
    case 4828:  /* avx512dq_fpclassv8df_mask */
    case 4826:  /* avx512dq_fpclassv4sf_mask */
    case 4824:  /* avx512dq_fpclassv8sf_mask */
    case 4822:  /* avx512dq_fpclassv16sf_mask */
    case 4542:  /* *vcvtps2ph */
    case 3533:  /* avx512vl_testnmv2di3_mask */
    case 3531:  /* avx512vl_testnmv4di3_mask */
    case 3529:  /* avx512f_testnmv8di3_mask */
    case 3527:  /* avx512vl_testnmv4si3_mask */
    case 3525:  /* avx512vl_testnmv8si3_mask */
    case 3523:  /* avx512f_testnmv16si3_mask */
    case 3521:  /* avx512vl_testnmv8hi3_mask */
    case 3519:  /* avx512vl_testnmv16hi3_mask */
    case 3517:  /* avx512bw_testnmv32hi3_mask */
    case 3515:  /* avx512vl_testnmv32qi3_mask */
    case 3513:  /* avx512vl_testnmv16qi3_mask */
    case 3511:  /* avx512bw_testnmv64qi3_mask */
    case 3509:  /* avx512vl_testmv2di3_mask */
    case 3507:  /* avx512vl_testmv4di3_mask */
    case 3505:  /* avx512f_testmv8di3_mask */
    case 3503:  /* avx512vl_testmv4si3_mask */
    case 3501:  /* avx512vl_testmv8si3_mask */
    case 3499:  /* avx512f_testmv16si3_mask */
    case 3497:  /* avx512vl_testmv8hi3_mask */
    case 3495:  /* avx512vl_testmv16hi3_mask */
    case 3493:  /* avx512bw_testmv32hi3_mask */
    case 3491:  /* avx512vl_testmv32qi3_mask */
    case 3489:  /* avx512vl_testmv16qi3_mask */
    case 3487:  /* avx512bw_testmv64qi3_mask */
    case 3392:  /* avx512vl_gtv8hi3_mask */
    case 3390:  /* avx512vl_gtv16hi3_mask */
    case 3388:  /* avx512bw_gtv32hi3_mask */
    case 3386:  /* avx512vl_gtv32qi3_mask */
    case 3384:  /* avx512vl_gtv16qi3_mask */
    case 3382:  /* avx512bw_gtv64qi3_mask */
    case 3380:  /* avx512vl_gtv2di3_mask */
    case 3378:  /* avx512vl_gtv4di3_mask */
    case 3376:  /* avx512f_gtv8di3_mask */
    case 3374:  /* avx512vl_gtv4si3_mask */
    case 3372:  /* avx512vl_gtv8si3_mask */
    case 3370:  /* avx512f_gtv16si3_mask */
    case 3359:  /* avx512vl_eqv2di3_mask_1 */
    case 3357:  /* avx512vl_eqv4di3_mask_1 */
    case 3355:  /* avx512f_eqv8di3_mask_1 */
    case 3353:  /* avx512vl_eqv4si3_mask_1 */
    case 3351:  /* avx512vl_eqv8si3_mask_1 */
    case 3349:  /* avx512f_eqv16si3_mask_1 */
    case 3347:  /* avx512vl_eqv8hi3_mask_1 */
    case 3345:  /* avx512vl_eqv16hi3_mask_1 */
    case 3343:  /* avx512bw_eqv32hi3_mask_1 */
    case 3341:  /* avx512vl_eqv32qi3_mask_1 */
    case 3339:  /* avx512vl_eqv16qi3_mask_1 */
    case 3337:  /* avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3071:  /* *sse4_1_mulv2siv2di3_mask */
    case 3069:  /* *vec_widen_smult_even_v8si_mask */
    case 3067:  /* *vec_widen_smult_even_v16si_mask */
    case 3065:  /* *vec_widen_umult_even_v4si_mask */
    case 3063:  /* *vec_widen_umult_even_v8si_mask */
    case 3061:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3059:  /* *umulv8hi3_highpart_mask */
    case 3057:  /* *smulv8hi3_highpart_mask */
    case 3055:  /* *umulv16hi3_highpart_mask */
    case 3053:  /* *smulv16hi3_highpart_mask */
    case 3051:  /* *umulv32hi3_highpart_mask */
    case 3049:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2921:  /* avx512f_us_truncatev8div16qi2_mask_store */
    case 2920:  /* avx512f_truncatev8div16qi2_mask_store */
    case 2919:  /* avx512f_ss_truncatev8div16qi2_mask_store */
    case 2906:  /* avx512vl_us_truncatev2div2si2_mask_store */
    case 2905:  /* avx512vl_truncatev2div2si2_mask_store */
    case 2904:  /* avx512vl_ss_truncatev2div2si2_mask_store */
    case 2891:  /* avx512vl_us_truncatev2div2hi2_mask_store */
    case 2890:  /* avx512vl_truncatev2div2hi2_mask_store */
    case 2889:  /* avx512vl_ss_truncatev2div2hi2_mask_store */
    case 2879:  /* avx512vl_us_truncatev4div4hi2_mask_store */
    case 2878:  /* avx512vl_truncatev4div4hi2_mask_store */
    case 2877:  /* avx512vl_ss_truncatev4div4hi2_mask_store */
    case 2876:  /* avx512vl_us_truncatev4siv4hi2_mask_store */
    case 2875:  /* avx512vl_truncatev4siv4hi2_mask_store */
    case 2874:  /* avx512vl_ss_truncatev4siv4hi2_mask_store */
    case 2846:  /* avx512vl_us_truncatev8siv8qi2_mask_store */
    case 2845:  /* avx512vl_truncatev8siv8qi2_mask_store */
    case 2844:  /* avx512vl_ss_truncatev8siv8qi2_mask_store */
    case 2843:  /* avx512vl_us_truncatev8hiv8qi2_mask_store */
    case 2842:  /* avx512vl_truncatev8hiv8qi2_mask_store */
    case 2841:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store */
    case 2822:  /* avx512vl_us_truncatev4div4qi2_mask_store */
    case 2821:  /* avx512vl_truncatev4div4qi2_mask_store */
    case 2820:  /* avx512vl_ss_truncatev4div4qi2_mask_store */
    case 2819:  /* avx512vl_us_truncatev4siv4qi2_mask_store */
    case 2818:  /* avx512vl_truncatev4siv4qi2_mask_store */
    case 2817:  /* avx512vl_ss_truncatev4siv4qi2_mask_store */
    case 2798:  /* avx512vl_us_truncatev2div2qi2_mask_store */
    case 2797:  /* avx512vl_truncatev2div2qi2_mask_store */
    case 2796:  /* avx512vl_ss_truncatev2div2qi2_mask_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 2912:  /* *avx512f_us_truncatev8div16qi2_store */
    case 2911:  /* *avx512f_truncatev8div16qi2_store */
    case 2910:  /* *avx512f_ss_truncatev8div16qi2_store */
    case 2897:  /* *avx512vl_us_truncatev2div2si2_store */
    case 2896:  /* *avx512vl_truncatev2div2si2_store */
    case 2895:  /* *avx512vl_ss_truncatev2div2si2_store */
    case 2882:  /* *avx512vl_us_truncatev2div2hi2_store */
    case 2881:  /* *avx512vl_truncatev2div2hi2_store */
    case 2880:  /* *avx512vl_ss_truncatev2div2hi2_store */
    case 2861:  /* *avx512vl_us_truncatev4div4hi2_store */
    case 2860:  /* *avx512vl_truncatev4div4hi2_store */
    case 2859:  /* *avx512vl_ss_truncatev4div4hi2_store */
    case 2858:  /* *avx512vl_us_truncatev4siv4hi2_store */
    case 2857:  /* *avx512vl_truncatev4siv4hi2_store */
    case 2856:  /* *avx512vl_ss_truncatev4siv4hi2_store */
    case 2828:  /* *avx512vl_us_truncatev8siv8qi2_store */
    case 2827:  /* *avx512vl_truncatev8siv8qi2_store */
    case 2826:  /* *avx512vl_ss_truncatev8siv8qi2_store */
    case 2825:  /* *avx512vl_us_truncatev8hiv8qi2_store */
    case 2824:  /* *avx512vl_truncatev8hiv8qi2_store */
    case 2823:  /* *avx512vl_ss_truncatev8hiv8qi2_store */
    case 2804:  /* *avx512vl_us_truncatev4div4qi2_store */
    case 2803:  /* *avx512vl_truncatev4div4qi2_store */
    case 2802:  /* *avx512vl_ss_truncatev4div4qi2_store */
    case 2801:  /* *avx512vl_us_truncatev4siv4qi2_store */
    case 2800:  /* *avx512vl_truncatev4siv4qi2_store */
    case 2799:  /* *avx512vl_ss_truncatev4siv4qi2_store */
    case 2789:  /* *avx512vl_us_truncatev2div2qi2_store */
    case 2788:  /* *avx512vl_truncatev2div2qi2_store */
    case 2787:  /* *avx512vl_ss_truncatev2div2qi2_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2713:  /* sse2_shufpd_v2df */
    case 2712:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 2699:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3631:  /* avx512f_shuf_i32x4_1_mask */
    case 3629:  /* avx512f_shuf_f32x4_1_mask */
    case 2694:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3630:  /* avx512f_shuf_i32x4_1 */
    case 3628:  /* avx512f_shuf_f32x4_1 */
    case 2693:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4862:  /* avx512f_vgetmantv2df_round */
    case 4860:  /* avx512f_vgetmantv4sf_round */
    case 4820:  /* avx512dq_rangesv2df_round */
    case 4818:  /* avx512dq_rangesv4sf_round */
    case 2692:  /* avx512f_rndscalev2df_round */
    case 2690:  /* avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2664:  /* avx512f_sfixupimmv2df_mask_round */
    case 2662:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2663:  /* avx512f_sfixupimmv2df_mask */
    case 2661:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2660:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 2656:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2659:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 2655:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2658:  /* avx512f_sfixupimmv2df_round */
    case 2654:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2657:  /* avx512f_sfixupimmv2df */
    case 2653:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2652:  /* avx512vl_fixupimmv2df_mask_round */
    case 2650:  /* avx512vl_fixupimmv4df_mask_round */
    case 2648:  /* avx512f_fixupimmv8df_mask_round */
    case 2646:  /* avx512vl_fixupimmv4sf_mask_round */
    case 2644:  /* avx512vl_fixupimmv8sf_mask_round */
    case 2642:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2640:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 2636:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 2632:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 2628:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 2624:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 2620:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2638:  /* avx512vl_fixupimmv2df_round */
    case 2634:  /* avx512vl_fixupimmv4df_round */
    case 2630:  /* avx512f_fixupimmv8df_round */
    case 2626:  /* avx512vl_fixupimmv4sf_round */
    case 2622:  /* avx512vl_fixupimmv8sf_round */
    case 2618:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2651:  /* avx512vl_fixupimmv2df_mask */
    case 2649:  /* avx512vl_fixupimmv4df_mask */
    case 2647:  /* avx512f_fixupimmv8df_mask */
    case 2645:  /* avx512vl_fixupimmv4sf_mask */
    case 2643:  /* avx512vl_fixupimmv8sf_mask */
    case 2641:  /* avx512f_fixupimmv16sf_mask */
    case 2576:  /* avx512vl_vternlogv2di_mask */
    case 2575:  /* avx512vl_vternlogv4di_mask */
    case 2574:  /* avx512f_vternlogv8di_mask */
    case 2573:  /* avx512vl_vternlogv4si_mask */
    case 2572:  /* avx512vl_vternlogv8si_mask */
    case 2571:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2639:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 2635:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 2631:  /* avx512f_fixupimmv8df_maskz_1 */
    case 2627:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 2623:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 2619:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 2570:  /* avx512vl_vternlogv2di_maskz_1 */
    case 2568:  /* avx512vl_vternlogv4di_maskz_1 */
    case 2566:  /* avx512f_vternlogv8di_maskz_1 */
    case 2564:  /* avx512vl_vternlogv4si_maskz_1 */
    case 2562:  /* avx512vl_vternlogv8si_maskz_1 */
    case 2560:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4077:  /* xop_vpermil2v2df3 */
    case 4076:  /* xop_vpermil2v4df3 */
    case 4075:  /* xop_vpermil2v4sf3 */
    case 4074:  /* xop_vpermil2v8sf3 */
    case 3800:  /* sse4a_insertqi */
    case 2637:  /* avx512vl_fixupimmv2df */
    case 2633:  /* avx512vl_fixupimmv4df */
    case 2629:  /* avx512f_fixupimmv8df */
    case 2625:  /* avx512vl_fixupimmv4sf */
    case 2621:  /* avx512vl_fixupimmv8sf */
    case 2617:  /* avx512f_fixupimmv16sf */
    case 2569:  /* avx512vl_vternlogv2di */
    case 2567:  /* avx512vl_vternlogv4di */
    case 2565:  /* avx512f_vternlogv8di */
    case 2563:  /* avx512vl_vternlogv4si */
    case 2561:  /* avx512vl_vternlogv8si */
    case 2559:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 2604:  /* avx512f_sgetexpv2df_round */
    case 2602:  /* avx512f_sgetexpv4sf_round */
    case 2534:  /* avx512f_vmscalefv2df_round */
    case 2532:  /* avx512f_vmscalefv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2603:  /* avx512f_sgetexpv2df */
    case 2601:  /* avx512f_sgetexpv4sf */
    case 2533:  /* avx512f_vmscalefv2df */
    case 2531:  /* avx512f_vmscalefv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2463:  /* *avx512dq_vextracti64x2_1 */
    case 2461:  /* *avx512dq_vextractf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 4134:  /* avx2_permv4df_1_mask */
    case 4132:  /* avx2_permv4di_1_mask */
    case 3643:  /* sse2_pshuflw_1_mask */
    case 3637:  /* sse2_pshufd_1_mask */
    case 2468:  /* avx512f_vextracti32x4_1_mask */
    case 2466:  /* avx512f_vextractf32x4_1_mask */
    case 2460:  /* avx512f_vextracti32x4_1_maskm */
    case 2459:  /* avx512f_vextractf32x4_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2464:  /* avx512dq_vextracti64x2_1_mask */
    case 2462:  /* avx512dq_vextractf64x2_1_mask */
    case 2458:  /* avx512dq_vextracti64x2_1_maskm */
    case 2457:  /* avx512dq_vextractf64x2_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3666:  /* *vec_extractv4si_mem */
    case 3664:  /* *vec_extractv4si */
    case 3658:  /* *vec_extractv8hi_mem */
    case 3657:  /* *vec_extractv16qi_mem */
    case 3652:  /* *vec_extractv8hi */
    case 3651:  /* *vec_extractv16qi */
    case 2456:  /* *vec_extractv4sf_mem */
    case 2455:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 2453:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3650:  /* sse2_loadld */
    case 2451:  /* vec_setv4sf_0 */
    case 2450:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 2720:  /* sse2_movsd */
    case 2441:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4445:  /* vec_set_lo_v32qi */
    case 4443:  /* vec_set_lo_v16hi */
    case 4437:  /* vec_set_lo_v8sf */
    case 4435:  /* vec_set_lo_v8si */
    case 4429:  /* vec_set_lo_v4df */
    case 4427:  /* vec_set_lo_v4di */
    case 3610:  /* vec_set_lo_v8di */
    case 3608:  /* vec_set_lo_v8df */
    case 3602:  /* vec_set_lo_v16si */
    case 3600:  /* vec_set_lo_v16sf */
    case 2719:  /* sse2_loadlpd */
    case 2440:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3618:  /* *avx512dq_shuf_f64x2_1 */
    case 3616:  /* *avx512dq_shuf_i64x2_1 */
    case 2697:  /* avx_shufpd256_1 */
    case 2436:  /* sse_shufps_v4sf */
    case 2435:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3619:  /* avx512dq_shuf_f64x2_1_mask */
    case 3617:  /* avx512dq_shuf_i64x2_1_mask */
    case 2698:  /* avx_shufpd256_1_mask */
    case 2434:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3627:  /* avx512vl_shuf_f32x4_1_mask */
    case 3625:  /* avx512vl_shuf_i32x4_1_mask */
    case 3623:  /* avx512f_shuf_i64x2_1_mask */
    case 3621:  /* avx512f_shuf_f64x2_1_mask */
    case 2696:  /* avx512f_shufpd512_1_mask */
    case 2433:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3626:  /* avx512vl_shuf_f32x4_1 */
    case 3624:  /* avx512vl_shuf_i32x4_1 */
    case 3622:  /* avx512f_shuf_i64x2_1 */
    case 3620:  /* avx512f_shuf_f64x2_1 */
    case 2695:  /* avx512f_shufpd512_1 */
    case 2432:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 2431:  /* avx512f_movsldup512_mask */
    case 2429:  /* sse3_movsldup_mask */
    case 2427:  /* avx_movsldup256_mask */
    case 2425:  /* avx512f_movshdup512_mask */
    case 2423:  /* sse3_movshdup_mask */
    case 2421:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2430:  /* *avx512f_movsldup512 */
    case 2428:  /* sse3_movsldup */
    case 2426:  /* avx_movsldup256 */
    case 2424:  /* *avx512f_movshdup512 */
    case 2422:  /* sse3_movshdup */
    case 2420:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3587:  /* vec_interleave_lowv4si_mask */
    case 3585:  /* avx512f_interleave_lowv16si_mask */
    case 3583:  /* avx2_interleave_lowv8si_mask */
    case 3581:  /* vec_interleave_highv4si_mask */
    case 3579:  /* avx512f_interleave_highv16si_mask */
    case 3577:  /* avx2_interleave_highv8si_mask */
    case 3575:  /* vec_interleave_lowv8hi_mask */
    case 3573:  /* avx2_interleave_lowv16hi_mask */
    case 3571:  /* avx512bw_interleave_lowv32hi_mask */
    case 3569:  /* vec_interleave_highv8hi_mask */
    case 3567:  /* avx2_interleave_highv16hi_mask */
    case 3565:  /* avx512bw_interleave_highv32hi_mask */
    case 3563:  /* vec_interleave_lowv16qi_mask */
    case 3561:  /* avx2_interleave_lowv32qi_mask */
    case 3559:  /* avx512bw_interleave_lowv64qi_mask */
    case 3557:  /* vec_interleave_highv16qi_mask */
    case 3555:  /* avx2_interleave_highv32qi_mask */
    case 3553:  /* avx512bw_interleave_highv64qi_mask */
    case 2711:  /* vec_interleave_lowv2di_mask */
    case 2709:  /* avx512f_interleave_lowv8di_mask */
    case 2707:  /* avx2_interleave_lowv4di_mask */
    case 2705:  /* vec_interleave_highv2di_mask */
    case 2703:  /* avx512f_interleave_highv8di_mask */
    case 2701:  /* avx2_interleave_highv4di_mask */
    case 2529:  /* avx512vl_unpcklpd128_mask */
    case 2528:  /* *avx_unpcklpd256_mask */
    case 2526:  /* *avx512f_unpcklpd512_mask */
    case 2523:  /* avx512vl_unpckhpd128_mask */
    case 2522:  /* avx_unpckhpd256_mask */
    case 2520:  /* avx512f_unpckhpd512_mask */
    case 2418:  /* unpcklps128_mask */
    case 2417:  /* avx_unpcklps256_mask */
    case 2415:  /* avx512f_unpcklps512_mask */
    case 2413:  /* vec_interleave_highv4sf_mask */
    case 2411:  /* avx_unpckhps256_mask */
    case 2409:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2403:  /* *avx512vl_cvtmask2qv2di */
    case 2402:  /* *avx512vl_cvtmask2qv4di */
    case 2401:  /* *avx512f_cvtmask2qv8di */
    case 2400:  /* *avx512vl_cvtmask2dv4si */
    case 2399:  /* *avx512vl_cvtmask2dv8si */
    case 2398:  /* *avx512f_cvtmask2dv16si */
    case 2397:  /* *avx512vl_cvtmask2wv8hi */
    case 2396:  /* *avx512vl_cvtmask2wv16hi */
    case 2395:  /* *avx512bw_cvtmask2wv32hi */
    case 2394:  /* *avx512vl_cvtmask2bv32qi */
    case 2393:  /* *avx512vl_cvtmask2bv16qi */
    case 2392:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4533:  /* vcvtph2ps_mask */
    case 2289:  /* ufix_notruncv2dfv2si2_mask */
    case 2279:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4257:  /* avx512dq_broadcastv8sf_mask */
    case 4255:  /* avx512dq_broadcastv16sf_mask */
    case 4253:  /* avx512dq_broadcastv4si_mask */
    case 4251:  /* avx512dq_broadcastv8si_mask */
    case 4249:  /* avx512dq_broadcastv16si_mask */
    case 4180:  /* avx512vl_vec_dupv8hi_mask */
    case 4178:  /* avx512vl_vec_dupv16hi_mask */
    case 4176:  /* avx512bw_vec_dupv32hi_mask */
    case 4174:  /* avx512vl_vec_dupv32qi_mask */
    case 4172:  /* avx512vl_vec_dupv16qi_mask */
    case 4170:  /* avx512bw_vec_dupv64qi_mask */
    case 4168:  /* avx512vl_vec_dupv2df_mask */
    case 4166:  /* avx512vl_vec_dupv4df_mask */
    case 4164:  /* avx512f_vec_dupv8df_mask */
    case 4162:  /* avx512vl_vec_dupv4sf_mask */
    case 4160:  /* avx512vl_vec_dupv8sf_mask */
    case 4158:  /* avx512f_vec_dupv16sf_mask */
    case 4156:  /* avx512vl_vec_dupv2di_mask */
    case 4154:  /* avx512vl_vec_dupv4di_mask */
    case 4152:  /* avx512f_vec_dupv8di_mask */
    case 4150:  /* avx512vl_vec_dupv4si_mask */
    case 4148:  /* avx512vl_vec_dupv8si_mask */
    case 4146:  /* avx512f_vec_dupv16si_mask */
    case 3903:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 3901:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 3891:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 3889:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 3887:  /* avx2_zero_extendv4hiv4di2_mask */
    case 3885:  /* avx2_sign_extendv4hiv4di2_mask */
    case 3879:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 3877:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 3875:  /* avx2_zero_extendv4qiv4di2_mask */
    case 3873:  /* avx2_sign_extendv4qiv4di2_mask */
    case 3871:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 3869:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 3867:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 3865:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 3855:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 3853:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 3851:  /* avx2_zero_extendv8qiv8si2_mask */
    case 3849:  /* avx2_sign_extendv8qiv8si2_mask */
    case 3843:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 3841:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 2405:  /* sse2_cvtps2pd_mask */
    case 2357:  /* sse2_cvttpd2dq_mask */
    case 2351:  /* ufix_truncv2sfv2di2_mask */
    case 2349:  /* fix_truncv2sfv2di2_mask */
    case 2299:  /* ufix_truncv2dfv2si2_mask */
    case 2270:  /* sse2_cvtdq2pd_mask */
    case 2266:  /* ufloatv2siv2df2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2918:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 2917:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 2916:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 2903:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 2902:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 2901:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 2888:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 2887:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 2886:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 2873:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 2872:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 2871:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 2870:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 2869:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 2868:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 2840:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 2839:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 2838:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 2837:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 2836:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 2835:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 2816:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 2815:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 2814:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 2813:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 2812:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 2811:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 2795:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 2794:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 2793:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 2260:  /* *ufloatv2div2sf2_mask_1 */
    case 2259:  /* *floatv2div2sf2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2915:  /* avx512f_us_truncatev8div16qi2_mask */
    case 2914:  /* avx512f_truncatev8div16qi2_mask */
    case 2913:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 2900:  /* avx512vl_us_truncatev2div2si2_mask */
    case 2899:  /* avx512vl_truncatev2div2si2_mask */
    case 2898:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 2885:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 2884:  /* avx512vl_truncatev2div2hi2_mask */
    case 2883:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 2867:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 2866:  /* avx512vl_truncatev4div4hi2_mask */
    case 2865:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 2864:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 2863:  /* avx512vl_truncatev4siv4hi2_mask */
    case 2862:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 2834:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 2833:  /* avx512vl_truncatev8siv8qi2_mask */
    case 2832:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 2831:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 2830:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 2829:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 2810:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 2809:  /* avx512vl_truncatev4div4qi2_mask */
    case 2808:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 2807:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 2806:  /* avx512vl_truncatev4siv4qi2_mask */
    case 2805:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 2792:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 2791:  /* avx512vl_truncatev2div2qi2_mask */
    case 2790:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 2258:  /* ufloatv2div2sf2_mask */
    case 2257:  /* floatv2div2sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2170:  /* avx512dq_cvtps2uqqv2di_mask */
    case 2162:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4541:  /* avx512f_vcvtph2ps512_mask_round */
    case 3978:  /* avx512er_rsqrt28v8df_mask_round */
    case 3974:  /* avx512er_rsqrt28v16sf_mask_round */
    case 3966:  /* avx512er_rcp28v8df_mask_round */
    case 3962:  /* avx512er_rcp28v16sf_mask_round */
    case 3958:  /* avx512er_exp2v8df_mask_round */
    case 3954:  /* avx512er_exp2v16sf_mask_round */
    case 2600:  /* avx512vl_getexpv2df_mask_round */
    case 2596:  /* avx512vl_getexpv4df_mask_round */
    case 2592:  /* avx512f_getexpv8df_mask_round */
    case 2588:  /* avx512vl_getexpv4sf_mask_round */
    case 2584:  /* avx512vl_getexpv8sf_mask_round */
    case 2580:  /* avx512f_getexpv16sf_mask_round */
    case 2331:  /* ufix_notruncv8dfv8di2_mask_round */
    case 2323:  /* fix_notruncv8dfv8di2_mask_round */
    case 2287:  /* ufix_notruncv4dfv4si2_mask_round */
    case 2283:  /* ufix_notruncv8dfv8si2_mask_round */
    case 2274:  /* avx512f_cvtpd2dq512_mask_round */
    case 2166:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 2158:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 2154:  /* avx512vl_ufix_notruncv4sfv4si_mask_round */
    case 2150:  /* avx512vl_ufix_notruncv8sfv8si_mask_round */
    case 2146:  /* avx512f_ufix_notruncv16sfv16si_mask_round */
    case 2142:  /* avx512f_fix_notruncv16sfv16si_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2214:  /* sse2_cvttsd2siq_round */
    case 2212:  /* sse2_cvttsd2si_round */
    case 2204:  /* avx512f_vcvttsd2usiq_round */
    case 2202:  /* avx512f_vcvttsd2usi_round */
    case 2196:  /* avx512f_vcvttss2usiq_round */
    case 2194:  /* avx512f_vcvttss2usi_round */
    case 2107:  /* sse_cvttss2siq_round */
    case 2105:  /* sse_cvttss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2209:  /* sse2_cvtsd2siq_round */
    case 2206:  /* sse2_cvtsd2si_round */
    case 2200:  /* avx512f_vcvtsd2usiq_round */
    case 2198:  /* avx512f_vcvtsd2usi_round */
    case 2192:  /* avx512f_vcvtss2usiq_round */
    case 2190:  /* avx512f_vcvtss2usi_round */
    case 2102:  /* sse_cvtss2siq_round */
    case 2099:  /* sse_cvtss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2362:  /* sse2_cvtss2sd_round */
    case 2359:  /* sse2_cvtsd2ss_round */
    case 2188:  /* sse2_cvtsi2sdq_round */
    case 2114:  /* cvtusi2sd64_round */
    case 2112:  /* cvtusi2ss64_round */
    case 2109:  /* cvtusi2ss32_round */
    case 2097:  /* sse_cvtsi2ssq_round */
    case 2095:  /* sse_cvtsi2ss_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4532:  /* vcvtph2ps */
    case 3699:  /* *sse2_pmovmskb_zext */
    case 3698:  /* *avx2_pmovmskb_zext */
    case 3695:  /* *sse2_movmskpd_zext */
    case 3694:  /* *avx_movmskpd256_zext */
    case 3693:  /* *sse_movmskps_zext */
    case 3692:  /* *avx_movmskps256_zext */
    case 2288:  /* ufix_notruncv2dfv2si2 */
    case 2278:  /* sse2_cvtpd2dq */
    case 2092:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2363:  /* *sse2_vd_cvtss2sd */
    case 2361:  /* sse2_cvtss2sd */
    case 2360:  /* *sse2_vd_cvtsd2ss */
    case 2358:  /* sse2_cvtsd2ss */
    case 2187:  /* sse2_cvtsi2sdq */
    case 2186:  /* sse2_cvtsi2sd */
    case 2113:  /* cvtusi2sd64 */
    case 2111:  /* cvtusi2ss64 */
    case 2110:  /* cvtusi2sd32 */
    case 2108:  /* cvtusi2ss32 */
    case 2096:  /* sse_cvtsi2ssq */
    case 2094:  /* sse_cvtsi2ss */
    case 2091:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 2090:  /* *fma4i_vmfnmsub_v2df */
    case 2089:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2088:  /* *fma4i_vmfnmadd_v2df */
    case 2087:  /* *fma4i_vmfnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2086:  /* *fma4i_vmfmsub_v2df */
    case 2085:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2084:  /* *fma4i_vmfmadd_v2df */
    case 2083:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2082:  /* *fmai_fnmsub_v2df_round */
    case 2080:  /* *fmai_fnmsub_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2081:  /* *fmai_fnmsub_v2df */
    case 2079:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2078:  /* *fmai_fnmadd_v2df_round */
    case 2076:  /* *fmai_fnmadd_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2077:  /* *fmai_fnmadd_v2df */
    case 2075:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2074:  /* *fmai_fmsub_v2df */
    case 2072:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2073:  /* *fmai_fmsub_v2df */
    case 2071:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2070:  /* *fmai_fmadd_v2df */
    case 2068:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2069:  /* *fmai_fmadd_v2df */
    case 2067:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2066:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 2064:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 2062:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 2060:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 2058:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 2056:  /* avx512f_fmsubadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2065:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 2063:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 2061:  /* avx512f_fmsubadd_v8df_mask3 */
    case 2059:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 2057:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 2055:  /* avx512f_fmsubadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2054:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 2052:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 2050:  /* avx512f_fmsubadd_v8df_mask_round */
    case 2048:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 2046:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 2044:  /* avx512f_fmsubadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2053:  /* avx512vl_fmsubadd_v2df_mask */
    case 2051:  /* avx512vl_fmsubadd_v4df_mask */
    case 2049:  /* avx512f_fmsubadd_v8df_mask */
    case 2047:  /* avx512vl_fmsubadd_v4sf_mask */
    case 2045:  /* avx512vl_fmsubadd_v8sf_mask */
    case 2043:  /* avx512f_fmsubadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2038:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 2029:  /* fma_fmsubadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2042:  /* fma_fmsubadd_v2df_maskz_1 */
    case 2040:  /* fma_fmsubadd_v4df_maskz_1 */
    case 2037:  /* fma_fmsubadd_v8df_maskz_1 */
    case 2033:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 2031:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 2028:  /* fma_fmsubadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2036:  /* *fma_fmsubadd_v8df_round */
    case 2027:  /* *fma_fmsubadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2041:  /* *fma_fmsubadd_v2df */
    case 2039:  /* *fma_fmsubadd_v4df */
    case 2035:  /* *fma_fmsubadd_v8df */
    case 2034:  /* *fma_fmsubadd_df */
    case 2032:  /* *fma_fmsubadd_v4sf */
    case 2030:  /* *fma_fmsubadd_v8sf */
    case 2026:  /* *fma_fmsubadd_v16sf */
    case 2025:  /* *fma_fmsubadd_sf */
    case 2024:  /* *fma_fmsubadd_v2df */
    case 2023:  /* *fma_fmsubadd_v4df */
    case 2022:  /* *fma_fmsubadd_v4sf */
    case 2021:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 2020:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 2018:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 2016:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 2014:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 2012:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 2010:  /* avx512f_fmaddsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2019:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 2017:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 2015:  /* avx512f_fmaddsub_v8df_mask3 */
    case 2013:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 2011:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 2009:  /* avx512f_fmaddsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2008:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 2006:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 2004:  /* avx512f_fmaddsub_v8df_mask_round */
    case 2002:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 2000:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 1998:  /* avx512f_fmaddsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4923:  /* vpamdd52huqv2di_mask */
    case 4922:  /* vpamdd52luqv2di_mask */
    case 4921:  /* vpamdd52huqv4di_mask */
    case 4920:  /* vpamdd52luqv4di_mask */
    case 4919:  /* vpamdd52huqv8di_mask */
    case 4918:  /* vpamdd52luqv8di_mask */
    case 2007:  /* avx512vl_fmaddsub_v2df_mask */
    case 2005:  /* avx512vl_fmaddsub_v4df_mask */
    case 2003:  /* avx512f_fmaddsub_v8df_mask */
    case 2001:  /* avx512vl_fmaddsub_v4sf_mask */
    case 1999:  /* avx512vl_fmaddsub_v8sf_mask */
    case 1997:  /* avx512f_fmaddsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4812:  /* avx512dq_rangepv8df_mask_round */
    case 4804:  /* avx512dq_rangepv16sf_mask_round */
    case 1992:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 1983:  /* fma_fmaddsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4949:  /* avx5124vnniw_vp4dpwssds_maskz */
    case 4946:  /* avx5124vnniw_vp4dpwssd_maskz */
    case 4943:  /* avx5124fmaddps_4fnmaddss_maskz */
    case 4940:  /* avx5124fmaddps_4fnmaddps_maskz */
    case 4937:  /* avx5124fmaddps_4fmaddss_maskz */
    case 4934:  /* avx5124fmaddps_4fmaddps_maskz */
    case 4917:  /* vpamdd52huqv2di_maskz_1 */
    case 4915:  /* vpamdd52luqv2di_maskz_1 */
    case 4913:  /* vpamdd52huqv4di_maskz_1 */
    case 4911:  /* vpamdd52luqv4di_maskz_1 */
    case 4909:  /* vpamdd52huqv8di_maskz_1 */
    case 4907:  /* vpamdd52luqv8di_maskz_1 */
    case 4868:  /* avx512bw_dbpsadbwv32hi_mask */
    case 4866:  /* avx512bw_dbpsadbwv16hi_mask */
    case 4864:  /* avx512bw_dbpsadbwv8hi_mask */
    case 4816:  /* avx512dq_rangepv2df_mask */
    case 4814:  /* avx512dq_rangepv4df_mask */
    case 4811:  /* avx512dq_rangepv8df_mask */
    case 4808:  /* avx512dq_rangepv4sf_mask */
    case 4806:  /* avx512dq_rangepv8sf_mask */
    case 4803:  /* avx512dq_rangepv16sf_mask */
    case 4396:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 4394:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 4392:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 4390:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 4388:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 4386:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 4384:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 4382:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 4380:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 4378:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 4376:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 4374:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 4372:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 4370:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 4368:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 4366:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 4364:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 4362:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 4342:  /* avx512bw_vpermi2varv32hi3_maskz_1 */
    case 4340:  /* avx512vl_vpermi2varv16hi3_maskz_1 */
    case 4338:  /* avx512vl_vpermi2varv8hi3_maskz_1 */
    case 4336:  /* avx512vl_vpermi2varv32qi3_maskz_1 */
    case 4334:  /* avx512vl_vpermi2varv16qi3_maskz_1 */
    case 4332:  /* avx512bw_vpermi2varv64qi3_maskz_1 */
    case 4330:  /* avx512vl_vpermi2varv2df3_maskz_1 */
    case 4328:  /* avx512vl_vpermi2varv2di3_maskz_1 */
    case 4326:  /* avx512vl_vpermi2varv4sf3_maskz_1 */
    case 4324:  /* avx512vl_vpermi2varv4si3_maskz_1 */
    case 4322:  /* avx512vl_vpermi2varv4df3_maskz_1 */
    case 4320:  /* avx512vl_vpermi2varv4di3_maskz_1 */
    case 4318:  /* avx512vl_vpermi2varv8sf3_maskz_1 */
    case 4316:  /* avx512vl_vpermi2varv8si3_maskz_1 */
    case 4314:  /* avx512f_vpermi2varv8df3_maskz_1 */
    case 4312:  /* avx512f_vpermi2varv8di3_maskz_1 */
    case 4310:  /* avx512f_vpermi2varv16sf3_maskz_1 */
    case 4308:  /* avx512f_vpermi2varv16si3_maskz_1 */
    case 3762:  /* ssse3_palignrv16qi_mask */
    case 3761:  /* avx2_palignrv32qi_mask */
    case 3760:  /* avx512bw_palignrv64qi_mask */
    case 2616:  /* avx512vl_alignv2di_mask */
    case 2614:  /* avx512vl_alignv4di_mask */
    case 2612:  /* avx512f_alignv8di_mask */
    case 2610:  /* avx512vl_alignv4si_mask */
    case 2608:  /* avx512vl_alignv8si_mask */
    case 2606:  /* avx512f_alignv16si_mask */
    case 1996:  /* fma_fmaddsub_v2df_maskz_1 */
    case 1994:  /* fma_fmaddsub_v4df_maskz_1 */
    case 1991:  /* fma_fmaddsub_v8df_maskz_1 */
    case 1987:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 1985:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 1982:  /* fma_fmaddsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1974:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 1972:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 1970:  /* avx512f_fnmsub_v8df_mask3_round */
    case 1968:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 1966:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 1964:  /* avx512f_fnmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1973:  /* avx512vl_fnmsub_v2df_mask3 */
    case 1971:  /* avx512vl_fnmsub_v4df_mask3 */
    case 1969:  /* avx512f_fnmsub_v8df_mask3 */
    case 1967:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 1965:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 1963:  /* avx512f_fnmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1960:  /* avx512f_fnmsub_v8df_mask_round */
    case 1956:  /* avx512f_fnmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1962:  /* avx512vl_fnmsub_v2df_mask */
    case 1961:  /* avx512vl_fnmsub_v4df_mask */
    case 1959:  /* avx512f_fnmsub_v8df_mask */
    case 1958:  /* avx512vl_fnmsub_v4sf_mask */
    case 1957:  /* avx512vl_fnmsub_v8sf_mask */
    case 1955:  /* avx512f_fnmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1950:  /* fma_fnmsub_v8df_maskz_1_round */
    case 1941:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 1936:  /* *fma_fnmsub_v4df */
    case 1932:  /* *fma_fnmsub_v8sf */
    case 1928:  /* *fma_fnmsub_v2df */
    case 1924:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1954:  /* fma_fnmsub_v2df_maskz_1 */
    case 1952:  /* fma_fnmsub_v4df_maskz_1 */
    case 1949:  /* fma_fnmsub_v8df_maskz_1 */
    case 1945:  /* fma_fnmsub_v4sf_maskz_1 */
    case 1943:  /* fma_fnmsub_v8sf_maskz_1 */
    case 1940:  /* fma_fnmsub_v16sf_maskz_1 */
    case 1935:  /* *fma_fnmsub_v4df */
    case 1931:  /* *fma_fnmsub_v8sf */
    case 1927:  /* *fma_fnmsub_v2df */
    case 1923:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1948:  /* *fma_fnmsub_v8df_round */
    case 1939:  /* *fma_fnmsub_v16sf_round */
    case 1934:  /* *fma_fnmsub_v4df */
    case 1930:  /* *fma_fnmsub_v8sf */
    case 1926:  /* *fma_fnmsub_v2df */
    case 1922:  /* *fma_fnmsub_v4sf */
    case 1920:  /* *fma_fnmsub_df */
    case 1918:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1953:  /* *fma_fnmsub_v2df */
    case 1951:  /* *fma_fnmsub_v4df */
    case 1947:  /* *fma_fnmsub_v8df */
    case 1946:  /* *fma_fnmsub_df */
    case 1944:  /* *fma_fnmsub_v4sf */
    case 1942:  /* *fma_fnmsub_v8sf */
    case 1938:  /* *fma_fnmsub_v16sf */
    case 1937:  /* *fma_fnmsub_sf */
    case 1933:  /* *fma_fnmsub_v4df */
    case 1929:  /* *fma_fnmsub_v8sf */
    case 1925:  /* *fma_fnmsub_v2df */
    case 1921:  /* *fma_fnmsub_v4sf */
    case 1919:  /* *fma_fnmsub_df */
    case 1917:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1914:  /* avx512f_fnmadd_v8df_mask3_round */
    case 1910:  /* avx512f_fnmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1916:  /* avx512vl_fnmadd_v2df_mask3 */
    case 1915:  /* avx512vl_fnmadd_v4df_mask3 */
    case 1913:  /* avx512f_fnmadd_v8df_mask3 */
    case 1912:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 1911:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 1909:  /* avx512f_fnmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1906:  /* avx512f_fnmadd_v8df_mask_round */
    case 1902:  /* avx512f_fnmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1908:  /* avx512vl_fnmadd_v2df_mask */
    case 1907:  /* avx512vl_fnmadd_v4df_mask */
    case 1905:  /* avx512f_fnmadd_v8df_mask */
    case 1904:  /* avx512vl_fnmadd_v4sf_mask */
    case 1903:  /* avx512vl_fnmadd_v8sf_mask */
    case 1901:  /* avx512f_fnmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1896:  /* fma_fnmadd_v8df_maskz_1_round */
    case 1887:  /* fma_fnmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1900:  /* fma_fnmadd_v2df_maskz_1 */
    case 1898:  /* fma_fnmadd_v4df_maskz_1 */
    case 1895:  /* fma_fnmadd_v8df_maskz_1 */
    case 1891:  /* fma_fnmadd_v4sf_maskz_1 */
    case 1889:  /* fma_fnmadd_v8sf_maskz_1 */
    case 1886:  /* fma_fnmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1874:  /* avx512f_fmsub_v8df_mask3_round */
    case 1870:  /* avx512f_fmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1876:  /* avx512vl_fmsub_v2df_mask3 */
    case 1875:  /* avx512vl_fmsub_v4df_mask3 */
    case 1873:  /* avx512f_fmsub_v8df_mask3 */
    case 1872:  /* avx512vl_fmsub_v4sf_mask3 */
    case 1871:  /* avx512vl_fmsub_v8sf_mask3 */
    case 1869:  /* avx512f_fmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1868:  /* avx512vl_fmsub_v2df_mask_round */
    case 1866:  /* avx512vl_fmsub_v4df_mask_round */
    case 1864:  /* avx512f_fmsub_v8df_mask_round */
    case 1862:  /* avx512vl_fmsub_v4sf_mask_round */
    case 1860:  /* avx512vl_fmsub_v8sf_mask_round */
    case 1858:  /* avx512f_fmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1867:  /* avx512vl_fmsub_v2df_mask */
    case 1865:  /* avx512vl_fmsub_v4df_mask */
    case 1863:  /* avx512f_fmsub_v8df_mask */
    case 1861:  /* avx512vl_fmsub_v4sf_mask */
    case 1859:  /* avx512vl_fmsub_v8sf_mask */
    case 1857:  /* avx512f_fmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1852:  /* fma_fmsub_v8df_maskz_1_round */
    case 1843:  /* fma_fmsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1856:  /* fma_fmsub_v2df_maskz_1 */
    case 1854:  /* fma_fmsub_v4df_maskz_1 */
    case 1851:  /* fma_fmsub_v8df_maskz_1 */
    case 1847:  /* fma_fmsub_v4sf_maskz_1 */
    case 1845:  /* fma_fmsub_v8sf_maskz_1 */
    case 1842:  /* fma_fmsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1850:  /* *fma_fmsub_v8df_round */
    case 1841:  /* *fma_fmsub_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1855:  /* *fma_fmsub_v2df */
    case 1853:  /* *fma_fmsub_v4df */
    case 1849:  /* *fma_fmsub_v8df */
    case 1848:  /* *fma_fmsub_df */
    case 1846:  /* *fma_fmsub_v4sf */
    case 1844:  /* *fma_fmsub_v8sf */
    case 1840:  /* *fma_fmsub_v16sf */
    case 1839:  /* *fma_fmsub_sf */
    case 1838:  /* *fma_fmsub_v4df */
    case 1837:  /* *fma_fmsub_v8sf */
    case 1836:  /* *fma_fmsub_v2df */
    case 1835:  /* *fma_fmsub_v4sf */
    case 1834:  /* *fma_fmsub_df */
    case 1833:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1832:  /* avx512vl_fmadd_v2df_mask3_round */
    case 1830:  /* avx512vl_fmadd_v4df_mask3_round */
    case 1828:  /* avx512f_fmadd_v8df_mask3_round */
    case 1826:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 1824:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 1822:  /* avx512f_fmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1831:  /* avx512vl_fmadd_v2df_mask3 */
    case 1829:  /* avx512vl_fmadd_v4df_mask3 */
    case 1827:  /* avx512f_fmadd_v8df_mask3 */
    case 1825:  /* avx512vl_fmadd_v4sf_mask3 */
    case 1823:  /* avx512vl_fmadd_v8sf_mask3 */
    case 1821:  /* avx512f_fmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1818:  /* avx512f_fmadd_v8df_mask_round */
    case 1814:  /* avx512f_fmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1820:  /* avx512vl_fmadd_v2df_mask */
    case 1819:  /* avx512vl_fmadd_v4df_mask */
    case 1817:  /* avx512f_fmadd_v8df_mask */
    case 1816:  /* avx512vl_fmadd_v4sf_mask */
    case 1815:  /* avx512vl_fmadd_v8sf_mask */
    case 1813:  /* avx512f_fmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1808:  /* fma_fmadd_v8df_maskz_1_round */
    case 1799:  /* fma_fmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1812:  /* fma_fmadd_v2df_maskz_1 */
    case 1810:  /* fma_fmadd_v4df_maskz_1 */
    case 1807:  /* fma_fmadd_v8df_maskz_1 */
    case 1803:  /* fma_fmadd_v4sf_maskz_1 */
    case 1801:  /* fma_fmadd_v8sf_maskz_1 */
    case 1798:  /* fma_fmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1806:  /* *fma_fmadd_v8df_round */
    case 1797:  /* *fma_fmadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4442:  /* vec_set_hi_v8sf_mask */
    case 4440:  /* vec_set_hi_v8si_mask */
    case 4434:  /* vec_set_hi_v4df_mask */
    case 4432:  /* vec_set_hi_v4di_mask */
    case 3615:  /* vec_set_hi_v8di_mask */
    case 3613:  /* vec_set_hi_v8df_mask */
    case 3607:  /* vec_set_hi_v16si_mask */
    case 3605:  /* vec_set_hi_v16sf_mask */
    case 3413:  /* *andnotv2di3_mask */
    case 3412:  /* *andnotv4di3_mask */
    case 3411:  /* *andnotv8di3_mask */
    case 3410:  /* *andnotv4si3_mask */
    case 3409:  /* *andnotv8si3_mask */
    case 3408:  /* *andnotv16si3_mask */
    case 2371:  /* *sse2_cvtpd2ps_mask */
    case 1740:  /* avx512f_andnotv8df3_mask */
    case 1738:  /* avx512f_andnotv16sf3_mask */
    case 1736:  /* sse2_andnotv2df3_mask */
    case 1734:  /* avx_andnotv4df3_mask */
    case 1732:  /* sse_andnotv4sf3_mask */
    case 1730:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1728:  /* sse2_ucomi_round */
    case 1726:  /* sse_ucomi_round */
    case 1724:  /* sse2_comi_round */
    case 1722:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1727:  /* sse2_ucomi */
    case 1725:  /* sse_ucomi */
    case 1723:  /* sse2_comi */
    case 1721:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1714:  /* avx512f_vmcmpv2df3_mask_round */
    case 1712:  /* avx512f_vmcmpv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1713:  /* avx512f_vmcmpv2df3_mask */
    case 1711:  /* avx512f_vmcmpv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1710:  /* avx512f_vmcmpv2df3_round */
    case 1708:  /* avx512f_vmcmpv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1709:  /* avx512f_vmcmpv2df3 */
    case 1707:  /* avx512f_vmcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 1666:  /* avx512f_cmpv8df3_mask_round */
    case 1658:  /* avx512f_cmpv16sf3_mask_round */
    case 1650:  /* avx512f_cmpv8di3_mask_round */
    case 1642:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4810:  /* avx512dq_rangepv8df_round */
    case 4802:  /* avx512dq_rangepv16sf_round */
    case 1990:  /* *fma_fmaddsub_v8df_round */
    case 1981:  /* *fma_fmaddsub_v16sf_round */
    case 1665:  /* avx512f_cmpv8df3_round */
    case 1657:  /* avx512f_cmpv16sf3_round */
    case 1649:  /* avx512f_cmpv8di3_round */
    case 1641:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1706:  /* avx512vl_ucmpv2di3_mask */
    case 1704:  /* avx512vl_ucmpv4di3_mask */
    case 1702:  /* avx512f_ucmpv8di3_mask */
    case 1700:  /* avx512vl_ucmpv4si3_mask */
    case 1698:  /* avx512vl_ucmpv8si3_mask */
    case 1696:  /* avx512f_ucmpv16si3_mask */
    case 1694:  /* avx512vl_ucmpv8hi3_mask */
    case 1692:  /* avx512vl_ucmpv16hi3_mask */
    case 1690:  /* avx512bw_ucmpv32hi3_mask */
    case 1688:  /* avx512vl_ucmpv32qi3_mask */
    case 1686:  /* avx512vl_ucmpv16qi3_mask */
    case 1684:  /* avx512bw_ucmpv64qi3_mask */
    case 1682:  /* avx512vl_cmpv8hi3_mask */
    case 1680:  /* avx512vl_cmpv16hi3_mask */
    case 1678:  /* avx512bw_cmpv32hi3_mask */
    case 1676:  /* avx512vl_cmpv32qi3_mask */
    case 1674:  /* avx512vl_cmpv16qi3_mask */
    case 1672:  /* avx512bw_cmpv64qi3_mask */
    case 1670:  /* avx512vl_cmpv2df3_mask */
    case 1668:  /* avx512vl_cmpv4df3_mask */
    case 1664:  /* avx512f_cmpv8df3_mask */
    case 1662:  /* avx512vl_cmpv4sf3_mask */
    case 1660:  /* avx512vl_cmpv8sf3_mask */
    case 1656:  /* avx512f_cmpv16sf3_mask */
    case 1654:  /* avx512vl_cmpv2di3_mask */
    case 1652:  /* avx512vl_cmpv4di3_mask */
    case 1648:  /* avx512f_cmpv8di3_mask */
    case 1646:  /* avx512vl_cmpv4si3_mask */
    case 1644:  /* avx512vl_cmpv8si3_mask */
    case 1640:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1638:  /* sse2_vmmaskcmpv2df3 */
    case 1637:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4861:  /* avx512f_vgetmantv2df */
    case 4859:  /* avx512f_vgetmantv4sf */
    case 4819:  /* avx512dq_rangesv2df */
    case 4817:  /* avx512dq_rangesv4sf */
    case 2691:  /* avx512f_rndscalev2df */
    case 2689:  /* avx512f_rndscalev4sf */
    case 1628:  /* avx_vmcmpv2df3 */
    case 1627:  /* avx_vmcmpv4sf3 */
    case 1622:  /* reducesv2df */
    case 1621:  /* reducesv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3723:  /* ssse3_phsubdv4si3 */
    case 3722:  /* ssse3_phadddv4si3 */
    case 3719:  /* ssse3_phsubswv4hi3 */
    case 3718:  /* ssse3_phsubwv4hi3 */
    case 3717:  /* ssse3_phaddswv4hi3 */
    case 3716:  /* ssse3_phaddwv4hi3 */
    case 1608:  /* sse3_hsubv4sf3 */
    case 1607:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1606:  /* avx_hsubv8sf3 */
    case 1605:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1604:  /* *sse3_hsubv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1603:  /* *sse3_haddv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1601:  /* *sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1600:  /* avx_hsubv4df3 */
    case 1599:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 4858:  /* avx512vl_getmantv2df_mask_round */
    case 4854:  /* avx512vl_getmantv4df_mask_round */
    case 4850:  /* avx512f_getmantv8df_mask_round */
    case 4846:  /* avx512vl_getmantv4sf_mask_round */
    case 4842:  /* avx512vl_getmantv8sf_mask_round */
    case 4838:  /* avx512f_getmantv16sf_mask_round */
    case 2688:  /* avx512vl_rndscalev2df_mask_round */
    case 2684:  /* avx512vl_rndscalev4df_mask_round */
    case 2680:  /* avx512f_rndscalev8df_mask_round */
    case 2676:  /* avx512vl_rndscalev4sf_mask_round */
    case 2672:  /* avx512vl_rndscalev8sf_mask_round */
    case 2668:  /* avx512f_rndscalev16sf_mask_round */
    case 2558:  /* avx512vl_scalefv2df_mask_round */
    case 2554:  /* avx512vl_scalefv4df_mask_round */
    case 2550:  /* avx512f_scalefv8df_mask_round */
    case 2546:  /* avx512vl_scalefv4sf_mask_round */
    case 2542:  /* avx512vl_scalefv8sf_mask_round */
    case 2538:  /* avx512f_scalefv16sf_mask_round */
    case 1578:  /* ieee_minv8df3_mask_round */
    case 1574:  /* ieee_maxv8df3_mask_round */
    case 1562:  /* ieee_minv16sf3_mask_round */
    case 1558:  /* ieee_maxv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4948:  /* avx5124vnniw_vp4dpwssds_mask */
    case 4945:  /* avx5124vnniw_vp4dpwssd_mask */
    case 4942:  /* avx5124fmaddps_4fnmaddss_mask */
    case 4939:  /* avx5124fmaddps_4fnmaddps_mask */
    case 4936:  /* avx5124fmaddps_4fmaddss_mask */
    case 4933:  /* avx5124fmaddps_4fmaddps_mask */
    case 4929:  /* vpmultishiftqbv32qi_mask */
    case 4927:  /* vpmultishiftqbv16qi_mask */
    case 4925:  /* vpmultishiftqbv64qi_mask */
    case 4857:  /* avx512vl_getmantv2df_mask */
    case 4853:  /* avx512vl_getmantv4df_mask */
    case 4849:  /* avx512f_getmantv8df_mask */
    case 4845:  /* avx512vl_getmantv4sf_mask */
    case 4841:  /* avx512vl_getmantv8sf_mask */
    case 4837:  /* avx512f_getmantv16sf_mask */
    case 4548:  /* avx512f_vcvtps2ph512_mask */
    case 4546:  /* vcvtps2ph256_mask */
    case 4306:  /* avx_vpermilvarv2df3_mask */
    case 4304:  /* avx_vpermilvarv4df3_mask */
    case 4302:  /* avx512f_vpermilvarv8df3_mask */
    case 4300:  /* avx_vpermilvarv4sf3_mask */
    case 4298:  /* avx_vpermilvarv8sf3_mask */
    case 4296:  /* avx512f_vpermilvarv16sf3_mask */
    case 4130:  /* avx512bw_permvarv32hi_mask */
    case 4128:  /* avx512vl_permvarv16hi_mask */
    case 4126:  /* avx512vl_permvarv8hi_mask */
    case 4124:  /* avx512vl_permvarv32qi_mask */
    case 4122:  /* avx512vl_permvarv16qi_mask */
    case 4120:  /* avx512bw_permvarv64qi_mask */
    case 4118:  /* avx2_permvarv4df_mask */
    case 4116:  /* avx2_permvarv4di_mask */
    case 4114:  /* avx512f_permvarv8df_mask */
    case 4112:  /* avx512f_permvarv8di_mask */
    case 4110:  /* avx512f_permvarv16sf_mask */
    case 4108:  /* avx512f_permvarv16si_mask */
    case 4106:  /* avx2_permvarv8sf_mask */
    case 4104:  /* avx2_permvarv8si_mask */
    case 3749:  /* ssse3_pshufbv16qi3_mask */
    case 3747:  /* avx2_pshufbv32qi3_mask */
    case 3745:  /* avx512bw_pshufbv64qi3_mask */
    case 3732:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 3730:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 3728:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 3645:  /* avx512bw_pshufhwv32hi_mask */
    case 3639:  /* avx512bw_pshuflwv32hi_mask */
    case 3077:  /* avx512bw_pmaddwd512v8hi_mask */
    case 3075:  /* avx512bw_pmaddwd512v16hi_mask */
    case 3073:  /* avx512bw_pmaddwd512v32hi_mask */
    case 2687:  /* avx512vl_rndscalev2df_mask */
    case 2683:  /* avx512vl_rndscalev4df_mask */
    case 2679:  /* avx512f_rndscalev8df_mask */
    case 2675:  /* avx512vl_rndscalev4sf_mask */
    case 2671:  /* avx512vl_rndscalev8sf_mask */
    case 2667:  /* avx512f_rndscalev16sf_mask */
    case 2557:  /* avx512vl_scalefv2df_mask */
    case 2553:  /* avx512vl_scalefv4df_mask */
    case 2549:  /* avx512f_scalefv8df_mask */
    case 2545:  /* avx512vl_scalefv4sf_mask */
    case 2541:  /* avx512vl_scalefv8sf_mask */
    case 2537:  /* avx512f_scalefv16sf_mask */
    case 1620:  /* reducepv2df_mask */
    case 1618:  /* reducepv4df_mask */
    case 1616:  /* reducepv8df_mask */
    case 1614:  /* reducepv4sf_mask */
    case 1612:  /* reducepv8sf_mask */
    case 1610:  /* reducepv16sf_mask */
    case 1586:  /* ieee_minv2df3_mask */
    case 1584:  /* ieee_maxv2df3_mask */
    case 1582:  /* ieee_minv4df3_mask */
    case 1580:  /* ieee_maxv4df3_mask */
    case 1577:  /* ieee_minv8df3_mask */
    case 1573:  /* ieee_maxv8df3_mask */
    case 1570:  /* ieee_minv4sf3_mask */
    case 1568:  /* ieee_maxv4sf3_mask */
    case 1566:  /* ieee_minv8sf3_mask */
    case 1564:  /* ieee_maxv8sf3_mask */
    case 1561:  /* ieee_minv16sf3_mask */
    case 1557:  /* ieee_maxv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4856:  /* avx512vl_getmantv2df_round */
    case 4852:  /* avx512vl_getmantv4df_round */
    case 4848:  /* avx512f_getmantv8df_round */
    case 4844:  /* avx512vl_getmantv4sf_round */
    case 4840:  /* avx512vl_getmantv8sf_round */
    case 4836:  /* avx512f_getmantv16sf_round */
    case 2686:  /* avx512vl_rndscalev2df_round */
    case 2682:  /* avx512vl_rndscalev4df_round */
    case 2678:  /* avx512f_rndscalev8df_round */
    case 2674:  /* avx512vl_rndscalev4sf_round */
    case 2670:  /* avx512vl_rndscalev8sf_round */
    case 2666:  /* avx512f_rndscalev16sf_round */
    case 2556:  /* avx512vl_scalefv2df_round */
    case 2552:  /* avx512vl_scalefv4df_round */
    case 2548:  /* avx512f_scalefv8df_round */
    case 2544:  /* avx512vl_scalefv4sf_round */
    case 2540:  /* avx512vl_scalefv8sf_round */
    case 2536:  /* avx512f_scalefv16sf_round */
    case 1576:  /* ieee_minv8df3_round */
    case 1572:  /* ieee_maxv8df3_round */
    case 1560:  /* ieee_minv16sf3_round */
    case 1556:  /* ieee_maxv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1489:  /* sse2_vmsqrtv2df2_round */
    case 1487:  /* sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2375:  /* avx512f_cvtps2pd512_mask_round */
    case 2367:  /* avx512f_cvtpd2ps512_mask_round */
    case 2343:  /* ufix_truncv8sfv8di2_mask_round */
    case 2339:  /* fix_truncv8sfv8di2_mask_round */
    case 2311:  /* ufix_truncv8dfv8di2_mask_round */
    case 2307:  /* fix_truncv8dfv8di2_mask_round */
    case 2297:  /* ufix_truncv8dfv8si2_mask_round */
    case 2293:  /* fix_truncv8dfv8si2_mask_round */
    case 2250:  /* ufloatv8div8sf2_mask_round */
    case 2246:  /* floatv8div8sf2_mask_round */
    case 2242:  /* ufloatv2div2df2_mask_round */
    case 2238:  /* floatv2div2df2_mask_round */
    case 2234:  /* ufloatv4div4df2_mask_round */
    case 2230:  /* floatv4div4df2_mask_round */
    case 2226:  /* ufloatv8div8df2_mask_round */
    case 2222:  /* floatv8div8df2_mask_round */
    case 2178:  /* ufix_truncv16sfv16si2_mask_round */
    case 2174:  /* fix_truncv16sfv16si2_mask_round */
    case 2134:  /* ufloatv4siv4sf2_mask_round */
    case 2130:  /* ufloatv8siv8sf2_mask_round */
    case 2126:  /* ufloatv16siv16sf2_mask_round */
    case 2118:  /* floatv16siv16sf2_mask_round */
    case 1894:  /* *fma_fnmadd_v8df_round */
    case 1885:  /* *fma_fnmadd_v16sf_round */
    case 1481:  /* avx512f_sqrtv8df2_mask_round */
    case 1473:  /* avx512f_sqrtv16sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4953:  /* vpopcountv8di_mask */
    case 4951:  /* vpopcountv16si_mask */
    case 4880:  /* clzv2di2_mask */
    case 4878:  /* clzv4di2_mask */
    case 4876:  /* clzv8di2_mask */
    case 4874:  /* clzv4si2_mask */
    case 4872:  /* clzv8si2_mask */
    case 4870:  /* clzv16si2_mask */
    case 4273:  /* avx512dq_broadcastv4df_mask_1 */
    case 4271:  /* avx512dq_broadcastv4di_mask_1 */
    case 4269:  /* avx512dq_broadcastv8df_mask_1 */
    case 4267:  /* avx512dq_broadcastv8di_mask_1 */
    case 4265:  /* avx512dq_broadcastv16si_mask_1 */
    case 4263:  /* avx512dq_broadcastv16sf_mask_1 */
    case 4261:  /* avx512vl_broadcastv8sf_mask_1 */
    case 4259:  /* avx512vl_broadcastv8si_mask_1 */
    case 4224:  /* avx512vl_vec_dup_gprv2df_mask */
    case 4222:  /* avx512vl_vec_dup_gprv4df_mask */
    case 4220:  /* avx512f_vec_dup_gprv8df_mask */
    case 4218:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 4216:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 4214:  /* avx512f_vec_dup_gprv16sf_mask */
    case 4212:  /* avx512vl_vec_dup_gprv2di_mask */
    case 4210:  /* avx512vl_vec_dup_gprv4di_mask */
    case 4208:  /* avx512f_vec_dup_gprv8di_mask */
    case 4206:  /* avx512vl_vec_dup_gprv4si_mask */
    case 4204:  /* avx512vl_vec_dup_gprv8si_mask */
    case 4202:  /* avx512f_vec_dup_gprv16si_mask */
    case 4200:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 4198:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 4196:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 4194:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 4192:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 4190:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 4188:  /* avx512f_broadcastv8di_mask */
    case 4186:  /* avx512f_broadcastv8df_mask */
    case 4184:  /* avx512f_broadcastv16si_mask */
    case 4182:  /* avx512f_broadcastv16sf_mask */
    case 3899:  /* avx2_zero_extendv4siv4di2_mask */
    case 3897:  /* avx2_sign_extendv4siv4di2_mask */
    case 3895:  /* avx512f_zero_extendv8siv8di2_mask */
    case 3893:  /* avx512f_sign_extendv8siv8di2_mask */
    case 3883:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 3881:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 3863:  /* avx2_zero_extendv8hiv8si2_mask */
    case 3861:  /* avx2_sign_extendv8hiv8si2_mask */
    case 3859:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 3857:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 3847:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 3845:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 3839:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 3837:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 3835:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 3833:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 3790:  /* absv8hi2_mask */
    case 3789:  /* absv16hi2_mask */
    case 3788:  /* absv32hi2_mask */
    case 3787:  /* absv32qi2_mask */
    case 3786:  /* absv16qi2_mask */
    case 3785:  /* absv64qi2_mask */
    case 3784:  /* absv2di2_mask */
    case 3783:  /* absv4di2_mask */
    case 3782:  /* absv8di2_mask */
    case 3781:  /* absv4si2_mask */
    case 3780:  /* absv8si2_mask */
    case 3779:  /* absv16si2_mask */
    case 2771:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 2770:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 2769:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 2768:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 2767:  /* avx512vl_truncatev8siv8hi2_mask */
    case 2766:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 2765:  /* avx512vl_us_truncatev4div4si2_mask */
    case 2764:  /* avx512vl_truncatev4div4si2_mask */
    case 2763:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 2753:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 2752:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 2751:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 2747:  /* avx512f_us_truncatev8div8hi2_mask */
    case 2746:  /* avx512f_truncatev8div8hi2_mask */
    case 2745:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 2744:  /* avx512f_us_truncatev8div8si2_mask */
    case 2743:  /* avx512f_truncatev8div8si2_mask */
    case 2742:  /* avx512f_ss_truncatev8div8si2_mask */
    case 2741:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 2740:  /* avx512f_truncatev16siv16hi2_mask */
    case 2739:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 2738:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 2737:  /* avx512f_truncatev16siv16qi2_mask */
    case 2736:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 2722:  /* vec_dupv2df_mask */
    case 2508:  /* vec_extract_hi_v8sf_mask */
    case 2507:  /* vec_extract_hi_v8si_mask */
    case 2506:  /* vec_extract_hi_v8sf_maskm */
    case 2505:  /* vec_extract_hi_v8si_maskm */
    case 2504:  /* vec_extract_lo_v8sf_maskm */
    case 2503:  /* vec_extract_lo_v8si_maskm */
    case 2502:  /* vec_extract_lo_v8sf_mask */
    case 2500:  /* vec_extract_lo_v8si_mask */
    case 2498:  /* vec_extract_hi_v4df_mask */
    case 2496:  /* vec_extract_hi_v4di_mask */
    case 2494:  /* vec_extract_lo_v4df_mask */
    case 2492:  /* vec_extract_lo_v4di_mask */
    case 2490:  /* vec_extract_lo_v16si_mask */
    case 2488:  /* vec_extract_lo_v16sf_mask */
    case 2486:  /* vec_extract_hi_v16si_mask */
    case 2484:  /* vec_extract_hi_v16sf_mask */
    case 2482:  /* vec_extract_hi_v16si_maskm */
    case 2481:  /* vec_extract_hi_v16sf_maskm */
    case 2480:  /* vec_extract_hi_v8di_mask */
    case 2478:  /* vec_extract_hi_v8df_mask */
    case 2476:  /* vec_extract_hi_v8di_maskm */
    case 2475:  /* vec_extract_hi_v8df_maskm */
    case 2474:  /* vec_extract_lo_v8di_mask */
    case 2472:  /* vec_extract_lo_v8df_mask */
    case 2470:  /* vec_extract_lo_v8di_maskm */
    case 2469:  /* vec_extract_lo_v8df_maskm */
    case 2377:  /* avx_cvtps2pd256_mask */
    case 2374:  /* avx512f_cvtps2pd512_mask */
    case 2369:  /* avx_cvtpd2ps256_mask */
    case 2366:  /* avx512f_cvtpd2ps512_mask */
    case 2355:  /* ufix_truncv4sfv4si2_mask */
    case 2353:  /* ufix_truncv8sfv8si2_mask */
    case 2347:  /* ufix_truncv4sfv4di2_mask */
    case 2345:  /* fix_truncv4sfv4di2_mask */
    case 2342:  /* ufix_truncv8sfv8di2_mask */
    case 2338:  /* fix_truncv8sfv8di2_mask */
    case 2319:  /* ufix_truncv2dfv2di2_mask */
    case 2317:  /* fix_truncv2dfv2di2_mask */
    case 2315:  /* ufix_truncv4dfv4di2_mask */
    case 2313:  /* fix_truncv4dfv4di2_mask */
    case 2310:  /* ufix_truncv8dfv8di2_mask */
    case 2306:  /* fix_truncv8dfv8di2_mask */
    case 2303:  /* ufix_truncv4dfv4si2_mask */
    case 2301:  /* fix_truncv4dfv4si2_mask */
    case 2296:  /* ufix_truncv8dfv8si2_mask */
    case 2292:  /* fix_truncv8dfv8si2_mask */
    case 2264:  /* ufloatv4siv4df2_mask */
    case 2262:  /* ufloatv8siv8df2_mask */
    case 2254:  /* ufloatv4div4sf2_mask */
    case 2252:  /* floatv4div4sf2_mask */
    case 2249:  /* ufloatv8div8sf2_mask */
    case 2245:  /* floatv8div8sf2_mask */
    case 2241:  /* ufloatv2div2df2_mask */
    case 2237:  /* floatv2div2df2_mask */
    case 2233:  /* ufloatv4div4df2_mask */
    case 2229:  /* floatv4div4df2_mask */
    case 2225:  /* ufloatv8div8df2_mask */
    case 2221:  /* floatv8div8df2_mask */
    case 2218:  /* floatv4siv4df2_mask */
    case 2216:  /* floatv8siv8df2_mask */
    case 2182:  /* fix_truncv4sfv4si2_mask */
    case 2180:  /* fix_truncv8sfv8si2_mask */
    case 2177:  /* ufix_truncv16sfv16si2_mask */
    case 2173:  /* fix_truncv16sfv16si2_mask */
    case 2133:  /* ufloatv4siv4sf2_mask */
    case 2129:  /* ufloatv8siv8sf2_mask */
    case 2125:  /* ufloatv16siv16sf2_mask */
    case 2122:  /* floatv4siv4sf2_mask */
    case 2120:  /* floatv8siv8sf2_mask */
    case 2117:  /* floatv16siv16sf2_mask */
    case 1899:  /* *fma_fnmadd_v2df */
    case 1897:  /* *fma_fnmadd_v4df */
    case 1893:  /* *fma_fnmadd_v8df */
    case 1892:  /* *fma_fnmadd_df */
    case 1890:  /* *fma_fnmadd_v4sf */
    case 1888:  /* *fma_fnmadd_v8sf */
    case 1884:  /* *fma_fnmadd_v16sf */
    case 1883:  /* *fma_fnmadd_sf */
    case 1882:  /* *fma_fnmadd_v4df */
    case 1881:  /* *fma_fnmadd_v8sf */
    case 1880:  /* *fma_fnmadd_v2df */
    case 1879:  /* *fma_fnmadd_v4sf */
    case 1878:  /* *fma_fnmadd_df */
    case 1877:  /* *fma_fnmadd_sf */
    case 1485:  /* sse2_sqrtv2df2_mask */
    case 1483:  /* avx_sqrtv4df2_mask */
    case 1480:  /* avx512f_sqrtv8df2_mask */
    case 1477:  /* sse_sqrtv4sf2_mask */
    case 1475:  /* avx_sqrtv8sf2_mask */
    case 1472:  /* avx512f_sqrtv16sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4892:  /* conflictv2di_mask */
    case 4890:  /* conflictv4di_mask */
    case 4888:  /* conflictv8di_mask */
    case 4886:  /* conflictv4si_mask */
    case 4884:  /* conflictv8si_mask */
    case 4882:  /* conflictv16si_mask */
    case 4540:  /* avx512f_vcvtph2ps512_mask */
    case 4537:  /* vcvtph2ps256_mask */
    case 4535:  /* *vcvtph2ps_load_mask */
    case 3977:  /* avx512er_rsqrt28v8df_mask */
    case 3973:  /* avx512er_rsqrt28v16sf_mask */
    case 3965:  /* avx512er_rcp28v8df_mask */
    case 3961:  /* avx512er_rcp28v16sf_mask */
    case 3957:  /* avx512er_exp2v8df_mask */
    case 3953:  /* avx512er_exp2v16sf_mask */
    case 2599:  /* avx512vl_getexpv2df_mask */
    case 2595:  /* avx512vl_getexpv4df_mask */
    case 2591:  /* avx512f_getexpv8df_mask */
    case 2587:  /* avx512vl_getexpv4sf_mask */
    case 2583:  /* avx512vl_getexpv8sf_mask */
    case 2579:  /* avx512f_getexpv16sf_mask */
    case 2335:  /* ufix_notruncv2dfv2di2_mask */
    case 2333:  /* ufix_notruncv4dfv4di2_mask */
    case 2330:  /* ufix_notruncv8dfv8di2_mask */
    case 2327:  /* fix_notruncv2dfv2di2_mask */
    case 2325:  /* fix_notruncv4dfv4di2_mask */
    case 2322:  /* fix_notruncv8dfv8di2_mask */
    case 2286:  /* ufix_notruncv4dfv4si2_mask */
    case 2282:  /* ufix_notruncv8dfv8si2_mask */
    case 2276:  /* avx_cvtpd2dq256_mask */
    case 2273:  /* avx512f_cvtpd2dq512_mask */
    case 2168:  /* avx512dq_cvtps2uqqv4di_mask */
    case 2165:  /* avx512dq_cvtps2uqqv8di_mask */
    case 2160:  /* avx512dq_cvtps2qqv4di_mask */
    case 2157:  /* avx512dq_cvtps2qqv8di_mask */
    case 2153:  /* avx512vl_ufix_notruncv4sfv4si_mask */
    case 2149:  /* avx512vl_ufix_notruncv8sfv8si_mask */
    case 2145:  /* avx512f_ufix_notruncv16sfv16si_mask */
    case 2141:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 2138:  /* sse2_fix_notruncv4sfv4si_mask */
    case 2136:  /* avx_fix_notruncv8sfv8si_mask */
    case 1503:  /* rsqrt14v2df_mask */
    case 1501:  /* rsqrt14v4df_mask */
    case 1499:  /* rsqrt14v8df_mask */
    case 1497:  /* rsqrt14v4sf_mask */
    case 1495:  /* rsqrt14v8sf_mask */
    case 1493:  /* rsqrt14v16sf_mask */
    case 1467:  /* rcp14v2df_mask */
    case 1465:  /* rcp14v4df_mask */
    case 1463:  /* rcp14v8df_mask */
    case 1461:  /* rcp14v4sf_mask */
    case 1459:  /* rcp14v8sf_mask */
    case 1457:  /* rcp14v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4057:  /* *xop_vmfrczv2df2 */
    case 4056:  /* *xop_vmfrczv4sf2 */
    case 3981:  /* avx512er_vmrsqrt28v2df */
    case 3979:  /* avx512er_vmrsqrt28v4sf */
    case 3969:  /* avx512er_vmrcp28v2df */
    case 3967:  /* avx512er_vmrcp28v4sf */
    case 2277:  /* *avx_cvtpd2dq256_2 */
    case 1506:  /* sse_vmrsqrtv4sf2 */
    case 1505:  /* rsqrt14v2df */
    case 1504:  /* rsqrt14v4sf */
    case 1469:  /* srcp14v2df */
    case 1468:  /* srcp14v4sf */
    case 1455:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1594:  /* sse2_vmsminv2df3_round */
    case 1592:  /* sse2_vmsmaxv2df3_round */
    case 1590:  /* sse_vmsminv4sf3_round */
    case 1588:  /* sse_vmsmaxv4sf3_round */
    case 1436:  /* sse2_vmdivv2df3_round */
    case 1434:  /* sse2_vmmulv2df3_round */
    case 1432:  /* sse_vmdivv4sf3_round */
    case 1430:  /* sse_vmmulv4sf3_round */
    case 1404:  /* sse2_vmsubv2df3_round */
    case 1402:  /* sse2_vmaddv2df3_round */
    case 1400:  /* sse_vmsubv4sf3_round */
    case 1398:  /* sse_vmaddv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1593:  /* sse2_vmsminv2df3 */
    case 1591:  /* sse2_vmsmaxv2df3 */
    case 1589:  /* sse_vmsminv4sf3 */
    case 1587:  /* sse_vmsmaxv4sf3 */
    case 1435:  /* sse2_vmdivv2df3 */
    case 1433:  /* sse2_vmmulv2df3 */
    case 1431:  /* sse_vmdivv4sf3 */
    case 1429:  /* sse_vmmulv4sf3 */
    case 1403:  /* sse2_vmsubv2df3 */
    case 1401:  /* sse2_vmaddv2df3 */
    case 1399:  /* sse_vmsubv4sf3 */
    case 1397:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1554:  /* *sminv2df3_mask_round */
    case 1550:  /* *smaxv2df3_mask_round */
    case 1546:  /* *sminv4df3_mask_round */
    case 1542:  /* *smaxv4df3_mask_round */
    case 1538:  /* *sminv8df3_mask_round */
    case 1534:  /* *smaxv8df3_mask_round */
    case 1530:  /* *sminv4sf3_mask_round */
    case 1526:  /* *smaxv4sf3_mask_round */
    case 1522:  /* *sminv8sf3_mask_round */
    case 1518:  /* *smaxv8sf3_mask_round */
    case 1514:  /* *sminv16sf3_mask_round */
    case 1510:  /* *smaxv16sf3_mask_round */
    case 1448:  /* avx512f_divv8df3_mask_round */
    case 1440:  /* avx512f_divv16sf3_mask_round */
    case 1428:  /* *mulv2df3_mask_round */
    case 1424:  /* *mulv4df3_mask_round */
    case 1420:  /* *mulv8df3_mask_round */
    case 1416:  /* *mulv4sf3_mask_round */
    case 1412:  /* *mulv8sf3_mask_round */
    case 1408:  /* *mulv16sf3_mask_round */
    case 1396:  /* *subv2df3_mask_round */
    case 1392:  /* *addv2df3_mask_round */
    case 1388:  /* *subv4df3_mask_round */
    case 1384:  /* *addv4df3_mask_round */
    case 1380:  /* *subv8df3_mask_round */
    case 1376:  /* *addv8df3_mask_round */
    case 1372:  /* *subv4sf3_mask_round */
    case 1368:  /* *addv4sf3_mask_round */
    case 1364:  /* *subv8sf3_mask_round */
    case 1360:  /* *addv8sf3_mask_round */
    case 1356:  /* *subv16sf3_mask_round */
    case 1352:  /* *addv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4519:  /* avx512bw_lshrvv32hi_mask */
    case 4517:  /* avx512bw_ashlvv32hi_mask */
    case 4515:  /* avx512vl_lshrvv16hi_mask */
    case 4513:  /* avx512vl_ashlvv16hi_mask */
    case 4511:  /* avx512vl_lshrvv8hi_mask */
    case 4509:  /* avx512vl_ashlvv8hi_mask */
    case 4507:  /* avx2_lshrvv2di_mask */
    case 4505:  /* avx2_ashlvv2di_mask */
    case 4503:  /* avx2_lshrvv4di_mask */
    case 4501:  /* avx2_ashlvv4di_mask */
    case 4499:  /* avx512f_lshrvv8di_mask */
    case 4497:  /* avx512f_ashlvv8di_mask */
    case 4495:  /* avx2_lshrvv4si_mask */
    case 4493:  /* avx2_ashlvv4si_mask */
    case 4491:  /* avx2_lshrvv8si_mask */
    case 4489:  /* avx2_ashlvv8si_mask */
    case 4487:  /* avx512f_lshrvv16si_mask */
    case 4485:  /* avx512f_ashlvv16si_mask */
    case 4483:  /* avx512bw_ashrvv32hi_mask */
    case 4481:  /* avx512vl_ashrvv16hi_mask */
    case 4479:  /* avx512vl_ashrvv8hi_mask */
    case 4477:  /* avx512f_ashrvv8di_mask */
    case 4475:  /* avx2_ashrvv4di_mask */
    case 4473:  /* avx2_ashrvv2di_mask */
    case 4471:  /* avx512f_ashrvv16si_mask */
    case 4469:  /* avx2_ashrvv8si_mask */
    case 4467:  /* avx2_ashrvv4si_mask */
    case 3485:  /* *xorv8hi3 */
    case 3483:  /* *iorv8hi3 */
    case 3481:  /* *andv8hi3 */
    case 3479:  /* *xorv16hi3 */
    case 3477:  /* *iorv16hi3 */
    case 3475:  /* *andv16hi3 */
    case 3473:  /* *xorv32hi3 */
    case 3471:  /* *iorv32hi3 */
    case 3469:  /* *andv32hi3 */
    case 3467:  /* *xorv16qi3 */
    case 3465:  /* *iorv16qi3 */
    case 3463:  /* *andv16qi3 */
    case 3461:  /* *xorv32qi3 */
    case 3459:  /* *iorv32qi3 */
    case 3457:  /* *andv32qi3 */
    case 3455:  /* *xorv64qi3 */
    case 3453:  /* *iorv64qi3 */
    case 3451:  /* *andv64qi3 */
    case 3449:  /* xorv2di3_mask */
    case 3447:  /* iorv2di3_mask */
    case 3445:  /* andv2di3_mask */
    case 3443:  /* xorv4di3_mask */
    case 3441:  /* iorv4di3_mask */
    case 3439:  /* andv4di3_mask */
    case 3437:  /* xorv8di3_mask */
    case 3435:  /* iorv8di3_mask */
    case 3433:  /* andv8di3_mask */
    case 3431:  /* xorv4si3_mask */
    case 3429:  /* iorv4si3_mask */
    case 3427:  /* andv4si3_mask */
    case 3425:  /* xorv8si3_mask */
    case 3423:  /* iorv8si3_mask */
    case 3421:  /* andv8si3_mask */
    case 3419:  /* xorv16si3_mask */
    case 3417:  /* iorv16si3_mask */
    case 3415:  /* andv16si3_mask */
    case 3329:  /* *sse4_1_uminv4si3_mask */
    case 3327:  /* *sse4_1_umaxv4si3_mask */
    case 3325:  /* *sse4_1_uminv8hi3_mask */
    case 3323:  /* *sse4_1_umaxv8hi3_mask */
    case 3319:  /* *sse4_1_sminv4si3_mask */
    case 3317:  /* *sse4_1_smaxv4si3_mask */
    case 3315:  /* *sse4_1_sminv16qi3_mask */
    case 3313:  /* *sse4_1_smaxv16qi3_mask */
    case 3311:  /* uminv8hi3_mask */
    case 3309:  /* umaxv8hi3_mask */
    case 3307:  /* sminv8hi3_mask */
    case 3305:  /* smaxv8hi3_mask */
    case 3303:  /* uminv16hi3_mask */
    case 3301:  /* umaxv16hi3_mask */
    case 3299:  /* sminv16hi3_mask */
    case 3297:  /* smaxv16hi3_mask */
    case 3295:  /* uminv32hi3_mask */
    case 3293:  /* umaxv32hi3_mask */
    case 3291:  /* sminv32hi3_mask */
    case 3289:  /* smaxv32hi3_mask */
    case 3287:  /* uminv32qi3_mask */
    case 3285:  /* umaxv32qi3_mask */
    case 3283:  /* sminv32qi3_mask */
    case 3281:  /* smaxv32qi3_mask */
    case 3279:  /* uminv16qi3_mask */
    case 3277:  /* umaxv16qi3_mask */
    case 3275:  /* sminv16qi3_mask */
    case 3273:  /* smaxv16qi3_mask */
    case 3271:  /* uminv64qi3_mask */
    case 3269:  /* umaxv64qi3_mask */
    case 3267:  /* sminv64qi3_mask */
    case 3265:  /* smaxv64qi3_mask */
    case 3263:  /* *avx512f_uminv2di3_mask */
    case 3261:  /* *avx512f_umaxv2di3_mask */
    case 3259:  /* *avx512f_sminv2di3_mask */
    case 3257:  /* *avx512f_smaxv2di3_mask */
    case 3255:  /* *avx512f_uminv4di3_mask */
    case 3253:  /* *avx512f_umaxv4di3_mask */
    case 3251:  /* *avx512f_sminv4di3_mask */
    case 3249:  /* *avx512f_smaxv4di3_mask */
    case 3247:  /* *avx512f_uminv8di3_mask */
    case 3245:  /* *avx512f_umaxv8di3_mask */
    case 3243:  /* *avx512f_sminv8di3_mask */
    case 3241:  /* *avx512f_smaxv8di3_mask */
    case 3239:  /* *avx512f_uminv4si3_mask */
    case 3237:  /* *avx512f_umaxv4si3_mask */
    case 3235:  /* *avx512f_sminv4si3_mask */
    case 3233:  /* *avx512f_smaxv4si3_mask */
    case 3231:  /* *avx512f_uminv8si3_mask */
    case 3229:  /* *avx512f_umaxv8si3_mask */
    case 3227:  /* *avx512f_sminv8si3_mask */
    case 3225:  /* *avx512f_smaxv8si3_mask */
    case 3223:  /* *avx512f_uminv16si3_mask */
    case 3221:  /* *avx512f_umaxv16si3_mask */
    case 3219:  /* *avx512f_sminv16si3_mask */
    case 3217:  /* *avx512f_smaxv16si3_mask */
    case 3203:  /* avx512vl_rorv2di_mask */
    case 3201:  /* avx512vl_rolv2di_mask */
    case 3199:  /* avx512vl_rorv4di_mask */
    case 3197:  /* avx512vl_rolv4di_mask */
    case 3195:  /* avx512f_rorv8di_mask */
    case 3193:  /* avx512f_rolv8di_mask */
    case 3191:  /* avx512vl_rorv4si_mask */
    case 3189:  /* avx512vl_rolv4si_mask */
    case 3187:  /* avx512vl_rorv8si_mask */
    case 3185:  /* avx512vl_rolv8si_mask */
    case 3183:  /* avx512f_rorv16si_mask */
    case 3181:  /* avx512f_rolv16si_mask */
    case 3179:  /* avx512vl_rorvv2di_mask */
    case 3177:  /* avx512vl_rolvv2di_mask */
    case 3175:  /* avx512vl_rorvv4di_mask */
    case 3173:  /* avx512vl_rolvv4di_mask */
    case 3171:  /* avx512f_rorvv8di_mask */
    case 3169:  /* avx512f_rolvv8di_mask */
    case 3167:  /* avx512vl_rorvv4si_mask */
    case 3165:  /* avx512vl_rolvv4si_mask */
    case 3163:  /* avx512vl_rorvv8si_mask */
    case 3161:  /* avx512vl_rolvv8si_mask */
    case 3159:  /* avx512f_rorvv16si_mask */
    case 3157:  /* avx512f_rolvv16si_mask */
    case 3149:  /* lshrv8di3_mask */
    case 3147:  /* ashlv8di3_mask */
    case 3145:  /* lshrv16si3_mask */
    case 3143:  /* ashlv16si3_mask */
    case 3141:  /* lshrv2di3_mask */
    case 3139:  /* ashlv2di3_mask */
    case 3137:  /* lshrv4di3_mask */
    case 3135:  /* ashlv4di3_mask */
    case 3133:  /* lshrv4si3_mask */
    case 3131:  /* ashlv4si3_mask */
    case 3129:  /* lshrv8si3_mask */
    case 3127:  /* ashlv8si3_mask */
    case 3125:  /* lshrv8hi3_mask */
    case 3123:  /* ashlv8hi3_mask */
    case 3121:  /* lshrv16hi3_mask */
    case 3119:  /* ashlv16hi3_mask */
    case 3117:  /* lshrv32hi3_mask */
    case 3115:  /* ashlv32hi3_mask */
    case 3113:  /* ashrv8di3_mask */
    case 3111:  /* ashrv16si3_mask */
    case 3109:  /* ashrv4di3_mask */
    case 3107:  /* ashrv32hi3_mask */
    case 3105:  /* ashrv2di3_mask */
    case 3099:  /* ashrv4si3_mask */
    case 3097:  /* ashrv8si3_mask */
    case 3095:  /* ashrv8hi3_mask */
    case 3093:  /* ashrv16hi3_mask */
    case 3091:  /* *sse4_1_mulv4si3_mask */
    case 3089:  /* *avx2_mulv8si3_mask */
    case 3087:  /* *avx512f_mulv16si3_mask */
    case 3085:  /* avx512dq_mulv2di3_mask */
    case 3083:  /* avx512dq_mulv4di3_mask */
    case 3081:  /* avx512dq_mulv8di3_mask */
    case 3047:  /* *mulv8hi3_mask */
    case 3045:  /* *mulv16hi3_mask */
    case 3043:  /* *mulv32hi3_mask */
    case 3041:  /* *sse2_ussubv8hi3_mask */
    case 3039:  /* *sse2_sssubv8hi3_mask */
    case 3037:  /* *sse2_usaddv8hi3_mask */
    case 3035:  /* *sse2_ssaddv8hi3_mask */
    case 3033:  /* *avx2_ussubv16hi3_mask */
    case 3031:  /* *avx2_sssubv16hi3_mask */
    case 3029:  /* *avx2_usaddv16hi3_mask */
    case 3027:  /* *avx2_ssaddv16hi3_mask */
    case 3025:  /* *avx512bw_ussubv32hi3_mask */
    case 3023:  /* *avx512bw_sssubv32hi3_mask */
    case 3021:  /* *avx512bw_usaddv32hi3_mask */
    case 3019:  /* *avx512bw_ssaddv32hi3_mask */
    case 3017:  /* *sse2_ussubv16qi3_mask */
    case 3015:  /* *sse2_sssubv16qi3_mask */
    case 3013:  /* *sse2_usaddv16qi3_mask */
    case 3011:  /* *sse2_ssaddv16qi3_mask */
    case 3009:  /* *avx2_ussubv32qi3_mask */
    case 3007:  /* *avx2_sssubv32qi3_mask */
    case 3005:  /* *avx2_usaddv32qi3_mask */
    case 3003:  /* *avx2_ssaddv32qi3_mask */
    case 3001:  /* *avx512bw_ussubv64qi3_mask */
    case 2999:  /* *avx512bw_sssubv64qi3_mask */
    case 2997:  /* *avx512bw_usaddv64qi3_mask */
    case 2995:  /* *avx512bw_ssaddv64qi3_mask */
    case 2993:  /* *subv8hi3_mask */
    case 2992:  /* *addv8hi3_mask */
    case 2991:  /* *subv16hi3_mask */
    case 2990:  /* *addv16hi3_mask */
    case 2989:  /* *subv32hi3_mask */
    case 2988:  /* *addv32hi3_mask */
    case 2987:  /* *subv32qi3_mask */
    case 2986:  /* *addv32qi3_mask */
    case 2985:  /* *subv16qi3_mask */
    case 2984:  /* *addv16qi3_mask */
    case 2983:  /* *subv64qi3_mask */
    case 2982:  /* *addv64qi3_mask */
    case 2981:  /* *subv2di3_mask */
    case 2980:  /* *addv2di3_mask */
    case 2979:  /* *subv4di3_mask */
    case 2978:  /* *addv4di3_mask */
    case 2977:  /* *subv8di3_mask */
    case 2976:  /* *addv8di3_mask */
    case 2975:  /* *subv4si3_mask */
    case 2974:  /* *addv4si3_mask */
    case 2973:  /* *subv8si3_mask */
    case 2972:  /* *addv8si3_mask */
    case 2971:  /* *subv16si3_mask */
    case 2970:  /* *addv16si3_mask */
    case 2969:  /* *subv2di3 */
    case 2967:  /* *addv2di3 */
    case 2965:  /* *subv4di3 */
    case 2963:  /* *addv4di3 */
    case 2961:  /* *subv8di3 */
    case 2959:  /* *addv8di3 */
    case 2957:  /* *subv4si3 */
    case 2955:  /* *addv4si3 */
    case 2953:  /* *subv8si3 */
    case 2951:  /* *addv8si3 */
    case 2949:  /* *subv16si3 */
    case 2947:  /* *addv16si3 */
    case 2945:  /* *subv8hi3 */
    case 2943:  /* *addv8hi3 */
    case 2941:  /* *subv16hi3 */
    case 2939:  /* *addv16hi3 */
    case 2937:  /* *subv32hi3 */
    case 2935:  /* *addv32hi3 */
    case 2933:  /* *subv16qi3 */
    case 2931:  /* *addv16qi3 */
    case 2929:  /* *subv32qi3 */
    case 2927:  /* *addv32qi3 */
    case 2925:  /* *subv64qi3 */
    case 2923:  /* *addv64qi3 */
    case 1776:  /* *xorv8df3_mask */
    case 1774:  /* *iorv8df3_mask */
    case 1772:  /* *andv8df3_mask */
    case 1770:  /* *xorv16sf3_mask */
    case 1768:  /* *iorv16sf3_mask */
    case 1766:  /* *andv16sf3_mask */
    case 1764:  /* *xorv2df3_mask */
    case 1762:  /* *iorv2df3_mask */
    case 1760:  /* *andv2df3_mask */
    case 1758:  /* *xorv4df3_mask */
    case 1756:  /* *iorv4df3_mask */
    case 1754:  /* *andv4df3_mask */
    case 1752:  /* *xorv4sf3_mask */
    case 1750:  /* *iorv4sf3_mask */
    case 1748:  /* *andv4sf3_mask */
    case 1746:  /* *xorv8sf3_mask */
    case 1744:  /* *iorv8sf3_mask */
    case 1742:  /* *andv8sf3_mask */
    case 1553:  /* *sminv2df3_mask */
    case 1549:  /* *smaxv2df3_mask */
    case 1545:  /* *sminv4df3_mask */
    case 1541:  /* *smaxv4df3_mask */
    case 1537:  /* *sminv8df3_mask */
    case 1533:  /* *smaxv8df3_mask */
    case 1529:  /* *sminv4sf3_mask */
    case 1525:  /* *smaxv4sf3_mask */
    case 1521:  /* *sminv8sf3_mask */
    case 1517:  /* *smaxv8sf3_mask */
    case 1513:  /* *sminv16sf3_mask */
    case 1509:  /* *smaxv16sf3_mask */
    case 1452:  /* sse2_divv2df3_mask */
    case 1450:  /* avx_divv4df3_mask */
    case 1447:  /* avx512f_divv8df3_mask */
    case 1444:  /* sse_divv4sf3_mask */
    case 1442:  /* avx_divv8sf3_mask */
    case 1439:  /* avx512f_divv16sf3_mask */
    case 1427:  /* *mulv2df3_mask */
    case 1423:  /* *mulv4df3_mask */
    case 1419:  /* *mulv8df3_mask */
    case 1415:  /* *mulv4sf3_mask */
    case 1411:  /* *mulv8sf3_mask */
    case 1407:  /* *mulv16sf3_mask */
    case 1395:  /* *subv2df3_mask */
    case 1391:  /* *addv2df3_mask */
    case 1387:  /* *subv4df3_mask */
    case 1383:  /* *addv4df3_mask */
    case 1379:  /* *subv8df3_mask */
    case 1375:  /* *addv8df3_mask */
    case 1371:  /* *subv4sf3_mask */
    case 1367:  /* *addv4sf3_mask */
    case 1363:  /* *subv8sf3_mask */
    case 1359:  /* *addv8sf3_mask */
    case 1355:  /* *subv16sf3_mask */
    case 1351:  /* *addv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1552:  /* *sminv2df3_round */
    case 1548:  /* *smaxv2df3_round */
    case 1544:  /* *sminv4df3_round */
    case 1540:  /* *smaxv4df3_round */
    case 1536:  /* *sminv8df3_round */
    case 1532:  /* *smaxv8df3_round */
    case 1528:  /* *sminv4sf3_round */
    case 1524:  /* *smaxv4sf3_round */
    case 1520:  /* *sminv8sf3_round */
    case 1516:  /* *smaxv8sf3_round */
    case 1512:  /* *sminv16sf3_round */
    case 1508:  /* *smaxv16sf3_round */
    case 1446:  /* avx512f_divv8df3_round */
    case 1438:  /* avx512f_divv16sf3_round */
    case 1426:  /* *mulv2df3_round */
    case 1422:  /* *mulv4df3_round */
    case 1418:  /* *mulv8df3_round */
    case 1414:  /* *mulv4sf3_round */
    case 1410:  /* *mulv8sf3_round */
    case 1406:  /* *mulv16sf3_round */
    case 1394:  /* *subv2df3_round */
    case 1390:  /* *addv2df3_round */
    case 1386:  /* *subv4df3_round */
    case 1382:  /* *addv4df3_round */
    case 1378:  /* *subv8df3_round */
    case 1374:  /* *addv8df3_round */
    case 1370:  /* *subv4sf3_round */
    case 1366:  /* *addv4sf3_round */
    case 1362:  /* *subv8sf3_round */
    case 1358:  /* *addv8sf3_round */
    case 1354:  /* *subv16sf3_round */
    case 1350:  /* *addv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1342:  /* kunpckdi */
    case 1341:  /* kunpcksi */
    case 1340:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3920:  /* ptesttf2 */
    case 3919:  /* avx_ptestv4df */
    case 3918:  /* avx_ptestv8sf */
    case 3917:  /* avx_ptestv4di */
    case 3916:  /* avx_ptestv8si */
    case 3915:  /* avx_ptestv16hi */
    case 3914:  /* avx_ptestv32qi */
    case 3913:  /* sse4_1_ptestv2df */
    case 3912:  /* sse4_1_ptestv4sf */
    case 3911:  /* sse4_1_ptestv2di */
    case 3910:  /* sse4_1_ptestv4si */
    case 3909:  /* sse4_1_ptestv8hi */
    case 3908:  /* sse4_1_ptestv16qi */
    case 3907:  /* avx_vtestpd */
    case 3906:  /* avx_vtestpd256 */
    case 3905:  /* avx_vtestps */
    case 3904:  /* avx_vtestps256 */
    case 1339:  /* kortestdi */
    case 1338:  /* kortestsi */
    case 1337:  /* kortesthi */
    case 1336:  /* kortestqi */
    case 1335:  /* ktestdi */
    case 1334:  /* ktestsi */
    case 1333:  /* ktesthi */
    case 1332:  /* ktestqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1280:  /* avx512vl_storev8hi_mask */
    case 1279:  /* avx512vl_storev16hi_mask */
    case 1278:  /* avx512bw_storev32hi_mask */
    case 1277:  /* avx512vl_storev32qi_mask */
    case 1276:  /* avx512vl_storev16qi_mask */
    case 1275:  /* avx512bw_storev64qi_mask */
    case 1274:  /* avx512vl_storev2df_mask */
    case 1273:  /* avx512vl_storev4df_mask */
    case 1272:  /* avx512f_storev8df_mask */
    case 1271:  /* avx512vl_storev4sf_mask */
    case 1270:  /* avx512vl_storev8sf_mask */
    case 1269:  /* avx512f_storev16sf_mask */
    case 1268:  /* avx512vl_storev2di_mask */
    case 1267:  /* avx512vl_storev4di_mask */
    case 1266:  /* avx512f_storev8di_mask */
    case 1265:  /* avx512vl_storev4si_mask */
    case 1264:  /* avx512vl_storev8si_mask */
    case 1263:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 3830:  /* avx2_pblenddv4si */
    case 3829:  /* avx2_pblenddv8si */
    case 3828:  /* *avx2_pblendw */
    case 3827:  /* sse4_1_pblendw */
    case 3805:  /* sse4_1_blendpd */
    case 3804:  /* avx_blendpd256 */
    case 3803:  /* sse4_1_blendps */
    case 3802:  /* avx_blendps256 */
    case 1262:  /* avx512vl_blendmv8hi */
    case 1261:  /* avx512vl_blendmv16hi */
    case 1260:  /* avx512bw_blendmv32hi */
    case 1259:  /* avx512vl_blendmv32qi */
    case 1258:  /* avx512vl_blendmv16qi */
    case 1257:  /* avx512bw_blendmv64qi */
    case 1256:  /* avx512vl_blendmv2df */
    case 1255:  /* avx512vl_blendmv4df */
    case 1254:  /* avx512f_blendmv8df */
    case 1253:  /* avx512vl_blendmv4sf */
    case 1252:  /* avx512vl_blendmv8sf */
    case 1251:  /* avx512f_blendmv16sf */
    case 1250:  /* avx512vl_blendmv2di */
    case 1249:  /* avx512vl_blendmv4di */
    case 1248:  /* avx512f_blendmv8di */
    case 1247:  /* avx512vl_blendmv4si */
    case 1246:  /* avx512vl_blendmv8si */
    case 1245:  /* avx512f_blendmv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4085:  /* *avx_vzeroall */
    case 1205:  /* *mmx_femms */
    case 1204:  /* *mmx_emms */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 3701:  /* *sse2_maskmovdqu */
    case 3700:  /* *sse2_maskmovdqu */
    case 1203:  /* *mmx_maskmovq */
    case 1202:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4133:  /* avx2_permv4df_1 */
    case 4131:  /* avx2_permv4di_1 */
    case 3642:  /* sse2_pshuflw_1 */
    case 3636:  /* sse2_pshufd_1 */
    case 2467:  /* *avx512f_vextracti32x4_1 */
    case 2465:  /* *avx512f_vextractf32x4_1 */
    case 1190:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3667:  /* *vec_extractv4si_zext_mem */
    case 3665:  /* *vec_extractv4si_zext */
    case 3656:  /* *vec_extractv8hi_zext */
    case 3655:  /* *vec_extractv8hi_zext */
    case 3654:  /* *vec_extractv16qi_zext */
    case 3653:  /* *vec_extractv16qi_zext */
    case 1197:  /* *vec_extractv2si_zext_mem */
    case 1189:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 3591:  /* sse4_1_pinsrq */
    case 3590:  /* sse4_1_pinsrd */
    case 3589:  /* sse2_pinsrw */
    case 3588:  /* sse4_1_pinsrb */
    case 2452:  /* *vec_setv4sf_sse4_1 */
    case 1188:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3823:  /* sse4_1_packusdw */
    case 3821:  /* avx2_packusdw */
    case 3819:  /* avx512bw_packusdw */
    case 3550:  /* sse2_packuswb */
    case 3548:  /* avx2_packuswb */
    case 3546:  /* avx512bw_packuswb */
    case 3544:  /* sse2_packssdw */
    case 3542:  /* avx2_packssdw */
    case 3540:  /* avx512bw_packssdw */
    case 3538:  /* sse2_packsswb */
    case 3536:  /* avx2_packsswb */
    case 3534:  /* avx512bw_packsswb */
    case 1181:  /* mmx_packuswb */
    case 1180:  /* mmx_packssdw */
    case 1179:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3070:  /* *sse4_1_mulv2siv2di3 */
    case 3068:  /* *vec_widen_smult_even_v8si */
    case 3066:  /* *vec_widen_smult_even_v16si */
    case 3064:  /* *vec_widen_umult_even_v4si */
    case 3062:  /* *vec_widen_umult_even_v8si */
    case 3060:  /* *vec_widen_umult_even_v16si */
    case 1148:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1199:  /* *mmx_uavgv4hi3 */
    case 1198:  /* *mmx_uavgv8qi3 */
    case 1147:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 3736:  /* ssse3_pmaddubsw */
    case 3735:  /* ssse3_pmaddubsw128 */
    case 3726:  /* avx2_pmaddubsw256 */
    case 3079:  /* *sse2_pmaddwd */
    case 3078:  /* *avx2_pmaddwd */
    case 1146:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3058:  /* *umulv8hi3_highpart */
    case 3056:  /* *smulv8hi3_highpart */
    case 3054:  /* *umulv16hi3_highpart */
    case 3052:  /* *smulv16hi3_highpart */
    case 3050:  /* *umulv32hi3_highpart */
    case 3048:  /* *smulv32hi3_highpart */
    case 1145:  /* *mmx_umulv4hi3_highpart */
    case 1144:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 1120:  /* mmx_pi2fw */
    case 1119:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1598:  /* sse3_addsubv4sf3 */
    case 1597:  /* avx_addsubv8sf3 */
    case 1596:  /* sse3_addsubv2df3 */
    case 1595:  /* avx_addsubv4df3 */
    case 1114:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3725:  /* ssse3_phsubdv2si3 */
    case 3724:  /* ssse3_phadddv2si3 */
    case 1602:  /* sse3_hsubv2df3 */
    case 1113:  /* mmx_hsubv2sf3 */
    case 1112:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1091:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1088:  /* *bnd64_stx */
    case 1087:  /* *bnd32_stx */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 4;
      break;

    case 1086:  /* *bnd64_ldx */
    case 1085:  /* *bnd32_ldx */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1084:  /* *bnd64_cn */
    case 1083:  /* *bnd64_cu */
    case 1082:  /* *bnd64_cl */
    case 1081:  /* *bnd32_cn */
    case 1080:  /* *bnd32_cu */
    case 1079:  /* *bnd32_cl */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1076:  /* *bnd64_mk */
    case 1075:  /* *bnd32_mk */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1064:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1048:  /* *lwp_lwpinsdi3_1 */
    case 1047:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1038:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 3707:  /* sse3_monitor_di */
    case 3706:  /* sse3_monitor_si */
    case 1092:  /* *wrpkru */
    case 1072:  /* monitorx_di */
    case 1071:  /* monitorx_si */
    case 1070:  /* mwaitx */
    case 1046:  /* *lwp_lwpvaldi3_1 */
    case 1045:  /* *lwp_lwpvalsi3_1 */
    case 1036:  /* xrstors64 */
    case 1035:  /* xrstor64 */
    case 1034:  /* xrstors_rex64 */
    case 1033:  /* xrstor_rex64 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 3705:  /* sse3_mwait */
    case 1032:  /* xrstors */
    case 1031:  /* xrstor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1014:  /* rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1013:  /* rdtscp */
    case 1012:  /* rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 994:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 990:  /* adjust_stack_and_probedi */
    case 989:  /* adjust_stack_and_probesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 966:  /* *movsicc_noc_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1811:  /* *fma_fmadd_v2df */
    case 1809:  /* *fma_fmadd_v4df */
    case 1805:  /* *fma_fmadd_v8df */
    case 1804:  /* *fma_fmadd_df */
    case 1802:  /* *fma_fmadd_v4sf */
    case 1800:  /* *fma_fmadd_v8sf */
    case 1796:  /* *fma_fmadd_v16sf */
    case 1795:  /* *fma_fmadd_sf */
    case 1794:  /* *fma_fmadd_v4df */
    case 1793:  /* *fma_fmadd_v8sf */
    case 1792:  /* *fma_fmadd_v2df */
    case 1791:  /* *fma_fmadd_v4sf */
    case 1790:  /* *fma_fmadd_df */
    case 1789:  /* *fma_fmadd_sf */
    case 1244:  /* avx512vl_loadv8hi_mask */
    case 1243:  /* avx512vl_loadv16hi_mask */
    case 1242:  /* avx512bw_loadv32hi_mask */
    case 1241:  /* avx512vl_loadv32qi_mask */
    case 1240:  /* avx512vl_loadv16qi_mask */
    case 1239:  /* avx512bw_loadv64qi_mask */
    case 1238:  /* avx512vl_loadv2df_mask */
    case 1237:  /* avx512vl_loadv4df_mask */
    case 1236:  /* avx512f_loadv8df_mask */
    case 1235:  /* avx512vl_loadv4sf_mask */
    case 1234:  /* avx512vl_loadv8sf_mask */
    case 1233:  /* avx512f_loadv16sf_mask */
    case 1232:  /* avx512vl_loadv2di_mask */
    case 1231:  /* avx512vl_loadv4di_mask */
    case 1230:  /* avx512f_loadv8di_mask */
    case 1229:  /* avx512vl_loadv4si_mask */
    case 1228:  /* avx512vl_loadv8si_mask */
    case 1227:  /* avx512f_loadv16si_mask */
    case 972:  /* *xop_pcmov_df */
    case 971:  /* *xop_pcmov_sf */
    case 970:  /* *movsfcc_1_387 */
    case 969:  /* *movdfcc_1 */
    case 968:  /* *movxfcc_1 */
    case 967:  /* *movqicc_noc */
    case 965:  /* *movdicc_noc */
    case 964:  /* *movsicc_noc */
    case 963:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 956:  /* *strlenqi_1 */
    case 955:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 954:  /* *cmpstrnqi_1 */
    case 953:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 952:  /* *cmpstrnqi_nz_1 */
    case 951:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 950:  /* *rep_stosqi */
    case 949:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 948:  /* *rep_stossi */
    case 947:  /* *rep_stossi */
    case 946:  /* *rep_stosdi_rex64 */
    case 945:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 944:  /* *strsetqi_1 */
    case 943:  /* *strsetqi_1 */
    case 942:  /* *strsethi_1 */
    case 941:  /* *strsethi_1 */
    case 940:  /* *strsetsi_1 */
    case 939:  /* *strsetsi_1 */
    case 938:  /* *strsetdi_rex_1 */
    case 937:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 936:  /* *rep_movqi */
    case 935:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 934:  /* *rep_movsi */
    case 933:  /* *rep_movsi */
    case 932:  /* *rep_movdi_rex64 */
    case 931:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 930:  /* *strmovqi_1 */
    case 929:  /* *strmovqi_1 */
    case 928:  /* *strmovhi_1 */
    case 927:  /* *strmovhi_1 */
    case 926:  /* *strmovsi_1 */
    case 925:  /* *strmovsi_1 */
    case 924:  /* *strmovdi_rex_1 */
    case 923:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 907:  /* fistdi2_ceil_with_temp */
    case 906:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 915:  /* fistsi2_ceil_with_temp */
    case 914:  /* fistsi2_floor_with_temp */
    case 913:  /* fisthi2_ceil_with_temp */
    case 912:  /* fisthi2_floor_with_temp */
    case 905:  /* fistdi2_ceil */
    case 904:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 4963:  /* atomic_storedi_fpu */
    case 4958:  /* atomic_loaddi_fpu */
    case 911:  /* fistsi2_ceil */
    case 910:  /* fistsi2_floor */
    case 909:  /* fisthi2_ceil */
    case 908:  /* fisthi2_floor */
    case 897:  /* frndintxf2_mask_pm_i387 */
    case 895:  /* frndintxf2_trunc_i387 */
    case 894:  /* frndintxf2_ceil_i387 */
    case 893:  /* frndintxf2_floor_i387 */
    case 892:  /* frndintdf2_trunc_i387 */
    case 891:  /* frndintdf2_ceil_i387 */
    case 890:  /* frndintdf2_floor_i387 */
    case 889:  /* frndintsf2_trunc_i387 */
    case 888:  /* frndintsf2_ceil_i387 */
    case 887:  /* frndintsf2_floor_i387 */
    case 871:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1000:  /* stack_tls_protect_set_di */
    case 999:  /* stack_tls_protect_set_si */
    case 998:  /* stack_protect_set_di */
    case 997:  /* stack_protect_set_si */
    case 877:  /* fistsi2_with_temp */
    case 876:  /* fisthi2_with_temp */
    case 870:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 863:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 858:  /* fyl2xp1_extenddfxf3_i387 */
    case 857:  /* fyl2xp1_extendsfxf3_i387 */
    case 855:  /* fyl2x_extenddfxf3_i387 */
    case 854:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 852:  /* fpatan_extenddfxf3_i387 */
    case 851:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1004:  /* stack_tls_protect_test_di */
    case 1003:  /* stack_tls_protect_test_si */
    case 1002:  /* stack_protect_test_di */
    case 1001:  /* stack_protect_test_si */
    case 856:  /* fyl2xp1xf3_i387 */
    case 853:  /* fyl2xxf3_i387 */
    case 850:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 849:  /* fptan_extenddfxf4_i387 */
    case 848:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 847:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 861:  /* fxtract_extenddfxf3_i387 */
    case 860:  /* fxtract_extendsfxf3_i387 */
    case 846:  /* sincos_extenddfxf3_i387 */
    case 845:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1010:  /* rdpmc_rex64 */
    case 859:  /* fxtractxf3_i387 */
    case 844:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 837:  /* fprem1xf4_i387 */
    case 836:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 827:  /* *fop_xf_6_i387 */
    case 826:  /* *fop_xf_6_i387 */
    case 815:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 825:  /* *fop_xf_5_i387 */
    case 824:  /* *fop_xf_5_i387 */
    case 821:  /* *fop_xf_3_i387 */
    case 820:  /* *fop_xf_3_i387 */
    case 814:  /* *fop_df_5_i387 */
    case 812:  /* *fop_df_3_i387 */
    case 811:  /* *fop_sf_3_i387 */
    case 810:  /* *fop_df_3_i387 */
    case 809:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 823:  /* *fop_xf_4_i387 */
    case 822:  /* *fop_xf_4_i387 */
    case 819:  /* *fop_xf_2_i387 */
    case 818:  /* *fop_xf_2_i387 */
    case 813:  /* *fop_df_4_i387 */
    case 808:  /* *fop_df_2_i387 */
    case 807:  /* *fop_sf_2_i387 */
    case 806:  /* *fop_df_2_i387 */
    case 805:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 799:  /* *tls_dynamic_gnu2_combine_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4967:  /* storedi_via_sse */
    case 4966:  /* loaddi_via_sse */
    case 4965:  /* storedi_via_fpu */
    case 4964:  /* loaddi_via_fpu */
    case 4905:  /* avx512f_pd512_256pd */
    case 4904:  /* avx512f_ps512_256ps */
    case 4903:  /* avx512f_si512_256si */
    case 4902:  /* avx512f_pd512_pd */
    case 4901:  /* avx512f_ps512_ps */
    case 4900:  /* avx512f_si512_si */
    case 4891:  /* *conflictv2di */
    case 4889:  /* *conflictv4di */
    case 4887:  /* *conflictv8di */
    case 4885:  /* *conflictv4si */
    case 4883:  /* *conflictv8si */
    case 4881:  /* *conflictv16si */
    case 4538:  /* *avx512f_vcvtph2ps512 */
    case 4536:  /* vcvtph2ps256 */
    case 4534:  /* *vcvtph2ps_load */
    case 4465:  /* avx_pd256_pd */
    case 4464:  /* avx_ps256_ps */
    case 4463:  /* avx_si256_si */
    case 4082:  /* aesimc */
    case 4055:  /* xop_frczv4df2 */
    case 4054:  /* xop_frczv8sf2 */
    case 4053:  /* xop_frczv2df2 */
    case 4052:  /* xop_frczv4sf2 */
    case 4051:  /* xop_frczdf2 */
    case 4050:  /* xop_frczsf2 */
    case 3975:  /* *avx512er_rsqrt28v8df */
    case 3971:  /* *avx512er_rsqrt28v16sf */
    case 3963:  /* *avx512er_rcp28v8df */
    case 3959:  /* *avx512er_rcp28v16sf */
    case 3955:  /* avx512er_exp2v8df */
    case 3951:  /* avx512er_exp2v16sf */
    case 3831:  /* sse4_1_phminposuw */
    case 3816:  /* sse4_1_movntdqa */
    case 3815:  /* avx2_movntdqa */
    case 3814:  /* avx512f_movntdqa */
    case 3795:  /* sse4a_movntdf */
    case 3794:  /* sse4a_movntsf */
    case 3697:  /* sse2_pmovmskb */
    case 3696:  /* avx2_pmovmskb */
    case 3691:  /* sse2_movmskpd */
    case 3690:  /* avx_movmskpd256 */
    case 3689:  /* sse_movmskps */
    case 3688:  /* avx_movmskps256 */
    case 2597:  /* avx512vl_getexpv2df */
    case 2593:  /* avx512vl_getexpv4df */
    case 2589:  /* avx512f_getexpv8df */
    case 2585:  /* avx512vl_getexpv4sf */
    case 2581:  /* avx512vl_getexpv8sf */
    case 2577:  /* avx512f_getexpv16sf */
    case 2391:  /* avx512vl_cvtq2maskv2di */
    case 2390:  /* avx512vl_cvtq2maskv4di */
    case 2389:  /* avx512f_cvtq2maskv8di */
    case 2388:  /* avx512vl_cvtd2maskv4si */
    case 2387:  /* avx512vl_cvtd2maskv8si */
    case 2386:  /* avx512f_cvtd2maskv16si */
    case 2385:  /* avx512vl_cvtw2maskv8hi */
    case 2384:  /* avx512vl_cvtw2maskv16hi */
    case 2383:  /* avx512bw_cvtw2maskv32hi */
    case 2382:  /* avx512vl_cvtb2maskv32qi */
    case 2381:  /* avx512vl_cvtb2maskv16qi */
    case 2380:  /* avx512bw_cvtb2maskv64qi */
    case 2334:  /* ufix_notruncv2dfv2di2 */
    case 2332:  /* ufix_notruncv4dfv4di2 */
    case 2328:  /* ufix_notruncv8dfv8di2 */
    case 2326:  /* fix_notruncv2dfv2di2 */
    case 2324:  /* fix_notruncv4dfv4di2 */
    case 2320:  /* fix_notruncv8dfv8di2 */
    case 2284:  /* ufix_notruncv4dfv4si2 */
    case 2280:  /* ufix_notruncv8dfv8si2 */
    case 2275:  /* avx_cvtpd2dq256 */
    case 2271:  /* avx512f_cvtpd2dq512 */
    case 2210:  /* sse2_cvtsd2siq_2 */
    case 2207:  /* sse2_cvtsd2si_2 */
    case 2184:  /* sse2_cvtpd2pi */
    case 2167:  /* *avx512dq_cvtps2uqqv4di */
    case 2163:  /* *avx512dq_cvtps2uqqv8di */
    case 2159:  /* *avx512dq_cvtps2qqv4di */
    case 2155:  /* *avx512dq_cvtps2qqv8di */
    case 2151:  /* *avx512vl_ufix_notruncv4sfv4si */
    case 2147:  /* *avx512vl_ufix_notruncv8sfv8si */
    case 2143:  /* *avx512f_ufix_notruncv16sfv16si */
    case 2139:  /* avx512f_fix_notruncv16sfv16si */
    case 2137:  /* sse2_fix_notruncv4sfv4si */
    case 2135:  /* avx_fix_notruncv8sfv8si */
    case 2103:  /* sse_cvtss2siq_2 */
    case 2100:  /* sse_cvtss2si_2 */
    case 1502:  /* *rsqrt14v2df */
    case 1500:  /* *rsqrt14v4df */
    case 1498:  /* *rsqrt14v8df */
    case 1496:  /* *rsqrt14v4sf */
    case 1494:  /* *rsqrt14v8sf */
    case 1492:  /* *rsqrt14v16sf */
    case 1491:  /* sse_rsqrtv4sf2 */
    case 1490:  /* avx_rsqrtv8sf2 */
    case 1466:  /* *rcp14v2df */
    case 1464:  /* *rcp14v4df */
    case 1462:  /* *rcp14v8df */
    case 1460:  /* *rcp14v4sf */
    case 1458:  /* *rcp14v8sf */
    case 1456:  /* *rcp14v16sf */
    case 1454:  /* sse_rcpv4sf2 */
    case 1453:  /* avx_rcpv8sf2 */
    case 1295:  /* sse2_movntv2di */
    case 1294:  /* avx_movntv4di */
    case 1293:  /* avx512f_movntv8di */
    case 1292:  /* sse2_movntv2df */
    case 1291:  /* avx_movntv4df */
    case 1290:  /* avx512f_movntv8df */
    case 1289:  /* sse_movntv4sf */
    case 1288:  /* avx_movntv8sf */
    case 1287:  /* avx512f_movntv16sf */
    case 1286:  /* sse2_movntidi */
    case 1285:  /* sse2_movntisi */
    case 1284:  /* sse3_lddqu */
    case 1283:  /* avx_lddqu256 */
    case 1201:  /* mmx_pmovmskb */
    case 1110:  /* mmx_rsqrtv2sf2 */
    case 1107:  /* mmx_rcpv2sf2 */
    case 1099:  /* sse_movntq */
    case 1090:  /* move_size_reloc_di */
    case 1089:  /* move_size_reloc_si */
    case 1022:  /* xsaves */
    case 1021:  /* xsavec */
    case 1020:  /* xsaveopt */
    case 1019:  /* xsave */
    case 1009:  /* rdpmc */
    case 921:  /* movmsk_df */
    case 920:  /* fxamdf2_i387_with_temp */
    case 919:  /* fxamsf2_i387_with_temp */
    case 918:  /* fxamxf2_i387 */
    case 917:  /* fxamdf2_i387 */
    case 916:  /* fxamsf2_i387 */
    case 875:  /* fistsi2 */
    case 874:  /* fisthi2 */
    case 873:  /* *fistsi2_1 */
    case 872:  /* *fisthi2_1 */
    case 869:  /* *fistdi2_1 */
    case 868:  /* rintdf2_frndint */
    case 867:  /* rintsf2_frndint */
    case 866:  /* rintxf2 */
    case 862:  /* *f2xm1xf2_i387 */
    case 839:  /* *cosxf2_i387 */
    case 838:  /* *sinxf2_i387 */
    case 833:  /* *rsqrtsf2_sse */
    case 829:  /* truncxfdf2_i387_noop_unspec */
    case 828:  /* truncxfsf2_i387_noop_unspec */
    case 802:  /* *rcpsf2_sse */
    case 797:  /* *tls_dynamic_gnu2_lea_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 796:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 795:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 794:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 791:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 793:  /* *add_tp_di */
    case 792:  /* *add_tp_si */
    case 790:  /* *add_tp_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 785:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 782:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 781:  /* *tls_global_dynamic_64_di */
    case 780:  /* *tls_global_dynamic_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 779:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 778:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 777:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 776:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 775:  /* bswaphi_lowpart */
    case 774:  /* *bswaphi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 763:  /* *tbm_tzmsk_di */
    case 762:  /* *tbm_tzmsk_si */
    case 761:  /* *tbm_t1mskc_di */
    case 760:  /* *tbm_t1mskc_si */
    case 759:  /* *tbm_blsic_di */
    case 758:  /* *tbm_blsic_si */
    case 751:  /* *tbm_blcic_di */
    case 750:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 749:  /* *tbm_blci_di */
    case 748:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 745:  /* tbm_bextri_di */
    case 744:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 4962:  /* atomic_storedi_1 */
    case 4961:  /* atomic_storesi_1 */
    case 4960:  /* atomic_storehi_1 */
    case 4959:  /* atomic_storeqi_1 */
    case 4928:  /* vpmultishiftqbv32qi */
    case 4926:  /* vpmultishiftqbv16qi */
    case 4924:  /* vpmultishiftqbv64qi */
    case 4898:  /* sha256msg2 */
    case 4897:  /* sha256msg1 */
    case 4895:  /* sha1nexte */
    case 4894:  /* sha1msg2 */
    case 4893:  /* sha1msg1 */
    case 4855:  /* avx512vl_getmantv2df */
    case 4851:  /* avx512vl_getmantv4df */
    case 4847:  /* avx512f_getmantv8df */
    case 4843:  /* avx512vl_getmantv4sf */
    case 4839:  /* avx512vl_getmantv8sf */
    case 4835:  /* avx512f_getmantv16sf */
    case 4831:  /* avx512dq_fpclassv2df */
    case 4829:  /* avx512dq_fpclassv4df */
    case 4827:  /* avx512dq_fpclassv8df */
    case 4825:  /* avx512dq_fpclassv4sf */
    case 4823:  /* avx512dq_fpclassv8sf */
    case 4821:  /* avx512dq_fpclassv16sf */
    case 4547:  /* *avx512f_vcvtps2ph512 */
    case 4545:  /* vcvtps2ph256 */
    case 4544:  /* *vcvtps2ph_store */
    case 4305:  /* avx_vpermilvarv2df3 */
    case 4303:  /* avx_vpermilvarv4df3 */
    case 4301:  /* avx512f_vpermilvarv8df3 */
    case 4299:  /* avx_vpermilvarv4sf3 */
    case 4297:  /* avx_vpermilvarv8sf3 */
    case 4295:  /* avx512f_vpermilvarv16sf3 */
    case 4129:  /* avx512bw_permvarv32hi */
    case 4127:  /* avx512vl_permvarv16hi */
    case 4125:  /* avx512vl_permvarv8hi */
    case 4123:  /* avx512vl_permvarv32qi */
    case 4121:  /* avx512vl_permvarv16qi */
    case 4119:  /* avx512bw_permvarv64qi */
    case 4117:  /* avx2_permvarv4df */
    case 4115:  /* avx2_permvarv4di */
    case 4113:  /* avx512f_permvarv8df */
    case 4111:  /* avx512f_permvarv8di */
    case 4109:  /* avx512f_permvarv16sf */
    case 4107:  /* avx512f_permvarv16si */
    case 4105:  /* avx2_permvarv8sf */
    case 4103:  /* avx2_permvarv8si */
    case 4083:  /* aeskeygenassist */
    case 4081:  /* aesdeclast */
    case 4080:  /* aesdec */
    case 4079:  /* aesenclast */
    case 4078:  /* aesenc */
    case 3924:  /* sse4_1_roundpd */
    case 3923:  /* avx_roundpd256 */
    case 3922:  /* sse4_1_roundps */
    case 3921:  /* avx_roundps256 */
    case 3801:  /* sse4a_insertq */
    case 3799:  /* sse4a_extrq */
    case 3759:  /* ssse3_psignv2si3 */
    case 3758:  /* ssse3_psignv4hi3 */
    case 3757:  /* ssse3_psignv8qi3 */
    case 3756:  /* ssse3_psignv4si3 */
    case 3755:  /* avx2_psignv8si3 */
    case 3754:  /* ssse3_psignv8hi3 */
    case 3753:  /* avx2_psignv16hi3 */
    case 3752:  /* ssse3_psignv16qi3 */
    case 3751:  /* avx2_psignv32qi3 */
    case 3750:  /* ssse3_pshufbv8qi3 */
    case 3748:  /* ssse3_pshufbv16qi3 */
    case 3746:  /* avx2_pshufbv32qi3 */
    case 3744:  /* avx512bw_pshufbv64qi3 */
    case 3731:  /* avx512bw_pmaddubsw512v32hi */
    case 3729:  /* avx512bw_pmaddubsw512v16hi */
    case 3727:  /* avx512bw_pmaddubsw512v8hi */
    case 3687:  /* sse2_psadbw */
    case 3686:  /* avx2_psadbw */
    case 3685:  /* avx512f_psadbw */
    case 3644:  /* *avx512bw_pshufhwv32hi */
    case 3638:  /* *avx512bw_pshuflwv32hi */
    case 3532:  /* avx512vl_testnmv2di3 */
    case 3530:  /* avx512vl_testnmv4di3 */
    case 3528:  /* avx512f_testnmv8di3 */
    case 3526:  /* avx512vl_testnmv4si3 */
    case 3524:  /* avx512vl_testnmv8si3 */
    case 3522:  /* avx512f_testnmv16si3 */
    case 3520:  /* avx512vl_testnmv8hi3 */
    case 3518:  /* avx512vl_testnmv16hi3 */
    case 3516:  /* avx512bw_testnmv32hi3 */
    case 3514:  /* avx512vl_testnmv32qi3 */
    case 3512:  /* avx512vl_testnmv16qi3 */
    case 3510:  /* avx512bw_testnmv64qi3 */
    case 3508:  /* avx512vl_testmv2di3 */
    case 3506:  /* avx512vl_testmv4di3 */
    case 3504:  /* avx512f_testmv8di3 */
    case 3502:  /* avx512vl_testmv4si3 */
    case 3500:  /* avx512vl_testmv8si3 */
    case 3498:  /* avx512f_testmv16si3 */
    case 3496:  /* avx512vl_testmv8hi3 */
    case 3494:  /* avx512vl_testmv16hi3 */
    case 3492:  /* avx512bw_testmv32hi3 */
    case 3490:  /* avx512vl_testmv32qi3 */
    case 3488:  /* avx512vl_testmv16qi3 */
    case 3486:  /* avx512bw_testmv64qi3 */
    case 3391:  /* avx512vl_gtv8hi3 */
    case 3389:  /* avx512vl_gtv16hi3 */
    case 3387:  /* avx512bw_gtv32hi3 */
    case 3385:  /* avx512vl_gtv32qi3 */
    case 3383:  /* avx512vl_gtv16qi3 */
    case 3381:  /* avx512bw_gtv64qi3 */
    case 3379:  /* avx512vl_gtv2di3 */
    case 3377:  /* avx512vl_gtv4di3 */
    case 3375:  /* avx512f_gtv8di3 */
    case 3373:  /* avx512vl_gtv4si3 */
    case 3371:  /* avx512vl_gtv8si3 */
    case 3369:  /* avx512f_gtv16si3 */
    case 3358:  /* avx512vl_eqv2di3_1 */
    case 3356:  /* avx512vl_eqv4di3_1 */
    case 3354:  /* avx512f_eqv8di3_1 */
    case 3352:  /* avx512vl_eqv4si3_1 */
    case 3350:  /* avx512vl_eqv8si3_1 */
    case 3348:  /* avx512f_eqv16si3_1 */
    case 3346:  /* avx512vl_eqv8hi3_1 */
    case 3344:  /* avx512vl_eqv16hi3_1 */
    case 3342:  /* avx512bw_eqv32hi3_1 */
    case 3340:  /* avx512vl_eqv32qi3_1 */
    case 3338:  /* avx512vl_eqv16qi3_1 */
    case 3336:  /* avx512bw_eqv64qi3_1 */
    case 3076:  /* avx512bw_pmaddwd512v8hi */
    case 3074:  /* avx512bw_pmaddwd512v16hi */
    case 3072:  /* avx512bw_pmaddwd512v32hi */
    case 2685:  /* avx512vl_rndscalev2df */
    case 2681:  /* avx512vl_rndscalev4df */
    case 2677:  /* avx512f_rndscalev8df */
    case 2673:  /* avx512vl_rndscalev4sf */
    case 2669:  /* avx512vl_rndscalev8sf */
    case 2665:  /* avx512f_rndscalev16sf */
    case 2555:  /* avx512vl_scalefv2df */
    case 2551:  /* avx512vl_scalefv4df */
    case 2547:  /* avx512f_scalefv8df */
    case 2543:  /* avx512vl_scalefv4sf */
    case 2539:  /* avx512vl_scalefv8sf */
    case 2535:  /* avx512f_scalefv16sf */
    case 1619:  /* *reducepv2df */
    case 1617:  /* *reducepv4df */
    case 1615:  /* *reducepv8df */
    case 1613:  /* *reducepv4sf */
    case 1611:  /* *reducepv8sf */
    case 1609:  /* *reducepv16sf */
    case 1585:  /* ieee_minv2df3 */
    case 1583:  /* ieee_maxv2df3 */
    case 1581:  /* ieee_minv4df3 */
    case 1579:  /* ieee_maxv4df3 */
    case 1575:  /* ieee_minv8df3 */
    case 1571:  /* ieee_maxv8df3 */
    case 1569:  /* ieee_minv4sf3 */
    case 1567:  /* ieee_maxv4sf3 */
    case 1565:  /* ieee_minv8sf3 */
    case 1563:  /* ieee_maxv8sf3 */
    case 1559:  /* ieee_minv16sf3 */
    case 1555:  /* ieee_maxv16sf3 */
    case 1200:  /* mmx_psadbw */
    case 1111:  /* mmx_rsqit1v2sf3 */
    case 1109:  /* mmx_rcpit2v2sf3 */
    case 1108:  /* mmx_rcpit1v2sf3 */
    case 1106:  /* mmx_ieee_minv2sf3 */
    case 1105:  /* mmx_ieee_maxv2sf3 */
    case 1030:  /* xsaves64 */
    case 1029:  /* xsavec64 */
    case 1028:  /* xsaveopt64 */
    case 1027:  /* xsave64 */
    case 1026:  /* xsaves_rex64 */
    case 1025:  /* xsavec_rex64 */
    case 1024:  /* xsaveopt_rex64 */
    case 1023:  /* xsave_rex64 */
    case 1008:  /* sse4_2_crc32di */
    case 1007:  /* sse4_2_crc32si */
    case 1006:  /* sse4_2_crc32hi */
    case 1005:  /* sse4_2_crc32qi */
    case 980:  /* *ieee_smindf3 */
    case 979:  /* *ieee_smaxdf3 */
    case 978:  /* *ieee_sminsf3 */
    case 977:  /* *ieee_smaxsf3 */
    case 865:  /* sse4_1_rounddf2 */
    case 864:  /* sse4_1_roundsf2 */
    case 743:  /* bmi2_pext_di3 */
    case 742:  /* bmi2_pext_si3 */
    case 741:  /* bmi2_pdep_di3 */
    case 740:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 739:  /* *bmi2_bzhi_di3_1_ccz */
    case 738:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 737:  /* *bmi2_bzhi_di3_1 */
    case 736:  /* *bmi2_bzhi_si3_1 */
    case 735:  /* *bmi2_bzhi_di3 */
    case 734:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 757:  /* *tbm_blsfill_di */
    case 756:  /* *tbm_blsfill_si */
    case 755:  /* *tbm_blcs_di */
    case 754:  /* *tbm_blcs_si */
    case 753:  /* *tbm_blcmsk_di */
    case 752:  /* *tbm_blcmsk_si */
    case 747:  /* *tbm_blcfill_di */
    case 746:  /* *tbm_blcfill_si */
    case 733:  /* *bmi_blsr_di */
    case 732:  /* *bmi_blsr_si */
    case 731:  /* *bmi_blsmsk_di */
    case 730:  /* *bmi_blsmsk_si */
    case 729:  /* *bmi_blsi_di */
    case 728:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 727:  /* *bmi_bextr_di_ccz */
    case 726:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 992:  /* probe_stack_rangedi */
    case 991:  /* probe_stack_rangesi */
    case 798:  /* *tls_dynamic_gnu2_call_64 */
    case 725:  /* bmi_bextr_di */
    case 724:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4539:  /* *avx512f_vcvtph2ps512_round */
    case 3976:  /* *avx512er_rsqrt28v8df_round */
    case 3972:  /* *avx512er_rsqrt28v16sf_round */
    case 3964:  /* *avx512er_rcp28v8df_round */
    case 3960:  /* *avx512er_rcp28v16sf_round */
    case 3956:  /* avx512er_exp2v8df_round */
    case 3952:  /* avx512er_exp2v16sf_round */
    case 2598:  /* avx512vl_getexpv2df_round */
    case 2594:  /* avx512vl_getexpv4df_round */
    case 2590:  /* avx512f_getexpv8df_round */
    case 2586:  /* avx512vl_getexpv4sf_round */
    case 2582:  /* avx512vl_getexpv8sf_round */
    case 2578:  /* avx512f_getexpv16sf_round */
    case 2329:  /* ufix_notruncv8dfv8di2_round */
    case 2321:  /* fix_notruncv8dfv8di2_round */
    case 2285:  /* ufix_notruncv4dfv4si2_round */
    case 2281:  /* ufix_notruncv8dfv8si2_round */
    case 2272:  /* avx512f_cvtpd2dq512_round */
    case 2164:  /* *avx512dq_cvtps2uqqv8di_round */
    case 2156:  /* *avx512dq_cvtps2qqv8di_round */
    case 2152:  /* *avx512vl_ufix_notruncv4sfv4si_round */
    case 2148:  /* *avx512vl_ufix_notruncv8sfv8si_round */
    case 2144:  /* *avx512f_ufix_notruncv16sfv16si_round */
    case 2140:  /* avx512f_fix_notruncv16sfv16si_round */
    case 721:  /* *lzcnt_di_falsedep */
    case 720:  /* *tzcnt_di_falsedep */
    case 719:  /* *lzcnt_si_falsedep */
    case 718:  /* *tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 988:  /* probe_stack_di */
    case 987:  /* probe_stack_si */
    case 986:  /* allocate_stack_worker_probe_di */
    case 985:  /* allocate_stack_worker_probe_si */
    case 903:  /* *fistdi2_ceil_1 */
    case 902:  /* *fistdi2_floor_1 */
    case 901:  /* *fistsi2_ceil_1 */
    case 900:  /* *fistsi2_floor_1 */
    case 899:  /* *fisthi2_ceil_1 */
    case 898:  /* *fisthi2_floor_1 */
    case 896:  /* frndintxf2_mask_pm */
    case 886:  /* frndintxf2_trunc */
    case 885:  /* frndintxf2_ceil */
    case 884:  /* frndintxf2_floor */
    case 883:  /* frndintdf2_trunc */
    case 882:  /* frndintdf2_ceil */
    case 881:  /* frndintdf2_floor */
    case 880:  /* frndintsf2_trunc */
    case 879:  /* frndintsf2_ceil */
    case 878:  /* frndintsf2_floor */
    case 723:  /* lzcnt_hi */
    case 722:  /* tzcnt_hi */
    case 717:  /* lzcnt_di */
    case 716:  /* tzcnt_di */
    case 715:  /* lzcnt_si */
    case 714:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 709:  /* *bsrhi */
    case 708:  /* bsr */
    case 707:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 2373:  /* avx512f_cvtps2pd512_round */
    case 2365:  /* *avx512f_cvtpd2ps512_round */
    case 2341:  /* ufix_truncv8sfv8di2_round */
    case 2337:  /* fix_truncv8sfv8di2_round */
    case 2309:  /* ufix_truncv8dfv8di2_round */
    case 2305:  /* fix_truncv8dfv8di2_round */
    case 2295:  /* ufix_truncv8dfv8si2_round */
    case 2291:  /* fix_truncv8dfv8si2_round */
    case 2248:  /* ufloatv8div8sf2_round */
    case 2244:  /* floatv8div8sf2_round */
    case 2240:  /* ufloatv2div2df2_round */
    case 2236:  /* floatv2div2df2_round */
    case 2232:  /* ufloatv4div4df2_round */
    case 2228:  /* floatv4div4df2_round */
    case 2224:  /* ufloatv8div8df2_round */
    case 2220:  /* floatv8div8df2_round */
    case 2176:  /* ufix_truncv16sfv16si2_round */
    case 2172:  /* fix_truncv16sfv16si2_round */
    case 2132:  /* ufloatv4siv4sf2_round */
    case 2128:  /* ufloatv8siv8sf2_round */
    case 2124:  /* ufloatv16siv16sf2_round */
    case 2116:  /* floatv16siv16sf2_round */
    case 1479:  /* avx512f_sqrtv8df2_round */
    case 1471:  /* avx512f_sqrtv16sf2_round */
    case 767:  /* *popcountdi2_falsedep */
    case 766:  /* *popcountsi2_falsedep */
    case 713:  /* *clzdi2_lzcnt_falsedep */
    case 712:  /* *clzsi2_lzcnt_falsedep */
    case 706:  /* *ctzdi2_falsedep */
    case 705:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 700:  /* *tzcntdi_1_falsedep */
    case 699:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 702:  /* *bsfdi_1 */
    case 701:  /* *bsfsi_1 */
    case 698:  /* *tzcntdi_1 */
    case 697:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3797:  /* sse4a_vmmovntv2df */
    case 3796:  /* sse4a_vmmovntv4sf */
    case 2208:  /* sse2_cvtsd2siq */
    case 2205:  /* sse2_cvtsd2si */
    case 2199:  /* avx512f_vcvtsd2usiq */
    case 2197:  /* avx512f_vcvtsd2usi */
    case 2191:  /* avx512f_vcvtss2usiq */
    case 2189:  /* avx512f_vcvtss2usi */
    case 2169:  /* *avx512dq_cvtps2uqqv2di */
    case 2161:  /* *avx512dq_cvtps2qqv2di */
    case 2101:  /* sse_cvtss2siq */
    case 2098:  /* sse_cvtss2si */
    case 843:  /* *cos_extenddfxf2_i387 */
    case 842:  /* *sin_extenddfxf2_i387 */
    case 841:  /* *cos_extendsfxf2_i387 */
    case 840:  /* *sin_extendsfxf2_i387 */
    case 691:  /* set_got_offset_rex64 */
    case 690:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 688:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1062:  /* rdseeddi_1 */
    case 1061:  /* rdseedsi_1 */
    case 1060:  /* rdseedhi_1 */
    case 1059:  /* rdranddi_1 */
    case 1058:  /* rdrandsi_1 */
    case 1057:  /* rdrandhi_1 */
    case 1037:  /* fnstenv */
    case 687:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 683:  /* simple_return_indirect_internal */
    case 682:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 3704:  /* sse2_clflush */
    case 3702:  /* sse_ldmxcsr */
    case 1074:  /* clzero_di */
    case 1073:  /* clzero_si */
    case 1069:  /* clflushopt */
    case 1068:  /* clwb */
    case 1066:  /* xabort */
    case 1056:  /* wrgsbasedi */
    case 1055:  /* wrfsbasedi */
    case 1054:  /* wrgsbasesi */
    case 1053:  /* wrfsbasesi */
    case 1042:  /* *lwp_llwpcbdi1 */
    case 1041:  /* *lwp_llwpcbsi1 */
    case 1018:  /* fxrstor64 */
    case 1017:  /* fxrstor */
    case 695:  /* split_stack_return */
    case 686:  /* pad */
    case 685:  /* nops */
    case 678:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 4956:  /* mfence_sse2 */
    case 4955:  /* *sse_sfence */
    case 4954:  /* *sse2_lfence */
    case 1063:  /* *pause */
    case 677:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4086:  /* avx_vzeroupper */
    case 1067:  /* xtest_1 */
    case 1065:  /* xend */
    case 1040:  /* fnclex */
    case 993:  /* trap */
    case 922:  /* cld */
    case 694:  /* leave_rex64 */
    case 693:  /* leave */
    case 692:  /* eh_return_internal */
    case 684:  /* nop */
    case 681:  /* simple_return_internal_long */
    case 680:  /* interrupt_return */
    case 679:  /* simple_return_internal */
    case 676:  /* blockage */
      break;

    case 675:  /* *sibcall_value_pop_memory */
    case 674:  /* *sibcall_value_pop */
    case 673:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 668:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 667:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4446:  /* vec_set_hi_v32qi */
    case 4444:  /* vec_set_hi_v16hi */
    case 4441:  /* vec_set_hi_v8sf */
    case 4439:  /* vec_set_hi_v8si */
    case 4433:  /* vec_set_hi_v4df */
    case 4431:  /* vec_set_hi_v4di */
    case 3614:  /* vec_set_hi_v8di */
    case 3612:  /* vec_set_hi_v8df */
    case 3606:  /* vec_set_hi_v16si */
    case 3604:  /* vec_set_hi_v16sf */
    case 3407:  /* *andnotv2di3 */
    case 3406:  /* *andnotv4di3 */
    case 3405:  /* *andnotv4si3 */
    case 3404:  /* *andnotv8si3 */
    case 3403:  /* *andnotv8hi3 */
    case 3402:  /* *andnotv16hi3 */
    case 3401:  /* *andnotv32hi3 */
    case 3400:  /* *andnotv16qi3 */
    case 3399:  /* *andnotv32qi3 */
    case 3398:  /* *andnotv64qi3 */
    case 3397:  /* *andnotv8di3 */
    case 3396:  /* *andnotv16si3 */
    case 2894:  /* *avx512vl_us_truncatev2div2si2 */
    case 2893:  /* *avx512vl_truncatev2div2si2 */
    case 2892:  /* *avx512vl_ss_truncatev2div2si2 */
    case 2855:  /* *avx512vl_us_truncatev4siv4hi2 */
    case 2854:  /* *avx512vl_truncatev4siv4hi2 */
    case 2853:  /* *avx512vl_ss_truncatev4siv4hi2 */
    case 2852:  /* *avx512vl_us_truncatev2div2hi2 */
    case 2851:  /* *avx512vl_truncatev2div2hi2 */
    case 2850:  /* *avx512vl_ss_truncatev2div2hi2 */
    case 2849:  /* *avx512vl_us_truncatev4div4hi2 */
    case 2848:  /* *avx512vl_truncatev4div4hi2 */
    case 2847:  /* *avx512vl_ss_truncatev4div4hi2 */
    case 2786:  /* *avx512vl_us_truncatev8hiv8qi2 */
    case 2785:  /* *avx512vl_truncatev8hiv8qi2 */
    case 2784:  /* *avx512vl_ss_truncatev8hiv8qi2 */
    case 2783:  /* *avx512vl_us_truncatev4siv4qi2 */
    case 2782:  /* *avx512vl_truncatev4siv4qi2 */
    case 2781:  /* *avx512vl_ss_truncatev4siv4qi2 */
    case 2780:  /* *avx512vl_us_truncatev8siv8qi2 */
    case 2779:  /* *avx512vl_truncatev8siv8qi2 */
    case 2778:  /* *avx512vl_ss_truncatev8siv8qi2 */
    case 2777:  /* *avx512vl_us_truncatev2div2qi2 */
    case 2776:  /* *avx512vl_truncatev2div2qi2 */
    case 2775:  /* *avx512vl_ss_truncatev2div2qi2 */
    case 2774:  /* *avx512vl_us_truncatev4div4qi2 */
    case 2773:  /* *avx512vl_truncatev4div4qi2 */
    case 2772:  /* *avx512vl_ss_truncatev4div4qi2 */
    case 2718:  /* sse2_loadhpd */
    case 2438:  /* sse_loadhps */
    case 2370:  /* *sse2_cvtpd2ps */
    case 1779:  /* *andnottf3 */
    case 1778:  /* *andnotdf3 */
    case 1777:  /* *andnotsf3 */
    case 1739:  /* avx512f_andnotv8df3 */
    case 1737:  /* avx512f_andnotv16sf3 */
    case 1735:  /* sse2_andnotv2df3 */
    case 1733:  /* avx_andnotv4df3 */
    case 1731:  /* sse_andnotv4sf3 */
    case 1729:  /* avx_andnotv8sf3 */
    case 1488:  /* sse2_vmsqrtv2df2 */
    case 1486:  /* sse_vmsqrtv4sf2 */
    case 1169:  /* mmx_andnotv2si3 */
    case 1168:  /* mmx_andnotv4hi3 */
    case 1167:  /* mmx_andnotv8qi3 */
    case 670:  /* *sibcall_value */
    case 669:  /* *sibcall_value */
    case 666:  /* *call_value */
    case 665:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 664:  /* *sibcall_pop_memory */
    case 663:  /* *sibcall_pop */
    case 662:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 657:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 656:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 653:  /* *tablejump_1 */
    case 652:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 649:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 648:  /* *jccxf_si_r_i387 */
    case 647:  /* *jccdf_si_r_i387 */
    case 646:  /* *jccsf_si_r_i387 */
    case 645:  /* *jccxf_hi_r_i387 */
    case 644:  /* *jccdf_hi_r_i387 */
    case 643:  /* *jccsf_hi_r_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 642:  /* *jccxf_si_i387 */
    case 641:  /* *jccdf_si_i387 */
    case 640:  /* *jccsf_si_i387 */
    case 639:  /* *jccxf_hi_i387 */
    case 638:  /* *jccdf_hi_i387 */
    case 637:  /* *jccsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 636:  /* *jccuxf_r_i387 */
    case 635:  /* *jccudf_r_i387 */
    case 634:  /* *jccusf_r_i387 */
    case 630:  /* *jccdf_r_i387 */
    case 629:  /* *jccsf_r_i387 */
    case 626:  /* *jccxf_r_i387 */
    case 624:  /* *jccxf_0_r_i387 */
    case 623:  /* *jccdf_0_r_i387 */
    case 622:  /* *jccsf_0_r_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 633:  /* *jccuxf_i387 */
    case 632:  /* *jccudf_i387 */
    case 631:  /* *jccusf_i387 */
    case 628:  /* *jccdf_i387 */
    case 627:  /* *jccsf_i387 */
    case 625:  /* *jccxf_i387 */
    case 621:  /* *jccxf_0_i387 */
    case 620:  /* *jccdf_0_i387 */
    case 619:  /* *jccsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 618:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 617:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1720:  /* avx512f_maskcmpv2df3 */
    case 1719:  /* avx512f_maskcmpv4df3 */
    case 1718:  /* avx512f_maskcmpv8df3 */
    case 1717:  /* avx512f_maskcmpv4sf3 */
    case 1716:  /* avx512f_maskcmpv8sf3 */
    case 1715:  /* avx512f_maskcmpv16sf3 */
    case 1636:  /* sse2_maskcmpv2df3 */
    case 1635:  /* avx_maskcmpv4df3 */
    case 1634:  /* sse_maskcmpv4sf3 */
    case 1633:  /* avx_maskcmpv8sf3 */
    case 1632:  /* *sse2_maskcmpv2df3_comm */
    case 1631:  /* *avx_maskcmpv4df3_comm */
    case 1630:  /* *sse_maskcmpv4sf3_comm */
    case 1629:  /* *avx_maskcmpv8sf3_comm */
    case 817:  /* *fop_xf_1_i387 */
    case 816:  /* *fop_xf_comm_i387 */
    case 804:  /* *fop_df_1 */
    case 803:  /* *fop_sf_1 */
    case 801:  /* *fop_df_comm */
    case 800:  /* *fop_sf_comm */
    case 616:  /* setcc_df_sse */
    case 615:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 609:  /* *jcc_btdi_mask */
    case 608:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 607:  /* *jcc_btdi_1 */
    case 606:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 605:  /* *jcc_btdi */
    case 604:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 603:  /* *btdi */
    case 602:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 601:  /* *btcq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 600:  /* *btrq */
    case 599:  /* *btsq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 583:  /* ix86_rotrti3_doubleword */
    case 582:  /* ix86_rotrdi3_doubleword */
    case 581:  /* ix86_rotlti3_doubleword */
    case 580:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 3586:  /* vec_interleave_lowv4si */
    case 3584:  /* *avx512f_interleave_lowv16si */
    case 3582:  /* avx2_interleave_lowv8si */
    case 3580:  /* vec_interleave_highv4si */
    case 3578:  /* *avx512f_interleave_highv16si */
    case 3576:  /* avx2_interleave_highv8si */
    case 3574:  /* vec_interleave_lowv8hi */
    case 3572:  /* avx2_interleave_lowv16hi */
    case 3570:  /* *avx512bw_interleave_lowv32hi */
    case 3568:  /* vec_interleave_highv8hi */
    case 3566:  /* avx2_interleave_highv16hi */
    case 3564:  /* avx512bw_interleave_highv32hi */
    case 3562:  /* vec_interleave_lowv16qi */
    case 3560:  /* avx2_interleave_lowv32qi */
    case 3558:  /* avx512bw_interleave_lowv64qi */
    case 3556:  /* vec_interleave_highv16qi */
    case 3554:  /* avx2_interleave_highv32qi */
    case 3552:  /* avx512bw_interleave_highv64qi */
    case 2710:  /* vec_interleave_lowv2di */
    case 2708:  /* *avx512f_interleave_lowv8di */
    case 2706:  /* avx2_interleave_lowv4di */
    case 2704:  /* vec_interleave_highv2di */
    case 2702:  /* *avx512f_interleave_highv8di */
    case 2700:  /* avx2_interleave_highv4di */
    case 2530:  /* *vec_interleave_lowv2df */
    case 2527:  /* *avx_unpcklpd256 */
    case 2525:  /* *avx512f_unpcklpd512 */
    case 2524:  /* *vec_interleave_highv2df */
    case 2521:  /* avx_unpckhpd256 */
    case 2519:  /* *avx512f_unpckhpd512 */
    case 2419:  /* vec_interleave_lowv4sf */
    case 2416:  /* avx_unpcklps256 */
    case 2414:  /* *avx512f_unpcklps512 */
    case 2412:  /* vec_interleave_highv4sf */
    case 2410:  /* avx_unpckhps256 */
    case 2408:  /* *avx512f_unpckhps512 */
    case 2407:  /* sse_movlhps */
    case 2406:  /* sse_movhlps */
    case 1187:  /* mmx_punpckldq */
    case 1186:  /* mmx_punpckhdq */
    case 1185:  /* mmx_punpcklwd */
    case 1184:  /* mmx_punpckhwd */
    case 1183:  /* mmx_punpcklbw */
    case 1182:  /* mmx_punpckhbw */
    case 590:  /* *bmi2_rorxsi3_1_zext */
    case 549:  /* *bmi2_ashrsi3_1_zext */
    case 548:  /* *bmi2_lshrsi3_1_zext */
    case 513:  /* *bmi2_ashlsi3_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 4531:  /* avx_vec_concatv8df */
    case 4530:  /* avx_vec_concatv16sf */
    case 4529:  /* avx_vec_concatv8di */
    case 4528:  /* avx_vec_concatv16si */
    case 4527:  /* avx_vec_concatv32hi */
    case 4526:  /* avx_vec_concatv64qi */
    case 4525:  /* avx_vec_concatv4df */
    case 4524:  /* avx_vec_concatv8sf */
    case 4523:  /* avx_vec_concatv4di */
    case 4522:  /* avx_vec_concatv8si */
    case 4521:  /* avx_vec_concatv16hi */
    case 4520:  /* avx_vec_concatv32qi */
    case 4518:  /* avx512bw_lshrvv32hi */
    case 4516:  /* avx512bw_ashlvv32hi */
    case 4514:  /* avx512vl_lshrvv16hi */
    case 4512:  /* avx512vl_ashlvv16hi */
    case 4510:  /* avx512vl_lshrvv8hi */
    case 4508:  /* avx512vl_ashlvv8hi */
    case 4506:  /* avx2_lshrvv2di */
    case 4504:  /* avx2_ashlvv2di */
    case 4502:  /* avx2_lshrvv4di */
    case 4500:  /* avx2_ashlvv4di */
    case 4498:  /* avx512f_lshrvv8di */
    case 4496:  /* avx512f_ashlvv8di */
    case 4494:  /* avx2_lshrvv4si */
    case 4492:  /* avx2_ashlvv4si */
    case 4490:  /* avx2_lshrvv8si */
    case 4488:  /* avx2_ashlvv8si */
    case 4486:  /* avx512f_lshrvv16si */
    case 4484:  /* avx512f_ashlvv16si */
    case 4482:  /* avx512bw_ashrvv32hi */
    case 4480:  /* avx512vl_ashrvv16hi */
    case 4478:  /* avx512vl_ashrvv8hi */
    case 4476:  /* avx512f_ashrvv8di */
    case 4474:  /* avx2_ashrvv4di */
    case 4472:  /* avx2_ashrvv2di */
    case 4470:  /* avx512f_ashrvv16si */
    case 4468:  /* avx2_ashrvv8si */
    case 4466:  /* avx2_ashrvv4si */
    case 4037:  /* xop_rotrv2di3 */
    case 4036:  /* xop_rotrv4si3 */
    case 4035:  /* xop_rotrv8hi3 */
    case 4034:  /* xop_rotrv16qi3 */
    case 4033:  /* xop_rotlv2di3 */
    case 4032:  /* xop_rotlv4si3 */
    case 4031:  /* xop_rotlv8hi3 */
    case 4030:  /* xop_rotlv16qi3 */
    case 3672:  /* vec_concatv2di */
    case 3671:  /* *vec_concatv4si */
    case 3670:  /* *vec_concatv2si */
    case 3669:  /* *vec_concatv2si_sse4_1 */
    case 3484:  /* *xorv8hi3 */
    case 3482:  /* *iorv8hi3 */
    case 3480:  /* *andv8hi3 */
    case 3478:  /* *xorv16hi3 */
    case 3476:  /* *iorv16hi3 */
    case 3474:  /* *andv16hi3 */
    case 3472:  /* *xorv32hi3 */
    case 3470:  /* *iorv32hi3 */
    case 3468:  /* *andv32hi3 */
    case 3466:  /* *xorv16qi3 */
    case 3464:  /* *iorv16qi3 */
    case 3462:  /* *andv16qi3 */
    case 3460:  /* *xorv32qi3 */
    case 3458:  /* *iorv32qi3 */
    case 3456:  /* *andv32qi3 */
    case 3454:  /* *xorv64qi3 */
    case 3452:  /* *iorv64qi3 */
    case 3450:  /* *andv64qi3 */
    case 3448:  /* *xorv2di3 */
    case 3446:  /* *iorv2di3 */
    case 3444:  /* *andv2di3 */
    case 3442:  /* *xorv4di3 */
    case 3440:  /* *iorv4di3 */
    case 3438:  /* *andv4di3 */
    case 3436:  /* *xorv8di3 */
    case 3434:  /* *iorv8di3 */
    case 3432:  /* *andv8di3 */
    case 3430:  /* *xorv4si3 */
    case 3428:  /* *iorv4si3 */
    case 3426:  /* *andv4si3 */
    case 3424:  /* *xorv8si3 */
    case 3422:  /* *iorv8si3 */
    case 3420:  /* *andv8si3 */
    case 3418:  /* *xorv16si3 */
    case 3416:  /* *iorv16si3 */
    case 3414:  /* *andv16si3 */
    case 3395:  /* sse2_gtv4si3 */
    case 3394:  /* sse2_gtv8hi3 */
    case 3393:  /* sse2_gtv16qi3 */
    case 3368:  /* avx2_gtv4di3 */
    case 3367:  /* avx2_gtv8si3 */
    case 3366:  /* avx2_gtv16hi3 */
    case 3365:  /* avx2_gtv32qi3 */
    case 3364:  /* sse4_2_gtv2di3 */
    case 3363:  /* *sse2_eqv4si3 */
    case 3362:  /* *sse2_eqv8hi3 */
    case 3361:  /* *sse2_eqv16qi3 */
    case 3360:  /* *sse4_1_eqv2di3 */
    case 3335:  /* *avx2_eqv4di3 */
    case 3334:  /* *avx2_eqv8si3 */
    case 3333:  /* *avx2_eqv16hi3 */
    case 3332:  /* *avx2_eqv32qi3 */
    case 3331:  /* *uminv16qi3 */
    case 3330:  /* *umaxv16qi3 */
    case 3328:  /* *sse4_1_uminv4si3 */
    case 3326:  /* *sse4_1_umaxv4si3 */
    case 3324:  /* *sse4_1_uminv8hi3 */
    case 3322:  /* *sse4_1_umaxv8hi3 */
    case 3321:  /* *sminv8hi3 */
    case 3320:  /* *smaxv8hi3 */
    case 3318:  /* *sse4_1_sminv4si3 */
    case 3316:  /* *sse4_1_smaxv4si3 */
    case 3314:  /* *sse4_1_sminv16qi3 */
    case 3312:  /* *sse4_1_smaxv16qi3 */
    case 3310:  /* *uminv8hi3 */
    case 3308:  /* *umaxv8hi3 */
    case 3306:  /* *sminv8hi3 */
    case 3304:  /* *smaxv8hi3 */
    case 3302:  /* *uminv16hi3 */
    case 3300:  /* *umaxv16hi3 */
    case 3298:  /* *sminv16hi3 */
    case 3296:  /* *smaxv16hi3 */
    case 3294:  /* *uminv32hi3 */
    case 3292:  /* *umaxv32hi3 */
    case 3290:  /* *sminv32hi3 */
    case 3288:  /* *smaxv32hi3 */
    case 3286:  /* *uminv32qi3 */
    case 3284:  /* *umaxv32qi3 */
    case 3282:  /* *sminv32qi3 */
    case 3280:  /* *smaxv32qi3 */
    case 3278:  /* *uminv16qi3 */
    case 3276:  /* *umaxv16qi3 */
    case 3274:  /* *sminv16qi3 */
    case 3272:  /* *smaxv16qi3 */
    case 3270:  /* *uminv64qi3 */
    case 3268:  /* *umaxv64qi3 */
    case 3266:  /* *sminv64qi3 */
    case 3264:  /* *smaxv64qi3 */
    case 3262:  /* *avx512f_uminv2di3 */
    case 3260:  /* *avx512f_umaxv2di3 */
    case 3258:  /* *avx512f_sminv2di3 */
    case 3256:  /* *avx512f_smaxv2di3 */
    case 3254:  /* *avx512f_uminv4di3 */
    case 3252:  /* *avx512f_umaxv4di3 */
    case 3250:  /* *avx512f_sminv4di3 */
    case 3248:  /* *avx512f_smaxv4di3 */
    case 3246:  /* *avx512f_uminv8di3 */
    case 3244:  /* *avx512f_umaxv8di3 */
    case 3242:  /* *avx512f_sminv8di3 */
    case 3240:  /* *avx512f_smaxv8di3 */
    case 3238:  /* *avx512f_uminv4si3 */
    case 3236:  /* *avx512f_umaxv4si3 */
    case 3234:  /* *avx512f_sminv4si3 */
    case 3232:  /* *avx512f_smaxv4si3 */
    case 3230:  /* *avx512f_uminv8si3 */
    case 3228:  /* *avx512f_umaxv8si3 */
    case 3226:  /* *avx512f_sminv8si3 */
    case 3224:  /* *avx512f_smaxv8si3 */
    case 3222:  /* *avx512f_uminv16si3 */
    case 3220:  /* *avx512f_umaxv16si3 */
    case 3218:  /* *avx512f_sminv16si3 */
    case 3216:  /* *avx512f_smaxv16si3 */
    case 3215:  /* *avx2_uminv8si3 */
    case 3214:  /* *avx2_umaxv8si3 */
    case 3213:  /* *avx2_sminv8si3 */
    case 3212:  /* *avx2_smaxv8si3 */
    case 3211:  /* *avx2_uminv16hi3 */
    case 3210:  /* *avx2_umaxv16hi3 */
    case 3209:  /* *avx2_sminv16hi3 */
    case 3208:  /* *avx2_smaxv16hi3 */
    case 3207:  /* *avx2_uminv32qi3 */
    case 3206:  /* *avx2_umaxv32qi3 */
    case 3205:  /* *avx2_sminv32qi3 */
    case 3204:  /* *avx2_smaxv32qi3 */
    case 3202:  /* avx512vl_rorv2di */
    case 3200:  /* avx512vl_rolv2di */
    case 3198:  /* avx512vl_rorv4di */
    case 3196:  /* avx512vl_rolv4di */
    case 3194:  /* avx512f_rorv8di */
    case 3192:  /* avx512f_rolv8di */
    case 3190:  /* avx512vl_rorv4si */
    case 3188:  /* avx512vl_rolv4si */
    case 3186:  /* avx512vl_rorv8si */
    case 3184:  /* avx512vl_rolv8si */
    case 3182:  /* avx512f_rorv16si */
    case 3180:  /* avx512f_rolv16si */
    case 3178:  /* avx512vl_rorvv2di */
    case 3176:  /* avx512vl_rolvv2di */
    case 3174:  /* avx512vl_rorvv4di */
    case 3172:  /* avx512vl_rolvv4di */
    case 3170:  /* avx512f_rorvv8di */
    case 3168:  /* avx512f_rolvv8di */
    case 3166:  /* avx512vl_rorvv4si */
    case 3164:  /* avx512vl_rolvv4si */
    case 3162:  /* avx512vl_rorvv8si */
    case 3160:  /* avx512vl_rolvv8si */
    case 3158:  /* avx512f_rorvv16si */
    case 3156:  /* avx512f_rolvv16si */
    case 3155:  /* sse2_lshrv1ti3 */
    case 3154:  /* avx2_lshrv2ti3 */
    case 3153:  /* avx512bw_lshrv4ti3 */
    case 3152:  /* sse2_ashlv1ti3 */
    case 3151:  /* avx2_ashlv2ti3 */
    case 3150:  /* avx512bw_ashlv4ti3 */
    case 3148:  /* lshrv8di3 */
    case 3146:  /* ashlv8di3 */
    case 3144:  /* lshrv16si3 */
    case 3142:  /* ashlv16si3 */
    case 3140:  /* lshrv2di3 */
    case 3138:  /* ashlv2di3 */
    case 3136:  /* lshrv4di3 */
    case 3134:  /* ashlv4di3 */
    case 3132:  /* lshrv4si3 */
    case 3130:  /* ashlv4si3 */
    case 3128:  /* lshrv8si3 */
    case 3126:  /* ashlv8si3 */
    case 3124:  /* lshrv8hi3 */
    case 3122:  /* ashlv8hi3 */
    case 3120:  /* lshrv16hi3 */
    case 3118:  /* ashlv16hi3 */
    case 3116:  /* lshrv32hi3 */
    case 3114:  /* ashlv32hi3 */
    case 3112:  /* ashrv8di3 */
    case 3110:  /* ashrv16si3 */
    case 3108:  /* ashrv4di3 */
    case 3106:  /* ashrv32hi3 */
    case 3104:  /* *ashrv2di3 */
    case 3103:  /* ashrv4si3 */
    case 3102:  /* ashrv8si3 */
    case 3101:  /* ashrv8hi3 */
    case 3100:  /* ashrv16hi3 */
    case 3098:  /* *ashrv4si3 */
    case 3096:  /* *ashrv8si3 */
    case 3094:  /* *ashrv8hi3 */
    case 3092:  /* *ashrv16hi3 */
    case 3090:  /* *sse4_1_mulv4si3 */
    case 3088:  /* *avx2_mulv8si3 */
    case 3086:  /* *avx512f_mulv16si3 */
    case 3084:  /* avx512dq_mulv2di3 */
    case 3082:  /* avx512dq_mulv4di3 */
    case 3080:  /* avx512dq_mulv8di3 */
    case 3046:  /* *mulv8hi3 */
    case 3044:  /* *mulv16hi3 */
    case 3042:  /* *mulv32hi3 */
    case 3040:  /* *sse2_ussubv8hi3 */
    case 3038:  /* *sse2_sssubv8hi3 */
    case 3036:  /* *sse2_usaddv8hi3 */
    case 3034:  /* *sse2_ssaddv8hi3 */
    case 3032:  /* *avx2_ussubv16hi3 */
    case 3030:  /* *avx2_sssubv16hi3 */
    case 3028:  /* *avx2_usaddv16hi3 */
    case 3026:  /* *avx2_ssaddv16hi3 */
    case 3024:  /* *avx512bw_ussubv32hi3 */
    case 3022:  /* *avx512bw_sssubv32hi3 */
    case 3020:  /* *avx512bw_usaddv32hi3 */
    case 3018:  /* *avx512bw_ssaddv32hi3 */
    case 3016:  /* *sse2_ussubv16qi3 */
    case 3014:  /* *sse2_sssubv16qi3 */
    case 3012:  /* *sse2_usaddv16qi3 */
    case 3010:  /* *sse2_ssaddv16qi3 */
    case 3008:  /* *avx2_ussubv32qi3 */
    case 3006:  /* *avx2_sssubv32qi3 */
    case 3004:  /* *avx2_usaddv32qi3 */
    case 3002:  /* *avx2_ssaddv32qi3 */
    case 3000:  /* *avx512bw_ussubv64qi3 */
    case 2998:  /* *avx512bw_sssubv64qi3 */
    case 2996:  /* *avx512bw_usaddv64qi3 */
    case 2994:  /* *avx512bw_ssaddv64qi3 */
    case 2968:  /* *subv2di3 */
    case 2966:  /* *addv2di3 */
    case 2964:  /* *subv4di3 */
    case 2962:  /* *addv4di3 */
    case 2960:  /* *subv8di3 */
    case 2958:  /* *addv8di3 */
    case 2956:  /* *subv4si3 */
    case 2954:  /* *addv4si3 */
    case 2952:  /* *subv8si3 */
    case 2950:  /* *addv8si3 */
    case 2948:  /* *subv16si3 */
    case 2946:  /* *addv16si3 */
    case 2944:  /* *subv8hi3 */
    case 2942:  /* *addv8hi3 */
    case 2940:  /* *subv16hi3 */
    case 2938:  /* *addv16hi3 */
    case 2936:  /* *subv32hi3 */
    case 2934:  /* *addv32hi3 */
    case 2932:  /* *subv16qi3 */
    case 2930:  /* *addv16qi3 */
    case 2928:  /* *subv32qi3 */
    case 2926:  /* *addv32qi3 */
    case 2924:  /* *subv64qi3 */
    case 2922:  /* *addv64qi3 */
    case 2723:  /* vec_concatv2df */
    case 2449:  /* *vec_concatv4sf */
    case 2448:  /* *vec_concatv2sf_sse */
    case 2447:  /* *vec_concatv2sf_sse4_1 */
    case 1788:  /* *xortf3 */
    case 1787:  /* *iortf3 */
    case 1786:  /* *andtf3 */
    case 1785:  /* *xordf3 */
    case 1784:  /* *iordf3 */
    case 1783:  /* *anddf3 */
    case 1782:  /* *xorsf3 */
    case 1781:  /* *iorsf3 */
    case 1780:  /* *andsf3 */
    case 1775:  /* *xorv8df3 */
    case 1773:  /* *iorv8df3 */
    case 1771:  /* *andv8df3 */
    case 1769:  /* *xorv16sf3 */
    case 1767:  /* *iorv16sf3 */
    case 1765:  /* *andv16sf3 */
    case 1763:  /* *xorv2df3 */
    case 1761:  /* *iorv2df3 */
    case 1759:  /* *andv2df3 */
    case 1757:  /* *xorv4df3 */
    case 1755:  /* *iorv4df3 */
    case 1753:  /* *andv4df3 */
    case 1751:  /* *xorv4sf3 */
    case 1749:  /* *iorv4sf3 */
    case 1747:  /* *andv4sf3 */
    case 1745:  /* *xorv8sf3 */
    case 1743:  /* *iorv8sf3 */
    case 1741:  /* *andv8sf3 */
    case 1551:  /* *sminv2df3 */
    case 1547:  /* *smaxv2df3 */
    case 1543:  /* *sminv4df3 */
    case 1539:  /* *smaxv4df3 */
    case 1535:  /* *sminv8df3 */
    case 1531:  /* *smaxv8df3 */
    case 1527:  /* *sminv4sf3 */
    case 1523:  /* *smaxv4sf3 */
    case 1519:  /* *sminv8sf3 */
    case 1515:  /* *smaxv8sf3 */
    case 1511:  /* *sminv16sf3 */
    case 1507:  /* *smaxv16sf3 */
    case 1451:  /* sse2_divv2df3 */
    case 1449:  /* avx_divv4df3 */
    case 1445:  /* avx512f_divv8df3 */
    case 1443:  /* sse_divv4sf3 */
    case 1441:  /* avx_divv8sf3 */
    case 1437:  /* avx512f_divv16sf3 */
    case 1425:  /* *mulv2df3 */
    case 1421:  /* *mulv4df3 */
    case 1417:  /* *mulv8df3 */
    case 1413:  /* *mulv4sf3 */
    case 1409:  /* *mulv8sf3 */
    case 1405:  /* *mulv16sf3 */
    case 1393:  /* *subv2df3 */
    case 1389:  /* *addv2df3 */
    case 1385:  /* *subv4df3 */
    case 1381:  /* *addv4df3 */
    case 1377:  /* *subv8df3 */
    case 1373:  /* *addv8df3 */
    case 1369:  /* *subv4sf3 */
    case 1365:  /* *addv4sf3 */
    case 1361:  /* *subv8sf3 */
    case 1357:  /* *addv8sf3 */
    case 1353:  /* *subv16sf3 */
    case 1349:  /* *addv16sf3 */
    case 1194:  /* *mmx_concatv2si */
    case 1178:  /* *mmx_xorv2si3 */
    case 1177:  /* *mmx_iorv2si3 */
    case 1176:  /* *mmx_andv2si3 */
    case 1175:  /* *mmx_xorv4hi3 */
    case 1174:  /* *mmx_iorv4hi3 */
    case 1173:  /* *mmx_andv4hi3 */
    case 1172:  /* *mmx_xorv8qi3 */
    case 1171:  /* *mmx_iorv8qi3 */
    case 1170:  /* *mmx_andv8qi3 */
    case 1166:  /* mmx_gtv2si3 */
    case 1165:  /* mmx_gtv4hi3 */
    case 1164:  /* mmx_gtv8qi3 */
    case 1163:  /* *mmx_eqv2si3 */
    case 1162:  /* *mmx_eqv4hi3 */
    case 1161:  /* *mmx_eqv8qi3 */
    case 1160:  /* mmx_lshrv1di3 */
    case 1159:  /* mmx_ashlv1di3 */
    case 1158:  /* mmx_lshrv2si3 */
    case 1157:  /* mmx_ashlv2si3 */
    case 1156:  /* mmx_lshrv4hi3 */
    case 1155:  /* mmx_ashlv4hi3 */
    case 1154:  /* mmx_ashrv2si3 */
    case 1153:  /* mmx_ashrv4hi3 */
    case 1152:  /* *mmx_uminv8qi3 */
    case 1151:  /* *mmx_umaxv8qi3 */
    case 1150:  /* *mmx_sminv4hi3 */
    case 1149:  /* *mmx_smaxv4hi3 */
    case 1143:  /* *mmx_mulv4hi3 */
    case 1142:  /* *mmx_ussubv4hi3 */
    case 1141:  /* *mmx_sssubv4hi3 */
    case 1140:  /* *mmx_usaddv4hi3 */
    case 1139:  /* *mmx_ssaddv4hi3 */
    case 1138:  /* *mmx_ussubv8qi3 */
    case 1137:  /* *mmx_sssubv8qi3 */
    case 1136:  /* *mmx_usaddv8qi3 */
    case 1135:  /* *mmx_ssaddv8qi3 */
    case 1134:  /* *mmx_subv1di3 */
    case 1133:  /* *mmx_addv1di3 */
    case 1132:  /* *mmx_subv2si3 */
    case 1131:  /* *mmx_addv2si3 */
    case 1130:  /* *mmx_subv4hi3 */
    case 1129:  /* *mmx_addv4hi3 */
    case 1128:  /* *mmx_subv8qi3 */
    case 1127:  /* *mmx_addv8qi3 */
    case 1124:  /* *mmx_concatv2sf */
    case 1117:  /* mmx_gev2sf3 */
    case 1116:  /* mmx_gtv2sf3 */
    case 1115:  /* *mmx_eqv2sf3 */
    case 1104:  /* *mmx_sminv2sf3 */
    case 1103:  /* *mmx_smaxv2sf3 */
    case 1102:  /* *mmx_mulv2sf3 */
    case 1101:  /* *mmx_subv2sf3 */
    case 1100:  /* *mmx_addv2sf3 */
    case 976:  /* smindf3 */
    case 975:  /* smaxdf3 */
    case 974:  /* sminsf3 */
    case 973:  /* smaxsf3 */
    case 585:  /* *bmi2_rorxdi3_1 */
    case 584:  /* *bmi2_rorxsi3_1 */
    case 543:  /* *bmi2_ashrdi3_1 */
    case 542:  /* *bmi2_lshrdi3_1 */
    case 541:  /* *bmi2_ashrsi3_1 */
    case 540:  /* *bmi2_lshrsi3_1 */
    case 510:  /* *bmi2_ashldi3_1 */
    case 509:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 579:  /* *rotrdi3_mask */
    case 578:  /* *rotldi3_mask */
    case 577:  /* *rotrsi3_mask */
    case 576:  /* *rotlsi3_mask */
    case 530:  /* *ashrdi3_mask */
    case 529:  /* *lshrdi3_mask */
    case 528:  /* *ashrsi3_mask */
    case 527:  /* *lshrsi3_mask */
    case 508:  /* *ashldi3_mask */
    case 507:  /* *ashlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 536:  /* x86_shrd */
    case 535:  /* x86_64_shrd */
    case 506:  /* x86_shld */
    case 505:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 502:  /* *one_cmplsi2_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 491:  /* copysigntf3_var */
    case 490:  /* copysigndf3_var */
    case 489:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 4947:  /* avx5124vnniw_vp4dpwssds */
    case 4944:  /* avx5124vnniw_vp4dpwssd */
    case 4941:  /* avx5124fmaddps_4fnmaddss */
    case 4938:  /* avx5124fmaddps_4fnmaddps */
    case 4935:  /* avx5124fmaddps_4fmaddss */
    case 4932:  /* avx5124fmaddps_4fmaddps */
    case 4916:  /* vpamdd52huqv2di */
    case 4914:  /* vpamdd52luqv2di */
    case 4912:  /* vpamdd52huqv4di */
    case 4910:  /* vpamdd52luqv4di */
    case 4908:  /* vpamdd52huqv8di */
    case 4906:  /* vpamdd52luqv8di */
    case 4899:  /* sha256rnds2 */
    case 4896:  /* sha1rnds4 */
    case 4867:  /* *avx512bw_dbpsadbwv32hi */
    case 4865:  /* *avx512bw_dbpsadbwv16hi */
    case 4863:  /* *avx512bw_dbpsadbwv8hi */
    case 4815:  /* avx512dq_rangepv2df */
    case 4813:  /* avx512dq_rangepv4df */
    case 4809:  /* avx512dq_rangepv8df */
    case 4807:  /* avx512dq_rangepv4sf */
    case 4805:  /* avx512dq_rangepv8sf */
    case 4801:  /* avx512dq_rangepv16sf */
    case 4800:  /* avx512vl_expandv2df_mask */
    case 4799:  /* avx512vl_expandv2di_mask */
    case 4798:  /* avx512vl_expandv4sf_mask */
    case 4797:  /* avx512vl_expandv4si_mask */
    case 4796:  /* avx512vl_expandv4df_mask */
    case 4795:  /* avx512vl_expandv4di_mask */
    case 4794:  /* avx512vl_expandv8sf_mask */
    case 4793:  /* avx512vl_expandv8si_mask */
    case 4792:  /* avx512f_expandv8df_mask */
    case 4791:  /* avx512f_expandv8di_mask */
    case 4790:  /* avx512f_expandv16sf_mask */
    case 4789:  /* avx512f_expandv16si_mask */
    case 4776:  /* avx512vl_compressv2df_mask */
    case 4775:  /* avx512vl_compressv2di_mask */
    case 4774:  /* avx512vl_compressv4sf_mask */
    case 4773:  /* avx512vl_compressv4si_mask */
    case 4772:  /* avx512vl_compressv4df_mask */
    case 4771:  /* avx512vl_compressv4di_mask */
    case 4770:  /* avx512vl_compressv8sf_mask */
    case 4769:  /* avx512vl_compressv8si_mask */
    case 4768:  /* avx512f_compressv8df_mask */
    case 4767:  /* avx512f_compressv8di_mask */
    case 4766:  /* avx512f_compressv16sf_mask */
    case 4765:  /* avx512f_compressv16si_mask */
    case 4417:  /* *avx_vperm2f128v4df_full */
    case 4416:  /* *avx_vperm2f128v8sf_full */
    case 4415:  /* *avx_vperm2f128v8si_full */
    case 4395:  /* avx512bw_vpermt2varv32hi3 */
    case 4393:  /* avx512vl_vpermt2varv16hi3 */
    case 4391:  /* avx512vl_vpermt2varv8hi3 */
    case 4389:  /* avx512vl_vpermt2varv32qi3 */
    case 4387:  /* avx512vl_vpermt2varv16qi3 */
    case 4385:  /* avx512bw_vpermt2varv64qi3 */
    case 4383:  /* avx512vl_vpermt2varv2df3 */
    case 4381:  /* avx512vl_vpermt2varv2di3 */
    case 4379:  /* avx512vl_vpermt2varv4sf3 */
    case 4377:  /* avx512vl_vpermt2varv4si3 */
    case 4375:  /* avx512vl_vpermt2varv4df3 */
    case 4373:  /* avx512vl_vpermt2varv4di3 */
    case 4371:  /* avx512vl_vpermt2varv8sf3 */
    case 4369:  /* avx512vl_vpermt2varv8si3 */
    case 4367:  /* avx512f_vpermt2varv8df3 */
    case 4365:  /* avx512f_vpermt2varv8di3 */
    case 4363:  /* avx512f_vpermt2varv16sf3 */
    case 4361:  /* avx512f_vpermt2varv16si3 */
    case 4341:  /* avx512bw_vpermi2varv32hi3 */
    case 4339:  /* avx512vl_vpermi2varv16hi3 */
    case 4337:  /* avx512vl_vpermi2varv8hi3 */
    case 4335:  /* avx512vl_vpermi2varv32qi3 */
    case 4333:  /* avx512vl_vpermi2varv16qi3 */
    case 4331:  /* avx512bw_vpermi2varv64qi3 */
    case 4329:  /* avx512vl_vpermi2varv2df3 */
    case 4327:  /* avx512vl_vpermi2varv2di3 */
    case 4325:  /* avx512vl_vpermi2varv4sf3 */
    case 4323:  /* avx512vl_vpermi2varv4si3 */
    case 4321:  /* avx512vl_vpermi2varv4df3 */
    case 4319:  /* avx512vl_vpermi2varv4di3 */
    case 4317:  /* avx512vl_vpermi2varv8sf3 */
    case 4315:  /* avx512vl_vpermi2varv8si3 */
    case 4313:  /* avx512f_vpermi2varv8df3 */
    case 4311:  /* avx512f_vpermi2varv8di3 */
    case 4309:  /* avx512f_vpermi2varv16sf3 */
    case 4307:  /* avx512f_vpermi2varv16si3 */
    case 4139:  /* avx2_permv2ti */
    case 4084:  /* pclmulqdq */
    case 4073:  /* xop_pcom_tfv2di3 */
    case 4072:  /* xop_pcom_tfv4si3 */
    case 4071:  /* xop_pcom_tfv8hi3 */
    case 4070:  /* xop_pcom_tfv16qi3 */
    case 4026:  /* xop_pperm */
    case 3826:  /* sse4_1_pblendvb */
    case 3825:  /* avx2_pblendvb */
    case 3818:  /* sse4_1_mpsadbw */
    case 3817:  /* avx2_mpsadbw */
    case 3813:  /* sse4_1_dppd */
    case 3812:  /* avx_dppd256 */
    case 3811:  /* sse4_1_dpps */
    case 3810:  /* avx_dpps256 */
    case 3809:  /* sse4_1_blendvpd */
    case 3808:  /* avx_blendvpd256 */
    case 3807:  /* sse4_1_blendvps */
    case 3806:  /* avx_blendvps256 */
    case 3798:  /* sse4a_extrqi */
    case 3766:  /* ssse3_palignrdi */
    case 3765:  /* ssse3_palignrti */
    case 3764:  /* avx2_palignrv2ti */
    case 3763:  /* avx512bw_palignrv4ti */
    case 2615:  /* *avx512vl_alignv2di */
    case 2613:  /* *avx512vl_alignv4di */
    case 2611:  /* *avx512f_alignv8di */
    case 2609:  /* *avx512vl_alignv4si */
    case 2607:  /* *avx512vl_alignv8si */
    case 2605:  /* *avx512f_alignv16si */
    case 1995:  /* *fma_fmaddsub_v2df */
    case 1993:  /* *fma_fmaddsub_v4df */
    case 1989:  /* *fma_fmaddsub_v8df */
    case 1988:  /* *fma_fmaddsub_df */
    case 1986:  /* *fma_fmaddsub_v4sf */
    case 1984:  /* *fma_fmaddsub_v8sf */
    case 1980:  /* *fma_fmaddsub_v16sf */
    case 1979:  /* *fma_fmaddsub_sf */
    case 1978:  /* *fma_fmaddsub_v2df */
    case 1977:  /* *fma_fmaddsub_v4df */
    case 1976:  /* *fma_fmaddsub_v4sf */
    case 1975:  /* *fma_fmaddsub_v8sf */
    case 1705:  /* avx512vl_ucmpv2di3 */
    case 1703:  /* avx512vl_ucmpv4di3 */
    case 1701:  /* avx512f_ucmpv8di3 */
    case 1699:  /* avx512vl_ucmpv4si3 */
    case 1697:  /* avx512vl_ucmpv8si3 */
    case 1695:  /* avx512f_ucmpv16si3 */
    case 1693:  /* avx512vl_ucmpv8hi3 */
    case 1691:  /* avx512vl_ucmpv16hi3 */
    case 1689:  /* avx512bw_ucmpv32hi3 */
    case 1687:  /* avx512vl_ucmpv32qi3 */
    case 1685:  /* avx512vl_ucmpv16qi3 */
    case 1683:  /* avx512bw_ucmpv64qi3 */
    case 1681:  /* avx512vl_cmpv8hi3 */
    case 1679:  /* avx512vl_cmpv16hi3 */
    case 1677:  /* avx512bw_cmpv32hi3 */
    case 1675:  /* avx512vl_cmpv32qi3 */
    case 1673:  /* avx512vl_cmpv16qi3 */
    case 1671:  /* avx512bw_cmpv64qi3 */
    case 1669:  /* avx512vl_cmpv2df3 */
    case 1667:  /* avx512vl_cmpv4df3 */
    case 1663:  /* avx512f_cmpv8df3 */
    case 1661:  /* avx512vl_cmpv4sf3 */
    case 1659:  /* avx512vl_cmpv8sf3 */
    case 1655:  /* avx512f_cmpv16sf3 */
    case 1653:  /* avx512vl_cmpv2di3 */
    case 1651:  /* avx512vl_cmpv4di3 */
    case 1647:  /* avx512f_cmpv8di3 */
    case 1645:  /* avx512vl_cmpv4si3 */
    case 1643:  /* avx512vl_cmpv8si3 */
    case 1639:  /* avx512f_cmpv16si3 */
    case 1626:  /* avx_cmpv2df3 */
    case 1625:  /* avx_cmpv4df3 */
    case 1624:  /* avx_cmpv4sf3 */
    case 1623:  /* avx_cmpv8sf3 */
    case 488:  /* copysigntf3_const */
    case 487:  /* copysigndf3_const */
    case 486:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1348:  /* *absnegv2df2 */
    case 1347:  /* *absnegv4df2 */
    case 1346:  /* *absnegv8df2 */
    case 1345:  /* *absnegv4sf2 */
    case 1344:  /* *absnegv8sf2 */
    case 1343:  /* *absnegv16sf2 */
    case 473:  /* *absnegtf2_sse */
    case 472:  /* *absnegxf2_i387 */
    case 471:  /* *absnegdf2 */
    case 470:  /* *absnegsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 469:  /* *negvdi3 */
    case 468:  /* *negvsi3 */
    case 467:  /* *negvhi3 */
    case 466:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 465:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 501:  /* *one_cmpldi2_2 */
    case 500:  /* *one_cmplsi2_2 */
    case 499:  /* *one_cmplhi2_2 */
    case 498:  /* *one_cmplqi2_2 */
    case 464:  /* *negdi2_cmpz */
    case 463:  /* *negsi2_cmpz */
    case 462:  /* *neghi2_cmpz */
    case 461:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 460:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 438:  /* *xorsi_2_zext_imm */
    case 437:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 410:  /* *andn_di_ccno */
    case 409:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1311:  /* kandndi */
    case 1310:  /* kandnsi */
    case 1309:  /* kandnhi */
    case 1308:  /* kandnqi */
    case 784:  /* *tls_local_dynamic_base_64_di */
    case 783:  /* *tls_local_dynamic_base_64_si */
    case 672:  /* *sibcall_value_memory */
    case 671:  /* *sibcall_value_memory */
    case 422:  /* *xorsi_1_zext_imm */
    case 421:  /* *iorsi_1_zext_imm */
    case 408:  /* *andnhi_1 */
    case 407:  /* *andnqi_1 */
    case 406:  /* *andndi_1 */
    case 405:  /* *andnsi_1 */
    case 404:  /* *andndi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 453:  /* *xorqi_ext_1_cc */
    case 402:  /* *andqi_ext_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 440:  /* *xorqi_2_slp */
    case 439:  /* *iorqi_2_slp */
    case 400:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 386:  /* *testqi_ext_3 */
    case 385:  /* *testqi_ext_3 */
    case 384:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 383:  /* *testqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 382:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 376:  /* udivmodhiqi3 */
    case 365:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 375:  /* *udivmoddi4_noext */
    case 374:  /* *udivmodsi4_noext */
    case 373:  /* *udivmodhi4_noext */
    case 364:  /* *divmoddi4_noext */
    case 363:  /* *divmodsi4_noext */
    case 362:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 372:  /* *udivmoddi4_pow2 */
    case 371:  /* *udivmodsi4_pow2 */
    case 370:  /* *udivmoddi4 */
    case 369:  /* *udivmodsi4 */
    case 368:  /* *udivmodhi4 */
    case 367:  /* udivmoddi4_1 */
    case 366:  /* udivmodsi4_1 */
    case 361:  /* *divmoddi4 */
    case 360:  /* *divmodsi4 */
    case 359:  /* *divmodhi4 */
    case 358:  /* divmoddi4_1 */
    case 357:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 354:  /* *umulsi3_highpart_zext */
    case 353:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 356:  /* *umulsi3_highpart_1 */
    case 355:  /* *smulsi3_highpart_1 */
    case 352:  /* *umuldi3_highpart_1 */
    case 351:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 350:  /* *umulqihi3_1 */
    case 349:  /* *mulqihi3_1 */
    case 348:  /* *mulditi3_1 */
    case 347:  /* *mulsidi3_1 */
    case 346:  /* *umulditi3_1 */
    case 345:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 344:  /* *bmi2_umulditi3_1 */
    case 343:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 340:  /* *umulvdi4 */
    case 339:  /* *umulvsi4 */
    case 338:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 326:  /* *addsi3_zext_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 325:  /* *adddi3_cc_overflow_2 */
    case 324:  /* *addsi3_cc_overflow_2 */
    case 323:  /* *addhi3_cc_overflow_2 */
    case 322:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 321:  /* *adddi3_cconly_overflow_2 */
    case 320:  /* *addsi3_cconly_overflow_2 */
    case 319:  /* *addhi3_cconly_overflow_2 */
    case 318:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 317:  /* *addsi3_zext_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 316:  /* *adddi3_cc_overflow_1 */
    case 315:  /* *addsi3_cc_overflow_1 */
    case 314:  /* *addhi3_cc_overflow_1 */
    case 313:  /* *addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 312:  /* *adddi3_cconly_overflow_1 */
    case 311:  /* *addsi3_cconly_overflow_1 */
    case 310:  /* *addhi3_cconly_overflow_1 */
    case 309:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 308:  /* subborrowdi */
    case 307:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 306:  /* *subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 305:  /* subdi3_carry */
    case 304:  /* subsi3_carry */
    case 303:  /* subhi3_carry */
    case 302:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 301:  /* addcarrydi */
    case 300:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[4] = 1;
      break;

    case 299:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 298:  /* adddi3_carry */
    case 297:  /* addsi3_carry */
    case 296:  /* addhi3_carry */
    case 295:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 294:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 293:  /* *subdi_3 */
    case 292:  /* *subsi_3 */
    case 291:  /* *subhi_3 */
    case 290:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 260:  /* *leahi_general_3b */
    case 259:  /* *leaqi_general_3b */
    case 258:  /* *leahi_general_3 */
    case 257:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3986:  /* xop_pmacssdd */
    case 3985:  /* xop_pmacsdd */
    case 3984:  /* xop_pmacssww */
    case 3983:  /* xop_pmacsww */
    case 268:  /* *leadi_general_4 */
    case 267:  /* *leadi_general_4 */
    case 266:  /* *leasi_general_4 */
    case 265:  /* *leasi_general_4 */
    case 264:  /* *leahi_general_4 */
    case 263:  /* *leahi_general_4 */
    case 262:  /* *leaqi_general_4 */
    case 261:  /* *leaqi_general_4 */
    case 256:  /* *leahi_general_2b */
    case 255:  /* *leaqi_general_2b */
    case 254:  /* *leahi_general_2 */
    case 253:  /* *leaqi_general_2 */
    case 252:  /* *leahi_general_1 */
    case 251:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 337:  /* *mulvdi4_1 */
    case 336:  /* *mulvsi4_1 */
    case 335:  /* *mulvhi4_1 */
    case 289:  /* *subvdi4_1 */
    case 288:  /* *subvsi4_1 */
    case 287:  /* *subvhi4_1 */
    case 286:  /* *subvqi4_1 */
    case 250:  /* *addvdi4_1 */
    case 249:  /* *addvsi4_1 */
    case 248:  /* *addvhi4_1 */
    case 247:  /* *addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 342:  /* *umulvqi4 */
    case 341:  /* *mulvqi4 */
    case 334:  /* *mulvhi4 */
    case 333:  /* *mulvdi4 */
    case 332:  /* *mulvsi4 */
    case 285:  /* *subvdi4 */
    case 284:  /* *subvsi4 */
    case 283:  /* *subvhi4 */
    case 282:  /* *subvqi4 */
    case 246:  /* *addvdi4 */
    case 245:  /* *addvsi4 */
    case 244:  /* *addvhi4 */
    case 243:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 452:  /* *xorqi_ext_2 */
    case 451:  /* *iorqi_ext_2 */
    case 403:  /* *andqi_ext_2 */
    case 242:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 450:  /* *xorqi_ext_1 */
    case 449:  /* *iorqi_ext_1 */
    case 401:  /* andqi_ext_1 */
    case 241:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 575:  /* *ashrdi3_cconly */
    case 574:  /* *lshrdi3_cconly */
    case 573:  /* *ashrsi3_cconly */
    case 572:  /* *lshrsi3_cconly */
    case 571:  /* *ashrhi3_cconly */
    case 570:  /* *lshrhi3_cconly */
    case 569:  /* *ashrqi3_cconly */
    case 568:  /* *lshrqi3_cconly */
    case 526:  /* *ashldi3_cconly */
    case 525:  /* *ashlsi3_cconly */
    case 524:  /* *ashlhi3_cconly */
    case 523:  /* *ashlqi3_cconly */
    case 448:  /* *xordi_3 */
    case 447:  /* *iordi_3 */
    case 446:  /* *xorsi_3 */
    case 445:  /* *iorsi_3 */
    case 444:  /* *xorhi_3 */
    case 443:  /* *iorhi_3 */
    case 442:  /* *xorqi_3 */
    case 441:  /* *iorqi_3 */
    case 240:  /* *adddi_5 */
    case 239:  /* *addsi_5 */
    case 238:  /* *addhi_5 */
    case 237:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 232:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 231:  /* *adddi_3 */
    case 230:  /* *addsi_3 */
    case 229:  /* *addhi_3 */
    case 228:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 567:  /* *ashrsi3_cmp_zext */
    case 566:  /* *lshrsi3_cmp_zext */
    case 522:  /* *ashlsi3_cmp_zext */
    case 436:  /* *xorsi_2_zext */
    case 435:  /* *iorsi_2_zext */
    case 395:  /* *andsi_2_zext */
    case 281:  /* *subsi_2_zext */
    case 227:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 565:  /* *ashrdi3_cmp */
    case 564:  /* *lshrdi3_cmp */
    case 563:  /* *ashrsi3_cmp */
    case 562:  /* *lshrsi3_cmp */
    case 561:  /* *ashrhi3_cmp */
    case 560:  /* *lshrhi3_cmp */
    case 559:  /* *ashrqi3_cmp */
    case 558:  /* *lshrqi3_cmp */
    case 521:  /* *ashldi3_cmp */
    case 520:  /* *ashlsi3_cmp */
    case 519:  /* *ashlhi3_cmp */
    case 518:  /* *ashlqi3_cmp */
    case 434:  /* *xordi_2 */
    case 433:  /* *iordi_2 */
    case 432:  /* *xorsi_2 */
    case 431:  /* *iorsi_2 */
    case 430:  /* *xorhi_2 */
    case 429:  /* *iorhi_2 */
    case 428:  /* *xorqi_2 */
    case 427:  /* *iorqi_2 */
    case 399:  /* *andsi_2 */
    case 398:  /* *andhi_2 */
    case 397:  /* *andqi_2 */
    case 396:  /* *andqi_2_maybe_si */
    case 394:  /* *anddi_2 */
    case 280:  /* *subdi_2 */
    case 279:  /* *subsi_2 */
    case 278:  /* *subhi_2 */
    case 277:  /* *subqi_2 */
    case 226:  /* *adddi_2 */
    case 225:  /* *addsi_2 */
    case 224:  /* *addhi_2 */
    case 223:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 598:  /* *rotrqi3_1_slp */
    case 597:  /* *rotlqi3_1_slp */
    case 557:  /* *ashrqi3_1_slp */
    case 556:  /* *lshrqi3_1_slp */
    case 517:  /* *ashlqi3_1_slp */
    case 426:  /* *xorqi_1_slp */
    case 425:  /* *iorqi_1_slp */
    case 393:  /* *andqi_1_slp */
    case 276:  /* *subqi_1_slp */
    case 222:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1315:  /* kxnordi */
    case 1314:  /* kxnorsi */
    case 1313:  /* kxnorhi */
    case 1312:  /* kxnorqi */
    case 592:  /* *rotrsi3_1_zext */
    case 591:  /* *rotlsi3_1_zext */
    case 551:  /* *ashrsi3_1_zext */
    case 550:  /* *lshrsi3_1_zext */
    case 538:  /* *ashrsi3_cvt_zext */
    case 514:  /* *ashlsi3_1_zext */
    case 420:  /* *xorsi_1_zext */
    case 419:  /* *iorsi_1_zext */
    case 389:  /* *andsi_1_zext */
    case 330:  /* *mulsi3_1_zext */
    case 275:  /* *subsi_1_zext */
    case 219:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1331:  /* klshiftrtdi */
    case 1330:  /* kashiftdi */
    case 1329:  /* klshiftrtsi */
    case 1328:  /* kashiftsi */
    case 1327:  /* klshiftrthi */
    case 1326:  /* kashifthi */
    case 1325:  /* klshiftrtqi */
    case 1324:  /* kashiftqi */
    case 1323:  /* kadddi */
    case 1322:  /* kaddsi */
    case 1321:  /* kaddhi */
    case 1320:  /* kaddqi */
    case 1307:  /* kxordi */
    case 1306:  /* kiordi */
    case 1305:  /* kanddi */
    case 1304:  /* kxorsi */
    case 1303:  /* kiorsi */
    case 1302:  /* kandsi */
    case 1301:  /* kxorhi */
    case 1300:  /* kiorhi */
    case 1299:  /* kandhi */
    case 1298:  /* kxorqi */
    case 1297:  /* kiorqi */
    case 1296:  /* kandqi */
    case 984:  /* pro_epilogue_adjust_stack_di_sub */
    case 983:  /* pro_epilogue_adjust_stack_si_sub */
    case 982:  /* pro_epilogue_adjust_stack_di_add */
    case 981:  /* pro_epilogue_adjust_stack_si_add */
    case 596:  /* *rotrhi3_1 */
    case 595:  /* *rotlhi3_1 */
    case 594:  /* *rotrqi3_1 */
    case 593:  /* *rotlqi3_1 */
    case 589:  /* *rotrdi3_1 */
    case 588:  /* *rotldi3_1 */
    case 587:  /* *rotrsi3_1 */
    case 586:  /* *rotlsi3_1 */
    case 555:  /* *ashrhi3_1 */
    case 554:  /* *lshrhi3_1 */
    case 553:  /* *ashrqi3_1 */
    case 552:  /* *lshrqi3_1 */
    case 547:  /* *ashrdi3_1 */
    case 546:  /* *lshrdi3_1 */
    case 545:  /* *ashrsi3_1 */
    case 544:  /* *lshrsi3_1 */
    case 539:  /* ashrsi3_cvt */
    case 537:  /* ashrdi3_cvt */
    case 534:  /* *ashrti3_doubleword */
    case 533:  /* *lshrti3_doubleword */
    case 532:  /* *ashrdi3_doubleword */
    case 531:  /* *lshrdi3_doubleword */
    case 516:  /* *ashlqi3_1 */
    case 515:  /* *ashlhi3_1 */
    case 512:  /* *ashldi3_1 */
    case 511:  /* *ashlsi3_1 */
    case 504:  /* *ashlti3_doubleword */
    case 503:  /* *ashldi3_doubleword */
    case 424:  /* *xorqi_1 */
    case 423:  /* *iorqi_1 */
    case 418:  /* *xordi_1 */
    case 417:  /* *iordi_1 */
    case 416:  /* *xorsi_1 */
    case 415:  /* *iorsi_1 */
    case 414:  /* *xorhi_1 */
    case 413:  /* *iorhi_1 */
    case 412:  /* *xordi3_doubleword */
    case 411:  /* *iordi3_doubleword */
    case 392:  /* *andqi_1 */
    case 391:  /* *andsi_1 */
    case 390:  /* *andhi_1 */
    case 388:  /* *anddi_1 */
    case 387:  /* *anddi3_doubleword */
    case 331:  /* *mulqi3_1 */
    case 329:  /* *muldi3_1 */
    case 328:  /* *mulsi3_1 */
    case 327:  /* *mulhi3_1 */
    case 274:  /* *subdi_1 */
    case 273:  /* *subsi_1 */
    case 272:  /* *subhi_1 */
    case 271:  /* *subqi_1 */
    case 270:  /* *subti3_doubleword */
    case 269:  /* *subdi3_doubleword */
    case 221:  /* *addqi_1 */
    case 220:  /* *addhi_1 */
    case 218:  /* *adddi_1 */
    case 217:  /* *addsi_1 */
    case 216:  /* *addti3_doubleword */
    case 215:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 212:  /* *floatunssixf2_i387_with_xmm */
    case 211:  /* *floatunssidf2_i387_with_xmm */
    case 210:  /* *floatunssisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 209:  /* floatdixf2_i387_with_xmm */
    case 208:  /* floatdidf2_i387_with_xmm */
    case 207:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 187:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 191:  /* fix_truncsi_i387_with_temp */
    case 190:  /* fix_trunchi_i387_with_temp */
    case 186:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 189:  /* fix_truncsi_i387 */
    case 188:  /* fix_trunchi_i387 */
    case 182:  /* fix_truncdi_i387_fisttp_with_temp */
    case 181:  /* fix_truncsi_i387_fisttp_with_temp */
    case 180:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 169:  /* *fixuns_truncdf_1 */
    case 168:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1282:  /* movdi_to_sse */
    case 696:  /* ffssi2_no_cmove */
    case 179:  /* fix_truncdi_i387_fisttp */
    case 178:  /* fix_truncsi_i387_fisttp */
    case 177:  /* fix_trunchi_i387_fisttp */
    case 163:  /* *truncxfdf2_mixed */
    case 162:  /* *truncxfsf2_mixed */
    case 160:  /* *truncdfsf_i387 */
    case 159:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 146:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1319:  /* knotdi */
    case 1318:  /* knotsi */
    case 1317:  /* knothi */
    case 1316:  /* knotqi */
    case 962:  /* *x86_movdicc_0_m1_neg */
    case 961:  /* *x86_movsicc_0_m1_neg */
    case 960:  /* *x86_movdicc_0_m1_se */
    case 959:  /* *x86_movsicc_0_m1_se */
    case 958:  /* *x86_movdicc_0_m1 */
    case 957:  /* *x86_movsicc_0_m1 */
    case 769:  /* popcounthi2 */
    case 765:  /* popcountdi2 */
    case 764:  /* popcountsi2 */
    case 711:  /* clzdi2_lzcnt */
    case 710:  /* clzsi2_lzcnt */
    case 704:  /* ctzdi2 */
    case 703:  /* ctzsi2 */
    case 459:  /* *negdi2_1 */
    case 458:  /* *negsi2_1 */
    case 457:  /* *neghi2_1 */
    case 456:  /* *negqi2_1 */
    case 455:  /* *negti2_doubleword */
    case 454:  /* *negdi2_doubleword */
    case 185:  /* *fix_truncdi_i387_1 */
    case 184:  /* *fix_truncsi_i387_1 */
    case 183:  /* *fix_trunchi_i387_1 */
    case 138:  /* zero_extendqihi2_and */
    case 135:  /* zero_extendhisi2_and */
    case 134:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 651:  /* *indirect_jump */
    case 650:  /* *indirect_jump */
    case 119:  /* *pushxf_rounded */
    case 118:  /* *pushxf_rounded */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 116:  /* *insvqi_3 */
    case 115:  /* *insvqi_3 */
    case 114:  /* *insvqi_2 */
    case 113:  /* *insvqi_2 */
    case 112:  /* *insvqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 111:  /* *insvqi_1_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 4279:  /* avx512cd_maskw_vec_dupv4si */
    case 4278:  /* avx512cd_maskw_vec_dupv8si */
    case 4277:  /* avx512cd_maskw_vec_dupv16si */
    case 4276:  /* avx512cd_maskb_vec_dupv2di */
    case 4275:  /* avx512cd_maskb_vec_dupv4di */
    case 4274:  /* avx512cd_maskb_vec_dupv8di */
    case 4256:  /* *avx512dq_broadcastv8sf */
    case 4254:  /* *avx512dq_broadcastv16sf */
    case 4252:  /* *avx512dq_broadcastv4si */
    case 4250:  /* *avx512dq_broadcastv8si */
    case 4248:  /* *avx512dq_broadcastv16si */
    case 4179:  /* avx512vl_vec_dupv8hi */
    case 4177:  /* avx512vl_vec_dupv16hi */
    case 4175:  /* avx512bw_vec_dupv32hi */
    case 4173:  /* avx512vl_vec_dupv32qi */
    case 4171:  /* avx512vl_vec_dupv16qi */
    case 4169:  /* avx512bw_vec_dupv64qi */
    case 4167:  /* avx512vl_vec_dupv2df */
    case 4165:  /* avx512vl_vec_dupv4df */
    case 4163:  /* avx512f_vec_dupv8df */
    case 4161:  /* avx512vl_vec_dupv4sf */
    case 4159:  /* avx512vl_vec_dupv8sf */
    case 4157:  /* avx512f_vec_dupv16sf */
    case 4155:  /* avx512vl_vec_dupv2di */
    case 4153:  /* avx512vl_vec_dupv4di */
    case 4151:  /* avx512f_vec_dupv8di */
    case 4149:  /* avx512vl_vec_dupv4si */
    case 4147:  /* avx512vl_vec_dupv8si */
    case 4145:  /* avx512f_vec_dupv16si */
    case 4144:  /* avx512bw_vec_dupv64qi_1 */
    case 4143:  /* avx512bw_vec_dupv32hi_1 */
    case 4142:  /* avx512f_vec_dupv8di_1 */
    case 4141:  /* avx512f_vec_dupv16si_1 */
    case 4140:  /* avx2_vec_dupv4df */
    case 4102:  /* avx2_pbroadcastv4di_1 */
    case 4101:  /* avx2_pbroadcastv8si_1 */
    case 4100:  /* avx2_pbroadcastv16hi_1 */
    case 4099:  /* avx2_pbroadcastv32qi_1 */
    case 4098:  /* avx2_pbroadcastv2di */
    case 4097:  /* avx2_pbroadcastv4di */
    case 4096:  /* avx2_pbroadcastv4si */
    case 4095:  /* avx2_pbroadcastv8si */
    case 4094:  /* avx2_pbroadcastv8hi */
    case 4093:  /* avx2_pbroadcastv16hi */
    case 4092:  /* avx2_pbroadcastv32hi */
    case 4091:  /* avx2_pbroadcastv16qi */
    case 4090:  /* avx2_pbroadcastv32qi */
    case 4089:  /* avx2_pbroadcastv64qi */
    case 4088:  /* avx2_pbroadcastv8di */
    case 4087:  /* avx2_pbroadcastv16si */
    case 3902:  /* sse4_1_zero_extendv2siv2di2 */
    case 3900:  /* sse4_1_sign_extendv2siv2di2 */
    case 3890:  /* sse4_1_zero_extendv2hiv2di2 */
    case 3888:  /* sse4_1_sign_extendv2hiv2di2 */
    case 3886:  /* avx2_zero_extendv4hiv4di2 */
    case 3884:  /* avx2_sign_extendv4hiv4di2 */
    case 3878:  /* sse4_1_zero_extendv2qiv2di2 */
    case 3876:  /* sse4_1_sign_extendv2qiv2di2 */
    case 3874:  /* avx2_zero_extendv4qiv4di2 */
    case 3872:  /* avx2_sign_extendv4qiv4di2 */
    case 3870:  /* avx512f_zero_extendv8qiv8di2 */
    case 3868:  /* avx512f_sign_extendv8qiv8di2 */
    case 3866:  /* sse4_1_zero_extendv4hiv4si2 */
    case 3864:  /* sse4_1_sign_extendv4hiv4si2 */
    case 3854:  /* sse4_1_zero_extendv4qiv4si2 */
    case 3852:  /* sse4_1_sign_extendv4qiv4si2 */
    case 3850:  /* avx2_zero_extendv8qiv8si2 */
    case 3848:  /* avx2_sign_extendv8qiv8si2 */
    case 3842:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 3840:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 3663:  /* *vec_extractv4si_0_zext */
    case 3662:  /* *vec_extractv4si_0_zext_sse4 */
    case 2909:  /* *avx512f_us_truncatev8div16qi2 */
    case 2908:  /* *avx512f_truncatev8div16qi2 */
    case 2907:  /* *avx512f_ss_truncatev8div16qi2 */
    case 2446:  /* avx512f_vec_dupv8df_1 */
    case 2445:  /* avx512f_vec_dupv16sf_1 */
    case 2444:  /* avx2_vec_dupv8sf_1 */
    case 2443:  /* avx2_vec_dupv4sf */
    case 2442:  /* avx2_vec_dupv8sf */
    case 2404:  /* sse2_cvtps2pd */
    case 2379:  /* vec_unpacks_lo_v16sf */
    case 2378:  /* *avx_cvtps2pd256_2 */
    case 2356:  /* sse2_cvttpd2dq */
    case 2350:  /* ufix_truncv2sfv2di2 */
    case 2348:  /* fix_truncv2sfv2di2 */
    case 2298:  /* ufix_truncv2dfv2si2 */
    case 2269:  /* sse2_cvtdq2pd */
    case 2268:  /* avx_cvtdq2pd256_2 */
    case 2267:  /* avx512f_cvtdq2pd512_2 */
    case 2265:  /* ufloatv2siv2df2 */
    case 2256:  /* *ufloatv2div2sf2 */
    case 2255:  /* *floatv2div2sf2 */
    case 2213:  /* sse2_cvttsd2siq */
    case 2211:  /* sse2_cvttsd2si */
    case 2203:  /* avx512f_vcvttsd2usiq */
    case 2201:  /* avx512f_vcvttsd2usi */
    case 2195:  /* avx512f_vcvttss2usiq */
    case 2193:  /* avx512f_vcvttss2usi */
    case 2106:  /* sse_cvttss2siq */
    case 2104:  /* sse_cvttss2si */
    case 2093:  /* sse_cvttps2pi */
    case 1281:  /* sse2_movq128 */
    case 1192:  /* *vec_dupv4hi */
    case 832:  /* sqrt_extenddfxf2_i387 */
    case 831:  /* sqrt_extendsfxf2_i387 */
    case 496:  /* *one_cmplsi2_1_zext */
    case 485:  /* *negextenddfxf2 */
    case 484:  /* *absextenddfxf2 */
    case 483:  /* *negextendsfxf2 */
    case 482:  /* *absextendsfxf2 */
    case 481:  /* *negextendsfdf2 */
    case 480:  /* *absextendsfdf2 */
    case 152:  /* *extendqisi2_zext */
    case 150:  /* *extendhisi2_zext */
    case 107:  /* *extzvqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 768:  /* *popcounthi2_1 */
    case 106:  /* *extzvqi_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 661:  /* *sibcall_memory */
    case 660:  /* *sibcall_memory */
    case 100:  /* *movstricthi_xor */
    case 99:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 130:  /* *swapdf */
    case 129:  /* *swapsf */
    case 128:  /* swapxf */
    case 96:  /* *swaphi */
    case 95:  /* *swapqi */
    case 94:  /* *swapdi */
    case 93:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 4952:  /* vpopcountv8di */
    case 4950:  /* vpopcountv16si */
    case 4879:  /* clzv2di2 */
    case 4877:  /* clzv4di2 */
    case 4875:  /* clzv8di2 */
    case 4873:  /* clzv4si2 */
    case 4871:  /* clzv8si2 */
    case 4869:  /* clzv16si2 */
    case 4272:  /* *avx512dq_broadcastv4df_1 */
    case 4270:  /* *avx512dq_broadcastv4di_1 */
    case 4268:  /* *avx512dq_broadcastv8df_1 */
    case 4266:  /* *avx512dq_broadcastv8di_1 */
    case 4264:  /* *avx512dq_broadcastv16si_1 */
    case 4262:  /* *avx512dq_broadcastv16sf_1 */
    case 4260:  /* *avx512vl_broadcastv8sf_1 */
    case 4258:  /* *avx512vl_broadcastv8si_1 */
    case 4241:  /* vec_dupv4df */
    case 4240:  /* vec_dupv4di */
    case 4239:  /* vec_dupv8sf */
    case 4238:  /* vec_dupv8si */
    case 4237:  /* *vec_dupv4si */
    case 4236:  /* *vec_dupv8si */
    case 4235:  /* *vec_dupv8hi */
    case 4234:  /* *vec_dupv16hi */
    case 4233:  /* *vec_dupv16qi */
    case 4232:  /* *vec_dupv32qi */
    case 4227:  /* *vec_dupv2di */
    case 4226:  /* *vec_dupv4si */
    case 4225:  /* vec_dupv4sf */
    case 4223:  /* *avx512vl_vec_dup_gprv2df */
    case 4221:  /* *avx512vl_vec_dup_gprv4df */
    case 4219:  /* *avx512f_vec_dup_gprv8df */
    case 4217:  /* *avx512vl_vec_dup_gprv4sf */
    case 4215:  /* *avx512vl_vec_dup_gprv8sf */
    case 4213:  /* *avx512f_vec_dup_gprv16sf */
    case 4211:  /* *avx512vl_vec_dup_gprv2di */
    case 4209:  /* *avx512vl_vec_dup_gprv4di */
    case 4207:  /* *avx512f_vec_dup_gprv8di */
    case 4205:  /* *avx512vl_vec_dup_gprv4si */
    case 4203:  /* *avx512vl_vec_dup_gprv8si */
    case 4201:  /* *avx512f_vec_dup_gprv16si */
    case 4199:  /* *avx512vl_vec_dup_gprv8hi */
    case 4197:  /* *avx512vl_vec_dup_gprv16hi */
    case 4195:  /* *avx512bw_vec_dup_gprv32hi */
    case 4193:  /* *avx512vl_vec_dup_gprv32qi */
    case 4191:  /* *avx512vl_vec_dup_gprv16qi */
    case 4189:  /* *avx512bw_vec_dup_gprv64qi */
    case 4187:  /* *avx512f_broadcastv8di */
    case 4185:  /* *avx512f_broadcastv8df */
    case 4183:  /* *avx512f_broadcastv16si */
    case 4181:  /* *avx512f_broadcastv16sf */
    case 3898:  /* avx2_zero_extendv4siv4di2 */
    case 3896:  /* avx2_sign_extendv4siv4di2 */
    case 3894:  /* avx512f_zero_extendv8siv8di2 */
    case 3892:  /* avx512f_sign_extendv8siv8di2 */
    case 3882:  /* avx512f_zero_extendv8hiv8di2 */
    case 3880:  /* avx512f_sign_extendv8hiv8di2 */
    case 3862:  /* avx2_zero_extendv8hiv8si2 */
    case 3860:  /* avx2_sign_extendv8hiv8si2 */
    case 3858:  /* avx512f_zero_extendv16hiv16si2 */
    case 3856:  /* avx512f_sign_extendv16hiv16si2 */
    case 3846:  /* *avx512f_zero_extendv16qiv16si2 */
    case 3844:  /* *avx512f_sign_extendv16qiv16si2 */
    case 3838:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 3836:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 3834:  /* avx2_zero_extendv16qiv16hi2 */
    case 3832:  /* avx2_sign_extendv16qiv16hi2 */
    case 3793:  /* absv2si2 */
    case 3792:  /* absv4hi2 */
    case 3791:  /* absv8qi2 */
    case 3778:  /* *absv2di2 */
    case 3777:  /* *absv4di2 */
    case 3776:  /* *absv8di2 */
    case 3775:  /* *absv4si2 */
    case 3774:  /* *absv8si2 */
    case 3773:  /* *absv16si2 */
    case 3772:  /* *absv8hi2 */
    case 3771:  /* *absv16hi2 */
    case 3770:  /* *absv32hi2 */
    case 3769:  /* *absv16qi2 */
    case 3768:  /* *absv32qi2 */
    case 3767:  /* *absv64qi2 */
    case 3668:  /* *vec_extractv2di_1 */
    case 3661:  /* *vec_extractv2di_0_sse */
    case 3660:  /* *vec_extractv2di_0 */
    case 3659:  /* *vec_extractv4si_0 */
    case 2762:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 2761:  /* *avx512vl_truncatev16hiv16qi2 */
    case 2760:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 2759:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 2758:  /* *avx512vl_truncatev8siv8hi2 */
    case 2757:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 2756:  /* *avx512vl_us_truncatev4div4si2 */
    case 2755:  /* *avx512vl_truncatev4div4si2 */
    case 2754:  /* *avx512vl_ss_truncatev4div4si2 */
    case 2750:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 2749:  /* avx512bw_truncatev32hiv32qi2 */
    case 2748:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 2735:  /* *avx512f_us_truncatev8div8hi2 */
    case 2734:  /* *avx512f_truncatev8div8hi2 */
    case 2733:  /* *avx512f_ss_truncatev8div8hi2 */
    case 2732:  /* *avx512f_us_truncatev8div8si2 */
    case 2731:  /* *avx512f_truncatev8div8si2 */
    case 2730:  /* *avx512f_ss_truncatev8div8si2 */
    case 2729:  /* *avx512f_us_truncatev16siv16hi2 */
    case 2728:  /* *avx512f_truncatev16siv16hi2 */
    case 2727:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 2726:  /* *avx512f_us_truncatev16siv16qi2 */
    case 2725:  /* *avx512f_truncatev16siv16qi2 */
    case 2724:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 2721:  /* vec_dupv2df */
    case 2717:  /* *vec_extractv2df_0_sse */
    case 2716:  /* sse2_storelpd */
    case 2715:  /* *vec_extractv2df_1_sse */
    case 2714:  /* sse2_storehpd */
    case 2518:  /* vec_extract_hi_v32qi */
    case 2517:  /* vec_extract_lo_v32qi */
    case 2516:  /* vec_extract_hi_v64qi */
    case 2515:  /* vec_extract_lo_v64qi */
    case 2514:  /* vec_extract_hi_v16hi */
    case 2513:  /* vec_extract_lo_v16hi */
    case 2512:  /* vec_extract_hi_v32hi */
    case 2511:  /* vec_extract_lo_v32hi */
    case 2510:  /* vec_extract_hi_v8sf */
    case 2509:  /* vec_extract_hi_v8si */
    case 2501:  /* vec_extract_lo_v8sf */
    case 2499:  /* vec_extract_lo_v8si */
    case 2497:  /* vec_extract_hi_v4df */
    case 2495:  /* vec_extract_hi_v4di */
    case 2493:  /* vec_extract_lo_v4df */
    case 2491:  /* vec_extract_lo_v4di */
    case 2489:  /* vec_extract_lo_v16si */
    case 2487:  /* vec_extract_lo_v16sf */
    case 2485:  /* vec_extract_hi_v16si */
    case 2483:  /* vec_extract_hi_v16sf */
    case 2479:  /* vec_extract_hi_v8di */
    case 2477:  /* vec_extract_hi_v8df */
    case 2473:  /* vec_extract_lo_v8di */
    case 2471:  /* vec_extract_lo_v8df */
    case 2454:  /* *vec_extractv4sf_0 */
    case 2439:  /* sse_storelps */
    case 2437:  /* sse_storehps */
    case 2376:  /* avx_cvtps2pd256 */
    case 2372:  /* avx512f_cvtps2pd512 */
    case 2368:  /* avx_cvtpd2ps256 */
    case 2364:  /* *avx512f_cvtpd2ps512 */
    case 2354:  /* ufix_truncv4sfv4si2 */
    case 2352:  /* ufix_truncv8sfv8si2 */
    case 2346:  /* ufix_truncv4sfv4di2 */
    case 2344:  /* fix_truncv4sfv4di2 */
    case 2340:  /* ufix_truncv8sfv8di2 */
    case 2336:  /* fix_truncv8sfv8di2 */
    case 2318:  /* ufix_truncv2dfv2di2 */
    case 2316:  /* fix_truncv2dfv2di2 */
    case 2314:  /* ufix_truncv4dfv4di2 */
    case 2312:  /* fix_truncv4dfv4di2 */
    case 2308:  /* ufix_truncv8dfv8di2 */
    case 2304:  /* fix_truncv8dfv8di2 */
    case 2302:  /* ufix_truncv4dfv4si2 */
    case 2300:  /* fix_truncv4dfv4si2 */
    case 2294:  /* ufix_truncv8dfv8si2 */
    case 2290:  /* fix_truncv8dfv8si2 */
    case 2263:  /* ufloatv4siv4df2 */
    case 2261:  /* ufloatv8siv8df2 */
    case 2253:  /* ufloatv4div4sf2 */
    case 2251:  /* floatv4div4sf2 */
    case 2247:  /* ufloatv8div8sf2 */
    case 2243:  /* floatv8div8sf2 */
    case 2239:  /* ufloatv2div2df2 */
    case 2235:  /* floatv2div2df2 */
    case 2231:  /* ufloatv4div4df2 */
    case 2227:  /* floatv4div4df2 */
    case 2223:  /* ufloatv8div8df2 */
    case 2219:  /* floatv8div8df2 */
    case 2217:  /* floatv4siv4df2 */
    case 2215:  /* floatv8siv8df2 */
    case 2185:  /* sse2_cvttpd2pi */
    case 2183:  /* sse2_cvtpi2pd */
    case 2181:  /* fix_truncv4sfv4si2 */
    case 2179:  /* fix_truncv8sfv8si2 */
    case 2175:  /* ufix_truncv16sfv16si2 */
    case 2171:  /* fix_truncv16sfv16si2 */
    case 2131:  /* ufloatv4siv4sf2 */
    case 2127:  /* ufloatv8siv8sf2 */
    case 2123:  /* ufloatv16siv16sf2 */
    case 2121:  /* floatv4siv4sf2 */
    case 2119:  /* floatv8siv8sf2 */
    case 2115:  /* floatv16siv16sf2 */
    case 1484:  /* sse2_sqrtv2df2 */
    case 1482:  /* avx_sqrtv4df2 */
    case 1478:  /* avx512f_sqrtv8df2 */
    case 1476:  /* sse_sqrtv4sf2 */
    case 1474:  /* avx_sqrtv8sf2 */
    case 1470:  /* avx512f_sqrtv16sf2 */
    case 1196:  /* *vec_extractv2si_1 */
    case 1195:  /* *vec_extractv2si_0 */
    case 1193:  /* *vec_dupv2si */
    case 1191:  /* mmx_pswapdv2si2 */
    case 1126:  /* *vec_extractv2sf_1 */
    case 1125:  /* *vec_extractv2sf_0 */
    case 1123:  /* *vec_dupv2sf */
    case 1122:  /* mmx_pswapdv2sf2 */
    case 1121:  /* mmx_floatv2si2 */
    case 1118:  /* mmx_pf2id */
    case 835:  /* *sqrtdf2_sse */
    case 834:  /* *sqrtsf2_sse */
    case 830:  /* sqrtxf2 */
    case 773:  /* *bswapdi2 */
    case 772:  /* *bswapsi2 */
    case 771:  /* *bswapdi2_movbe */
    case 770:  /* *bswapsi2_movbe */
    case 497:  /* *one_cmplqi2_1 */
    case 495:  /* *one_cmpldi2_1 */
    case 494:  /* *one_cmplsi2_1 */
    case 493:  /* *one_cmplhi2_1 */
    case 492:  /* *one_cmpldi2_doubleword */
    case 479:  /* *negxf2_1 */
    case 478:  /* *absxf2_1 */
    case 477:  /* *negdf2_1 */
    case 476:  /* *absdf2_1 */
    case 475:  /* *negsf2_1 */
    case 474:  /* *abssf2_1 */
    case 206:  /* *floatdidf2_i387 */
    case 205:  /* *floatdisf2_i387 */
    case 204:  /* *floatsidf2_i387 */
    case 203:  /* *floatsisf2_i387 */
    case 202:  /* *floatdidf2_mixed */
    case 201:  /* *floatsidf2_mixed */
    case 200:  /* *floatdisf2_mixed */
    case 199:  /* *floatsisf2_mixed */
    case 198:  /* floatdixf2 */
    case 197:  /* floatsixf2 */
    case 196:  /* floathixf2 */
    case 195:  /* floathidf2 */
    case 194:  /* floathisf2 */
    case 176:  /* fix_truncdi_fisttp_i387_1 */
    case 175:  /* fix_truncsi_fisttp_i387_1 */
    case 174:  /* fix_trunchi_fisttp_i387_1 */
    case 173:  /* fix_truncdfdi_sse */
    case 172:  /* fix_truncdfsi_sse */
    case 171:  /* fix_truncsfdi_sse */
    case 170:  /* fix_truncsfsi_sse */
    case 167:  /* *truncxfdf2_i387 */
    case 166:  /* *truncxfsf2_i387 */
    case 165:  /* truncxfdf2_i387_noop */
    case 164:  /* truncxfsf2_i387_noop */
    case 161:  /* *truncdfsf2_i387_1 */
    case 158:  /* *truncdfsf_fast_i387 */
    case 157:  /* *truncdfsf_fast_mixed */
    case 156:  /* *extenddfxf2_i387 */
    case 155:  /* *extendsfxf2_i387 */
    case 154:  /* *extendsfdf2 */
    case 153:  /* extendqihi2 */
    case 151:  /* extendqisi2 */
    case 149:  /* extendhisi2 */
    case 148:  /* extendhidi2 */
    case 147:  /* extendqidi2 */
    case 145:  /* *extendsidi2_rex64 */
    case 144:  /* *zextsi_doubleword */
    case 143:  /* *zexthi_doubleword */
    case 142:  /* *zextqi_doubleword */
    case 141:  /* *zexthi_doubleword_and */
    case 140:  /* *zextqi_doubleword_and */
    case 139:  /* *zero_extendqihi2 */
    case 137:  /* *zero_extendhisi2 */
    case 136:  /* *zero_extendqisi2 */
    case 133:  /* zero_extendhidi2 */
    case 132:  /* zero_extendqidi2 */
    case 131:  /* *zero_extendsidi2 */
    case 105:  /* *extzvdi */
    case 104:  /* *extzvsi */
    case 103:  /* *extzvhi */
    case 102:  /* *extvsi */
    case 101:  /* *extvhi */
    case 92:  /* *movabsdi_2 */
    case 91:  /* *movabssi_2 */
    case 90:  /* *movabshi_2 */
    case 89:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 659:  /* *sibcall */
    case 658:  /* *sibcall */
    case 655:  /* *call */
    case 654:  /* *call */
    case 614:  /* *setcc_qi_slp */
    case 110:  /* insvdi_1 */
    case 109:  /* insvsi_1 */
    case 108:  /* insvhi_1 */
    case 98:  /* *movstricthi_1 */
    case 97:  /* *movstrictqi_1 */
    case 88:  /* *movabsdi_1 */
    case 87:  /* *movabssi_1 */
    case 86:  /* *movabshi_1 */
    case 85:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 611:  /* *setcc_si_1_and */
    case 77:  /* *movdi_or */
    case 76:  /* *movsi_or */
    case 75:  /* *movdi_xor */
    case 74:  /* *movsi_xor */
    case 69:  /* *popdi1_epilogue */
    case 68:  /* *popsi1_epilogue */
    case 65:  /* *pushdi2_prologue */
    case 64:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 4931:  /* *movv64si_internal */
    case 4930:  /* *movv64sf_internal */
    case 1226:  /* movv2df_internal */
    case 1225:  /* movv4df_internal */
    case 1224:  /* movv8df_internal */
    case 1223:  /* movv4sf_internal */
    case 1222:  /* movv8sf_internal */
    case 1221:  /* movv16sf_internal */
    case 1220:  /* movv1ti_internal */
    case 1219:  /* movv2ti_internal */
    case 1218:  /* movv4ti_internal */
    case 1217:  /* movv2di_internal */
    case 1216:  /* movv4di_internal */
    case 1215:  /* movv8di_internal */
    case 1214:  /* movv4si_internal */
    case 1213:  /* movv8si_internal */
    case 1212:  /* movv16si_internal */
    case 1211:  /* movv8hi_internal */
    case 1210:  /* movv16hi_internal */
    case 1209:  /* movv32hi_internal */
    case 1208:  /* movv16qi_internal */
    case 1207:  /* movv32qi_internal */
    case 1206:  /* movv64qi_internal */
    case 1098:  /* *movv2sf_internal */
    case 1097:  /* *movv1di_internal */
    case 1096:  /* *movv2si_internal */
    case 1095:  /* *movv4hi_internal */
    case 1094:  /* *movv8qi_internal */
    case 1078:  /* *movbnd64_internal_mpx */
    case 1077:  /* *movbnd32_internal_mpx */
    case 995:  /* *prefetch_3dnow */
    case 613:  /* *setcc_qi */
    case 612:  /* *setcc_si_1_movzbl */
    case 610:  /* *setcc_di_1 */
    case 214:  /* *leadi */
    case 213:  /* *leasi */
    case 127:  /* *movsf_internal */
    case 126:  /* *movdf_internal */
    case 125:  /* *movxf_internal */
    case 124:  /* *movtf_internal */
    case 123:  /* *pushsf */
    case 122:  /* *pushsf_rex64 */
    case 121:  /* *pushdf */
    case 120:  /* *pushxf */
    case 117:  /* *pushtf */
    case 84:  /* *movqi_internal */
    case 83:  /* *movhi_internal */
    case 82:  /* *movsi_internal */
    case 81:  /* *movdi_internal */
    case 80:  /* *movti_internal */
    case 79:  /* *movoi_internal_avx */
    case 78:  /* *movxi_internal_avx512f */
    case 73:  /* *popfldi1 */
    case 72:  /* *popflsi1 */
    case 71:  /* *pushfldi2 */
    case 70:  /* *pushflsi2 */
    case 67:  /* *popdi1 */
    case 66:  /* *popsi1 */
    case 63:  /* *pushhi2 */
    case 62:  /* *pushqi2 */
    case 61:  /* *pushsi2_rex64 */
    case 60:  /* *pushhi2_rex64 */
    case 59:  /* *pushqi2_rex64 */
    case 58:  /* *pushsi2 */
    case 57:  /* *pushdi2_rex64 */
    case 56:  /* *pushti2 */
    case 55:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 193:  /* x86_fldcw_1 */
    case 48:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 3703:  /* sse_stmxcsr */
    case 1093:  /* rdpid */
    case 1052:  /* rdgsbasedi */
    case 1051:  /* rdfsbasedi */
    case 1050:  /* rdgsbasesi */
    case 1049:  /* rdfsbasesi */
    case 1044:  /* lwp_slwpcbdi */
    case 1043:  /* lwp_slwpcbsi */
    case 1039:  /* fnstsw */
    case 1016:  /* fxsave64 */
    case 1015:  /* fxsave */
    case 1011:  /* rdtsc */
    case 996:  /* *prefetch_prefetchwt1 */
    case 789:  /* *load_tp_di */
    case 788:  /* *load_tp_si */
    case 787:  /* *load_tp_x32_zext */
    case 786:  /* *load_tp_x32 */
    case 689:  /* set_got_rex64 */
    case 192:  /* x86_fnstcw_1 */
    case 47:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 46:  /* *cmpxf_si_cc_i387 */
    case 45:  /* *cmpdf_si_cc_i387 */
    case 44:  /* *cmpsf_si_cc_i387 */
    case 43:  /* *cmpxf_hi_cc_i387 */
    case 42:  /* *cmpdf_hi_cc_i387 */
    case 41:  /* *cmpsf_hi_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 40:  /* *cmpxf_si_i387 */
    case 39:  /* *cmpdf_si_i387 */
    case 38:  /* *cmpsf_si_i387 */
    case 37:  /* *cmpxf_hi_i387 */
    case 36:  /* *cmpdf_hi_i387 */
    case 35:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 236:  /* *addsi_4 */
    case 235:  /* *addhi_4 */
    case 234:  /* *addqi_4 */
    case 233:  /* *adddi_4 */
    case 34:  /* *cmpuxf_cc_i387 */
    case 33:  /* *cmpudf_cc_i387 */
    case 32:  /* *cmpusf_cc_i387 */
    case 28:  /* *cmpdf_cc_i387 */
    case 27:  /* *cmpsf_cc_i387 */
    case 24:  /* *cmpxf_cc_i387 */
    case 22:  /* *cmpxf_0_cc_i387 */
    case 21:  /* *cmpdf_0_cc_i387 */
    case 20:  /* *cmpsf_0_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 31:  /* *cmpuxf_i387 */
    case 30:  /* *cmpudf_i387 */
    case 29:  /* *cmpusf_i387 */
    case 26:  /* *cmpdf_i387 */
    case 25:  /* *cmpsf_i387 */
    case 23:  /* *cmpxf_i387 */
    case 19:  /* *cmpxf_0_i387 */
    case 18:  /* *cmpdf_0_i387 */
    case 17:  /* *cmpsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 16:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 15:  /* *cmpqi_ext_3 */
    case 14:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 13:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 381:  /* *testsi_1 */
    case 380:  /* *testhi_1 */
    case 379:  /* *testqi_1 */
    case 378:  /* *testqi_1_maybe_si */
    case 377:  /* *testdi_1 */
    case 12:  /* *cmpdi_minus_1 */
    case 11:  /* *cmpsi_minus_1 */
    case 10:  /* *cmphi_minus_1 */
    case 9:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 54:  /* *cmpiuxf_i387 */
    case 53:  /* *cmpixf_i387 */
    case 52:  /* *cmpiudf */
    case 51:  /* *cmpiusf */
    case 50:  /* *cmpidf */
    case 49:  /* *cmpisf */
    case 8:  /* *cmpdi_1 */
    case 7:  /* *cmpsi_1 */
    case 6:  /* *cmphi_1 */
    case 5:  /* *cmpqi_1 */
    case 4:  /* *cmpdi_ccno_1 */
    case 3:  /* *cmpsi_ccno_1 */
    case 2:  /* *cmphi_ccno_1 */
    case 1:  /* *cmpqi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
