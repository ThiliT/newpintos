/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "flags.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "regs.h"
#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_1[] = {
  "test{b}\t%0, %0",
  "cmp{b}\t{%1, %0|%0, %1}",
};

static const char * const output_2[] = {
  "test{w}\t%0, %0",
  "cmp{w}\t{%1, %0|%0, %1}",
};

static const char * const output_3[] = {
  "test{l}\t%0, %0",
  "cmp{l}\t{%1, %0|%0, %1}",
};

static const char * const output_4[] = {
  "test{q}\t%0, %0",
  "cmp{q}\t{%1, %0|%0, %1}",
};

static const char *
output_17 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1466 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_18 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1466 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_19 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1466 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_23 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1499 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_25 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1532 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_26 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1532 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1565 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, true);
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1565 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, true);
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1565 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, true);
}

static const char *
output_35 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1601 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_36 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1601 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_37 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1601 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_38 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1601 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_39 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1601 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_40 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1601 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_48 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1653 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
#ifndef HAVE_AS_IX86_SAHF
  if (TARGET_64BIT)
    return ASM_BYTE "0x9e";
  else
#endif
  return "sahf";
}
}

static const char *
output_49 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1680 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_50 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1680 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_51 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1680 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_52 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1680 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_53 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1710 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_54 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1710 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_55 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1710 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_56 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1710 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_57 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1710 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_58 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1710 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_75 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1983 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (misaligned_operand (operands[0], XImode)
	  || misaligned_operand (operands[1], XImode))
	return "vmovdqu32\t{%1, %0|%0, %1}";
      else
	return "vmovdqa32\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_76 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2007 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      if (misaligned_operand (operands[0], OImode)
	  || misaligned_operand (operands[1], OImode))
	{
	  if (get_attr_mode (insn) == MODE_V8SF)
	    return "vmovups\t{%1, %0|%0, %1}";
	  else if (get_attr_mode (insn) == MODE_XI)
	    return "vmovdqu32\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V8SF)
	    return "vmovaps\t{%1, %0|%0, %1}";
	  else if (get_attr_mode (insn) == MODE_XI)
	    return "vmovdqa32\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa\t{%1, %0|%0, %1}";
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_77 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_MULTI:
      return "#";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      /* TDmode values are passed as TImode on the stack.  Moving them
	 to stack may result in unaligned memory access.  */
      if (misaligned_operand (operands[0], TImode)
	  || misaligned_operand (operands[1], TImode))
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else if (get_attr_mode (insn) == MODE_XI)
	    return "vmovdqu32\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else if (get_attr_mode (insn) == MODE_XI)
	    return "vmovdqa32\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_78 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2132 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_MSKMOV:
      return "kmovq\t{%1, %0|%0, %1}";

    case TYPE_MULTI:
      return "#";

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      /* Handle broken assemblers that require movd instead of movq.  */
      if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	  && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	return "movd\t{%1, %0|%0, %1}";
      return "movq\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      if (GENERAL_REG_P (operands[0]))
	return "%vpextrq\t{$0, %1, %0|%0, %1, 0}";

      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_DI:
	  /* Handle broken assemblers that require movd instead of movq.  */
	  if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	      && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	    return "%vmovd\t{%1, %0|%0, %1}";
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  return "vmovdqa64\t{%g1, %g0|%g0, %g1}";

	case MODE_V2SF:
	  gcc_assert (!TARGET_AVX);
	  return "movlps\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    case TYPE_SSECVT:
      if (SSE_REG_P (operands[0]))
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";

    case TYPE_LEA:
      return "lea{q}\t{%E1, %0|%0, %E1}";

    case TYPE_IMOV:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else if (which_alternative == 4)
	return "movabs{q}\t{%1, %0|%0, %1}";
      else if (ix86_use_lea_for_mov (insn, operands))
	return "lea{q}\t{%E1, %0|%0, %E1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_79 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2319 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSELOG1:
      if (GENERAL_REG_P (operands[0]))
	return "%vpextrd\t{$0, %1, %0|%0, %1, 0}";

      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_MSKMOV:
      return "kmovd\t{%1, %0|%0, %1}";

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_SI:
          return "%vmovd\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  return "vmovdqa32\t{%g1, %g0|%g0, %g1}";

	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_SF:
	  gcc_assert (!TARGET_AVX);
          return "movss\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_DI:
	  return "movq\t{%1, %0|%0, %1}";
	case MODE_SI:
	  return "movd\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    case TYPE_LEA:
      return "lea{l}\t{%E1, %0|%0, %E1}";

    case TYPE_IMOV:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      if (ix86_use_lea_for_mov (insn, operands))
	return "lea{l}\t{%E1, %0|%0, %E1}";
      else
	return "mov{l}\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_80[] = {
  "kmovw\t{%k1, %0|%0, %k1}",
  "kmovw\t{%1, %0|%0, %1}",
};

static const char *
output_81 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2460 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      /* movzwl is faster than movw on p2 due to partial word stalls,
	 though not as fast as an aligned movl.  */
      return "movz{wl|x}\t{%1, %k0|%k0, %1}";

    case TYPE_MSKMOV:
      switch (which_alternative)
        {
	case 4: return "kmovw\t{%k1, %0|%0, %k1}";
	case 5: /* FALLTHRU */
	case 7: return "kmovw\t{%1, %0|%0, %1}";
	case 6: return "kmovw\t{%1, %k0|%k0, %1}";
	default: gcc_unreachable ();
	}

    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{w}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_82 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2536 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]));
      return "movz{bl|x}\t{%1, %k0|%k0, %1}";

    case TYPE_MSKMOV:
      switch (which_alternative)
        {
	case 7: return TARGET_AVX512DQ ? "kmovb\t{%k1, %0|%0, %k1}"
				       : "kmovw\t{%k1, %0|%0, %k1}";
	case 8: return TARGET_AVX512DQ ? "kmovb\t{%1, %0|%0, %1}"
				       : "kmovw\t{%1, %0|%0, %1}";
	case 9: return TARGET_AVX512DQ ? "kmovb\t{%1, %k0|%k0, %1}"
				       : "kmovw\t{%1, %k0|%k0, %1}";
	case 10:
	case 11:
	  gcc_assert (TARGET_AVX512DQ);
	  return "kmovb\t{%1, %0|%0, %1}";
	default: gcc_unreachable ();
	}

    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_83 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2619 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* Recover the full memory rtx.  */
  operands[0] = SET_DEST (PATTERN (insn));
  switch (which_alternative)
    {
    case 0:
      return "movabs{b}\t{%1, %P0|BYTE PTR [%P0], %1}";
    case 1:
      return "mov{b}\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_84 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2619 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* Recover the full memory rtx.  */
  operands[0] = SET_DEST (PATTERN (insn));
  switch (which_alternative)
    {
    case 0:
      return "movabs{w}\t{%1, %P0|WORD PTR [%P0], %1}";
    case 1:
      return "mov{w}\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_85 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2619 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* Recover the full memory rtx.  */
  operands[0] = SET_DEST (PATTERN (insn));
  switch (which_alternative)
    {
    case 0:
      return "movabs{l}\t{%1, %P0|DWORD PTR [%P0], %1}";
    case 1:
      return "mov{l}\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_86 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2619 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* Recover the full memory rtx.  */
  operands[0] = SET_DEST (PATTERN (insn));
  switch (which_alternative)
    {
    case 0:
      return "movabs{q}\t{%1, %P0|QWORD PTR [%P0], %1}";
    case 1:
      return "mov{q}\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_87 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2643 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* Recover the full memory rtx.  */
  operands[1] = SET_SRC (PATTERN (insn));
  switch (which_alternative)
    {
    case 0:
      return "movabs{b}\t{%P1, %0|%0, BYTE PTR [%P1]}";
    case 1:
      return "mov{b}\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_88 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2643 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* Recover the full memory rtx.  */
  operands[1] = SET_SRC (PATTERN (insn));
  switch (which_alternative)
    {
    case 0:
      return "movabs{w}\t{%P1, %0|%0, WORD PTR [%P1]}";
    case 1:
      return "mov{w}\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_89 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2643 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* Recover the full memory rtx.  */
  operands[1] = SET_SRC (PATTERN (insn));
  switch (which_alternative)
    {
    case 0:
      return "movabs{l}\t{%P1, %0|%0, DWORD PTR [%P1]}";
    case 1:
      return "mov{l}\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_90 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2643 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* Recover the full memory rtx.  */
  operands[1] = SET_SRC (PATTERN (insn));
  switch (which_alternative)
    {
    case 0:
      return "movabs{q}\t{%P1, %0|%0, QWORD PTR [%P1]}";
    case 1:
      return "mov{q}\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_102 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2772 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_105 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2828 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_106 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2885 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (CONST_INT_P (operands[1]))
    operands[1] = gen_int_mode (INTVAL (operands[1]), QImode);
  return "mov{b}\t{%b1, %h0|%h0, %b1}";
}
}

static const char *
output_107 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2885 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (CONST_INT_P (operands[1]))
    operands[1] = gen_int_mode (INTVAL (operands[1]), QImode);
  return "mov{b}\t{%b1, %h0|%h0, %b1}";
}
}

static const char *
output_109 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2911 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_110 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2936 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_111 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2971 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_112 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3017 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  /* Anything else should be already split before reg-stack.  */
  gcc_assert (which_alternative == 1);
  return "push{l}\t%1";
}
}

static const char *
output_113 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3100 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      /* Handle misaligned load/store since we
         don't have movmisaligntf pattern. */
      if (misaligned_operand (operands[0], TFmode)
	  || misaligned_operand (operands[1], TFmode))
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";
	}

    case TYPE_MULTI:
	return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_114 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3179 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_FMOV:
      if (which_alternative == 2)
        return standard_80387_constant_opcode (operands[1]);
      return output_387_reg_move (insn, operands);

    case TYPE_MULTI:
      return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_115 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3255 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_FMOV:
      if (which_alternative == 2)
        return standard_80387_constant_opcode (operands[1]);
      return output_387_reg_move (insn, operands);

    case TYPE_MULTI:
      return "#";

    case TYPE_IMOV:
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%1, %k0|%k0, %1}";
      else if (which_alternative == 11)
	return "movabs{q}\t{%1, %0|%0, %1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_DF:
	  if (TARGET_AVX && REG_P (operands[0]) && REG_P (operands[1]))
	    return "vmovsd\t{%1, %0, %0|%0, %0, %1}";
	  return "%vmovsd\t{%1, %0|%0, %1}";

	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%g1, %g0|%g0, %g1}";
	case MODE_V2DF:
	  return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_V2SF:
	  gcc_assert (!TARGET_AVX);
	  return "movlps\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  gcc_assert (!TARGET_AVX);
	  return "movlpd\t{%1, %0|%0, %1}";

	case MODE_DI:
	  /* Handle broken assemblers that require movd instead of movq.  */
	  if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	      && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	    return "%vmovd\t{%1, %0|%0, %1}";
	  return "%vmovq\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_116 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3455 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_FMOV:
      if (which_alternative == 2)
        return standard_80387_constant_opcode (operands[1]);
      return output_387_reg_move (insn, operands);

    case TYPE_IMOV:
      return "mov{l}\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_SF:
	  if (TARGET_AVX && REG_P (operands[0]) && REG_P (operands[1]))
	    return "vmovss\t{%1, %0, %0|%0, %0, %1}";
	  return "%vmovss\t{%1, %0|%0, %1}";

	case MODE_V16SF:
	  return "vmovaps\t{%g1, %g0|%g0, %g1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_SI:
	  return "%vmovd\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    case TYPE_MMXMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_DI:
	  return "movq\t{%1, %0|%0, %1}";
	case MODE_SI:
	  return "movd\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_117 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3637 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3652 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_119 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3652 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3674 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      if (ix86_use_lea_for_mov (insn, operands))
	return "lea{l}\t{%E1, %k0|%k0, %E1}";
      else
	return "mov{l}\t{%1, %k0|%k0, %1}";

    case TYPE_MULTI:
      return "#";

    case TYPE_MMXMOV:
      return "movd\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return "%vpextrd\t{$0, %1, %k0|%k0, %1, 0}";

    case TYPE_SSEMOV:
      if (GENERAL_REG_P (operands[0]))
	return "%vmovd\t{%1, %k0|%k0, %1}";

      return "%vmovd\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4063 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_135 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4138 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cbtw|cbw}";
    default:
      return "movs{bw|x}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_136 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4277 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return "%vcvtss2sd\t{%1, %d0|%d0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_137 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4304 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_138 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4333 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_139 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4333 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_140 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4435 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);
    case 1:
      return "%vcvtsd2ss\t{%1, %d0|%d0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_141 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4461 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_142 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4471 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);
    case 1:
      return "%vcvtsd2ss\t{%1, %d0|%d0, %1}";

    default:
      return "#";
    }
}
}

static const char *
output_143 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4495 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    default:
      return "#";
    }
}
}

static const char *
output_144 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4516 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_145 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4557 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_146 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4571 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_147 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4585 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_148 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4585 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_149 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4594 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_150 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4594 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_158 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4826 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, true);
}

static const char *
output_159 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4826 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, true);
}

static const char *
output_160 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4826 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, true);
}

static const char *
output_167 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4910 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_169 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4965 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_170 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4965 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char * const output_180[] = {
  "fild%Z1\t%1",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
};

static const char * const output_181[] = {
  "fild%Z1\t%1",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
};

static const char *
output_192 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5379 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (SImode_address_operand (operands[1], VOIDmode))
    {
      gcc_assert (TARGET_64BIT);
      return "lea{l}\t{%E1, %k0|%k0, %E1}";
    }
  else 
    return "lea{l}\t{%E1, %0|%0, %E1}";
}
}

static const char *
output_195 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5468 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  This alternative
	 was added to use ADD as much as possible.  */
      if (which_alternative == 2)
        std::swap (operands[1], operands[2]);
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_196 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5468 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  This alternative
	 was added to use ADD as much as possible.  */
      if (which_alternative == 2)
        std::swap (operands[1], operands[2]);
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_197 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5571 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  This alternative
	 was added to use ADD as much as possible.  */
      if (which_alternative == 2)
        std::swap (operands[1], operands[2]);

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], HImode))
	return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_198 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5621 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  bool widen = (which_alternative == 3 || which_alternative == 4);

  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  These alternatives
	 were added to use ADD as much as possible.  */
      if (which_alternative == 2 || which_alternative == 4)
        std::swap (operands[1], operands[2]);

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], QImode))
	{
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_199 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5680 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[1] == const1_rtx)
	return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "dec{b}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[1], QImode))
	return "sub{b}\t{%1, %0|%0, %1}";

      return "add{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5783 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (which_alternative == 2)
        std::swap (operands[1], operands[2]);
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], QImode))
        return "sub{b}\t{%2, %0|%0, %2}";

      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5783 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (which_alternative == 2)
        std::swap (operands[1], operands[2]);
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], HImode))
        return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5783 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (which_alternative == 2)
        std::swap (operands[1], operands[2]);
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5783 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      if (which_alternative == 2)
        std::swap (operands[1], operands[2]);
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5869 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (which_alternative == 1)
        std::swap (operands[1], operands[2]);

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], QImode))
        return "sub{b}\t{%2, %0|%0, %2}";

      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5869 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (which_alternative == 1)
        std::swap (operands[1], operands[2]);

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], HImode))
        return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5869 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (which_alternative == 1)
        std::swap (operands[1], operands[2]);

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5869 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      if (which_alternative == 1)
        std::swap (operands[1], operands[2]);

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6005 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], QImode))
	return "add{b}\t{%2, %0|%0, %2}";

      return "sub{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6005 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], HImode))
	return "add{w}\t{%2, %0|%0, %2}";

      return "sub{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6005 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], SImode))
	return "add{l}\t{%2, %0|%0, %2}";

      return "sub{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6045 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{b}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (which_alternative == 1)
        std::swap (operands[1], operands[2]);

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], QImode))
        return "sub{b}\t{%2, %0|%0, %2}";

      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6045 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{w}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (which_alternative == 1)
        std::swap (operands[1], operands[2]);

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], HImode))
        return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6045 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (which_alternative == 1)
        std::swap (operands[1], operands[2]);

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6045 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      if (which_alternative == 1)
        std::swap (operands[1], operands[2]);

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6091 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%h0";
        }

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char * const output_279[] = {
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %0|%0, %2}",
};

static const char * const output_280[] = {
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %0|%0, %2}",
};

static const char * const output_282[] = {
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %0|%0, %2}",
};

static const char * const output_291[] = {
  "#",
  "mul{l}\t%2",
};

static const char *
output_310 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7822 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (which_alternative == 3)
    {
      if (CONST_INT_P (operands[1]) && INTVAL (operands[1]) < 0)
	operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);
      return "test{l}\t{%1, %k0|%k0, %1}";
    }
  return "test{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_320 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && QImode == QImode)
      return "kandw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "kandb\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_321 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && QImode == QImode)
      return "korw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "korb\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_322 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && QImode == QImode)
      return "kxorw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "kxorb\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_323 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && HImode == QImode)
      return "kandw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "kandw\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_324 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && HImode == QImode)
      return "korw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "korw\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_325 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && HImode == QImode)
      return "kxorw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "kxorw\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_326 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && SImode == QImode)
      return "kandw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "kandd\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_327 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && SImode == QImode)
      return "korw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "kord\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_328 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && SImode == QImode)
      return "kxorw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "kxord\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_329 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && DImode == QImode)
      return "kandw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "kandq\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_330 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && DImode == QImode)
      return "korw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "korq\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_331 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8057 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
    if (!TARGET_AVX512DQ && DImode == QImode)
      return "kxorw\t{%2, %1, %0|%0, %1, %2}";
    else
      return "kxorq\t{%2, %1, %0|%0, %1, %2}";
  }
}

static const char *
output_333 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8190 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "#";

    case TYPE_MSKLOG:
      return "kandd\t{%2, %1, %0|%0, %1, %2}";

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "and{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_334 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8233 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "#";

    case TYPE_MSKLOG:
      return "kandw\t{%2, %1, %0|%0, %1, %2}";

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "and{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_335 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8264 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return "and{b}\t{%2, %0|%0, %2}";
    case 2:
      return "and{l}\t{%k2, %k0|%k0, %k2}";
    case 3:
      return TARGET_AVX512DQ ? "kandb\t{%2, %1, %0|%0, %1, %2}"
			     : "kandw\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_337 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8301 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return "andn\t{%k2, %k1, %k0|%k0, %k1, %k2}";
    case 1:
      return "#";
    case 2:
      if (TARGET_AVX512DQ && QImode == QImode)
	return "kandnb\t{%2, %1, %0|%0, %1, %2}";
      else
	return "kandnw\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_338 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8301 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return "andn\t{%k2, %k1, %k0|%k0, %k1, %k2}";
    case 1:
      return "#";
    case 2:
      if (TARGET_AVX512DQ && HImode == QImode)
	return "kandnb\t{%2, %1, %0|%0, %1, %2}";
      else
	return "kandnw\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_339 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8474 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (which_alternative == 2)
    {
      if (CONST_INT_P (operands[2]) && INTVAL (operands[2]) < 0)
        operands[2] = GEN_INT (INTVAL (operands[2]) & 0xff);
      return "and{l}\t{%2, %k0|%k0, %2}";
    }
  return "and{b}\t{%2, %0|%0, %2}";
}
}

static const char * const output_348[] = {
  "or{l}\t{%2, %0|%0, %2}",
  "or{l}\t{%2, %0|%0, %2}",
  "kord\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_349[] = {
  "xor{l}\t{%2, %0|%0, %2}",
  "xor{l}\t{%2, %0|%0, %2}",
  "kxord\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_350[] = {
  "or{q}\t{%2, %0|%0, %2}",
  "or{q}\t{%2, %0|%0, %2}",
  "korq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_351[] = {
  "xor{q}\t{%2, %0|%0, %2}",
  "xor{q}\t{%2, %0|%0, %2}",
  "kxorq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_355[] = {
  "or{w}\t{%2, %0|%0, %2}",
  "or{w}\t{%2, %0|%0, %2}",
  "korw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_356[] = {
  "xor{w}\t{%2, %0|%0, %2}",
  "xor{w}\t{%2, %0|%0, %2}",
  "kxorw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_357[] = {
  "or{b}\t{%2, %0|%0, %2}",
  "or{b}\t{%2, %0|%0, %2}",
  "or{l}\t{%k2, %k0|%k0, %k2}",
  "korw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_358[] = {
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{l}\t{%k2, %k0|%k0, %k2}",
  "kxorw\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_369 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8835 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (which_alternative == 1 && QImode == QImode && TARGET_AVX512DQ)
    return "kxnorb\t{%2, %1, %0|%0, %1, %2}";
  return "kxnorw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_370 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8835 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (which_alternative == 1 && HImode == QImode && TARGET_AVX512DQ)
    return "kxnorb\t{%2, %1, %0|%0, %1, %2}";
  return "kxnorw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_371[] = {
  "#",
  "kxnord\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_372[] = {
  "#",
  "kxnorq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_433[] = {
  "not{l}\t%0",
  "knotd\t{%1, %0|%0, %1}",
};

static const char * const output_434[] = {
  "not{q}\t%0",
  "knotq\t{%1, %0|%0, %1}",
};

static const char * const output_435[] = {
  "not{w}\t%0",
  "knotw\t{%1, %0|%0, %1}",
};

static const char *
output_436 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9554 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return "not{b}\t%0";
    case 1:
      return "not{l}\t%k0";
    case 2:
      if (TARGET_AVX512DQ)
	return "knotb\t{%1, %0|%0, %1}";
      return "knotw\t{%1, %0|%0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_451 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9802 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  return "sal{l}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_452 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9802 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  return "sal{q}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_454 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9823 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
    case TYPE_ISHIFTX:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{l}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_455 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9823 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
    case TYPE_ISHIFTX:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{q}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_456 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9953 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_457 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 9998 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REGNO_P (REGNO (operands[1])))
        return "add{l}\t%k0, %k0";
      else
        return "add{b}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%k0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_458 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10059 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[1] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (operands[1] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_459 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10155 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_460 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10155 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_461 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10155 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_462 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10155 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{q}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_463 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10249 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_464 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10249 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_465 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10249 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_466 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10249 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{q}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_467 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10304 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  return "shr{l}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_468 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10304 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  return "sar{l}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_469 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10304 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  return "shr{q}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_470 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10304 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  return "sar{q}\t{%b2, %0|%0, %b2}";
}
}

static const char * const output_474[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %0|%0, %2}",
};

static const char *
output_477 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10468 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "shr{l}\t%0";
      else
	return "shr{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_478 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10468 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sar{l}\t%0";
      else
	return "sar{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_479 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10468 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "shr{q}\t%0";
      else
	return "shr{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_480 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10468 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sar{q}\t%0";
      else
	return "sar{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_481 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10565 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_482 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10565 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_483 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10565 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{w}\t%0";
  else
    return "shr{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_484 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10565 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{w}\t%0";
  else
    return "sar{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_485 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10591 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_486 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10591 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_487 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10626 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_488 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10626 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_489 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10626 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{w}\t%0";
  else
    return "shr{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_490 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10626 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{w}\t%0";
  else
    return "sar{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_491 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10626 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{l}\t%0";
  else
    return "shr{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_492 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10626 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{l}\t%0";
  else
    return "sar{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_493 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10626 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{q}\t%0";
  else
    return "shr{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_494 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10626 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{q}\t%0";
  else
    return "sar{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_495 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10688 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_496 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10688 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_497 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10688 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{w}\t%0";
  else
    return "shr{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_498 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10688 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{w}\t%0";
  else
    return "sar{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_499 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10688 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{l}\t%0";
  else
    return "shr{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_500 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10688 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{l}\t%0";
  else
    return "sar{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_501 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10688 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{q}\t%0";
  else
    return "shr{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_502 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10688 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{q}\t%0";
  else
    return "sar{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_503 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10759 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  return "rol{l}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_504 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10759 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  return "ror{l}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_505 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10759 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  return "rol{q}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_506 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10759 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  return "ror{q}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_510 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10840 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "rol{l}\t%0";
      else
	return "rol{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_511 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10840 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "ror{l}\t%0";
      else
	return "ror{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_512 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10840 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "rol{q}\t%0";
      else
	return "rol{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_513 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10840 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "ror{q}\t%0";
      else
	return "ror{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_514 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10963 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "rol{b}\t%0";
  else
    return "rol{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_515 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10963 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "ror{b}\t%0";
  else
    return "ror{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_516 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10963 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "rol{w}\t%0";
  else
    return "rol{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_517 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10963 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "ror{w}\t%0";
  else
    return "ror{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_518 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10989 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "rol{b}\t%0";
  else
    return "rol{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_519 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10989 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "ror{b}\t%0";
  else
    return "ror{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_520 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11154 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_SI:
      return "bt{l}\t{%1, %k0|%k0, %1}";

    case MODE_DI:
      return "bt{q}\t{%q1, %0|%0, %q1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_531[] = {
  "cmp%D3ss\t{%2, %0|%0, %2}",
  "vcmp%D3ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_532[] = {
  "cmp%D3sd\t{%2, %0|%0, %2}",
  "vcmp%D3sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_570 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11955 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_571 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11955 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_572 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11964 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_573 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11976 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  rtx fnaddr = gen_rtx_PLUS (Pmode, operands[0], operands[1]);
  fnaddr = gen_const_mem (Pmode, fnaddr);
  return ix86_output_call_insn (insn, fnaddr);
}
}

static const char *
output_574 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11987 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_575 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11987 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_576 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11995 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_577 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11995 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_578 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12044 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_579 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12054 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_580 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12065 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_581 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12146 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_582 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12146 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_583 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12157 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_584 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12170 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  rtx fnaddr = gen_rtx_PLUS (Pmode, operands[1], operands[2]);
  fnaddr = gen_const_mem (Pmode, fnaddr);
  return ix86_output_call_insn (insn, fnaddr);
}
}

static const char *
output_585 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12182 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_586 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12182 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_587 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12191 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_588 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12191 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_589 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12246 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_590 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12257 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_591 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12269 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_596 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12449 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (ix86_bnd_prefixed_insn_p (insn))
    return "%!ret";

  return "rep%; ret";
}
}

static const char *
output_600 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12494 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  int num = INTVAL (operands[0]);

  gcc_assert (IN_RANGE (num, 1, 8));

  while (num--)
    fputs ("\tnop\n", asm_out_file);

  return "";
}
}

static const char *
output_601 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12515 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
#ifdef ASM_OUTPUT_MAX_SKIP_PAD
  ASM_OUTPUT_MAX_SKIP_PAD (asm_out_file, 4, (int)INTVAL (operands[0]));
#else
  /* It is tempting to use ASM_OUTPUT_ALIGN here, but we don't want to do that.
     The align insn is used to avoid 3 jump instructions in the row to improve
     branch prediction and the benefits hardly outweigh the cost of extra 8
     nops on the average inserted by full alignment pseudo operation.  */
#endif
  return "";
}
}

static const char *
output_602 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12549 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_set_got (operands[0], NULL_RTX);
}

static const char *
output_603 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12571 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_set_got (operands[0], operands[1]);
}

static const char *
output_607 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12675 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (operands[0] == const0_rtx)
    return "ret";
  else
    return "ret\t%0";
}
}

static const char *
output_613 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12843 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (TARGET_BMI)
    return "tzcnt{l}\t{%1, %0|%0, %1}";
  else if (TARGET_GENERIC)
    /* tzcnt expands to 'rep bsf' and we can use it even if !TARGET_BMI.  */
    return "rep%; bsf{l}\t{%1, %0|%0, %1}";
  else
    gcc_unreachable ();
}
}

static const char *
output_614 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12862 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (TARGET_BMI)
    return "tzcnt{w}\t{%1, %0|%0, %1}";
  else if (optimize_function_for_size_p (cfun))
    ;
  else if (TARGET_GENERIC)
    /* tzcnt expands to 'rep bsf' and we can use it even if !TARGET_BMI.  */
    return "rep%; bsf{w}\t{%1, %0|%0, %1}";

  return "bsf{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_615 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12862 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (TARGET_BMI)
    return "tzcnt{l}\t{%1, %0|%0, %1}";
  else if (optimize_function_for_size_p (cfun))
    ;
  else if (TARGET_GENERIC)
    /* tzcnt expands to 'rep bsf' and we can use it even if !TARGET_BMI.  */
    return "rep%; bsf{l}\t{%1, %0|%0, %1}";

  return "bsf{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_634 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13144 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) << 8 | INTVAL (operands[3]));
  return "bextr\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_648 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13344 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_649 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13361 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{w}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_650 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13361 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char * const output_651[] = {
  "bswap\t%0",
  "movbe\t{%1, %0|%0, %1}",
  "movbe\t{%1, %0|%0, %1}",
};

static const char * const output_653[] = {
  "xchg{b}\t{%h0, %b0|%b0, %h0}",
  "rol{w}\t{$8, %0|%0, 8}",
};

static const char *
output_658 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13576 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  output_asm_insn
    ("lea{l}\t{%E2@tlsgd(,%1,1), %0|%0, %E2@tlsgd[%1*1]}", operands);
  if (TARGET_SUN_TLS)
#ifdef HAVE_AS_IX86_TLSGDPLT
    return "call\t%a2@tlsgdplt";
#else
    return "call\t%p3@plt";
#endif
  return "call\t%P3";
}
}

static const char *
output_659 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13674 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  output_asm_insn
    ("lea{l}\t{%&@tlsldm(%1), %0|%0, %&@tlsldm[%1]}", operands);
  if (TARGET_SUN_TLS)
    {
      if (HAVE_AS_IX86_TLSLDMPLT)
	return "call\t%&@tlsldmplt";
      else
	return "call\t%p2@plt";
    }
  return "call\t%P2";
}
}

static const char *
output_672 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14019 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_673 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14019 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_674 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14045 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_675 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14045 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_677 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14074 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_678 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14074 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_679 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14109 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_680 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14109 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_681 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14130 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_682 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14130 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_683 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14130 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_684 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14130 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_685 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14151 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_686 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14151 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_687 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14151 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_688 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14151 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_689 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14171 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_690 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14189 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_691 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14208 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_692 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14225 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_693 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14239 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_694 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14257 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_695 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14257 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_696 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14276 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_697 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14276 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{ return output_387_binary_op (insn, operands); }
}

static const char *
output_698 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14294 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_699 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14294 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_700 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14311 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_701 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14311 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_702 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14329 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_703 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14329 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_704 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14349 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_705 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14349 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_744 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15645 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_748 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15704 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_749 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15704 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_766 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16012 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_767 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16012 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_770 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16071 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_771 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16071 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_772 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16071 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_773 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16071 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char * const output_814[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_815[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_817[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
};

static const char * const output_818[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "#",
  "#",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_819[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_822[] = {
  "maxss\t{%2, %0|%0, %2}",
  "vmaxss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_823[] = {
  "minss\t{%2, %0|%0, %2}",
  "vminss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_824[] = {
  "maxsd\t{%2, %0|%0, %2}",
  "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_825[] = {
  "minsd\t{%2, %0|%0, %2}",
  "vminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_826[] = {
  "maxss\t{%2, %0|%0, %2}",
  "vmaxss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_827[] = {
  "minss\t{%2, %0|%0, %2}",
  "vminss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_828[] = {
  "maxsd\t{%2, %0|%0, %2}",
  "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_829[] = {
  "minsd\t{%2, %0|%0, %2}",
  "vminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_830 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17469 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{l}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
	return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";

    default:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%E2, %0|%0, %E2}";
    }
}
}

static const char *
output_831 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17469 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
	return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";

    default:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{q}\t{%E2, %0|%0, %E2}";
    }
}
}

static const char *
output_836 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17586 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_adjust_stack_and_probe (operands[0]);
}

static const char *
output_837 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17586 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_adjust_stack_and_probe (operands[0]);
}

static const char *
output_838 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17596 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_probe_stack_range (operands[0], operands[2]);
}

static const char *
output_839 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17596 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
 return output_probe_stack_range (operands[0], operands[2]);
}

static const char *
output_840 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
#ifdef HAVE_AS_IX86_UD2
  return "ud2";
#else
  return ASM_SHORT "0x0b0f";
#endif
}
}

static const char *
output_841 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18557 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  static const char * const patterns[4] = {
   "prefetchnta\t%a0", "prefetcht2\t%a0", "prefetcht1\t%a0", "prefetcht0\t%a0"
  };

  int locality = INTVAL (operands[1]);
  gcc_assert (IN_RANGE (locality, 0, 3));

  return patterns[locality];
}
}

static const char *
output_842 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18578 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (INTVAL (operands[1]) == 0)
    return "prefetch\t%a0";
  else
    return "prefetchw\t%a0";
}
}

static const char *
output_907 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 19440 "../../../src/gcc-6.2.0/gcc/config/i386/i386.md"
{
  if (x86_64_immediate_size_operand (operands[1], VOIDmode))
    return "mov{l}\t{%1@SIZE, %k0|%k0, %1@SIZE}";
  else
    return "movabs{q}\t{%1@SIZE, %0|%0, %1@SIZE}";
}
}

static const char *
output_910 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 86 "../../../src/gcc-6.2.0/gcc/config/i386/mmx.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_MULTI:
      return "#";

    case TYPE_IMOV:
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%1, %k0|%k0, %1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      /* Handle broken assemblers that require movd instead of movq.  */
      if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	  && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	return "movd\t{%1, %0|%0, %1}";
      return "movq\t{%1, %0|%0, %1}";

    case TYPE_SSECVT:
      if (SSE_REG_P (operands[0]))
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_DI:
	  /* Handle broken assemblers that require movd instead of movq.  */
	  if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	      && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	    return "%vmovd\t{%1, %0|%0, %1}";
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  return "vmovdqa64\t{%g1, %g0|%g0, %g1}";

	case MODE_V2SF:
	  if (TARGET_AVX && REG_P (operands[0]))
	    return "vmovlps\t{%1, %0, %0|%0, %0, %1}";
	  return "%vmovlps\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_911 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 86 "../../../src/gcc-6.2.0/gcc/config/i386/mmx.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_MULTI:
      return "#";

    case TYPE_IMOV:
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%1, %k0|%k0, %1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      /* Handle broken assemblers that require movd instead of movq.  */
      if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	  && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	return "movd\t{%1, %0|%0, %1}";
      return "movq\t{%1, %0|%0, %1}";

    case TYPE_SSECVT:
      if (SSE_REG_P (operands[0]))
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_DI:
	  /* Handle broken assemblers that require movd instead of movq.  */
	  if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	      && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	    return "%vmovd\t{%1, %0|%0, %1}";
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  return "vmovdqa64\t{%g1, %g0|%g0, %g1}";

	case MODE_V2SF:
	  if (TARGET_AVX && REG_P (operands[0]))
	    return "vmovlps\t{%1, %0, %0|%0, %0, %1}";
	  return "%vmovlps\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_912 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 86 "../../../src/gcc-6.2.0/gcc/config/i386/mmx.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_MULTI:
      return "#";

    case TYPE_IMOV:
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%1, %k0|%k0, %1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      /* Handle broken assemblers that require movd instead of movq.  */
      if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	  && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	return "movd\t{%1, %0|%0, %1}";
      return "movq\t{%1, %0|%0, %1}";

    case TYPE_SSECVT:
      if (SSE_REG_P (operands[0]))
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_DI:
	  /* Handle broken assemblers that require movd instead of movq.  */
	  if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	      && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	    return "%vmovd\t{%1, %0|%0, %1}";
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  return "vmovdqa64\t{%g1, %g0|%g0, %g1}";

	case MODE_V2SF:
	  if (TARGET_AVX && REG_P (operands[0]))
	    return "vmovlps\t{%1, %0, %0|%0, %0, %1}";
	  return "%vmovlps\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_913 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 86 "../../../src/gcc-6.2.0/gcc/config/i386/mmx.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_MULTI:
      return "#";

    case TYPE_IMOV:
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%1, %k0|%k0, %1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      /* Handle broken assemblers that require movd instead of movq.  */
      if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	  && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	return "movd\t{%1, %0|%0, %1}";
      return "movq\t{%1, %0|%0, %1}";

    case TYPE_SSECVT:
      if (SSE_REG_P (operands[0]))
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_DI:
	  /* Handle broken assemblers that require movd instead of movq.  */
	  if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	      && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	    return "%vmovd\t{%1, %0|%0, %1}";
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  return "vmovdqa64\t{%g1, %g0|%g0, %g1}";

	case MODE_V2SF:
	  if (TARGET_AVX && REG_P (operands[0]))
	    return "vmovlps\t{%1, %0, %0|%0, %0, %1}";
	  return "%vmovlps\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_914 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 86 "../../../src/gcc-6.2.0/gcc/config/i386/mmx.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_MULTI:
      return "#";

    case TYPE_IMOV:
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%1, %k0|%k0, %1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      /* Handle broken assemblers that require movd instead of movq.  */
      if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	  && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	return "movd\t{%1, %0|%0, %1}";
      return "movq\t{%1, %0|%0, %1}";

    case TYPE_SSECVT:
      if (SSE_REG_P (operands[0]))
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_DI:
	  /* Handle broken assemblers that require movd instead of movq.  */
	  if (!HAVE_AS_IX86_INTERUNIT_MOVQ
	      && (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1])))
	    return "%vmovd\t{%1, %0|%0, %1}";
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  return "vmovdqa64\t{%g1, %g0|%g0, %g1}";

	case MODE_V2SF:
	  if (TARGET_AVX && REG_P (operands[0]))
	    return "vmovlps\t{%1, %0, %0|%0, %0, %1}";
	  return "%vmovlps\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_917[] = {
  "pfsub\t{%2, %0|%0, %2}",
  "pfsubr\t{%1, %0|%0, %1}",
};

static const char * const output_940[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_942[] = {
  "punpckhdq\t%0, %0",
  "%vmovshdup\t{%1, %0|%0, %1}",
  "shufps\t{$0xe5, %1, %0|%0, %1, 0xe5}",
  "#",
  "#",
  "#",
  "#",
};

static const char *
output_1004 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1160 "../../../src/gcc-6.2.0/gcc/config/i386/mmx.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "pinsrw\t{%3, %2, %0|%0, %2, %3}";
  else
    return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_1006 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1207 "../../../src/gcc-6.2.0/gcc/config/i386/mmx.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_1010[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1012[] = {
  "punpckhdq\t%0, %0",
  "%vpshufd\t{$0xe5, %1, %0|%0, %1, 0xe5}",
  "shufps\t{$0xe5, %1, %0|%0, %1, 0xe5}",
  "#",
  "#",
  "#",
};

static const char *
output_1013 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1460 "../../../src/gcc-6.2.0/gcc/config/i386/mmx.md"
{
  /* These two instructions have the same operation, but their encoding
     is different.  Prefer the one that is de facto standard.  */
  if (TARGET_SSE || TARGET_3DNOW_A)
    return "pavgb\t{%2, %0|%0, %2}";
  else
    return "pavgusb\t{%2, %0|%0, %2}";
}
}

static const char *
output_1021 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 64 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V64QImode))
	    {
	      if (64 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (64 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V64QImode))
	    {
	      if (64 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (64 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V64QImode)
		  || misaligned_operand (operands[1], V64QImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V64QImode)
		  || misaligned_operand (operands[1], V64QImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V64QImode)
		  || misaligned_operand (operands[1], V64QImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V64QImode)
	      || misaligned_operand (operands[1], V64QImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1022 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 32 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V32QImode))
	    {
	      if (32 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (32 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V32QImode))
	    {
	      if (32 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (32 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V32QImode)
		  || misaligned_operand (operands[1], V32QImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V32QImode)
		  || misaligned_operand (operands[1], V32QImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V32QImode)
		  || misaligned_operand (operands[1], V32QImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V32QImode)
	      || misaligned_operand (operands[1], V32QImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1023 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 16 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V16QImode))
	    {
	      if (16 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (16 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V16QImode))
	    {
	      if (16 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (16 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16QImode)
		  || misaligned_operand (operands[1], V16QImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16QImode)
		  || misaligned_operand (operands[1], V16QImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16QImode)
		  || misaligned_operand (operands[1], V16QImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V16QImode)
	      || misaligned_operand (operands[1], V16QImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1024 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 64 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V32HImode))
	    {
	      if (64 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (64 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V32HImode))
	    {
	      if (64 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (64 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V32HImode)
		  || misaligned_operand (operands[1], V32HImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V32HImode)
		  || misaligned_operand (operands[1], V32HImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V32HImode)
		  || misaligned_operand (operands[1], V32HImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V32HImode)
	      || misaligned_operand (operands[1], V32HImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1025 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 32 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V16HImode))
	    {
	      if (32 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (32 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V16HImode))
	    {
	      if (32 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (32 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16HImode)
		  || misaligned_operand (operands[1], V16HImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16HImode)
		  || misaligned_operand (operands[1], V16HImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16HImode)
		  || misaligned_operand (operands[1], V16HImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V16HImode)
	      || misaligned_operand (operands[1], V16HImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1026 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 16 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V8HImode))
	    {
	      if (16 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (16 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V8HImode))
	    {
	      if (16 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (16 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8HImode)
		  || misaligned_operand (operands[1], V8HImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8HImode)
		  || misaligned_operand (operands[1], V8HImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8HImode)
		  || misaligned_operand (operands[1], V8HImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V8HImode)
	      || misaligned_operand (operands[1], V8HImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1027 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 64 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V16SImode))
	    {
	      if (64 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (64 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V16SImode))
	    {
	      if (64 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (64 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16SImode)
		  || misaligned_operand (operands[1], V16SImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16SImode)
		  || misaligned_operand (operands[1], V16SImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16SImode)
		  || misaligned_operand (operands[1], V16SImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V16SImode)
	      || misaligned_operand (operands[1], V16SImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1028 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 32 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V8SImode))
	    {
	      if (32 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (32 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V8SImode))
	    {
	      if (32 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (32 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8SImode)
		  || misaligned_operand (operands[1], V8SImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8SImode)
		  || misaligned_operand (operands[1], V8SImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8SImode)
		  || misaligned_operand (operands[1], V8SImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V8SImode)
	      || misaligned_operand (operands[1], V8SImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1029 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 16 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V4SImode))
	    {
	      if (16 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (16 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V4SImode))
	    {
	      if (16 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (16 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4SImode)
		  || misaligned_operand (operands[1], V4SImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4SImode)
		  || misaligned_operand (operands[1], V4SImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4SImode)
		  || misaligned_operand (operands[1], V4SImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V4SImode)
	      || misaligned_operand (operands[1], V4SImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1030 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 64 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V8DImode))
	    {
	      if (64 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (64 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V8DImode))
	    {
	      if (64 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (64 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8DImode)
		  || misaligned_operand (operands[1], V8DImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8DImode)
		  || misaligned_operand (operands[1], V8DImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8DImode)
		  || misaligned_operand (operands[1], V8DImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V8DImode)
	      || misaligned_operand (operands[1], V8DImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1031 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 32 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V4DImode))
	    {
	      if (32 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (32 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V4DImode))
	    {
	      if (32 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (32 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4DImode)
		  || misaligned_operand (operands[1], V4DImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4DImode)
		  || misaligned_operand (operands[1], V4DImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4DImode)
		  || misaligned_operand (operands[1], V4DImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V4DImode)
	      || misaligned_operand (operands[1], V4DImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1032 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 16 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V2DImode))
	    {
	      if (16 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (16 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V2DImode))
	    {
	      if (16 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (16 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V2DImode)
		  || misaligned_operand (operands[1], V2DImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V2DImode)
		  || misaligned_operand (operands[1], V2DImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V2DImode)
		  || misaligned_operand (operands[1], V2DImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V2DImode)
	      || misaligned_operand (operands[1], V2DImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1033 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 64 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V4TImode))
	    {
	      if (64 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (64 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V4TImode))
	    {
	      if (64 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (64 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4TImode)
		  || misaligned_operand (operands[1], V4TImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4TImode)
		  || misaligned_operand (operands[1], V4TImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4TImode)
		  || misaligned_operand (operands[1], V4TImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V4TImode)
	      || misaligned_operand (operands[1], V4TImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1034 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 32 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V2TImode))
	    {
	      if (32 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (32 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V2TImode))
	    {
	      if (32 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (32 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V2TImode)
		  || misaligned_operand (operands[1], V2TImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V2TImode)
		  || misaligned_operand (operands[1], V2TImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V2TImode)
		  || misaligned_operand (operands[1], V2TImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V2TImode)
	      || misaligned_operand (operands[1], V2TImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1035 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 16 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V1TImode))
	    {
	      if (16 == 32)
		return "vextracti64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (16 == 16)
		return "vextracti32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V1TImode))
	    {
	      if (16 == 32)
		return "vbroadcasti64x4\t{%1, %g0|%g0, %1}";
	      else if (16 == 16)
		return "vbroadcasti32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V1TImode)
		  || misaligned_operand (operands[1], V1TImode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V1TImode)
		  || misaligned_operand (operands[1], V1TImode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V1TImode)
		  || misaligned_operand (operands[1], V1TImode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V1TImode)
	      || misaligned_operand (operands[1], V1TImode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1036 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 64 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V16SFmode))
	    {
	      if (64 == 32)
		return "vextractf64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (64 == 16)
		return "vextractf32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V16SFmode))
	    {
	      if (64 == 32)
		return "vbroadcastf64x4\t{%1, %g0|%g0, %1}";
	      else if (64 == 16)
		return "vbroadcastf32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16SFmode)
		  || misaligned_operand (operands[1], V16SFmode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16SFmode)
		  || misaligned_operand (operands[1], V16SFmode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V16SFmode)
		  || misaligned_operand (operands[1], V16SFmode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V16SFmode)
	      || misaligned_operand (operands[1], V16SFmode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1037 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 32 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V8SFmode))
	    {
	      if (32 == 32)
		return "vextractf64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (32 == 16)
		return "vextractf32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V8SFmode))
	    {
	      if (32 == 32)
		return "vbroadcastf64x4\t{%1, %g0|%g0, %1}";
	      else if (32 == 16)
		return "vbroadcastf32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8SFmode)
		  || misaligned_operand (operands[1], V8SFmode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8SFmode)
		  || misaligned_operand (operands[1], V8SFmode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8SFmode)
		  || misaligned_operand (operands[1], V8SFmode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V8SFmode)
	      || misaligned_operand (operands[1], V8SFmode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1038 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 16 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V4SFmode))
	    {
	      if (16 == 32)
		return "vextractf64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (16 == 16)
		return "vextractf32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V4SFmode))
	    {
	      if (16 == 32)
		return "vbroadcastf64x4\t{%1, %g0|%g0, %1}";
	      else if (16 == 16)
		return "vbroadcastf32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4SFmode)
		  || misaligned_operand (operands[1], V4SFmode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4SFmode)
		  || misaligned_operand (operands[1], V4SFmode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4SFmode)
		  || misaligned_operand (operands[1], V4SFmode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V4SFmode)
	      || misaligned_operand (operands[1], V4SFmode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1039 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 64 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V8DFmode))
	    {
	      if (64 == 32)
		return "vextractf64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (64 == 16)
		return "vextractf32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V8DFmode))
	    {
	      if (64 == 32)
		return "vbroadcastf64x4\t{%1, %g0|%g0, %1}";
	      else if (64 == 16)
		return "vbroadcastf32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8DFmode)
		  || misaligned_operand (operands[1], V8DFmode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8DFmode)
		  || misaligned_operand (operands[1], V8DFmode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V8DFmode)
		  || misaligned_operand (operands[1], V8DFmode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V8DFmode)
	      || misaligned_operand (operands[1], V8DFmode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1040 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 32 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V4DFmode))
	    {
	      if (32 == 32)
		return "vextractf64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (32 == 16)
		return "vextractf32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V4DFmode))
	    {
	      if (32 == 32)
		return "vbroadcastf64x4\t{%1, %g0|%g0, %1}";
	      else if (32 == 16)
		return "vbroadcastf32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4DFmode)
		  || misaligned_operand (operands[1], V4DFmode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4DFmode)
		  || misaligned_operand (operands[1], V4DFmode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V4DFmode)
		  || misaligned_operand (operands[1], V4DFmode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V4DFmode)
	      || misaligned_operand (operands[1], V4DFmode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1041 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 850 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mode = get_attr_mode (insn);
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* There is no evex-encoded vmov* for sizes smaller than 64-bytes
	 in avx512f, so we need to use workarounds, to access sse registers
	 16-31, which are evex-only. In avx512vl we don't need workarounds.  */
      if (TARGET_AVX512F && 16 < 64 && !TARGET_AVX512VL
	  && ((REG_P (operands[0]) && EXT_REX_SSE_REGNO_P (REGNO (operands[0])))
	      || (REG_P (operands[1]) && EXT_REX_SSE_REGNO_P (REGNO (operands[1])))))
	{
	  if (memory_operand (operands[0], V2DFmode))
	    {
	      if (16 == 32)
		return "vextractf64x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else if (16 == 16)
		return "vextractf32x4\t{$0x0, %g1, %0|%0, %g1, 0x0}";
	      else
		gcc_unreachable ();
	    }
	  else if (memory_operand (operands[1], V2DFmode))
	    {
	      if (16 == 32)
		return "vbroadcastf64x4\t{%1, %g0|%g0, %1}";
	      else if (16 == 16)
		return "vbroadcastf32x4\t{%1, %g0|%g0, %1}";
	      else
		gcc_unreachable ();
	    }
	  else
	    /* Reg -> reg move is always aligned.  Just use wider move.  */
	    switch (mode)
	      {
	      case MODE_V8SF:
	      case MODE_V4SF:
		return "vmovaps\t{%g1, %g0|%g0, %g1}";
	      case MODE_V4DF:
	      case MODE_V2DF:
		return "vmovapd\t{%g1, %g0|%g0, %g1}";
	      case MODE_OI:
	      case MODE_TI:
		return "vmovdqa64\t{%g1, %g0|%g0, %g1}";
	      default:
		gcc_unreachable ();
	      }
	}
      switch (mode)
	{
	case MODE_V16SF:
	case MODE_V8SF:
	case MODE_V4SF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V2DFmode)
		  || misaligned_operand (operands[1], V2DFmode)))
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V8DF:
	case MODE_V4DF:
	case MODE_V2DF:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V2DFmode)
		  || misaligned_operand (operands[1], V2DFmode)))
	    return "%vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if ((TARGET_AVX || TARGET_IAMCU)
	      && (misaligned_operand (operands[0], V2DFmode)
		  || misaligned_operand (operands[1], V2DFmode)))
	    return TARGET_AVX512VL ? "vmovdqu64\t{%1, %0|%0, %1}"
				   : "%vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return TARGET_AVX512VL ? "vmovdqa64\t{%1, %0|%0, %1}"
				   : "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_XI:
	  if (misaligned_operand (operands[0], V2DFmode)
	      || misaligned_operand (operands[1], V2DFmode))
	    return "vmovdqu64\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa64\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1042 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V16SImode)))
    {
      if (misaligned_operand (operands[1], V16SImode))
	return "vmovud\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovad\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V16SImode))
	return "vmovdqu32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1043 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V8SImode)))
    {
      if (misaligned_operand (operands[1], V8SImode))
	return "vmovud\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovad\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V8SImode))
	return "vmovdqu32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1044 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V4SImode)))
    {
      if (misaligned_operand (operands[1], V4SImode))
	return "vmovud\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovad\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V4SImode))
	return "vmovdqu32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1045 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V8DImode)))
    {
      if (misaligned_operand (operands[1], V8DImode))
	return "vmovuq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovaq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V8DImode))
	return "vmovdqu64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1046 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V4DImode)))
    {
      if (misaligned_operand (operands[1], V4DImode))
	return "vmovuq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovaq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V4DImode))
	return "vmovdqu64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1047 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V2DImode)))
    {
      if (misaligned_operand (operands[1], V2DImode))
	return "vmovuq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovaq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V2DImode))
	return "vmovdqu64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1048 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V16SFmode)))
    {
      if (misaligned_operand (operands[1], V16SFmode))
	return "vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovaps\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V16SFmode))
	return "vmovdqu32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1049 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V8SFmode)))
    {
      if (misaligned_operand (operands[1], V8SFmode))
	return "vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovaps\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V8SFmode))
	return "vmovdqu32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1050 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V4SFmode)))
    {
      if (misaligned_operand (operands[1], V4SFmode))
	return "vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovaps\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V4SFmode))
	return "vmovdqu32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1051 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V8DFmode)))
    {
      if (misaligned_operand (operands[1], V8DFmode))
	return "vmovupd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovapd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V8DFmode))
	return "vmovdqu64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1052 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V4DFmode)))
    {
      if (misaligned_operand (operands[1], V4DFmode))
	return "vmovupd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovapd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V4DFmode))
	return "vmovdqu64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1053 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V2DFmode)))
    {
      if (misaligned_operand (operands[1], V2DFmode))
	return "vmovupd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovapd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
  else
    {
      if (misaligned_operand (operands[1], V2DFmode))
	return "vmovdqu64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1078 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V16SImode)))
    {
      if (misaligned_operand (operands[0], V16SImode))
	return "vmovud\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovad\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V16SImode))
	return "vmovdqu32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1079 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V8SImode)))
    {
      if (misaligned_operand (operands[0], V8SImode))
	return "vmovud\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovad\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V8SImode))
	return "vmovdqu32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1080 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V4SImode)))
    {
      if (misaligned_operand (operands[0], V4SImode))
	return "vmovud\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovad\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V4SImode))
	return "vmovdqu32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1081 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V8DImode)))
    {
      if (misaligned_operand (operands[0], V8DImode))
	return "vmovuq\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovaq\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V8DImode))
	return "vmovdqu64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1082 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V4DImode)))
    {
      if (misaligned_operand (operands[0], V4DImode))
	return "vmovuq\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovaq\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V4DImode))
	return "vmovdqu64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1083 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V2DImode)))
    {
      if (misaligned_operand (operands[0], V2DImode))
	return "vmovuq\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovaq\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V2DImode))
	return "vmovdqu64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1084 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V16SFmode)))
    {
      if (misaligned_operand (operands[0], V16SFmode))
	return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovaps\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V16SFmode))
	return "vmovdqu32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1085 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V8SFmode)))
    {
      if (misaligned_operand (operands[0], V8SFmode))
	return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovaps\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V8SFmode))
	return "vmovdqu32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1086 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V4SFmode)))
    {
      if (misaligned_operand (operands[0], V4SFmode))
	return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovaps\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V4SFmode))
	return "vmovdqu32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa32\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1087 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V8DFmode)))
    {
      if (misaligned_operand (operands[0], V8DFmode))
	return "vmovupd\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovapd\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V8DFmode))
	return "vmovdqu64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1088 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V4DFmode)))
    {
      if (misaligned_operand (operands[0], V4DFmode))
	return "vmovupd\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovapd\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V4DFmode))
	return "vmovdqu64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1089 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1037 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (FLOAT_MODE_P (GET_MODE_INNER (V2DFmode)))
    {
      if (misaligned_operand (operands[0], V2DFmode))
	return "vmovupd\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovapd\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
  else
    {
      if (misaligned_operand (operands[0], V2DFmode))
	return "vmovdqu64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
      else
	return "vmovdqa64\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1098 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovups\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1099 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    default:
      return "%vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1100 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovups\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1101 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    default:
      return "%vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1102 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovups\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1103 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    default:
      return "%vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1104 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovupd\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1105 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    default:
      return "%vmovupd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1106 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovupd\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1107 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    default:
      return "%vmovupd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1108 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovupd\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1109 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1187 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    default:
      return "%vmovupd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1110 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1234 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovups\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1111 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1234 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovups\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1112 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1234 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovups\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1113 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1234 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovupd\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1114 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1234 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovupd\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1115 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1234 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovupd\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1116 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1270 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    default:
      return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1117 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1270 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    default:
      return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1118 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1270 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    default:
      return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1119 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1270 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    default:
      return "vmovupd\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1120 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1270 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    default:
      return "vmovupd\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1121 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1270 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "vmovups\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    default:
      return "vmovupd\t{%1, %0%{%2%}|%0%{%2%}, %1}";
    }
}
}

static const char *
output_1122 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1370 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      if (!(TARGET_AVX512VL && TARGET_AVX512BW))
	return "%vmovdqu\t{%1, %0|%0, %1}";
      else
	return "vmovdqu8\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1123 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1370 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      if (!(TARGET_AVX512VL && TARGET_AVX512BW))
	return "%vmovdqu\t{%1, %0|%0, %1}";
      else
	return "vmovdqu8\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1124 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1370 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      if (!(TARGET_AVX512VL && TARGET_AVX512BW))
	return "%vmovdqu\t{%1, %0|%0, %1}";
      else
	return "vmovdqu8\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1125 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1370 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      if (!(TARGET_AVX512VL && TARGET_AVX512BW))
	return "%vmovdqu\t{%1, %0|%0, %1}";
      else
	return "vmovdqu8\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
    }
}
}

static const char *
output_1146 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1433 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      switch (V32QImode)
      {
      case V32QImode:
      case V16QImode:
	if (!(TARGET_AVX512VL && TARGET_AVX512BW))
	  return "%vmovdqu\t{%1, %0|%0, %1}";
      default:
	  return "vmovdqu8\t{%1, %0|%0, %1}";
      }
    }
}
}

static const char *
output_1147 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1433 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V16SF:
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      switch (V16QImode)
      {
      case V32QImode:
      case V16QImode:
	if (!(TARGET_AVX512VL && TARGET_AVX512BW))
	  return "%vmovdqu\t{%1, %0|%0, %1}";
      default:
	  return "vmovdqu8\t{%1, %0|%0, %1}";
      }
    }
}
}

static const char * const output_1188[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1189[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1190[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1191[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1192[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1193[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1194[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1195[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1196[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1197[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1198[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1199[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1200[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1201[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1202[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1203[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1204[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1205[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1206[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1207[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1208[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1209[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1210[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1211[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1212[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1213[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1214[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1215[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1216[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1217[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1218[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1219[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1220[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1221[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1222[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1223[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1224[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1225[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1226[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1227[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1228[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1229[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1230[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1231[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1232[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1233[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1234[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1235[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1236[] = {
  "addss\t{%2, %0|%0, %k2}",
  "vaddss\t{%2, %1, %0|%0, %1, %k2}",
};

static const char * const output_1237[] = {
  "addss\t{%2, %0|%0, %k2}",
  "vaddss\t{%R3%2, %1, %0|%0, %1, %k2%R3}",
};

static const char * const output_1238[] = {
  "subss\t{%2, %0|%0, %k2}",
  "vsubss\t{%2, %1, %0|%0, %1, %k2}",
};

static const char * const output_1239[] = {
  "subss\t{%2, %0|%0, %k2}",
  "vsubss\t{%R3%2, %1, %0|%0, %1, %k2%R3}",
};

static const char * const output_1240[] = {
  "addsd\t{%2, %0|%0, %q2}",
  "vaddsd\t{%2, %1, %0|%0, %1, %q2}",
};

static const char * const output_1241[] = {
  "addsd\t{%2, %0|%0, %q2}",
  "vaddsd\t{%R3%2, %1, %0|%0, %1, %q2%R3}",
};

static const char * const output_1242[] = {
  "subsd\t{%2, %0|%0, %q2}",
  "vsubsd\t{%2, %1, %0|%0, %1, %q2}",
};

static const char * const output_1243[] = {
  "subsd\t{%2, %0|%0, %q2}",
  "vsubsd\t{%R3%2, %1, %0|%0, %1, %q2%R3}",
};

static const char * const output_1244[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1245[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1246[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1247[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1248[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1249[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1250[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1251[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1252[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1253[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1254[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1255[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1256[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1257[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1258[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1259[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1260[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1261[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1262[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1263[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1264[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1265[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1266[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1267[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1268[] = {
  "mulss\t{%2, %0|%0, %k2}",
  "vmulss\t{%2, %1, %0|%0, %1, %k2}",
};

static const char * const output_1269[] = {
  "mulss\t{%2, %0|%0, %k2}",
  "vmulss\t{%R3%2, %1, %0|%0, %1, %k2%R3}",
};

static const char * const output_1270[] = {
  "divss\t{%2, %0|%0, %k2}",
  "vdivss\t{%2, %1, %0|%0, %1, %k2}",
};

static const char * const output_1271[] = {
  "divss\t{%2, %0|%0, %k2}",
  "vdivss\t{%R3%2, %1, %0|%0, %1, %k2%R3}",
};

static const char * const output_1272[] = {
  "mulsd\t{%2, %0|%0, %q2}",
  "vmulsd\t{%2, %1, %0|%0, %1, %q2}",
};

static const char * const output_1273[] = {
  "mulsd\t{%2, %0|%0, %q2}",
  "vmulsd\t{%R3%2, %1, %0|%0, %1, %q2%R3}",
};

static const char * const output_1274[] = {
  "divsd\t{%2, %0|%0, %q2}",
  "vdivsd\t{%2, %1, %0|%0, %1, %q2}",
};

static const char * const output_1275[] = {
  "divsd\t{%2, %0|%0, %q2}",
  "vdivsd\t{%R3%2, %1, %0|%0, %1, %q2%R3}",
};

static const char * const output_1276[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1277[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1278[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1279[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1280[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1281[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1282[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1283[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1284[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1285[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%R3%2, %1, %0|%0, %1, %2%R3}",
};

static const char * const output_1286[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1287[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%R5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%R5}",
};

static const char * const output_1288[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1289[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1290[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1291[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1294[] = {
  "rcpss\t{%1, %0|%0, %k1}",
  "vrcpss\t{%1, %2, %0|%0, %2, %k1}",
};

static const char * const output_1309[] = {
  "sqrtps\t{%1, %0|%0, %1}",
  "vsqrtps\t{%1, %0|%0, %1}",
};

static const char * const output_1310[] = {
  "sqrtps\t{%1, %0|%0, %1}",
  "vsqrtps\t{%R2%1, %0|%0, %1%R2}",
};

static const char * const output_1311[] = {
  "sqrtps\t{%1, %0|%0, %1}",
  "vsqrtps\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_1312[] = {
  "sqrtps\t{%1, %0|%0, %1}",
  "vsqrtps\t{%R4%1, %0%{%3%}%N2|%0%{%3%}%N2, %1%R4}",
};

static const char * const output_1313[] = {
  "sqrtps\t{%1, %0|%0, %1}",
  "vsqrtps\t{%1, %0|%0, %1}",
};

static const char * const output_1314[] = {
  "sqrtps\t{%1, %0|%0, %1}",
  "vsqrtps\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_1315[] = {
  "sqrtps\t{%1, %0|%0, %1}",
  "vsqrtps\t{%1, %0|%0, %1}",
};

static const char * const output_1316[] = {
  "sqrtps\t{%1, %0|%0, %1}",
  "vsqrtps\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_1317[] = {
  "sqrtpd\t{%1, %0|%0, %1}",
  "vsqrtpd\t{%1, %0|%0, %1}",
};

static const char * const output_1318[] = {
  "sqrtpd\t{%1, %0|%0, %1}",
  "vsqrtpd\t{%R2%1, %0|%0, %1%R2}",
};

static const char * const output_1319[] = {
  "sqrtpd\t{%1, %0|%0, %1}",
  "vsqrtpd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_1320[] = {
  "sqrtpd\t{%1, %0|%0, %1}",
  "vsqrtpd\t{%R4%1, %0%{%3%}%N2|%0%{%3%}%N2, %1%R4}",
};

static const char * const output_1321[] = {
  "sqrtpd\t{%1, %0|%0, %1}",
  "vsqrtpd\t{%1, %0|%0, %1}",
};

static const char * const output_1322[] = {
  "sqrtpd\t{%1, %0|%0, %1}",
  "vsqrtpd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_1323[] = {
  "sqrtpd\t{%1, %0|%0, %1}",
  "vsqrtpd\t{%1, %0|%0, %1}",
};

static const char * const output_1324[] = {
  "sqrtpd\t{%1, %0|%0, %1}",
  "vsqrtpd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_1325[] = {
  "sqrtss\t{%1, %0|%0, %k1}",
  "vsqrtss\t{%1, %2, %0|%0, %2, %k1}",
};

static const char * const output_1326[] = {
  "sqrtss\t{%1, %0|%0, %k1}",
  "vsqrtss\t{%R3%1, %2, %0|%0, %2, %k1%R3}",
};

static const char * const output_1327[] = {
  "sqrtsd\t{%1, %0|%0, %q1}",
  "vsqrtsd\t{%1, %2, %0|%0, %2, %q1}",
};

static const char * const output_1328[] = {
  "sqrtsd\t{%1, %0|%0, %q1}",
  "vsqrtsd\t{%R3%1, %2, %0|%0, %2, %q1%R3}",
};

static const char * const output_1345[] = {
  "rsqrtss\t{%1, %0|%0, %k1}",
  "vrsqrtss\t{%1, %2, %0|%0, %2, %k1}",
};

static const char * const output_1346[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1347[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1348[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1349[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1350[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1351[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1352[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1353[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1354[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1355[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1356[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1357[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1358[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1359[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1360[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1361[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1362[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1363[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1364[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1365[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1366[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1367[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1368[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1369[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1370[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1371[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1372[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1373[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1374[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1375[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1376[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1377[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1378[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1379[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1380[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1381[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1382[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1383[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1384[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1385[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1386[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1387[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1388[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1389[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1390[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1391[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1392[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1393[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1394[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1395[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1396[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1397[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1398[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1399[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1400[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1401[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1402[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1403[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1404[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1405[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1406[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1407[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1408[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1409[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1410[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1411[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1412[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1413[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1414[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1415[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%r3%2, %1, %0|%0, %1, %2%r3}",
};

static const char * const output_1416[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1417[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%r5%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2%r5}",
};

static const char * const output_1418[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1419[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1420[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1421[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1422[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1423[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1424[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1425[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_1426[] = {
  "maxss\t{%2, %0|%0, %k2}",
  "vmaxss\t{%2, %1, %0|%0, %1, %k2}",
};

static const char * const output_1427[] = {
  "maxss\t{%2, %0|%0, %k2}",
  "vmaxss\t{%r3%2, %1, %0|%0, %1, %k2%r3}",
};

static const char * const output_1428[] = {
  "minss\t{%2, %0|%0, %k2}",
  "vminss\t{%2, %1, %0|%0, %1, %k2}",
};

static const char * const output_1429[] = {
  "minss\t{%2, %0|%0, %k2}",
  "vminss\t{%r3%2, %1, %0|%0, %1, %k2%r3}",
};

static const char * const output_1430[] = {
  "maxsd\t{%2, %0|%0, %q2}",
  "vmaxsd\t{%2, %1, %0|%0, %1, %q2}",
};

static const char * const output_1431[] = {
  "maxsd\t{%2, %0|%0, %q2}",
  "vmaxsd\t{%r3%2, %1, %0|%0, %1, %q2%r3}",
};

static const char * const output_1432[] = {
  "minsd\t{%2, %0|%0, %q2}",
  "vminsd\t{%2, %1, %0|%0, %1, %q2}",
};

static const char * const output_1433[] = {
  "minsd\t{%2, %0|%0, %q2}",
  "vminsd\t{%r3%2, %1, %0|%0, %1, %q2%r3}",
};

static const char * const output_1434[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1435[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1436[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1437[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1438[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1439[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1440[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1441[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1442[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1443[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1444[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1445[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1447[] = {
  "addsubpd\t{%2, %0|%0, %2}",
  "vaddsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1449[] = {
  "addsubps\t{%2, %0|%0, %2}",
  "vaddsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1452[] = {
  "haddpd\t{%2, %0|%0, %2}",
  "vhaddpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1453[] = {
  "hsubpd\t{%2, %0|%0, %2}",
  "vhsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1454[] = {
  "haddpd\t{%0, %0|%0, %0}",
  "vhaddpd\t{%1, %1, %0|%0, %1, %1}",
};

static const char * const output_1455[] = {
  "hsubpd\t{%0, %0|%0, %0}",
  "vhsubpd\t{%1, %1, %0|%0, %1, %1}",
};

static const char * const output_1458[] = {
  "haddps\t{%2, %0|%0, %2}",
  "vhaddps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1459[] = {
  "hsubps\t{%2, %0|%0, %2}",
  "vhsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1480[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1481[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1482[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1483[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1484[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1485[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1486[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1487[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1488[] = {
  "cmp%D3ss\t{%2, %0|%0, %k2}",
  "vcmp%D3ss\t{%2, %1, %0|%0, %1, %k2}",
};

static const char * const output_1489[] = {
  "cmp%D3sd\t{%2, %0|%0, %q2}",
  "vcmp%D3sd\t{%2, %1, %0|%0, %1, %q2}",
};

static const char *
output_1580 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3133 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8SFmode) == DFmode ? "q" : "d";
      ops = "vpandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1581 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3133 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8SFmode) == DFmode ? "q" : "d";
      ops = "vpandn%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1582 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3133 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4SFmode) == DFmode ? "q" : "d";
      ops = "vpandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1583 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3133 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4SFmode) == DFmode ? "q" : "d";
      ops = "vpandn%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1584 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3133 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4DFmode) == DFmode ? "q" : "d";
      ops = "vpandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1585 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3133 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4DFmode) == DFmode ? "q" : "d";
      ops = "vpandn%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1586 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3133 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V2DFmode) == DFmode ? "q" : "d";
      ops = "vpandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1587 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3133 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V2DFmode) == DFmode ? "q" : "d";
      ops = "vpandn%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1588 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3192 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "ps";
  ops = "";

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (!TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V16SFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	    "v%sandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}",
	    ops, suffix);
  return buf;
}
}

static const char *
output_1589 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3192 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "ps";
  ops = "";

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (!TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V16SFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	    "v%sandn%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}",
	    ops, suffix);
  return buf;
}
}

static const char *
output_1590 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3192 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "pd";
  ops = "";

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (!TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8DFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	    "v%sandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}",
	    ops, suffix);
  return buf;
}
}

static const char *
output_1591 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3192 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "pd";
  ops = "";

  /* There is no vandnp[sd] in avx512f.  Use vpandn[qd].  */
  if (!TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8DFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	    "v%sandn%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}",
	    ops, suffix);
  return buf;
}
}

static const char *
output_1592 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8SFmode) == DFmode ? "q" : "d";
      ops = "vpand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1593 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8SFmode) == DFmode ? "q" : "d";
      ops = "vpand%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1594 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8SFmode) == DFmode ? "q" : "d";
      ops = "vpor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1595 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8SFmode) == DFmode ? "q" : "d";
      ops = "vpor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1596 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8SFmode) == DFmode ? "q" : "d";
      ops = "vpxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1597 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8SFmode) == DFmode ? "q" : "d";
      ops = "vpxor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1598 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4SFmode) == DFmode ? "q" : "d";
      ops = "vpand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1599 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4SFmode) == DFmode ? "q" : "d";
      ops = "vpand%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1600 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4SFmode) == DFmode ? "q" : "d";
      ops = "vpor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1601 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4SFmode) == DFmode ? "q" : "d";
      ops = "vpor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1602 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4SFmode) == DFmode ? "q" : "d";
      ops = "vpxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1603 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4SFmode) == DFmode ? "q" : "d";
      ops = "vpxor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1604 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4DFmode) == DFmode ? "q" : "d";
      ops = "vpand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1605 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4DFmode) == DFmode ? "q" : "d";
      ops = "vpand%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1606 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4DFmode) == DFmode ? "q" : "d";
      ops = "vpor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1607 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4DFmode) == DFmode ? "q" : "d";
      ops = "vpor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1608 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4DFmode) == DFmode ? "q" : "d";
      ops = "vpxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1609 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V4DFmode) == DFmode ? "q" : "d";
      ops = "vpxor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1610 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V2DFmode) == DFmode ? "q" : "d";
      ops = "vpand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1611 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V2DFmode) == DFmode ? "q" : "d";
      ops = "vpand%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1612 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V2DFmode) == DFmode ? "q" : "d";
      ops = "vpor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1613 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V2DFmode) == DFmode ? "q" : "d";
      ops = "vpor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1614 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if (false && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V2DFmode) == DFmode ? "q" : "d";
      ops = "vpxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1615 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3239 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if (true && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V2DFmode) == DFmode ? "q" : "d";
      ops = "vpxor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1616 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "ps";
  ops = "";

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if ((64 == 64 || false) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V16SFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1617 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "ps";
  ops = "";

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if ((64 == 64 || true) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V16SFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sand%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1618 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "ps";
  ops = "";

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if ((64 == 64 || false) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V16SFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1619 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "ps";
  ops = "";

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if ((64 == 64 || true) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V16SFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1620 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "ps";
  ops = "";

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if ((64 == 64 || false) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V16SFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1621 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "ps";
  ops = "";

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if ((64 == 64 || true) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V16SFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sxor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1622 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "pd";
  ops = "";

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if ((64 == 64 || false) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8DFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1623 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "pd";
  ops = "";

  /* There is no vandp[sd] in avx512f.  Use vpand[dq].  */
  if ((64 == 64 || true) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8DFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sand%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1624 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "pd";
  ops = "";

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if ((64 == 64 || false) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8DFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1625 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "pd";
  ops = "";

  /* There is no vorp[sd] in avx512f.  Use vpor[dq].  */
  if ((64 == 64 || true) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8DFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1626 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "pd";
  ops = "";

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if ((64 == 64 || false) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8DFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1627 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3296 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[128];
  const char *ops;
  const char *suffix;

  suffix = "pd";
  ops = "";

  /* There is no vxorp[sd] in avx512f.  Use vpxor[dq].  */
  if ((64 == 64 || true) && !TARGET_AVX512DQ)
    {
      suffix = GET_MODE_INNER (V8DFmode) == DFmode ? "q" : "d";
      ops = "p";
    }

  snprintf (buf, sizeof (buf),
	   "v%sxor%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}",
	   ops, suffix);
  return buf;
}
}

static const char *
output_1628 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3350 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1629 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3350 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1630 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp
    = (get_attr_mode (insn) == MODE_V4SF) ? "andnps" : "pandn";

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1631 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3438 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1632 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3438 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1633 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3438 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1634 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3438 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1635 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3438 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1636 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3438 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1637 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3488 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp
    = (get_attr_mode (insn) == MODE_V4SF) ? "andps" : "pand";

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1638 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3488 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp
    = (get_attr_mode (insn) == MODE_V4SF) ? "orps" : "por";

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1639 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3488 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp
    = (get_attr_mode (insn) == MODE_V4SF) ? "xorps" : "pxor";

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char * const output_1640[] = {
  "vfmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ss\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1641[] = {
  "vfmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231sd\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1642[] = {
  "vfmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1643[] = {
  "vfmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1644[] = {
  "vfmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1645[] = {
  "vfmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1646[] = {
  "vfmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1647[] = {
  "vfmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1648[] = {
  "vfmadd132ps\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfmadd213ps\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfmadd231ps\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1649[] = {
  "vfmadd132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1650[] = {
  "vfmadd132ps\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfmadd213ps\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfmadd231ps\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1651[] = {
  "vfmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1652[] = {
  "vfmadd132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1653[] = {
  "vfmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1654[] = {
  "vfmadd132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1655[] = {
  "vfmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1656[] = {
  "vfmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1657[] = {
  "vfmadd132pd\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfmadd213pd\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfmadd231pd\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1658[] = {
  "vfmadd132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1659[] = {
  "vfmadd132pd\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfmadd213pd\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfmadd231pd\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1660[] = {
  "vfmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1661[] = {
  "vfmadd132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1662[] = {
  "vfmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1663[] = {
  "vfmadd132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1664[] = {
  "vfmadd132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1665[] = {
  "vfmadd132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmadd213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1666[] = {
  "vfmadd132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1667[] = {
  "vfmadd132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1668[] = {
  "vfmadd132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1669[] = {
  "vfmadd132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmadd213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1670[] = {
  "vfmadd132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1671[] = {
  "vfmadd132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1684[] = {
  "vfmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ss\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1685[] = {
  "vfmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231sd\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1686[] = {
  "vfmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1687[] = {
  "vfmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1688[] = {
  "vfmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1689[] = {
  "vfmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1690[] = {
  "vfmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1691[] = {
  "vfmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1692[] = {
  "vfmsub132ps\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfmsub213ps\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfmsub231ps\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1693[] = {
  "vfmsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1694[] = {
  "vfmsub132ps\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfmsub213ps\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfmsub231ps\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1695[] = {
  "vfmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1696[] = {
  "vfmsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1697[] = {
  "vfmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1698[] = {
  "vfmsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1699[] = {
  "vfmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1700[] = {
  "vfmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1701[] = {
  "vfmsub132pd\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfmsub213pd\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfmsub231pd\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1702[] = {
  "vfmsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1703[] = {
  "vfmsub132pd\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfmsub213pd\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfmsub231pd\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1704[] = {
  "vfmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1705[] = {
  "vfmsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1706[] = {
  "vfmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1707[] = {
  "vfmsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1708[] = {
  "vfmsub132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1709[] = {
  "vfmsub132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsub213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1710[] = {
  "vfmsub132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1711[] = {
  "vfmsub132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsub213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1712[] = {
  "vfmsub132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1713[] = {
  "vfmsub132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsub213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1714[] = {
  "vfmsub132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1715[] = {
  "vfmsub132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsub213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1716[] = {
  "vfmsub132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1717[] = {
  "vfmsub132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsub213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1718[] = {
  "vfmsub132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1719[] = {
  "vfmsub132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsub213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1728[] = {
  "vfnmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ss\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1729[] = {
  "vfnmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231sd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1730[] = {
  "vfnmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1731[] = {
  "vfnmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1732[] = {
  "vfnmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1733[] = {
  "vfnmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1734[] = {
  "vfnmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1735[] = {
  "vfnmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1736[] = {
  "vfnmadd132ps\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfnmadd213ps\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfnmadd231ps\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1737[] = {
  "vfnmadd132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1738[] = {
  "vfnmadd132ps\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfnmadd213ps\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfnmadd231ps\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1739[] = {
  "vfnmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1740[] = {
  "vfnmadd132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1741[] = {
  "vfnmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1742[] = {
  "vfnmadd132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1743[] = {
  "vfnmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1744[] = {
  "vfnmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1745[] = {
  "vfnmadd132pd\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfnmadd213pd\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfnmadd231pd\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1746[] = {
  "vfnmadd132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1747[] = {
  "vfnmadd132pd\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfnmadd213pd\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfnmadd231pd\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1748[] = {
  "vfnmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1749[] = {
  "vfnmadd132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1750[] = {
  "vfnmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1751[] = {
  "vfnmadd132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1752[] = {
  "vfnmadd132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1753[] = {
  "vfnmadd132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfnmadd213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1754[] = {
  "vfnmadd132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1755[] = {
  "vfnmadd132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1756[] = {
  "vfnmadd132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1757[] = {
  "vfnmadd132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfnmadd213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1758[] = {
  "vfnmadd132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1759[] = {
  "vfnmadd132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1768[] = {
  "vfnmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ss\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1769[] = {
  "vfnmsub132ss\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfnmsub213ss\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfnmsub231ss\t{%R4%2, %1, %0|%0, %1, %2%R4}",
  "vfnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1770[] = {
  "vfnmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231sd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1771[] = {
  "vfnmsub132sd\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfnmsub213sd\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfnmsub231sd\t{%R4%2, %1, %0|%0, %1, %2%R4}",
  "vfnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1772[] = {
  "vfnmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1773[] = {
  "vfnmsub132ps\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfnmsub213ps\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfnmsub231ps\t{%R4%2, %1, %0|%0, %1, %2%R4}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1774[] = {
  "vfnmsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1775[] = {
  "vfnmsub132ps\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfnmsub213ps\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfnmsub231ps\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1776[] = {
  "vfnmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1777[] = {
  "vfnmsub132pd\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfnmsub213pd\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfnmsub231pd\t{%R4%2, %1, %0|%0, %1, %2%R4}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1778[] = {
  "vfnmsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1779[] = {
  "vfnmsub132pd\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfnmsub213pd\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfnmsub231pd\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1780[] = {
  "vfnmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1781[] = {
  "vfnmsub132ps\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfnmsub213ps\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfnmsub231ps\t{%R4%2, %1, %0|%0, %1, %2%R4}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1782[] = {
  "vfnmsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1783[] = {
  "vfnmsub132ps\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfnmsub213ps\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfnmsub231ps\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1784[] = {
  "vfnmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1785[] = {
  "vfnmsub132pd\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfnmsub213pd\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfnmsub231pd\t{%R4%2, %1, %0|%0, %1, %2%R4}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1786[] = {
  "vfnmsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1787[] = {
  "vfnmsub132pd\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfnmsub213pd\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfnmsub231pd\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1788[] = {
  "vfnmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1789[] = {
  "vfnmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1790[] = {
  "vfnmsub132ps\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfnmsub213ps\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfnmsub231ps\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1791[] = {
  "vfnmsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1792[] = {
  "vfnmsub132ps\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfnmsub213ps\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfnmsub231ps\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1793[] = {
  "vfnmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1794[] = {
  "vfnmsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1795[] = {
  "vfnmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1796[] = {
  "vfnmsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1797[] = {
  "vfnmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1798[] = {
  "vfnmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1799[] = {
  "vfnmsub132pd\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfnmsub213pd\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfnmsub231pd\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1800[] = {
  "vfnmsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1801[] = {
  "vfnmsub132pd\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfnmsub213pd\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfnmsub231pd\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1802[] = {
  "vfnmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1803[] = {
  "vfnmsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1804[] = {
  "vfnmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1805[] = {
  "vfnmsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1806[] = {
  "vfnmsub132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1807[] = {
  "vfnmsub132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfnmsub213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1808[] = {
  "vfnmsub132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1809[] = {
  "vfnmsub132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1810[] = {
  "vfnmsub132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1811[] = {
  "vfnmsub132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfnmsub213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1812[] = {
  "vfnmsub132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1813[] = {
  "vfnmsub132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1826[] = {
  "vfmaddsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1827[] = {
  "vfmaddsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1828[] = {
  "vfmaddsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1829[] = {
  "vfmaddsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1830[] = {
  "vfmaddsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1831[] = {
  "vfmaddsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1832[] = {
  "vfmaddsub132ps\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfmaddsub213ps\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfmaddsub231ps\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1833[] = {
  "vfmaddsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1834[] = {
  "vfmaddsub132ps\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfmaddsub213ps\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfmaddsub231ps\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1835[] = {
  "vfmaddsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1836[] = {
  "vfmaddsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1837[] = {
  "vfmaddsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1838[] = {
  "vfmaddsub132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1839[] = {
  "vfmaddsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1840[] = {
  "vfmaddsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1841[] = {
  "vfmaddsub132pd\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfmaddsub213pd\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfmaddsub231pd\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1842[] = {
  "vfmaddsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1843[] = {
  "vfmaddsub132pd\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfmaddsub213pd\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfmaddsub231pd\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1844[] = {
  "vfmaddsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1845[] = {
  "vfmaddsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1846[] = {
  "vfmaddsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1847[] = {
  "vfmaddsub132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1848[] = {
  "vfmaddsub132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1849[] = {
  "vfmaddsub132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmaddsub213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1850[] = {
  "vfmaddsub132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1851[] = {
  "vfmaddsub132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmaddsub213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1852[] = {
  "vfmaddsub132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1853[] = {
  "vfmaddsub132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmaddsub213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1854[] = {
  "vfmaddsub132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1855[] = {
  "vfmaddsub132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmaddsub213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1856[] = {
  "vfmaddsub132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1857[] = {
  "vfmaddsub132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmaddsub213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1858[] = {
  "vfmaddsub132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1859[] = {
  "vfmaddsub132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmaddsub213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1872[] = {
  "vfmsubadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1873[] = {
  "vfmsubadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1874[] = {
  "vfmsubadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1875[] = {
  "vfmsubadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1876[] = {
  "vfmsubadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1877[] = {
  "vfmsubadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1878[] = {
  "vfmsubadd132ps\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfmsubadd213ps\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfmsubadd231ps\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1879[] = {
  "vfmsubadd132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1880[] = {
  "vfmsubadd132ps\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfmsubadd213ps\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfmsubadd231ps\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1881[] = {
  "vfmsubadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1882[] = {
  "vfmsubadd132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1883[] = {
  "vfmsubadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1884[] = {
  "vfmsubadd132ps\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1885[] = {
  "vfmsubadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1886[] = {
  "vfmsubadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1887[] = {
  "vfmsubadd132pd\t{%R4%2, %3, %0|%0, %3, %2%R4}",
  "vfmsubadd213pd\t{%R4%3, %2, %0|%0, %2, %3%R4}",
  "vfmsubadd231pd\t{%R4%2, %1, %0|%0, %1, %2%R4}",
};

static const char * const output_1888[] = {
  "vfmsubadd132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1889[] = {
  "vfmsubadd132pd\t{%R6%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2%R6}",
  "vfmsubadd213pd\t{%R6%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3%R6}",
  "vfmsubadd231pd\t{%R6%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2%R6}",
};

static const char * const output_1890[] = {
  "vfmsubadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1891[] = {
  "vfmsubadd132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1892[] = {
  "vfmsubadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1893[] = {
  "vfmsubadd132pd\t{%2, %3, %0%{%5%}%N4|%0%{%5%}%N4, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0%{%5%}%N4|%0%{%5%}%N4, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_1894[] = {
  "vfmsubadd132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1895[] = {
  "vfmsubadd132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsubadd213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1896[] = {
  "vfmsubadd132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1897[] = {
  "vfmsubadd132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsubadd213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1898[] = {
  "vfmsubadd132ps\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1899[] = {
  "vfmsubadd132ps\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsubadd213ps\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1900[] = {
  "vfmsubadd132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1901[] = {
  "vfmsubadd132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsubadd213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1902[] = {
  "vfmsubadd132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1903[] = {
  "vfmsubadd132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsubadd213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1904[] = {
  "vfmsubadd132pd\t{%2, %3, %0%{%4%}|%0%{%4%}, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0%{%4%}|%0%{%4%}, %2, %3}",
};

static const char * const output_1905[] = {
  "vfmsubadd132pd\t{%R5%2, %3, %0%{%4%}|%0%{%4%}, %3, %2%R5}",
  "vfmsubadd213pd\t{%R5%3, %2, %0%{%4%}|%0%{%4%}, %2, %3%R5}",
};

static const char * const output_1918[] = {
  "vfmadd132ss\t{%2, %3, %0|%0, %k3, %k2}",
  "vfmadd213ss\t{%3, %2, %0|%0, %k2, %k3}",
};

static const char * const output_1919[] = {
  "vfmadd132ss\t{%R4%2, %3, %0|%0, %k3, %k2%R4}",
  "vfmadd213ss\t{%R4%3, %2, %0|%0, %k2, %k3%R4}",
};

static const char * const output_1920[] = {
  "vfmadd132sd\t{%2, %3, %0|%0, %q3, %q2}",
  "vfmadd213sd\t{%3, %2, %0|%0, %q2, %q3}",
};

static const char * const output_1921[] = {
  "vfmadd132sd\t{%R4%2, %3, %0|%0, %q3, %q2%R4}",
  "vfmadd213sd\t{%R4%3, %2, %0|%0, %q2, %q3%R4}",
};

static const char * const output_1922[] = {
  "vfmsub132ss\t{%2, %3, %0|%0, %k3, %k2}",
  "vfmsub213ss\t{%3, %2, %0|%0, %k2, %k3}",
};

static const char * const output_1923[] = {
  "vfmsub132ss\t{%R4%2, %3, %0|%0, %k3, %k2%R4}",
  "vfmsub213ss\t{%R4%3, %2, %0|%0, %k2, %k3%R4}",
};

static const char * const output_1924[] = {
  "vfmsub132sd\t{%2, %3, %0|%0, %q3, %q2}",
  "vfmsub213sd\t{%3, %2, %0|%0, %q2, %q3}",
};

static const char * const output_1925[] = {
  "vfmsub132sd\t{%R4%2, %3, %0|%0, %q3, %q2%R4}",
  "vfmsub213sd\t{%R4%3, %2, %0|%0, %q2, %q3%R4}",
};

static const char * const output_1926[] = {
  "vfnmadd132ss\t{%2, %3, %0|%0, %k3, %k2}",
  "vfnmadd213ss\t{%3, %2, %0|%0, %k2, %k3}",
};

static const char * const output_1927[] = {
  "vfnmadd132ss\t{%R4%2, %3, %0|%0, %k3, %k2%R4}",
  "vfnmadd213ss\t{%R4%3, %2, %0|%0, %k2, %k3%R4}",
};

static const char * const output_1928[] = {
  "vfnmadd132sd\t{%2, %3, %0|%0, %q3, %q2}",
  "vfnmadd213sd\t{%3, %2, %0|%0, %q2, %q3}",
};

static const char * const output_1929[] = {
  "vfnmadd132sd\t{%R4%2, %3, %0|%0, %q3, %q2%R4}",
  "vfnmadd213sd\t{%R4%3, %2, %0|%0, %q2, %q3%R4}",
};

static const char * const output_1930[] = {
  "vfnmsub132ss\t{%2, %3, %0|%0, %k3, %k2}",
  "vfnmsub213ss\t{%3, %2, %0|%0, %k2, %k3}",
};

static const char * const output_1931[] = {
  "vfnmsub132ss\t{%R4%2, %3, %0|%0, %k3, %k2%R4}",
  "vfnmsub213ss\t{%R4%3, %2, %0|%0, %k2, %k3%R4}",
};

static const char * const output_1932[] = {
  "vfnmsub132sd\t{%2, %3, %0|%0, %q3, %q2}",
  "vfnmsub213sd\t{%3, %2, %0|%0, %q2, %q3}",
};

static const char * const output_1933[] = {
  "vfnmsub132sd\t{%R4%2, %3, %0|%0, %q3, %q2%R4}",
  "vfnmsub213sd\t{%R4%3, %2, %0|%0, %q2, %q3%R4}",
};

static const char * const output_1945[] = {
  "cvtsi2ss\t{%2, %0|%0, %2}",
  "cvtsi2ss\t{%2, %0|%0, %2}",
  "vcvtsi2ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1946[] = {
  "cvtsi2ss\t{%2, %0|%0, %2}",
  "cvtsi2ss\t{%2, %0|%0, %2}",
  "vcvtsi2ss\t{%2, %R3%1, %0|%0, %1%R3, %2}",
};

static const char * const output_1955[] = {
  "cvtdq2ps\t{%1, %0|%0, %1}",
  "vcvtdq2ps\t{%1, %0|%0, %1}",
};

static const char * const output_1956[] = {
  "cvtdq2ps\t{%1, %0|%0, %1}",
  "vcvtdq2ps\t{%R2%1, %0|%0, %1%R2}",
};

static const char * const output_1957[] = {
  "cvtdq2ps\t{%1, %0|%0, %1}",
  "vcvtdq2ps\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_1958[] = {
  "cvtdq2ps\t{%1, %0|%0, %1}",
  "vcvtdq2ps\t{%R4%1, %0%{%3%}%N2|%0%{%3%}%N2, %1%R4}",
};

static const char * const output_1959[] = {
  "cvtdq2ps\t{%1, %0|%0, %1}",
  "vcvtdq2ps\t{%1, %0|%0, %1}",
};

static const char * const output_1960[] = {
  "cvtdq2ps\t{%1, %0|%0, %1}",
  "vcvtdq2ps\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_1961[] = {
  "cvtdq2ps\t{%1, %0|%0, %1}",
  "vcvtdq2ps\t{%1, %0|%0, %1}",
};

static const char * const output_1962[] = {
  "cvtdq2ps\t{%1, %0|%0, %1}",
  "vcvtdq2ps\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_2026[] = {
  "cvtsi2sd\t{%2, %0|%0, %2}",
  "cvtsi2sd\t{%2, %0|%0, %2}",
  "vcvtsi2sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_2103 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5099 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvtpd2dq{x}\t{%1, %0|%0, %1}";
  else
    return "cvtpd2dq\t{%1, %0|%0, %1}";
}
}

static const char *
output_2104 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5099 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvtpd2dq{x}\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
  else
    return "cvtpd2dq\t{%1, %0|%0, %1}";
}
}

static const char *
output_2181 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5259 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvttpd2dq{x}\t{%1, %0|%0, %1}";
  else
    return "cvttpd2dq\t{%1, %0|%0, %1}";
}
}

static const char *
output_2182 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5259 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvttpd2dq{x}\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}";
  else
    return "cvttpd2dq\t{%1, %0|%0, %1}";
}
}

static const char * const output_2183[] = {
  "cvtsd2ss\t{%2, %0|%0, %2}",
  "cvtsd2ss\t{%2, %0|%0, %q2}",
  "vcvtsd2ss\t{%2, %1, %0|%0, %1, %q2}",
};

static const char * const output_2184[] = {
  "cvtsd2ss\t{%2, %0|%0, %2}",
  "cvtsd2ss\t{%2, %0|%0, %q2}",
  "vcvtsd2ss\t{%R3%2, %1, %0|%0, %1, %q2%R3}",
};

static const char * const output_2185[] = {
  "cvtss2sd\t{%2, %0|%0, %2}",
  "cvtss2sd\t{%2, %0|%0, %k2}",
  "vcvtss2sd\t{%2, %1, %0|%0, %1, %k2}",
};

static const char * const output_2186[] = {
  "cvtss2sd\t{%2, %0|%0, %2}",
  "cvtss2sd\t{%2, %0|%0, %k2}",
  "vcvtss2sd\t{%r3%2, %1, %0|%0, %1, %k2%r3}",
};

static const char *
output_2193 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5366 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvtpd2ps{x}\t{%1, %0|%0, %1}";
  else
    return "cvtpd2ps\t{%1, %0|%0, %1}";
}
}

static const char *
output_2194 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5366 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvtpd2ps{x}\t{%1, %0%{%4%}%N3|%0%{%4%}%N3, %1}";
  else
    return "cvtpd2ps\t{%1, %0|%0, %1}";
}
}

static const char * const output_2229[] = {
  "movhlps\t{%2, %0|%0, %2}",
  "vmovhlps\t{%2, %1, %0|%0, %1, %2}",
  "movlps\t{%H2, %0|%0, %H2}",
  "vmovlps\t{%H2, %1, %0|%0, %1, %H2}",
  "%vmovhps\t{%2, %0|%q0, %2}",
};

static const char * const output_2230[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "movhps\t{%2, %0|%0, %q2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %q2}",
  "%vmovlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_2235[] = {
  "unpckhps\t{%2, %0|%0, %2}",
  "vunpckhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2236[] = {
  "unpckhps\t{%2, %0|%0, %2}",
  "vunpckhps\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2242[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_2255 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6518 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 8) << 4;
  mask |= (INTVAL (operands[6]) - 8) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_2256 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6518 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 8) << 4;
  mask |= (INTVAL (operands[6]) - 8) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0%{%12%}%N11|%0%{%12%}%N11, %1, %2, %3}";
}
}

static const char *
output_2257 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6566 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0%{%8%}%N7|%0%{%8%}%N7, %1, %2, %3}";
}
}

static const char *
output_2258 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6592 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufps\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2259 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6592 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufps\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_2260[] = {
  "%vmovhps\t{%1, %0|%q0, %1}",
  "%vmovhlps\t{%1, %d0|%d0, %1}",
  "%vmovlps\t{%H1, %d0|%d0, %H1}",
};

static const char * const output_2261[] = {
  "movhps\t{%2, %0|%0, %q2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %q2}",
  "movlhps\t{%2, %0|%0, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_2262[] = {
  "%vmovlps\t{%1, %0|%q0, %1}",
  "%vmovaps\t{%1, %0|%0, %1}",
  "%vmovlps\t{%1, %d0|%d0, %q1}",
};

static const char * const output_2263[] = {
  "shufps\t{$0xe4, %1, %0|%0, %1, 0xe4}",
  "vshufps\t{$0xe4, %1, %2, %0|%0, %2, %1, 0xe4}",
  "movlps\t{%2, %0|%0, %q2}",
  "vmovlps\t{%2, %1, %0|%0, %1, %q2}",
  "%vmovlps\t{%2, %0|%q0, %2}",
};

static const char * const output_2264[] = {
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2270[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "unpcklps\t{%2, %0|%0, %2}",
  "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
  "insertps\t{$0x10, %2, %0|%0, %2, 0x10}",
  "insertps\t{$0x10, %2, %0|%0, %2, 0x10}",
  "vinsertps\t{$0x10, %2, %1, %0|%0, %1, %2, 0x10}",
  "%vmovss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_2271[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_2272[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "movhps\t{%2, %0|%0, %q2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %q2}",
};

static const char * const output_2273[] = {
  "%vinsertps\t{$0xe, %d2, %0|%0, %d2, 0xe}",
  "%vinsertps\t{$0xe, %d2, %0|%0, %d2, 0xe}",
  "%vmovd\t{%2, %0|%0, %2}",
  "%vmovd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
  "pinsrd\t{$0, %2, %0|%0, %2, 0}",
  "pinsrd\t{$0, %2, %0|%0, %2, 0}",
  "vpinsrd\t{$0, %2, %1, %0|%0, %1, %2, 0}",
  "#",
  "#",
  "#",
};

static const char * const output_2274[] = {
  "%vinsertps\t{$0xe, %d2, %0|%0, %d2, 0xe}",
  "%vinsertps\t{$0xe, %d2, %0|%0, %d2, 0xe}",
  "%vmovss\t{%2, %0|%0, %2}",
  "%vmovd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
  "pinsrd\t{$0, %2, %0|%0, %2, 0}",
  "pinsrd\t{$0, %2, %0|%0, %2, 0}",
  "vpinsrd\t{$0, %2, %1, %0|%0, %1, %2, 0}",
  "#",
  "#",
  "#",
};

static const char *
output_2275 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6902 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])) << 4);
  switch (which_alternative)
    {
    case 0:
    case 1:
      return "insertps\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      return "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2276 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 6930 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (MEM_P (operands[2]))
    {
      unsigned count_s = INTVAL (operands[3]) >> 6;
      if (count_s)
	operands[3] = GEN_INT (INTVAL (operands[3]) & 0x3f);
      operands[2] = adjust_address_nv (operands[2], SFmode, count_s * 4);
    }
  switch (which_alternative)
    {
    case 0:
    case 1:
      return "insertps\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      return "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_2278[] = {
  "%vextractps\t{%2, %1, %0|%0, %1, %2}",
  "%vextractps\t{%2, %1, %0|%0, %1, %2}",
  "#",
  "#",
};

static const char *
output_2280 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7097 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 1);
  return "vextractf64x2\t{%2, %1, %0%{%5%}|%0%{%5%}, %1, %2}";
}
}

static const char *
output_2281 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7097 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 1);
  return "vextracti64x2\t{%2, %1, %0%{%5%}|%0%{%5%}, %1, %2}";
}
}

static const char *
output_2282 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7125 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 2);
  return "vextractf32x4\t{%2, %1, %0%{%7%}|%0%{%7%}, %1, %2}";
}
}

static const char *
output_2283 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7125 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 2);
  return "vextracti32x4\t{%2, %1, %0%{%7%}|%0%{%7%}, %1, %2}";
}
}

static const char *
output_2284 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7143 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 1);
  return "vextractf64x2\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_2285 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7143 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 1);
  return "vextractf64x2\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}";
}
}

static const char *
output_2286 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7143 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 1);
  return "vextracti64x2\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_2287 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7143 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 1);
  return "vextracti64x2\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}";
}
}

static const char *
output_2288 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7165 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 2);
  return "vextractf32x4\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_2289 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7165 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 2);
  return "vextractf32x4\t{%2, %1, %0%{%7%}%N6|%0%{%7%}%N6, %1, %2}";
}
}

static const char *
output_2290 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7165 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 2);
  return "vextracti32x4\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_2291 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7165 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT ((INTVAL (operands[2])) >> 2);
  return "vextracti32x4\t{%2, %1, %0%{%7%}%N6|%0%{%7%}%N6, %1, %2}";
}
}

static const char *
output_2294 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7258 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (false || !TARGET_AVX512VL)
    return "vextractf64x4\t{$0x0, %1, %0|%0, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2295 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7258 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (true || !TARGET_AVX512VL)
    return "vextractf64x4\t{$0x0, %1, %0%{%3%}%N2|%0%{%3%}%N2, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2296 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7258 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (false || !TARGET_AVX512VL)
    return "vextracti64x4\t{$0x0, %1, %0|%0, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2297 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7258 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (true || !TARGET_AVX512VL)
    return "vextracti64x4\t{$0x0, %1, %0%{%3%}%N2|%0%{%3%}%N2, %1, 0x0}";
  else
    return "#";
}
}

static const char * const output_2306[] = {
  "vextractf32x8\t{$0x1, %1, %0|%0, %1, 0x1}",
  "vextracti64x4\t{$0x1, %1, %0|%0, %1, 0x1}",
};

static const char * const output_2307[] = {
  "vextractf32x8\t{$0x1, %1, %0%{%3%}%N2|%0%{%3%}%N2, %1, 0x1}",
  "vextracti64x4\t{$0x1, %1, %0|%0, %1, 0x1}",
};

static const char * const output_2308[] = {
  "vextracti32x8\t{$0x1, %1, %0|%0, %1, 0x1}",
  "vextracti64x4\t{$0x1, %1, %0|%0, %1, 0x1}",
};

static const char * const output_2309[] = {
  "vextracti32x8\t{$0x1, %1, %0%{%3%}%N2|%0%{%3%}%N2, %1, 0x1}",
  "vextracti64x4\t{$0x1, %1, %0|%0, %1, 0x1}",
};

static const char *
output_2310 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7406 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (false)
    return "vextractf32x8\t{$0x0, %1, %0|%0, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2311 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7406 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (true)
    return "vextractf32x8\t{$0x0, %1, %0%{%3%}%N2|%0%{%3%}%N2, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2312 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7406 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (false)
    return "vextracti32x8\t{$0x0, %1, %0|%0, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2313 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7406 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (true)
    return "vextracti32x8\t{$0x0, %1, %0%{%3%}%N2|%0%{%3%}%N2, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2314 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7442 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (false)
    return "vextracti64x2\t{$0x0, %1, %0%{%3%}|%0%{%3%}, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2315 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7442 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (true)
    return "vextracti64x2\t{$0x0, %1, %0%{%3%}|%0%{%3%}, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2316 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7442 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (false)
    return "vextractf64x2\t{$0x0, %1, %0%{%3%}|%0%{%3%}, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2317 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7442 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (true)
    return "vextractf64x2\t{$0x0, %1, %0%{%3%}|%0%{%3%}, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2318 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7479 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
  {
    if (TARGET_AVX512DQ)
      return "vextracti64x2\t{$0x1, %1, %0|%0, %1, 0x1}";
    else
      return "vextracti32x4\t{$0x1, %1, %0|%0, %1, 0x1}";
  }
  else
    return "vextract%~128\t{$0x1, %1, %0|%0, %1, 0x1}";
}
}

static const char *
output_2319 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7479 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
  {
    if (TARGET_AVX512DQ)
      return "vextracti64x2\t{$0x1, %1, %0%{%3%}%N2|%0%{%3%}%N2, %1, 0x1}";
    else
      return "vextracti32x4\t{$0x1, %1, %0|%0, %1, 0x1}";
  }
  else
    return "vextract%~128\t{$0x1, %1, %0|%0, %1, 0x1}";
}
}

static const char *
output_2320 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7479 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
  {
    if (TARGET_AVX512DQ)
      return "vextractf64x2\t{$0x1, %1, %0|%0, %1, 0x1}";
    else
      return "vextractf32x4\t{$0x1, %1, %0|%0, %1, 0x1}";
  }
  else
    return "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}";
}
}

static const char *
output_2321 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7479 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
  {
    if (TARGET_AVX512DQ)
      return "vextractf64x2\t{$0x1, %1, %0%{%3%}%N2|%0%{%3%}%N2, %1, 0x1}";
    else
      return "vextractf32x4\t{$0x1, %1, %0|%0, %1, 0x1}";
  }
  else
    return "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}";
}
}

static const char *
output_2322 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7523 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (false)
    return "vextracti32x4\t{$0x0, %1, %0|%0, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2323 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7523 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (true)
    return "vextracti32x4\t{$0x0, %1, %0%{%3%}%N2|%0%{%3%}%N2, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2324 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7523 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (false)
    return "vextractf32x4\t{$0x0, %1, %0|%0, %1, 0x0}";
  else
    return "#";
}
}

static const char *
output_2325 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 7523 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (true)
    return "vextractf32x4\t{$0x0, %1, %0%{%3%}%N2|%0%{%3%}%N2, %1, 0x0}";
  else
    return "#";
}
}

static const char * const output_2332[] = {
  "vextract%~128\t{$0x1, %1, %0|%0, %1, 0x1}",
  "vextracti32x4\t{$0x1, %1, %0|%0, %1, 0x1}",
};

static const char * const output_2333[] = {
  "vextractf128\t{$0x1, %1, %0|%0, %1, 0x1}",
  "vextractf32x4\t{$0x1, %1, %0|%0, %1, 0x1}",
};

static const char * const output_2347[] = {
  "unpckhpd\t{%2, %0|%0, %2}",
  "vunpckhpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovddup\t{%H1, %0|%0, %H1}",
  "movlpd\t{%H1, %0|%0, %H1}",
  "vmovlpd\t{%H1, %2, %0|%0, %2, %H1}",
  "%vmovhpd\t{%1, %0|%q0, %1}",
};

static const char * const output_2348[] = {
  "vmovddup\t{%1, %0|%0, %1}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2349[] = {
  "vmovddup\t{%1, %0%{%4%}%N3|%0%{%4%}%N3, %1}",
  "vunpcklpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2350[] = {
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovddup\t{%1, %0|%0, %1}",
};

static const char * const output_2351[] = {
  "vunpcklpd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
  "vmovddup\t{%1, %0%{%4%}%N3|%0%{%4%}%N3, %1}",
};

static const char * const output_2353[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovddup\t{%1, %0|%0, %q1}",
  "movhpd\t{%2, %0|%0, %q2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %q2}",
  "%vmovlpd\t{%2, %H0|%H0, %2}",
};

static const char *
output_2516 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8413 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 16) << 4;
  mask |= (INTVAL (operands[6]) - 16) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_2517 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8413 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 16) << 4;
  mask |= (INTVAL (operands[6]) - 16) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0%{%20%}%N19|%0%{%20%}%N19, %1, %2, %3}";
}
}

static const char *
output_2518 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8466 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 8) << 1;
  mask |= (INTVAL (operands[5]) - 2) << 2;
  mask |= (INTVAL (operands[6]) - 10) << 3;
  mask |= (INTVAL (operands[7]) - 4) << 4;
  mask |= (INTVAL (operands[8]) - 12) << 5;
  mask |= (INTVAL (operands[9]) - 6) << 6;
  mask |= (INTVAL (operands[10]) - 14) << 7;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_2519 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8466 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 8) << 1;
  mask |= (INTVAL (operands[5]) - 2) << 2;
  mask |= (INTVAL (operands[6]) - 10) << 3;
  mask |= (INTVAL (operands[7]) - 4) << 4;
  mask |= (INTVAL (operands[8]) - 12) << 5;
  mask |= (INTVAL (operands[9]) - 6) << 6;
  mask |= (INTVAL (operands[10]) - 14) << 7;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0%{%12%}%N11|%0%{%12%}%N11, %1, %2, %3}";
}
}

static const char *
output_2520 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8515 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 4) << 1;
  mask |= (INTVAL (operands[5]) - 2) << 2;
  mask |= (INTVAL (operands[6]) - 6) << 3;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_2521 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8515 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 4) << 1;
  mask |= (INTVAL (operands[5]) - 2) << 2;
  mask |= (INTVAL (operands[6]) - 6) << 3;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0%{%8%}%N7|%0%{%8%}%N7, %1, %2, %3}";
}
}

static const char *
output_2522 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8557 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0%{%6%}%N5|%0%{6%}%N5, %1, %2, %3}";
}
}

static const char * const output_2527[] = {
  "punpckhqdq\t{%2, %0|%0, %2}",
  "vpunpckhqdq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2528[] = {
  "punpckhqdq\t{%2, %0|%0, %2}",
  "vpunpckhqdq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2533[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2534[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "vpunpcklqdq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char *
output_2535 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8680 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufpd\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2536 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 8680 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufpd\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_2537[] = {
  "%vmovhpd\t{%1, %0|%0, %1}",
  "unpckhpd\t%0, %0",
  "vunpckhpd\t{%d1, %0|%0, %d1}",
  "#",
  "#",
  "#",
};

static const char * const output_2538[] = {
  "movhps\t{%1, %0|%q0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_2539[] = {
  "%vmovlpd\t{%1, %0|%0, %1}",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_2540[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %q1}",
};

static const char * const output_2541[] = {
  "movhpd\t{%2, %0|%0, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "unpcklpd\t{%2, %0|%0, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "#",
  "#",
  "#",
};

static const char * const output_2542[] = {
  "%vmovsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "vmovlpd\t{%2, %1, %0|%0, %1, %2}",
  "movsd\t{%2, %0|%0, %2}",
  "vmovsd\t{%2, %1, %0|%0, %1, %2}",
  "shufpd\t{$2, %1, %0|%0, %1, 2}",
  "movhpd\t{%H1, %0|%0, %H1}",
  "vmovhpd\t{%H1, %2, %0|%0, %2, %H1}",
  "#",
  "#",
  "#",
};

static const char * const output_2543[] = {
  "movsd\t{%2, %0|%0, %2}",
  "vmovsd\t{%2, %1, %0|%0, %1, %2}",
  "movlpd\t{%2, %0|%0, %q2}",
  "vmovlpd\t{%2, %1, %0|%0, %1, %q2}",
  "%vmovlpd\t{%2, %0|%q0, %2}",
  "shufpd\t{$2, %1, %0|%0, %1, 2}",
  "movhps\t{%H1, %0|%0, %H1}",
  "vmovhps\t{%H1, %2, %0|%0, %2, %H1}",
  "%vmovhps\t{%1, %H0|%H0, %1}",
};

static const char * const output_2544[] = {
  "unpcklpd\t%0, %0",
  "%vmovddup\t{%1, %0|%0, %1}",
  "vmovddup\t{%1, %0|%0, %1}",
};

static const char * const output_2545[] = {
  "unpcklpd\t%0, %0",
  "%vmovddup\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
  "vmovddup\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_2546[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovddup\t{%1, %0|%0, %1}",
  "vmovddup\t{%1, %0|%0, %1}",
  "movhpd\t{%2, %0|%0, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovsd\t{%1, %0|%0, %1}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_2745[] = {
  "paddb\t{%2, %0|%0, %2}",
  "vpaddb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2746[] = {
  "paddb\t{%2, %0|%0, %2}",
  "vpaddb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2747[] = {
  "psubb\t{%2, %0|%0, %2}",
  "vpsubb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2748[] = {
  "psubb\t{%2, %0|%0, %2}",
  "vpsubb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2749[] = {
  "paddb\t{%2, %0|%0, %2}",
  "vpaddb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2750[] = {
  "paddb\t{%2, %0|%0, %2}",
  "vpaddb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2751[] = {
  "psubb\t{%2, %0|%0, %2}",
  "vpsubb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2752[] = {
  "psubb\t{%2, %0|%0, %2}",
  "vpsubb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2753[] = {
  "paddb\t{%2, %0|%0, %2}",
  "vpaddb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2754[] = {
  "paddb\t{%2, %0|%0, %2}",
  "vpaddb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2755[] = {
  "psubb\t{%2, %0|%0, %2}",
  "vpsubb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2756[] = {
  "psubb\t{%2, %0|%0, %2}",
  "vpsubb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2757[] = {
  "paddw\t{%2, %0|%0, %2}",
  "vpaddw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2758[] = {
  "paddw\t{%2, %0|%0, %2}",
  "vpaddw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2759[] = {
  "psubw\t{%2, %0|%0, %2}",
  "vpsubw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2760[] = {
  "psubw\t{%2, %0|%0, %2}",
  "vpsubw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2761[] = {
  "paddw\t{%2, %0|%0, %2}",
  "vpaddw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2762[] = {
  "paddw\t{%2, %0|%0, %2}",
  "vpaddw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2763[] = {
  "psubw\t{%2, %0|%0, %2}",
  "vpsubw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2764[] = {
  "psubw\t{%2, %0|%0, %2}",
  "vpsubw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2765[] = {
  "paddw\t{%2, %0|%0, %2}",
  "vpaddw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2766[] = {
  "paddw\t{%2, %0|%0, %2}",
  "vpaddw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2767[] = {
  "psubw\t{%2, %0|%0, %2}",
  "vpsubw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2768[] = {
  "psubw\t{%2, %0|%0, %2}",
  "vpsubw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2769[] = {
  "paddd\t{%2, %0|%0, %2}",
  "vpaddd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2770[] = {
  "paddd\t{%2, %0|%0, %2}",
  "vpaddd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2771[] = {
  "psubd\t{%2, %0|%0, %2}",
  "vpsubd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2772[] = {
  "psubd\t{%2, %0|%0, %2}",
  "vpsubd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2773[] = {
  "paddd\t{%2, %0|%0, %2}",
  "vpaddd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2774[] = {
  "paddd\t{%2, %0|%0, %2}",
  "vpaddd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2775[] = {
  "psubd\t{%2, %0|%0, %2}",
  "vpsubd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2776[] = {
  "psubd\t{%2, %0|%0, %2}",
  "vpsubd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2777[] = {
  "paddd\t{%2, %0|%0, %2}",
  "vpaddd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2778[] = {
  "paddd\t{%2, %0|%0, %2}",
  "vpaddd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2779[] = {
  "psubd\t{%2, %0|%0, %2}",
  "vpsubd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2780[] = {
  "psubd\t{%2, %0|%0, %2}",
  "vpsubd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2781[] = {
  "paddq\t{%2, %0|%0, %2}",
  "vpaddq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2782[] = {
  "paddq\t{%2, %0|%0, %2}",
  "vpaddq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2783[] = {
  "psubq\t{%2, %0|%0, %2}",
  "vpsubq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2784[] = {
  "psubq\t{%2, %0|%0, %2}",
  "vpsubq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2785[] = {
  "paddq\t{%2, %0|%0, %2}",
  "vpaddq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2786[] = {
  "paddq\t{%2, %0|%0, %2}",
  "vpaddq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2787[] = {
  "psubq\t{%2, %0|%0, %2}",
  "vpsubq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2788[] = {
  "psubq\t{%2, %0|%0, %2}",
  "vpsubq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2789[] = {
  "paddq\t{%2, %0|%0, %2}",
  "vpaddq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2790[] = {
  "paddq\t{%2, %0|%0, %2}",
  "vpaddq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2791[] = {
  "psubq\t{%2, %0|%0, %2}",
  "vpsubq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2792[] = {
  "psubq\t{%2, %0|%0, %2}",
  "vpsubq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2817[] = {
  "paddsb\t{%2, %0|%0, %2}",
  "vpaddsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2818[] = {
  "paddsb\t{%2, %0|%0, %2}",
  "vpaddsb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2819[] = {
  "paddusb\t{%2, %0|%0, %2}",
  "vpaddusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2820[] = {
  "paddusb\t{%2, %0|%0, %2}",
  "vpaddusb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2821[] = {
  "psubsb\t{%2, %0|%0, %2}",
  "vpsubsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2822[] = {
  "psubsb\t{%2, %0|%0, %2}",
  "vpsubsb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2823[] = {
  "psubusb\t{%2, %0|%0, %2}",
  "vpsubusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2824[] = {
  "psubusb\t{%2, %0|%0, %2}",
  "vpsubusb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2825[] = {
  "paddsb\t{%2, %0|%0, %2}",
  "vpaddsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2826[] = {
  "paddsb\t{%2, %0|%0, %2}",
  "vpaddsb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2827[] = {
  "paddusb\t{%2, %0|%0, %2}",
  "vpaddusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2828[] = {
  "paddusb\t{%2, %0|%0, %2}",
  "vpaddusb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2829[] = {
  "psubsb\t{%2, %0|%0, %2}",
  "vpsubsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2830[] = {
  "psubsb\t{%2, %0|%0, %2}",
  "vpsubsb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2831[] = {
  "psubusb\t{%2, %0|%0, %2}",
  "vpsubusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2832[] = {
  "psubusb\t{%2, %0|%0, %2}",
  "vpsubusb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2833[] = {
  "paddsb\t{%2, %0|%0, %2}",
  "vpaddsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2834[] = {
  "paddsb\t{%2, %0|%0, %2}",
  "vpaddsb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2835[] = {
  "paddusb\t{%2, %0|%0, %2}",
  "vpaddusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2836[] = {
  "paddusb\t{%2, %0|%0, %2}",
  "vpaddusb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2837[] = {
  "psubsb\t{%2, %0|%0, %2}",
  "vpsubsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2838[] = {
  "psubsb\t{%2, %0|%0, %2}",
  "vpsubsb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2839[] = {
  "psubusb\t{%2, %0|%0, %2}",
  "vpsubusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2840[] = {
  "psubusb\t{%2, %0|%0, %2}",
  "vpsubusb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2841[] = {
  "paddsw\t{%2, %0|%0, %2}",
  "vpaddsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2842[] = {
  "paddsw\t{%2, %0|%0, %2}",
  "vpaddsw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2843[] = {
  "paddusw\t{%2, %0|%0, %2}",
  "vpaddusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2844[] = {
  "paddusw\t{%2, %0|%0, %2}",
  "vpaddusw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2845[] = {
  "psubsw\t{%2, %0|%0, %2}",
  "vpsubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2846[] = {
  "psubsw\t{%2, %0|%0, %2}",
  "vpsubsw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2847[] = {
  "psubusw\t{%2, %0|%0, %2}",
  "vpsubusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2848[] = {
  "psubusw\t{%2, %0|%0, %2}",
  "vpsubusw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2849[] = {
  "paddsw\t{%2, %0|%0, %2}",
  "vpaddsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2850[] = {
  "paddsw\t{%2, %0|%0, %2}",
  "vpaddsw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2851[] = {
  "paddusw\t{%2, %0|%0, %2}",
  "vpaddusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2852[] = {
  "paddusw\t{%2, %0|%0, %2}",
  "vpaddusw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2853[] = {
  "psubsw\t{%2, %0|%0, %2}",
  "vpsubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2854[] = {
  "psubsw\t{%2, %0|%0, %2}",
  "vpsubsw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2855[] = {
  "psubusw\t{%2, %0|%0, %2}",
  "vpsubusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2856[] = {
  "psubusw\t{%2, %0|%0, %2}",
  "vpsubusw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2857[] = {
  "paddsw\t{%2, %0|%0, %2}",
  "vpaddsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2858[] = {
  "paddsw\t{%2, %0|%0, %2}",
  "vpaddsw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2859[] = {
  "paddusw\t{%2, %0|%0, %2}",
  "vpaddusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2860[] = {
  "paddusw\t{%2, %0|%0, %2}",
  "vpaddusw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2861[] = {
  "psubsw\t{%2, %0|%0, %2}",
  "vpsubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2862[] = {
  "psubsw\t{%2, %0|%0, %2}",
  "vpsubsw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2863[] = {
  "psubusw\t{%2, %0|%0, %2}",
  "vpsubusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2864[] = {
  "psubusw\t{%2, %0|%0, %2}",
  "vpsubusw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2865[] = {
  "pmullw\t{%2, %0|%0, %2}",
  "vpmullw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2866[] = {
  "pmullw\t{%2, %0|%0, %2}",
  "vpmullw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2867[] = {
  "pmullw\t{%2, %0|%0, %2}",
  "vpmullw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2868[] = {
  "pmullw\t{%2, %0|%0, %2}",
  "vpmullw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2869[] = {
  "pmullw\t{%2, %0|%0, %2}",
  "vpmullw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2870[] = {
  "pmullw\t{%2, %0|%0, %2}",
  "vpmullw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2871[] = {
  "pmulhw\t{%2, %0|%0, %2}",
  "vpmulhw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2872[] = {
  "pmulhw\t{%2, %0|%0, %2}",
  "vpmulhw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2873[] = {
  "pmulhuw\t{%2, %0|%0, %2}",
  "vpmulhuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2874[] = {
  "pmulhuw\t{%2, %0|%0, %2}",
  "vpmulhuw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2875[] = {
  "pmulhw\t{%2, %0|%0, %2}",
  "vpmulhw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2876[] = {
  "pmulhw\t{%2, %0|%0, %2}",
  "vpmulhw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2877[] = {
  "pmulhuw\t{%2, %0|%0, %2}",
  "vpmulhuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2878[] = {
  "pmulhuw\t{%2, %0|%0, %2}",
  "vpmulhuw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2879[] = {
  "pmulhw\t{%2, %0|%0, %2}",
  "vpmulhw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2880[] = {
  "pmulhw\t{%2, %0|%0, %2}",
  "vpmulhw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2881[] = {
  "pmulhuw\t{%2, %0|%0, %2}",
  "vpmulhuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2882[] = {
  "pmulhuw\t{%2, %0|%0, %2}",
  "vpmulhuw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2887[] = {
  "pmuludq\t{%2, %0|%0, %2}",
  "vpmuludq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2888[] = {
  "pmuludq\t{%2, %0|%0, %2}",
  "vpmuludq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2893[] = {
  "pmuldq\t{%2, %0|%0, %2}",
  "pmuldq\t{%2, %0|%0, %2}",
  "vpmuldq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2894[] = {
  "pmuldq\t{%2, %0|%0, %2}",
  "pmuldq\t{%2, %0|%0, %2}",
  "vpmuldq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2902[] = {
  "pmaddwd\t{%2, %0|%0, %2}",
  "vpmaddwd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2909[] = {
  "pmulld\t{%2, %0|%0, %2}",
  "pmulld\t{%2, %0|%0, %2}",
  "vpmulld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2910[] = {
  "pmulld\t{%2, %0|%0, %2}",
  "pmulld\t{%2, %0|%0, %2}",
  "vpmulld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2911[] = {
  "pmulld\t{%2, %0|%0, %2}",
  "pmulld\t{%2, %0|%0, %2}",
  "vpmulld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2912[] = {
  "pmulld\t{%2, %0|%0, %2}",
  "pmulld\t{%2, %0|%0, %2}",
  "vpmulld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2913[] = {
  "pmulld\t{%2, %0|%0, %2}",
  "pmulld\t{%2, %0|%0, %2}",
  "vpmulld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2914[] = {
  "pmulld\t{%2, %0|%0, %2}",
  "pmulld\t{%2, %0|%0, %2}",
  "vpmulld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2915[] = {
  "psraw\t{%2, %0|%0, %2}",
  "vpsraw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2916[] = {
  "psraw\t{%2, %0|%0, %2}",
  "vpsraw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2917[] = {
  "psrad\t{%2, %0|%0, %2}",
  "vpsrad\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2918[] = {
  "psrad\t{%2, %0|%0, %2}",
  "vpsrad\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2937[] = {
  "psllw\t{%2, %0|%0, %2}",
  "vpsllw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2938[] = {
  "psllw\t{%2, %0|%0, %2}",
  "vpsllw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2939[] = {
  "psrlw\t{%2, %0|%0, %2}",
  "vpsrlw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2940[] = {
  "psrlw\t{%2, %0|%0, %2}",
  "vpsrlw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2941[] = {
  "psllw\t{%2, %0|%0, %2}",
  "vpsllw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2942[] = {
  "psllw\t{%2, %0|%0, %2}",
  "vpsllw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2943[] = {
  "psrlw\t{%2, %0|%0, %2}",
  "vpsrlw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2944[] = {
  "psrlw\t{%2, %0|%0, %2}",
  "vpsrlw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2945[] = {
  "psllw\t{%2, %0|%0, %2}",
  "vpsllw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2946[] = {
  "psllw\t{%2, %0|%0, %2}",
  "vpsllw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2947[] = {
  "psrlw\t{%2, %0|%0, %2}",
  "vpsrlw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2948[] = {
  "psrlw\t{%2, %0|%0, %2}",
  "vpsrlw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2949[] = {
  "pslld\t{%2, %0|%0, %2}",
  "vpslld\t{%2, %1, %0|%0, %1, %2}",
  "vpslld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2950[] = {
  "pslld\t{%2, %0|%0, %2}",
  "vpslld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
  "vpslld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2951[] = {
  "psrld\t{%2, %0|%0, %2}",
  "vpsrld\t{%2, %1, %0|%0, %1, %2}",
  "vpsrld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2952[] = {
  "psrld\t{%2, %0|%0, %2}",
  "vpsrld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
  "vpsrld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2953[] = {
  "pslld\t{%2, %0|%0, %2}",
  "vpslld\t{%2, %1, %0|%0, %1, %2}",
  "vpslld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2954[] = {
  "pslld\t{%2, %0|%0, %2}",
  "vpslld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
  "vpslld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2955[] = {
  "psrld\t{%2, %0|%0, %2}",
  "vpsrld\t{%2, %1, %0|%0, %1, %2}",
  "vpsrld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2956[] = {
  "psrld\t{%2, %0|%0, %2}",
  "vpsrld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
  "vpsrld\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2957[] = {
  "psllq\t{%2, %0|%0, %2}",
  "vpsllq\t{%2, %1, %0|%0, %1, %2}",
  "vpsllq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2958[] = {
  "psllq\t{%2, %0|%0, %2}",
  "vpsllq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
  "vpsllq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2959[] = {
  "psrlq\t{%2, %0|%0, %2}",
  "vpsrlq\t{%2, %1, %0|%0, %1, %2}",
  "vpsrlq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2960[] = {
  "psrlq\t{%2, %0|%0, %2}",
  "vpsrlq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
  "vpsrlq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2961[] = {
  "psllq\t{%2, %0|%0, %2}",
  "vpsllq\t{%2, %1, %0|%0, %1, %2}",
  "vpsllq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2962[] = {
  "psllq\t{%2, %0|%0, %2}",
  "vpsllq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
  "vpsllq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_2963[] = {
  "psrlq\t{%2, %0|%0, %2}",
  "vpsrlq\t{%2, %1, %0|%0, %1, %2}",
  "vpsrlq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_2964[] = {
  "psrlq\t{%2, %0|%0, %2}",
  "vpsrlq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
  "vpsrlq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char *
output_2973 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10641 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "pslldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpslldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2974 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10641 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "pslldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpslldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2975 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10641 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "pslldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpslldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2976 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10680 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "psrldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2977 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10680 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "psrldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2978 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 10680 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "psrldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_3135[] = {
  "pmaxsb\t{%2, %0|%0, %2}",
  "pmaxsb\t{%2, %0|%0, %2}",
  "vpmaxsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3136[] = {
  "pmaxsb\t{%2, %0|%0, %2}",
  "pmaxsb\t{%2, %0|%0, %2}",
  "vpmaxsb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3137[] = {
  "pminsb\t{%2, %0|%0, %2}",
  "pminsb\t{%2, %0|%0, %2}",
  "vpminsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3138[] = {
  "pminsb\t{%2, %0|%0, %2}",
  "pminsb\t{%2, %0|%0, %2}",
  "vpminsb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3139[] = {
  "pmaxsd\t{%2, %0|%0, %2}",
  "pmaxsd\t{%2, %0|%0, %2}",
  "vpmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3140[] = {
  "pmaxsd\t{%2, %0|%0, %2}",
  "pmaxsd\t{%2, %0|%0, %2}",
  "vpmaxsd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3141[] = {
  "pminsd\t{%2, %0|%0, %2}",
  "pminsd\t{%2, %0|%0, %2}",
  "vpminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3142[] = {
  "pminsd\t{%2, %0|%0, %2}",
  "pminsd\t{%2, %0|%0, %2}",
  "vpminsd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3143[] = {
  "pmaxsw\t{%2, %0|%0, %2}",
  "vpmaxsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3144[] = {
  "pminsw\t{%2, %0|%0, %2}",
  "vpminsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3145[] = {
  "pmaxuw\t{%2, %0|%0, %2}",
  "pmaxuw\t{%2, %0|%0, %2}",
  "vpmaxuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3146[] = {
  "pmaxuw\t{%2, %0|%0, %2}",
  "pmaxuw\t{%2, %0|%0, %2}",
  "vpmaxuw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3147[] = {
  "pminuw\t{%2, %0|%0, %2}",
  "pminuw\t{%2, %0|%0, %2}",
  "vpminuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3148[] = {
  "pminuw\t{%2, %0|%0, %2}",
  "pminuw\t{%2, %0|%0, %2}",
  "vpminuw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3149[] = {
  "pmaxud\t{%2, %0|%0, %2}",
  "pmaxud\t{%2, %0|%0, %2}",
  "vpmaxud\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3150[] = {
  "pmaxud\t{%2, %0|%0, %2}",
  "pmaxud\t{%2, %0|%0, %2}",
  "vpmaxud\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3151[] = {
  "pminud\t{%2, %0|%0, %2}",
  "pminud\t{%2, %0|%0, %2}",
  "vpminud\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3152[] = {
  "pminud\t{%2, %0|%0, %2}",
  "pminud\t{%2, %0|%0, %2}",
  "vpminud\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3153[] = {
  "pmaxub\t{%2, %0|%0, %2}",
  "vpmaxub\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3154[] = {
  "pminub\t{%2, %0|%0, %2}",
  "vpminub\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3183[] = {
  "pcmpeqq\t{%2, %0|%0, %2}",
  "pcmpeqq\t{%2, %0|%0, %2}",
  "vpcmpeqq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3184[] = {
  "pcmpeqb\t{%2, %0|%0, %2}",
  "vpcmpeqb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3185[] = {
  "pcmpeqw\t{%2, %0|%0, %2}",
  "vpcmpeqw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3186[] = {
  "pcmpeqd\t{%2, %0|%0, %2}",
  "vpcmpeqd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3187[] = {
  "pcmpgtq\t{%2, %0|%0, %2}",
  "pcmpgtq\t{%2, %0|%0, %2}",
  "vpcmpgtq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3216[] = {
  "pcmpgtb\t{%2, %0|%0, %2}",
  "vpcmpgtb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3217[] = {
  "pcmpgtw\t{%2, %0|%0, %2}",
  "vpcmpgtw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3218[] = {
  "pcmpgtd\t{%2, %0|%0, %2}",
  "vpcmpgtd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_3219 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V16SImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnd";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnd" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3220 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V8DImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnq";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3221 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V64QImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnb";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnb" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3222 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V32QImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnb";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnb" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3223 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V16QImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnb";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnb" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3224 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V32HImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnw";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnw" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3225 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V16HImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnw";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnw" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3226 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V8HImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnw";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnw" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3227 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V8SImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnd";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnd" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3228 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V4SImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnd";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnd" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3229 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V4DImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnq";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3230 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11391 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);
      switch (V2DImode)
	{
	case V64QImode:
	case V32HImode:
	  /* There is no vpandnb or vpandnw instruction, nor vpandn for
	     512-bit vectors. Use vpandnq instead.  */
	  tmp = "pandnq";
	  break;
	case V16SImode:
	case V8DImode:
	  tmp = "pandnq";
	  break;
	case V8SImode:
	case V4DImode:
	case V4SImode:
	case V2DImode:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	default:
	  tmp = TARGET_AVX512VL ? "pandnq" : "pandn";
	  break;
	}
      break;

    case MODE_V16SF:
      gcc_assert (TARGET_AVX512F);
    case MODE_V8SF:
      gcc_assert (TARGET_AVX);
    case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

    default:
      gcc_unreachable ();
    }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3237 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandd";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandd" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3238 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandd";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandd" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3239 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pord" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3240 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pord" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3241 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxord" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3242 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxord" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3243 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandd";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandd" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3244 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandd";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandd" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3245 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pord" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3246 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pord" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3247 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxord" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3248 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxord" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3249 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandd";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandd" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3250 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandd";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandd" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3251 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pord" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3252 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pord" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3253 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxord" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3254 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4SImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxord";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxord" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3255 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandq" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3256 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandq" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3257 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "porq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "porq" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3258 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "porq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "porq" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3259 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxorq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxorq" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3260 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxorq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxorq" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3261 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandq" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3262 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandq" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3263 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "porq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "porq" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3264 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "porq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "porq" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3265 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxorq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxorq" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3266 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V4DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxorq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxorq" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3267 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V2DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandq" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3268 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V2DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pandq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pandq" : "pand";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3269 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V2DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "porq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "porq" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3270 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V2DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "porq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "porq" : "por";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3271 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V2DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxorq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxorq" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!false);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (false)
        ops = "v%s\t{%%2, %%0, %%0|%%0, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3272 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11516 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V2DImode)
      {
        case V16SImode:
        case V8DImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxorq";
            break;
          }
        case V8SImode:
        case V4DImode:
        case V4SImode:
        case V2DImode:
          tmp = TARGET_AVX512VL ? "pxorq" : "pxor";
          break;
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      gcc_assert (!true);
      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      if (true)
        ops = "v%s\t{%%2, %%0, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%0, %%2}";
      else
        ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0%%{%%4%%}%%N3|%%0%%{%%4%%}%%N3, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_3273 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V64QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3274 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V64QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3275 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V64QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3276 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V64QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3277 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V64QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3278 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V64QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3279 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3280 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3281 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3282 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3283 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3284 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3285 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3286 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3287 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3288 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3289 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3290 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16QImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3291 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3292 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3293 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3294 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3295 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3296 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V32HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3297 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3298 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3299 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3300 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3301 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3302 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V16HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3303 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3304 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pand";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pand";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "andps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3305 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3306 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "por";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "por";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "orps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3307 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char *
output_3308 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 11611 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  static char buf[64];
  const char *ops;
  const char *tmp;
  const char *ssesuffix;

  switch (get_attr_mode (insn))
    {
    case MODE_XI:
      gcc_assert (TARGET_AVX512F);
    case MODE_OI:
      gcc_assert (TARGET_AVX2 || TARGET_AVX512VL);
    case MODE_TI:
      gcc_assert (TARGET_SSE2 || TARGET_AVX512VL);
      switch (V8HImode)
        {
        case V64QImode:
        case V32HImode:
          if (TARGET_AVX512F)
          {
            tmp = "pxor";
            ssesuffix = "q";
            break;
          }
        case V32QImode:
        case V16HImode:
        case V16QImode:
        case V8HImode:
          if (TARGET_AVX512VL || TARGET_AVX2 || TARGET_SSE2)
          {
            tmp = "pxor";
            ssesuffix = TARGET_AVX512VL ? "q" : "";
            break;
          }
        default:
          gcc_unreachable ();
      }
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);
      tmp = "xorps";
      ssesuffix = "";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp);
      break;
    case 1:
      ops = "v%s%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      snprintf (buf, sizeof (buf), ops, tmp, ssesuffix);
      break;
    default:
      gcc_unreachable ();
    }

  return buf;
}
}

static const char * const output_3357[] = {
  "packsswb\t{%2, %0|%0, %2}",
  "vpacksswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3358[] = {
  "packsswb\t{%2, %0|%0, %2}",
  "vpacksswb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3359[] = {
  "packsswb\t{%2, %0|%0, %2}",
  "vpacksswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3360[] = {
  "packsswb\t{%2, %0|%0, %2}",
  "vpacksswb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3361[] = {
  "packsswb\t{%2, %0|%0, %2}",
  "vpacksswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3362[] = {
  "packsswb\t{%2, %0|%0, %2}",
  "vpacksswb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3363[] = {
  "packssdw\t{%2, %0|%0, %2}",
  "vpackssdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3364[] = {
  "packssdw\t{%2, %0|%0, %2}",
  "vpackssdw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3365[] = {
  "packssdw\t{%2, %0|%0, %2}",
  "vpackssdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3366[] = {
  "packssdw\t{%2, %0|%0, %2}",
  "vpackssdw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3367[] = {
  "packssdw\t{%2, %0|%0, %2}",
  "vpackssdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3368[] = {
  "packssdw\t{%2, %0|%0, %2}",
  "vpackssdw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3369[] = {
  "packuswb\t{%2, %0|%0, %2}",
  "vpackuswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3370[] = {
  "packuswb\t{%2, %0|%0, %2}",
  "vpackuswb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3371[] = {
  "packuswb\t{%2, %0|%0, %2}",
  "vpackuswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3372[] = {
  "packuswb\t{%2, %0|%0, %2}",
  "vpackuswb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3373[] = {
  "packuswb\t{%2, %0|%0, %2}",
  "vpackuswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3374[] = {
  "packuswb\t{%2, %0|%0, %2}",
  "vpackuswb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3379[] = {
  "punpckhbw\t{%2, %0|%0, %2}",
  "vpunpckhbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3380[] = {
  "punpckhbw\t{%2, %0|%0, %2}",
  "vpunpckhbw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3385[] = {
  "punpcklbw\t{%2, %0|%0, %2}",
  "vpunpcklbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3386[] = {
  "punpcklbw\t{%2, %0|%0, %2}",
  "vpunpcklbw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3391[] = {
  "punpckhwd\t{%2, %0|%0, %2}",
  "vpunpckhwd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3392[] = {
  "punpckhwd\t{%2, %0|%0, %2}",
  "vpunpckhwd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3397[] = {
  "punpcklwd\t{%2, %0|%0, %2}",
  "vpunpcklwd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3398[] = {
  "punpcklwd\t{%2, %0|%0, %2}",
  "vpunpcklwd\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3403[] = {
  "punpckhdq\t{%2, %0|%0, %2}",
  "vpunpckhdq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3404[] = {
  "punpckhdq\t{%2, %0|%0, %2}",
  "vpunpckhdq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3409[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "vpunpckldq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3410[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "vpunpckldq\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char *
output_3411 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12328 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (QImode) < GET_MODE_SIZE (SImode))
	return "pinsrb\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrb\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (QImode) < GET_MODE_SIZE (SImode))
	return "vpinsrb\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrb\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3412 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12328 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (HImode) < GET_MODE_SIZE (SImode))
	return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrw\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (HImode) < GET_MODE_SIZE (SImode))
	return "vpinsrw\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrw\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3413 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12328 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (SImode) < GET_MODE_SIZE (SImode))
	return "pinsrd\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrd\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (SImode) < GET_MODE_SIZE (SImode))
	return "vpinsrd\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3414 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12328 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (DImode) < GET_MODE_SIZE (SImode))
	return "pinsrq\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrq\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (DImode) < GET_MODE_SIZE (SImode))
	return "vpinsrq\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrq\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3415 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12401 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  int selector = INTVAL (operands[3]);

  if (selector == 0xFFF || selector == 0x3F)
    mask = 0;
  else if ( selector == 0xF0FF || selector == 0xCF)
    mask = 1;
  else if ( selector == 0xFF0F || selector == 0xF3)
    mask = 2;
  else if ( selector == 0xFFF0 || selector == 0xFC)
    mask = 3;
  else
      gcc_unreachable ();

  operands[3] = GEN_INT (mask);

  return "vinsertf64x2\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3416 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12401 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  int selector = INTVAL (operands[3]);

  if (selector == 0xFFF || selector == 0x3F)
    mask = 0;
  else if ( selector == 0xF0FF || selector == 0xCF)
    mask = 1;
  else if ( selector == 0xFF0F || selector == 0xF3)
    mask = 2;
  else if ( selector == 0xFFF0 || selector == 0xFC)
    mask = 3;
  else
      gcc_unreachable ();

  operands[3] = GEN_INT (mask);

  return "vinsertf64x2\t{%3, %2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2, %3}";
}
}

static const char *
output_3417 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12401 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  int selector = INTVAL (operands[3]);

  if (selector == 0xFFF || selector == 0x3F)
    mask = 0;
  else if ( selector == 0xF0FF || selector == 0xCF)
    mask = 1;
  else if ( selector == 0xFF0F || selector == 0xF3)
    mask = 2;
  else if ( selector == 0xFFF0 || selector == 0xFC)
    mask = 3;
  else
      gcc_unreachable ();

  operands[3] = GEN_INT (mask);

  return "vinserti64x2\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3418 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12401 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  int selector = INTVAL (operands[3]);

  if (selector == 0xFFF || selector == 0x3F)
    mask = 0;
  else if ( selector == 0xF0FF || selector == 0xCF)
    mask = 1;
  else if ( selector == 0xFF0F || selector == 0xF3)
    mask = 2;
  else if ( selector == 0xFFF0 || selector == 0xFC)
    mask = 3;
  else
      gcc_unreachable ();

  operands[3] = GEN_INT (mask);

  return "vinserti64x2\t{%3, %2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2, %3}";
}
}

static const char *
output_3419 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12401 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  int selector = INTVAL (operands[3]);

  if (selector == 0xFFF || selector == 0x3F)
    mask = 0;
  else if ( selector == 0xF0FF || selector == 0xCF)
    mask = 1;
  else if ( selector == 0xFF0F || selector == 0xF3)
    mask = 2;
  else if ( selector == 0xFFF0 || selector == 0xFC)
    mask = 3;
  else
      gcc_unreachable ();

  operands[3] = GEN_INT (mask);

  return "vinsertf32x4\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3420 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12401 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  int selector = INTVAL (operands[3]);

  if (selector == 0xFFF || selector == 0x3F)
    mask = 0;
  else if ( selector == 0xF0FF || selector == 0xCF)
    mask = 1;
  else if ( selector == 0xFF0F || selector == 0xF3)
    mask = 2;
  else if ( selector == 0xFFF0 || selector == 0xFC)
    mask = 3;
  else
      gcc_unreachable ();

  operands[3] = GEN_INT (mask);

  return "vinsertf32x4\t{%3, %2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2, %3}";
}
}

static const char *
output_3421 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12401 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  int selector = INTVAL (operands[3]);

  if (selector == 0xFFF || selector == 0x3F)
    mask = 0;
  else if ( selector == 0xF0FF || selector == 0xCF)
    mask = 1;
  else if ( selector == 0xFF0F || selector == 0xF3)
    mask = 2;
  else if ( selector == 0xFFF0 || selector == 0xFC)
    mask = 3;
  else
      gcc_unreachable ();

  operands[3] = GEN_INT (mask);

  return "vinserti32x4\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3422 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12401 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  int selector = INTVAL (operands[3]);

  if (selector == 0xFFF || selector == 0x3F)
    mask = 0;
  else if ( selector == 0xF0FF || selector == 0xCF)
    mask = 1;
  else if ( selector == 0xFF0F || selector == 0xF3)
    mask = 2;
  else if ( selector == 0xFFF0 || selector == 0xFC)
    mask = 3;
  else
      gcc_unreachable ();

  operands[3] = GEN_INT (mask);

  return "vinserti32x4\t{%3, %2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2, %3}";
}
}

static const char *
output_3439 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12543 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 2;
  mask |= (INTVAL (operands[5]) - 4) / 2 << 1;
  operands[3] = GEN_INT (mask);
  return "vshufi64x2\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3440 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12543 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 2;
  mask |= (INTVAL (operands[5]) - 4) / 2 << 1;
  operands[3] = GEN_INT (mask);
  return "vshufi64x2\t{%3, %2, %1, %0%{%8%}%N7|%0%{%8%}%N7, %1, %2, %3}";
}
}

static const char *
output_3441 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12543 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 2;
  mask |= (INTVAL (operands[5]) - 4) / 2 << 1;
  operands[3] = GEN_INT (mask);
  return "vshuff64x2\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3442 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12543 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 2;
  mask |= (INTVAL (operands[5]) - 4) / 2 << 1;
  operands[3] = GEN_INT (mask);
  return "vshuff64x2\t{%3, %2, %1, %0%{%8%}%N7|%0%{%8%}%N7, %1, %2, %3}";
}
}

static const char *
output_3443 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12598 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 2;
  mask |= INTVAL (operands[5]) / 2 << 2;
  mask |= (INTVAL (operands[7]) - 8) / 2 << 4;
  mask |= (INTVAL (operands[9]) - 8) / 2 << 6;
  operands[3] = GEN_INT (mask);

  return "vshuff64x2\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3444 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12598 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 2;
  mask |= INTVAL (operands[5]) / 2 << 2;
  mask |= (INTVAL (operands[7]) - 8) / 2 << 4;
  mask |= (INTVAL (operands[9]) - 8) / 2 << 6;
  operands[3] = GEN_INT (mask);

  return "vshuff64x2\t{%3, %2, %1, %0%{%12%}%N11|%0%{%12%}%N11, %1, %2, %3}";
}
}

static const char *
output_3445 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12598 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 2;
  mask |= INTVAL (operands[5]) / 2 << 2;
  mask |= (INTVAL (operands[7]) - 8) / 2 << 4;
  mask |= (INTVAL (operands[9]) - 8) / 2 << 6;
  operands[3] = GEN_INT (mask);

  return "vshufi64x2\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3446 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12598 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 2;
  mask |= INTVAL (operands[5]) / 2 << 2;
  mask |= (INTVAL (operands[7]) - 8) / 2 << 4;
  mask |= (INTVAL (operands[9]) - 8) / 2 << 6;
  operands[3] = GEN_INT (mask);

  return "vshufi64x2\t{%3, %2, %1, %0%{%12%}%N11|%0%{%12%}%N11, %1, %2, %3}";
}
}

static const char *
output_3447 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12658 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 4;
  mask |= (INTVAL (operands[7]) - 8) / 4 << 1;
  operands[3] = GEN_INT (mask);

  return "vshufi32x4\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3448 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12658 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 4;
  mask |= (INTVAL (operands[7]) - 8) / 4 << 1;
  operands[3] = GEN_INT (mask);

  return "vshufi32x4\t{%3, %2, %1, %0%{%12%}%N11|%0%{%12%}%N11, %1, %2, %3}";
}
}

static const char *
output_3449 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12658 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 4;
  mask |= (INTVAL (operands[7]) - 8) / 4 << 1;
  operands[3] = GEN_INT (mask);

  return "vshuff32x4\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3450 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12658 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 4;
  mask |= (INTVAL (operands[7]) - 8) / 4 << 1;
  operands[3] = GEN_INT (mask);

  return "vshuff32x4\t{%3, %2, %1, %0%{%12%}%N11|%0%{%12%}%N11, %1, %2, %3}";
}
}

static const char *
output_3451 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12738 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 4;
  mask |= INTVAL (operands[7]) / 4 << 2;
  mask |= (INTVAL (operands[11]) - 16) / 4 << 4;
  mask |= (INTVAL (operands[15]) - 16) / 4 << 6;
  operands[3] = GEN_INT (mask);

  return "vshuff32x4\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3452 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12738 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 4;
  mask |= INTVAL (operands[7]) / 4 << 2;
  mask |= (INTVAL (operands[11]) - 16) / 4 << 4;
  mask |= (INTVAL (operands[15]) - 16) / 4 << 6;
  operands[3] = GEN_INT (mask);

  return "vshuff32x4\t{%3, %2, %1, %0%{%20%}%N19|%0%{%20%}%N19, %1, %2, %3}";
}
}

static const char *
output_3453 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12738 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 4;
  mask |= INTVAL (operands[7]) / 4 << 2;
  mask |= (INTVAL (operands[11]) - 16) / 4 << 4;
  mask |= (INTVAL (operands[15]) - 16) / 4 << 6;
  operands[3] = GEN_INT (mask);

  return "vshufi32x4\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_3454 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12738 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]) / 4;
  mask |= INTVAL (operands[7]) / 4 << 2;
  mask |= (INTVAL (operands[11]) - 16) / 4 << 4;
  mask |= (INTVAL (operands[15]) - 16) / 4 << 6;
  operands[3] = GEN_INT (mask);

  return "vshufi32x4\t{%3, %2, %1, %0%{%20%}%N19|%0%{%20%}%N19, %1, %2, %3}";
}
}

static const char *
output_3455 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12816 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3456 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12816 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshufd\t{%2, %1, %0%{%19%}%N18|%0%{%19%}%N18, %1, %2}";
}
}

static const char *
output_3457 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12890 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3458 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12890 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshufd\t{%2, %1, %0%{%11%}%N10|%0%{%11%}%N10, %1, %2}";
}
}

static const char *
output_3459 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12947 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3460 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 12947 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufd\t{%2, %1, %0%{%7%}%N6|%0%{%7%}%N6, %1, %2}";
}
}

static const char *
output_3463 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13042 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshuflw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3464 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13042 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshuflw\t{%2, %1, %0%{%11%}%N10|%0%{%11%}%N10, %1, %2}";
}
}

static const char *
output_3465 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13103 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshuflw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3466 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13103 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshuflw\t{%2, %1, %0%{%7%}%N6|%0%{%7%}%N6, %1, %2}";
}
}

static const char *
output_3469 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13199 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshufhw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3470 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13199 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshufhw\t{%2, %1, %0%{%11%}%N10|%0%{%11%}%N10, %1, %2}";
}
}

static const char *
output_3471 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13260 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufhw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3472 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13260 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufhw\t{%2, %1, %0%{%7%}%N6|%0%{%7%}%N6, %1, %2}";
}
}

static const char * const output_3473[] = {
  "%vmovd\t{%2, %0|%0, %2}",
  "%vmovd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3474[] = {
  "%vpextrb\t{%2, %1, %k0|%k0, %1, %2}",
  "%vpextrb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3475[] = {
  "%vpextrw\t{%2, %1, %k0|%k0, %1, %2}",
  "%vpextrw\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_3482 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13408 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "%vpextrd\t{%2, %1, %0|%0, %1, %2}";

    case 1:
    case 2:
      operands [2] = GEN_INT (INTVAL (operands[2]) * 4);
      return "psrldq\t{%2, %0|%0, %2}";

    case 3:
      operands [2] = GEN_INT (INTVAL (operands[2]) * 4);
      return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";

    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_3484[] = {
  "%vpextrq\t{$1, %1, %0|%0, %1, 1}",
  "%vmovhps\t{%1, %0|%0, %1}",
  "psrldq\t{$8, %0|%0, 8}",
  "vpsrldq\t{$8, %1, %0|%0, %1, 8}",
  "movhlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_3485[] = {
  "pinsrd\t{$1, %2, %0|%0, %2, 1}",
  "pinsrd\t{$1, %2, %0|%0, %2, 1}",
  "vpinsrd\t{$1, %2, %1, %0|%0, %1, %2, 1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "punpckldq\t{%2, %0|%0, %2}",
  "vpunpckldq\t{%2, %1, %0|%0, %1, %2}",
  "%vmovd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_3486[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_3487[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %q2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %q2}",
};

static const char *
output_3488 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (which_alternative)
    {
    case 0: return "pinsrq\t{$1, %2, %0|%0, %2, 1}";
    case 1: return "pinsrq\t{$1, %2, %0|%0, %2, 1}";
    case 2: return "vpinsrq\t{$1, %2, %1, %0|%0, %1, %2, 1}";
    case 3:
       return HAVE_AS_IX86_INTERUNIT_MOVQ ? "%vmovq\t{%1, %0|%0, %1}" : "%vmovd\t{%1, %0|%0, %1}";
    case 4: return "%vmovq\t{%1, %0|%0, %1}";
    case 5: return "movq2dq\t{%1, %0|%0, %1}";
    case 6: return "punpcklqdq\t{%2, %0|%0, %2}";
    case 7: return "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}";
    case 8: return "movlhps\t{%2, %0|%0, %2}";
    case 9: return "movhps\t{%2, %0|%0, %2}";
    case 10: return "vmovhps\t{%2, %1, %0|%0, %1, %2}";
      default: gcc_unreachable ();
    }
}

static const char * const output_3489[] = {
  "pavgb\t{%2, %0|%0, %2}",
  "vpavgb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3490[] = {
  "pavgb\t{%2, %0|%0, %2}",
  "vpavgb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3491[] = {
  "pavgb\t{%2, %0|%0, %2}",
  "vpavgb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3492[] = {
  "pavgb\t{%2, %0|%0, %2}",
  "vpavgb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3493[] = {
  "pavgb\t{%2, %0|%0, %2}",
  "vpavgb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3494[] = {
  "pavgb\t{%2, %0|%0, %2}",
  "vpavgb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3495[] = {
  "pavgw\t{%2, %0|%0, %2}",
  "vpavgw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3496[] = {
  "pavgw\t{%2, %0|%0, %2}",
  "vpavgw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3497[] = {
  "pavgw\t{%2, %0|%0, %2}",
  "vpavgw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3498[] = {
  "pavgw\t{%2, %0|%0, %2}",
  "vpavgw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3499[] = {
  "pavgw\t{%2, %0|%0, %2}",
  "vpavgw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3500[] = {
  "pavgw\t{%2, %0|%0, %2}",
  "vpavgw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3501[] = {
  "psadbw\t{%2, %0|%0, %2}",
  "vpsadbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3502[] = {
  "psadbw\t{%2, %0|%0, %2}",
  "vpsadbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3503[] = {
  "psadbw\t{%2, %0|%0, %2}",
  "vpsadbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_3510 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13863 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /* We can't use %^ here due to ASM_OUTPUT_OPCODE processing
     that requires %v to be at the beginning of the opcode name.  */
  if (Pmode != word_mode)
    fputs ("\taddr32", asm_out_file);
  return "%vmaskmovdqu\t{%2, %1|%1, %2}";
}
}

static const char *
output_3511 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 13863 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /* We can't use %^ here due to ASM_OUTPUT_OPCODE processing
     that requires %v to be at the beginning of the opcode name.  */
  if (Pmode != word_mode)
    fputs ("\taddr32", asm_out_file);
  return "%vmaskmovdqu\t{%2, %1|%1, %2}";
}
}

static const char * const output_3522[] = {
  "phaddw\t{%2, %0|%0, %2}",
  "vphaddw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3523[] = {
  "phaddsw\t{%2, %0|%0, %2}",
  "vphaddsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3524[] = {
  "phsubw\t{%2, %0|%0, %2}",
  "vphsubw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3525[] = {
  "phsubsw\t{%2, %0|%0, %2}",
  "vphsubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3532[] = {
  "phaddd\t{%2, %0|%0, %2}",
  "vphaddd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3533[] = {
  "phsubd\t{%2, %0|%0, %2}",
  "vphsubd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3545[] = {
  "pmaddubsw\t{%2, %0|%0, %2}",
  "vpmaddubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3547[] = {
  "pmulhrsw\t{%2, %0|%0, %2}",
  "vpmulhrsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3548[] = {
  "pmulhrsw\t{%2, %0|%0, %2}",
  "vpmulhrsw\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_3549[] = {
  "pmulhrsw\t{%2, %0|%0, %2}",
  "vpmulhrsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3550[] = {
  "pmulhrsw\t{%2, %0|%0, %2}",
  "vpmulhrsw\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_3551[] = {
  "pmulhrsw\t{%2, %0|%0, %2}",
  "vpmulhrsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3552[] = {
  "pmulhrsw\t{%2, %0|%0, %2}",
  "vpmulhrsw\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}",
};

static const char * const output_3554[] = {
  "pshufb\t{%2, %0|%0, %2}",
  "vpshufb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3555[] = {
  "pshufb\t{%2, %0|%0, %2}",
  "vpshufb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3556[] = {
  "pshufb\t{%2, %0|%0, %2}",
  "vpshufb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3557[] = {
  "pshufb\t{%2, %0|%0, %2}",
  "vpshufb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3558[] = {
  "pshufb\t{%2, %0|%0, %2}",
  "vpshufb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3559[] = {
  "pshufb\t{%2, %0|%0, %2}",
  "vpshufb\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3561[] = {
  "psignb\t{%2, %0|%0, %2}",
  "vpsignb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3562[] = {
  "psignb\t{%2, %0|%0, %2}",
  "vpsignb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3563[] = {
  "psignw\t{%2, %0|%0, %2}",
  "vpsignw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3564[] = {
  "psignw\t{%2, %0|%0, %2}",
  "vpsignw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3565[] = {
  "psignd\t{%2, %0|%0, %2}",
  "vpsignd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3566[] = {
  "psignd\t{%2, %0|%0, %2}",
  "vpsignd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_3570 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14538 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "vpalignr\t{%3, %2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2, %3}";
}
}

static const char *
output_3571 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14538 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "vpalignr\t{%3, %2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2, %3}";
}
}

static const char *
output_3572 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14538 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "vpalignr\t{%3, %2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2, %3}";
}
}

static const char *
output_3573 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14557 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vpalignr\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3574 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14557 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vpalignr\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3575 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14557 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vpalignr\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3576 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14586 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_3612[] = {
  "blendps\t{%3, %2, %0|%0, %2, %3}",
  "blendps\t{%3, %2, %0|%0, %2, %3}",
  "vblendps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3613[] = {
  "blendps\t{%3, %2, %0|%0, %2, %3}",
  "blendps\t{%3, %2, %0|%0, %2, %3}",
  "vblendps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3614[] = {
  "blendpd\t{%3, %2, %0|%0, %2, %3}",
  "blendpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3615[] = {
  "blendpd\t{%3, %2, %0|%0, %2, %3}",
  "blendpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3616[] = {
  "blendvps\t{%3, %2, %0|%0, %2, %3}",
  "blendvps\t{%3, %2, %0|%0, %2, %3}",
  "vblendvps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3617[] = {
  "blendvps\t{%3, %2, %0|%0, %2, %3}",
  "blendvps\t{%3, %2, %0|%0, %2, %3}",
  "vblendvps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3618[] = {
  "blendvpd\t{%3, %2, %0|%0, %2, %3}",
  "blendvpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendvpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3619[] = {
  "blendvpd\t{%3, %2, %0|%0, %2, %3}",
  "blendvpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendvpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3620[] = {
  "dpps\t{%3, %2, %0|%0, %2, %3}",
  "dpps\t{%3, %2, %0|%0, %2, %3}",
  "vdpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3621[] = {
  "dpps\t{%3, %2, %0|%0, %2, %3}",
  "dpps\t{%3, %2, %0|%0, %2, %3}",
  "vdpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3622[] = {
  "dppd\t{%3, %2, %0|%0, %2, %3}",
  "dppd\t{%3, %2, %0|%0, %2, %3}",
  "vdppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3623[] = {
  "dppd\t{%3, %2, %0|%0, %2, %3}",
  "dppd\t{%3, %2, %0|%0, %2, %3}",
  "vdppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3627[] = {
  "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
  "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
  "vmpsadbw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3628[] = {
  "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
  "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
  "vmpsadbw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3629[] = {
  "packusdw\t{%2, %0|%0, %2}",
  "packusdw\t{%2, %0|%0, %2}",
  "vpackusdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3630[] = {
  "packusdw\t{%2, %0|%0, %2}",
  "packusdw\t{%2, %0|%0, %2}",
  "vpackusdw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3631[] = {
  "packusdw\t{%2, %0|%0, %2}",
  "packusdw\t{%2, %0|%0, %2}",
  "vpackusdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3632[] = {
  "packusdw\t{%2, %0|%0, %2}",
  "packusdw\t{%2, %0|%0, %2}",
  "vpackusdw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3633[] = {
  "packusdw\t{%2, %0|%0, %2}",
  "packusdw\t{%2, %0|%0, %2}",
  "vpackusdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3634[] = {
  "packusdw\t{%2, %0|%0, %2}",
  "packusdw\t{%2, %0|%0, %2}",
  "vpackusdw\t{%2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2}",
};

static const char * const output_3635[] = {
  "pblendvb\t{%3, %2, %0|%0, %2, %3}",
  "pblendvb\t{%3, %2, %0|%0, %2, %3}",
  "vpblendvb\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3636[] = {
  "pblendvb\t{%3, %2, %0|%0, %2, %3}",
  "pblendvb\t{%3, %2, %0|%0, %2, %3}",
  "vpblendvb\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3637[] = {
  "pblendw\t{%3, %2, %0|%0, %2, %3}",
  "pblendw\t{%3, %2, %0|%0, %2, %3}",
  "vpblendw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char *
output_3638 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 14931 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) & 0xff);
  return "vpblendw\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char * const output_3734[] = {
  "roundss\t{%3, %2, %0|%0, %2, %3}",
  "roundss\t{%3, %2, %0|%0, %2, %3}",
  "vroundss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3735[] = {
  "roundsd\t{%3, %2, %0|%0, %2, %3}",
  "roundsd\t{%3, %2, %0|%0, %2, %3}",
  "vroundsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3740[] = {
  "%vpcmpestrm\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestrm\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestri\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestri\t{%6, %4, %2|%2, %4, %6}",
};

static const char * const output_3745[] = {
  "%vpcmpistrm\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistrm\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistri\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistri\t{%4, %3, %2|%2, %3, %4}",
};

static const char *
output_3746 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15860 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
      return "vgatherpf0dps\t{%5%{%0%}|%5%{%0%}}";
    case 2:
      return "vgatherpf1dps\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3747 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15860 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
      return "vgatherpf0dps\t{%5%{%0%}|%5%{%0%}}";
    case 2:
      return "vgatherpf1dps\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3748 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15860 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
      return "vgatherpf0qps\t{%5%{%0%}|%5%{%0%}}";
    case 2:
      return "vgatherpf1qps\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3749 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15860 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
      return "vgatherpf0qps\t{%5%{%0%}|%5%{%0%}}";
    case 2:
      return "vgatherpf1qps\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3750 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15905 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
      return "vgatherpf0dpd\t{%5%{%0%}|%5%{%0%}}";
    case 2:
      return "vgatherpf1dpd\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3751 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15905 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
      return "vgatherpf0dpd\t{%5%{%0%}|%5%{%0%}}";
    case 2:
      return "vgatherpf1dpd\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3752 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15905 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
      return "vgatherpf0qpd\t{%5%{%0%}|%5%{%0%}}";
    case 2:
      return "vgatherpf1qpd\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3753 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15905 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
      return "vgatherpf0qpd\t{%5%{%0%}|%5%{%0%}}";
    case 2:
      return "vgatherpf1qpd\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3754 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15950 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
    case 7:
      return "vscatterpf0dps\t{%5%{%0%}|%5%{%0%}}";
    case 2:
    case 6:
      return "vscatterpf1dps\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3755 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15950 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
    case 7:
      return "vscatterpf0dps\t{%5%{%0%}|%5%{%0%}}";
    case 2:
    case 6:
      return "vscatterpf1dps\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3756 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15950 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
    case 7:
      return "vscatterpf0qps\t{%5%{%0%}|%5%{%0%}}";
    case 2:
    case 6:
      return "vscatterpf1qps\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3757 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15950 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
    case 7:
      return "vscatterpf0qps\t{%5%{%0%}|%5%{%0%}}";
    case 2:
    case 6:
      return "vscatterpf1qps\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3758 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15997 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
    case 7:
      return "vscatterpf0dpd\t{%5%{%0%}|%5%{%0%}}";
    case 2:
    case 6:
      return "vscatterpf1dpd\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3759 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15997 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
    case 7:
      return "vscatterpf0dpd\t{%5%{%0%}|%5%{%0%}}";
    case 2:
    case 6:
      return "vscatterpf1dpd\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3760 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15997 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
    case 7:
      return "vscatterpf0qpd\t{%5%{%0%}|%5%{%0%}}";
    case 2:
    case 6:
      return "vscatterpf1qpd\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3761 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 15997 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (INTVAL (operands[4]))
    {
    case 3:
    case 7:
      return "vscatterpf0qpd\t{%5%{%0%}|%5%{%0%}}";
    case 2:
    case 6:
      return "vscatterpf1qpd\t{%5%{%0%}|%5%{%0%}}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_3845 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16543 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3]
    = GEN_INT (GET_MODE_BITSIZE (QImode) - INTVAL (operands[2]));
  return "vprotb\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_3846 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16543 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3]
    = GEN_INT (GET_MODE_BITSIZE (HImode) - INTVAL (operands[2]));
  return "vprotw\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_3847 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16543 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3]
    = GEN_INT (GET_MODE_BITSIZE (SImode) - INTVAL (operands[2]));
  return "vprotd\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_3848 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16543 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[3]
    = GEN_INT (GET_MODE_BITSIZE (DImode) - INTVAL (operands[2]));
  return "vprotq\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_3881 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16950 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrueb\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalseb\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_3882 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16950 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtruew\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalsew\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_3883 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16950 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrued\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalsed\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_3884 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 16950 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrueq\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalseq\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char * const output_3889[] = {
  "aesenc\t{%2, %0|%0, %2}",
  "vaesenc\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3890[] = {
  "aesenclast\t{%2, %0|%0, %2}",
  "vaesenclast\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3891[] = {
  "aesdec\t{%2, %0|%0, %2}",
  "vaesdec\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3892[] = {
  "aesdeclast\t{%2, %0|%0, %2}",
  "vaesdeclast\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_3895[] = {
  "pclmulqdq\t{%3, %2, %0|%0, %2, %3}",
  "vpclmulqdq\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_3910[] = {
  "vpbroadcastb\t{%1, %0|%0, %b1}",
  "vpbroadcastb\t{%x1, %0|%0, %x1}",
};

static const char * const output_3911[] = {
  "vpbroadcastw\t{%1, %0|%0, %w1}",
  "vpbroadcastw\t{%x1, %0|%0, %x1}",
};

static const char * const output_3912[] = {
  "vpbroadcastd\t{%1, %0|%0, %k1}",
  "vpbroadcastd\t{%x1, %0|%0, %x1}",
};

static const char * const output_3913[] = {
  "vpbroadcastq\t{%1, %0|%0, %q1}",
  "vpbroadcastq\t{%x1, %0|%0, %x1}",
};

static const char *
output_3942 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17232 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermq\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3943 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17232 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermq\t{%2, %1, %0%{%7%}%N6|%0%{%7%}%N6, %1, %2}";
}
}

static const char *
output_3944 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17232 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3945 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17232 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermpd\t{%2, %1, %0%{%7%}%N6|%0%{%7%}%N6, %1, %2}";
}
}

static const char *
output_3946 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17232 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermq\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3947 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17232 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermq\t{%2, %1, %0%{%7%}%N6|%0%{%7%}%N6, %1, %2}";
}
}

static const char *
output_3948 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17232 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_3949 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17232 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermpd\t{%2, %1, %0%{%7%}%N6|%0%{%7%}%N6, %1, %2}";
}
}

static const char * const output_3952[] = {
  "vpbroadcastd\t{%x1, %0|%0, %x1}",
  "vpbroadcastd\t{%x1, %0|%0, %k1}",
};

static const char * const output_3953[] = {
  "vpbroadcastq\t{%x1, %0|%0, %x1}",
  "vpbroadcastq\t{%x1, %0|%0, %q1}",
};

static const char * const output_3954[] = {
  "vpbroadcastw\t{%x1, %0|%0, %x1}",
  "vpbroadcastw\t{%x1, %0|%0, %w1}",
};

static const char * const output_3955[] = {
  "vpbroadcastb\t{%x1, %0|%0, %x1}",
  "vpbroadcastb\t{%x1, %0|%0, %b1}",
};

static const char *
output_3956 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V16SImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V16SImode)) == 4)
    return "vpbroadcastd\t{%1, %0|%0, %k1}";
  else
    return "vpbroadcastd\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3957 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V16SImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V16SImode)) == 4)
    return "vpbroadcastd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vpbroadcastd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3958 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V8SImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V8SImode)) == 4)
    return "vpbroadcastd\t{%1, %0|%0, %k1}";
  else
    return "vpbroadcastd\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3959 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V8SImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V8SImode)) == 4)
    return "vpbroadcastd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vpbroadcastd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3960 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V4SImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V4SImode)) == 4)
    return "vpbroadcastd\t{%1, %0|%0, %k1}";
  else
    return "vpbroadcastd\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3961 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V4SImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V4SImode)) == 4)
    return "vpbroadcastd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vpbroadcastd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3962 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V8DImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V8DImode)) == 4)
    return "vpbroadcastq\t{%1, %0|%0, %k1}";
  else
    return "vpbroadcastq\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3963 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V8DImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V8DImode)) == 4)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3964 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V4DImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V4DImode)) == 4)
    return "vpbroadcastq\t{%1, %0|%0, %k1}";
  else
    return "vpbroadcastq\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3965 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V4DImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V4DImode)) == 4)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3966 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V2DImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V2DImode)) == 4)
    return "vpbroadcastq\t{%1, %0|%0, %k1}";
  else
    return "vpbroadcastq\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3967 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V2DImode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V2DImode)) == 4)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3968 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V16SFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V16SFmode)) == 4)
    return "vbroadcastss\t{%1, %0|%0, %k1}";
  else
    return "vbroadcastss\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3969 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V16SFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V16SFmode)) == 4)
    return "vbroadcastss\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vbroadcastss\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3970 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V8SFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V8SFmode)) == 4)
    return "vbroadcastss\t{%1, %0|%0, %k1}";
  else
    return "vbroadcastss\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3971 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V8SFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V8SFmode)) == 4)
    return "vbroadcastss\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vbroadcastss\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3972 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V4SFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V4SFmode)) == 4)
    return "vbroadcastss\t{%1, %0|%0, %k1}";
  else
    return "vbroadcastss\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3973 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V4SFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V4SFmode)) == 4)
    return "vbroadcastss\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vbroadcastss\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3974 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V8DFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V8DFmode)) == 4)
    return "vbroadcastsd\t{%1, %0|%0, %k1}";
  else
    return "vbroadcastsd\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3975 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V8DFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V8DFmode)) == 4)
    return "vbroadcastsd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vbroadcastsd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3976 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V4DFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V4DFmode)) == 4)
    return "vbroadcastsd\t{%1, %0|%0, %k1}";
  else
    return "vbroadcastsd\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3977 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V4DFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V4DFmode)) == 4)
    return "vbroadcastsd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vbroadcastsd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char *
output_3978 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V2DFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0|%0, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V2DFmode)) == 4)
    return "vbroadcastsd\t{%1, %0|%0, %k1}";
  else
    return "vbroadcastsd\t{%1, %0|%0, %q1}";
}
}

static const char *
output_3979 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17291 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  /*  There is no DF broadcast (in AVX-512*) to 128b register.
      Mimic it with integer variant.  */
  if (V2DFmode == V2DFmode)
    return "vpbroadcastq\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";

  if (GET_MODE_SIZE (GET_MODE_INNER (V2DFmode)) == 4)
    return "vbroadcastsd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}";
  else
    return "vbroadcastsd\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %q1}";
}
}

static const char * const output_3992[] = {
  "vshuff32x4\t{$0x0, %g1, %g1, %0|%0, %g1, %g1, 0x0}",
  "vbroadcastf32x4\t{%1, %0|%0, %1}",
};

static const char * const output_3993[] = {
  "vshuff32x4\t{$0x0, %g1, %g1, %0%{%3%}%N2|%0%{%3%}%N2, %g1, %g1, 0x0}",
  "vbroadcastf32x4\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_3994[] = {
  "vshufi32x4\t{$0x0, %g1, %g1, %0|%0, %g1, %g1, 0x0}",
  "vbroadcasti32x4\t{%1, %0|%0, %1}",
};

static const char * const output_3995[] = {
  "vshufi32x4\t{$0x0, %g1, %g1, %0%{%3%}%N2|%0%{%3%}%N2, %g1, %g1, 0x0}",
  "vbroadcasti32x4\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_3996[] = {
  "vshuff64x2\t{$0x44, %g1, %g1, %0|%0, %g1, %g1, 0x44}",
  "vbroadcastf64x4\t{%1, %0|%0, %1}",
};

static const char * const output_3997[] = {
  "vshuff64x2\t{$0x44, %g1, %g1, %0%{%3%}%N2|%0%{%3%}%N2, %g1, %g1, 0x44}",
  "vbroadcastf64x4\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_3998[] = {
  "vshufi64x2\t{$0x44, %g1, %g1, %0|%0, %g1, %g1, 0x44}",
  "vbroadcasti64x4\t{%1, %0|%0, %1}",
};

static const char * const output_3999[] = {
  "vshufi64x2\t{$0x44, %g1, %g1, %0%{%3%}%N2|%0%{%3%}%N2, %g1, %g1, 0x44}",
  "vbroadcasti64x4\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_4000[] = {
  "vpbroadcastb\t{%1, %0|%0, %1}",
  "vpbroadcastb\t{%k1, %0|%0, %k1}",
};

static const char * const output_4001[] = {
  "vpbroadcastb\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
  "vpbroadcastb\t{%k1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}",
};

static const char * const output_4002[] = {
  "vpbroadcastb\t{%1, %0|%0, %1}",
  "vpbroadcastb\t{%k1, %0|%0, %k1}",
};

static const char * const output_4003[] = {
  "vpbroadcastb\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
  "vpbroadcastb\t{%k1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}",
};

static const char * const output_4004[] = {
  "vpbroadcastb\t{%1, %0|%0, %1}",
  "vpbroadcastb\t{%k1, %0|%0, %k1}",
};

static const char * const output_4005[] = {
  "vpbroadcastb\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
  "vpbroadcastb\t{%k1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}",
};

static const char * const output_4006[] = {
  "vpbroadcastw\t{%1, %0|%0, %1}",
  "vpbroadcastw\t{%k1, %0|%0, %k1}",
};

static const char * const output_4007[] = {
  "vpbroadcastw\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
  "vpbroadcastw\t{%k1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}",
};

static const char * const output_4008[] = {
  "vpbroadcastw\t{%1, %0|%0, %1}",
  "vpbroadcastw\t{%k1, %0|%0, %k1}",
};

static const char * const output_4009[] = {
  "vpbroadcastw\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
  "vpbroadcastw\t{%k1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}",
};

static const char * const output_4010[] = {
  "vpbroadcastw\t{%1, %0|%0, %1}",
  "vpbroadcastw\t{%k1, %0|%0, %k1}",
};

static const char * const output_4011[] = {
  "vpbroadcastw\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
  "vpbroadcastw\t{%k1, %0%{%3%}%N2|%0%{%3%}%N2, %k1}",
};

static const char * const output_4036[] = {
  "vshufps\t{$0, %1, %1, %0|%0, %1, %1, 0}",
  "vbroadcastss\t{%1, %0|%0, %1}",
  "shufps\t{$0, %0, %0|%0, %0, 0}",
};

static const char * const output_4037[] = {
  "%vpshufd\t{$0, %1, %0|%0, %1, 0}",
  "vbroadcastss\t{%1, %0|%0, %1}",
  "shufps\t{$0, %0, %0|%0, %0, 0}",
};

static const char * const output_4038[] = {
  "punpcklqdq\t%0, %0",
  "vpunpcklqdq\t{%d1, %0|%0, %d1}",
  "%vmovddup\t{%1, %0|%0, %1}",
  "movlhps\t%0, %0",
};

static const char * const output_4043[] = {
  "vpbroadcastb\t{%1, %0|%0, %1}",
  "vpbroadcastb\t{%x1, %0|%0, %x1}",
  "#",
};

static const char * const output_4044[] = {
  "vpbroadcastb\t{%1, %0|%0, %1}",
  "vpbroadcastb\t{%x1, %0|%0, %x1}",
  "#",
};

static const char * const output_4045[] = {
  "vpbroadcastw\t{%1, %0|%0, %1}",
  "vpbroadcastw\t{%x1, %0|%0, %x1}",
  "#",
};

static const char * const output_4046[] = {
  "vpbroadcastw\t{%1, %0|%0, %1}",
  "vpbroadcastw\t{%x1, %0|%0, %x1}",
  "#",
};

static const char * const output_4047[] = {
  "vpbroadcastd\t{%1, %0|%0, %1}",
  "vpbroadcastd\t{%x1, %0|%0, %x1}",
  "#",
};

static const char * const output_4048[] = {
  "vpbroadcastd\t{%1, %0|%0, %1}",
  "vpbroadcastd\t{%x1, %0|%0, %x1}",
  "#",
};

static const char * const output_4049[] = {
  "vpbroadcastd\t{%1, %0|%0, %1}",
  "vbroadcastss\t{%1, %0|%0, %1}",
  "vpbroadcastd\t{%x1, %0|%0, %x1}",
  "vpbroadcastd\t{%x1, %g0|%g0, %x1}",
  "#",
};

static const char * const output_4050[] = {
  "vbroadcastss\t{%1, %0|%0, %1}",
  "vbroadcastss\t{%1, %0|%0, %1}",
  "vbroadcastss\t{%x1, %0|%0, %x1}",
  "vbroadcastss\t{%x1, %g0|%g0, %x1}",
  "#",
};

static const char * const output_4051[] = {
  "vpbroadcastq\t{%1, %0|%0, %1}",
  "vbroadcastsd\t{%1, %0|%0, %1}",
  "vpbroadcastq\t{%x1, %0|%0, %x1}",
  "vpbroadcastq\t{%x1, %g0|%g0, %x1}",
  "#",
};

static const char * const output_4052[] = {
  "vbroadcastsd\t{%1, %0|%0, %1}",
  "vbroadcastsd\t{%1, %0|%0, %1}",
  "vbroadcastsd\t{%x1, %0|%0, %x1}",
  "vbroadcastsd\t{%x1, %g0|%g0, %x1}",
  "#",
};

static const char * const output_4053[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_4054[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_4055[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_4056[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_4057[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_4058[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_4069[] = {
  "vshufi32x4\t{$0x0, %t1, %t1, %0|%0, %t1, %t1, 0x0}",
  "vbroadcasti32x4\t{%1, %0|%0, %1}",
};

static const char * const output_4070[] = {
  "vshufi32x4\t{$0x0, %t1, %t1, %0%{%3%}%N2|%0%{%3%}%N2, %t1, %t1, 0x0}",
  "vbroadcasti32x4\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_4071[] = {
  "vshuff32x4\t{$0x0, %t1, %t1, %0|%0, %t1, %t1, 0x0}",
  "vbroadcastf32x4\t{%1, %0|%0, %1}",
};

static const char * const output_4072[] = {
  "vshuff32x4\t{$0x0, %t1, %t1, %0%{%3%}%N2|%0%{%3%}%N2, %t1, %t1, 0x0}",
  "vbroadcastf32x4\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_4073[] = {
  "vshuff32x4\t{$0x44, %g1, %g1, %0|%0, %g1, %g1, 0x44}",
  "vbroadcastf32x8\t{%1, %0|%0, %1}",
};

static const char * const output_4074[] = {
  "vshuff32x4\t{$0x44, %g1, %g1, %0%{%3%}%N2|%0%{%3%}%N2, %g1, %g1, 0x44}",
  "vbroadcastf32x8\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_4075[] = {
  "vshufi32x4\t{$0x44, %g1, %g1, %0|%0, %g1, %g1, 0x44}",
  "vbroadcasti32x8\t{%1, %0|%0, %1}",
};

static const char * const output_4076[] = {
  "vshufi32x4\t{$0x44, %g1, %g1, %0%{%3%}%N2|%0%{%3%}%N2, %g1, %g1, 0x44}",
  "vbroadcasti32x8\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_4077[] = {
  "vshufi64x2\t{$0x0, %g1, %g1, %0|%0, %g1, %g1, 0x0}",
  "vbroadcasti64x2\t{%1, %0|%0, %1}",
};

static const char * const output_4078[] = {
  "vshufi64x2\t{$0x0, %g1, %g1, %0%{%3%}%N2|%0%{%3%}%N2, %g1, %g1, 0x0}",
  "vbroadcasti64x2\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_4079[] = {
  "vshuff64x2\t{$0x0, %g1, %g1, %0|%0, %g1, %g1, 0x0}",
  "vbroadcastf64x2\t{%1, %0|%0, %1}",
};

static const char * const output_4080[] = {
  "vshuff64x2\t{$0x0, %g1, %g1, %0%{%3%}%N2|%0%{%3%}%N2, %g1, %g1, 0x0}",
  "vbroadcastf64x2\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_4081[] = {
  "vshufi64x2\t{$0x0, %t1, %t1, %0|%0, %t1, %t1, 0x0}",
  "vbroadcasti64x2\t{%1, %0|%0, %1}",
};

static const char * const output_4082[] = {
  "vshufi64x2\t{$0x0, %t1, %t1, %0%{%3%}%N2|%0%{%3%}%N2, %t1, %t1, 0x0}",
  "vbroadcasti64x2\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char * const output_4083[] = {
  "vshuff64x2\t{$0x0, %t1, %t1, %0|%0, %t1, %t1, 0x0}",
  "vbroadcastf64x2\t{%1, %0|%0, %1}",
};

static const char * const output_4084[] = {
  "vshuff64x2\t{$0x0, %t1, %t1, %0%{%3%}%N2|%0%{%3%}%N2, %t1, %t1, 0x0}",
  "vbroadcastf64x2\t{%1, %0%{%3%}%N2|%0%{%3%}%N2, %1}",
};

static const char *
output_4091 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17617 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int elt = INTVAL (operands[3]);
  switch (which_alternative)
    {
    case 0:
    case 1:
      operands[1] = adjust_address_nv (operands[1], SFmode, elt * 4);
      return "vbroadcastss\t{%1, %0|%0, %k1}";
    case 2:
      operands[2] = GEN_INT (elt * 0x55);
      return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4094 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V16SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_4095 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V16SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}";
}
}

static const char *
output_4096 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V8SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_4097 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V8SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}";
}
}

static const char *
output_4098 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V4SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_4099 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V4SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}";
}
}

static const char *
output_4100 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V8DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_4101 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V8DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}";
}
}

static const char *
output_4102 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V4DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_4103 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V4DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}";
}
}

static const char *
output_4104 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V2DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_4105 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 17733 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V2DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0%{%5%}%N4|%0%{%5%}%N4, %1, %2}";
}
}

static const char *
output_4229 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18078 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vperm2f128_parallel (operands[3], V8SImode) - 1;
  if (mask == 0x12)
    return "vinsert%~128\t{$0, %x2, %1, %0|%0, %1, %x2, 0}";
  if (mask == 0x20)
    return "vinsert%~128\t{$1, %x2, %1, %0|%0, %1, %x2, 1}";
  operands[3] = GEN_INT (mask);
  return "vperm2%~128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_4230 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18078 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vperm2f128_parallel (operands[3], V8SFmode) - 1;
  if (mask == 0x12)
    return "vinsertf128\t{$0, %x2, %1, %0|%0, %1, %x2, 0}";
  if (mask == 0x20)
    return "vinsertf128\t{$1, %x2, %1, %0|%0, %1, %x2, 1}";
  operands[3] = GEN_INT (mask);
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_4231 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18078 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  int mask = avx_vperm2f128_parallel (operands[3], V4DFmode) - 1;
  if (mask == 0x12)
    return "vinsertf128\t{$0, %x2, %1, %0|%0, %1, %x2, 0}";
  if (mask == 0x20)
    return "vinsertf128\t{$1, %x2, %1, %0|%0, %1, %x2, 1}";
  operands[3] = GEN_INT (mask);
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_4232 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18100 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] =
   GEN_INT (INTVAL (operands[3]) * GET_MODE_UNIT_SIZE (GET_MODE (operands[0])));

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%2, %1, %0|%0, %1, %2}";
    case 1:
      return "vpalignr\t{%2, %1, %1, %0|%0, %1, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4233 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18100 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] =
   GEN_INT (INTVAL (operands[3]) * GET_MODE_UNIT_SIZE (GET_MODE (operands[0])));

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%2, %1, %0|%0, %1, %2}";
    case 1:
      return "vpalignr\t{%2, %1, %1, %0|%0, %1, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4234 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18100 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] =
   GEN_INT (INTVAL (operands[3]) * GET_MODE_UNIT_SIZE (GET_MODE (operands[0])));

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%2, %1, %0|%0, %1, %2}";
    case 1:
      return "vpalignr\t{%2, %1, %1, %0|%0, %1, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4235 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18100 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] =
   GEN_INT (INTVAL (operands[3]) * GET_MODE_UNIT_SIZE (GET_MODE (operands[0])));

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%2, %1, %0|%0, %1, %2}";
    case 1:
      return "vpalignr\t{%2, %1, %1, %0|%0, %1, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4236 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18100 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] =
   GEN_INT (INTVAL (operands[3]) * GET_MODE_UNIT_SIZE (GET_MODE (operands[0])));

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%2, %1, %0|%0, %1, %2}";
    case 1:
      return "vpalignr\t{%2, %1, %1, %0|%0, %1, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4237 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18100 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  operands[2] =
   GEN_INT (INTVAL (operands[3]) * GET_MODE_UNIT_SIZE (GET_MODE (operands[0])));

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%2, %1, %0|%0, %1, %2}";
    case 1:
      return "vpalignr\t{%2, %1, %1, %0|%0, %1, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4238 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18183 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinserti64x2\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
  else
    return "vinsert%~128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
}
}

static const char *
output_4239 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18183 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinserti64x2\t{$0x0, %2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2, 0x0}";
  else
    return "vinsert%~128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
}
}

static const char *
output_4240 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18183 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinsertf64x2\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
  else
    return "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
}
}

static const char *
output_4241 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18183 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinsertf64x2\t{$0x0, %2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2, 0x0}";
  else
    return "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
}
}

static const char *
output_4242 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18203 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinserti64x2\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
  else
    return "vinsert%~128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
}
}

static const char *
output_4243 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18203 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinserti64x2\t{$0x1, %2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2, 0x1}";
  else
    return "vinsert%~128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
}
}

static const char *
output_4244 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18203 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinsertf64x2\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
  else
    return "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
}
}

static const char *
output_4245 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18203 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinsertf64x2\t{$0x1, %2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2, 0x1}";
  else
    return "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
}
}

static const char *
output_4246 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18224 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinserti32x4\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
  else
    return "vinsert%~128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
}
}

static const char *
output_4247 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18224 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinserti32x4\t{$0x0, %2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2, 0x0}";
  else
    return "vinsert%~128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
}
}

static const char *
output_4248 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18224 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinsertf32x4\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
  else
    return "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
}
}

static const char *
output_4249 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18224 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinsertf32x4\t{$0x0, %2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2, 0x0}";
  else
    return "vinsertf128\t{$0x0, %2, %1, %0|%0, %1, %2, 0x0}";
}
}

static const char *
output_4250 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18245 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinserti32x4\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
  else
    return "vinsert%~128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
}
}

static const char *
output_4251 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18245 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinserti32x4\t{$0x1, %2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2, 0x1}";
  else
    return "vinsert%~128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
}
}

static const char *
output_4252 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18245 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinsertf32x4\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
  else
    return "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
}
}

static const char *
output_4253 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18245 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (TARGET_AVX512VL)
    return "vinsertf32x4\t{$0x1, %2, %1, %0%{%4%}%N3|%0%{%4%}%N3, %1, %2, 0x1}";
  else
    return "vinsertf128\t{$0x1, %2, %1, %0|%0, %1, %2, 0x1}";
}
}

static const char *
output_4331 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4332 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4333 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4334 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4335 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4336 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4337 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinserti64x4\t{$0x1, %2, %g1, %0|%0, %g1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4338 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinserti64x4\t{$0x1, %2, %g1, %0|%0, %g1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4339 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinserti64x4\t{$0x1, %2, %g1, %0|%0, %g1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4340 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinserti64x4\t{$0x1, %2, %g1, %0|%0, %g1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4341 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf64x4\t{$0x1, %2, %g1, %0|%0, %g1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4342 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18520 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf64x4\t{$0x1, %2, %g1, %0|%0, %g1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V16SF:
	  return "vmovaps\t{%1, %t0|%t0, %1}";
	case MODE_V8DF:
	  return "vmovapd\t{%1, %t0|%t0, %1}";
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	case MODE_XI:
	  return "vmovdqa\t{%1, %t0|%t0, %1}";
	case MODE_OI:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_4408 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V2DImode != V2DImode)
    return "vpgatherqq\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqq\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4409 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V2DImode != V2DImode)
    return "vpgatherqq\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqq\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4410 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V2DFmode != V2DFmode)
    return "vgatherqpd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqpd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4411 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V2DFmode != V2DFmode)
    return "vgatherqpd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqpd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4412 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4DImode != V4DImode)
    return "vpgatherqq\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqq\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4413 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4DImode != V4DImode)
    return "vpgatherqq\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqq\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4414 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4DFmode != V4DFmode)
    return "vgatherqpd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqpd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4415 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4DFmode != V4DFmode)
    return "vgatherqpd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqpd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4416 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4SImode != V4SImode)
    return "vpgatherqd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4417 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4SImode != V4SImode)
    return "vpgatherqd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4418 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4SFmode != V4SFmode)
    return "vgatherqps\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqps\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4419 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4SFmode != V4SFmode)
    return "vgatherqps\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqps\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4420 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8SImode != V4SImode)
    return "vpgatherqd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4421 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8SImode != V4SImode)
    return "vpgatherqd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4422 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8SFmode != V4SFmode)
    return "vgatherqps\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqps\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4423 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18807 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8SFmode != V4SFmode)
    return "vgatherqps\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqps\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_4504 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V16SImode != V8SImode)
    {
      if (64 != 64)
	return "vpgatherqd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4505 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V16SImode != V8SImode)
    {
      if (64 != 64)
	return "vpgatherqd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4506 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V16SFmode != V8SFmode)
    {
      if (64 != 64)
	return "vgatherqps\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqps\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqps\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4507 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V16SFmode != V8SFmode)
    {
      if (64 != 64)
	return "vgatherqps\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqps\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqps\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4508 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8DImode != V8DImode)
    {
      if (64 != 64)
	return "vpgatherqq\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqq\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqq\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4509 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8DImode != V8DImode)
    {
      if (64 != 64)
	return "vpgatherqq\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqq\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqq\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4510 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8DFmode != V8DFmode)
    {
      if (64 != 64)
	return "vgatherqpd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqpd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqpd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4511 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8DFmode != V8DFmode)
    {
      if (64 != 64)
	return "vgatherqpd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqpd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqpd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4512 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8SImode != V4SImode)
    {
      if (32 != 64)
	return "vpgatherqd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4513 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8SImode != V4SImode)
    {
      if (32 != 64)
	return "vpgatherqd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4514 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8SFmode != V4SFmode)
    {
      if (32 != 64)
	return "vgatherqps\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqps\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqps\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4515 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V8SFmode != V4SFmode)
    {
      if (32 != 64)
	return "vgatherqps\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqps\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqps\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4516 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4DImode != V4DImode)
    {
      if (32 != 64)
	return "vpgatherqq\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqq\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqq\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4517 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4DImode != V4DImode)
    {
      if (32 != 64)
	return "vpgatherqq\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqq\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqq\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4518 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4DFmode != V4DFmode)
    {
      if (32 != 64)
	return "vgatherqpd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqpd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqpd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4519 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4DFmode != V4DFmode)
    {
      if (32 != 64)
	return "vgatherqpd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqpd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqpd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4520 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4SImode != V4SImode)
    {
      if (16 != 64)
	return "vpgatherqd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4521 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4SImode != V4SImode)
    {
      if (16 != 64)
	return "vpgatherqd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4522 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4SFmode != V4SFmode)
    {
      if (16 != 64)
	return "vgatherqps\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqps\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqps\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4523 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V4SFmode != V4SFmode)
    {
      if (16 != 64)
	return "vgatherqps\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqps\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqps\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4524 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V2DImode != V2DImode)
    {
      if (16 != 64)
	return "vpgatherqq\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqq\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqq\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4525 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V2DImode != V2DImode)
    {
      if (16 != 64)
	return "vpgatherqq\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vpgatherqq\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vpgatherqq\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4526 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V2DFmode != V2DFmode)
    {
      if (16 != 64)
	return "vgatherqpd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqpd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqpd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4527 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 18972 "../../../src/gcc-6.2.0/gcc/config/i386/sse.md"
{
  if (V2DFmode != V2DFmode)
    {
      if (16 != 64)
	return "vgatherqpd\t{%5, %x0%{%1%}|%t0%{%1%}, %g5}";
      else
	return "vgatherqpd\t{%5, %t0%{%1%}|%t0%{%1%}, %g5}";
    }
  return "vgatherqpd\t{%5, %0%{%1%}|%0%{%1%}, %g5}";
}
}

static const char *
output_4751 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 321 "../../../src/gcc-6.2.0/gcc/config/i386/sync.md"
{
  gcc_assert (find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != NULL_RTX);

  return "fistp%Z0\t%0";
}
}

static const char *
output_4759 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 483 "../../../src/gcc-6.2.0/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], QImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K3inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K3dec{b}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], QImode))
    return "lock{%;} %K3sub{b}\t{%1, %0|%0, %1}";

  return "lock{%;} %K3add{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_4760 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 483 "../../../src/gcc-6.2.0/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], HImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K3inc{w}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K3dec{w}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], HImode))
    return "lock{%;} %K3sub{w}\t{%1, %0|%0, %1}";

  return "lock{%;} %K3add{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_4761 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 483 "../../../src/gcc-6.2.0/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], SImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K3inc{l}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K3dec{l}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], SImode))
    return "lock{%;} %K3sub{l}\t{%1, %0|%0, %1}";

  return "lock{%;} %K3add{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_4765 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 523 "../../../src/gcc-6.2.0/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], QImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2dec{b}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], QImode))
    return "lock{%;} %K2sub{b}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2add{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_4766 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 523 "../../../src/gcc-6.2.0/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], HImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2inc{w}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2dec{w}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], HImode))
    return "lock{%;} %K2sub{w}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2add{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_4767 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 523 "../../../src/gcc-6.2.0/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], SImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2inc{l}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2dec{l}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], SImode))
    return "lock{%;} %K2sub{l}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2add{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_4768 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 550 "../../../src/gcc-6.2.0/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], QImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2dec{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2inc{b}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], QImode))
    return "lock{%;} %K2add{b}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2sub{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_4769 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 550 "../../../src/gcc-6.2.0/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], HImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2dec{w}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2inc{w}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], HImode))
    return "lock{%;} %K2add{w}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2sub{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_4770 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 550 "../../../src/gcc-6.2.0/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], SImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2dec{l}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2inc{l}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], SImode))
    return "lock{%;} %K2add{l}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2sub{l}\t{%1, %0|%0, %1}";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "q,?mq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_x64nomem_operand,
    "Q,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_x64nomem_operand,
    "Qn,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,v",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "f,vm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,v",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "f,vm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "riF*o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "ri*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=X",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=X",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "re*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "re*m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    pop_operand,
    ">",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    pop_operand,
    ">",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    pop_operand,
    ">",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    pop_operand,
    ">",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,vm,v",
    XImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,vm,v",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!r,o,v,v,m",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "riFo,re,C,vm,v",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,r,r,r,m,*y,*y,?*y,?m,?r,?*Ym,*v,*v,*v,m,m,?r,?r,?*Yi,?*Ym,?*Yi,*k,*k,*r,*m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "riFo,riF,Z,rem,i,re,C,*y,m,*y,*Yn,r,C,*v,m,*v,v,*Yj,*v,r,*Yj,*Yn,*r,*km,*k,*k",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,*y,*y,?rm,?*y,*v,*v,*v,m,?r,?r,?*Yi,*k,*rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "g,re,C,*y,*y,rm,C,*v,m,*v,*Yj,*v,r,*krm,*k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=k,k",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "r,km",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,k,k,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,rn,rm,rn,r,km,k,k",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,q,q,r,r,?r,m,k,k,r,m,k",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "q,qn,qm,q,rn,qm,qn,r,k,k,k,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "a,rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "a,rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "a,re",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "a,re",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+rm,r",
    HImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    1,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    HImode,
    1,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=R",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=R",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_x64nomem_operand,
    "=Q,?R,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q,Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "+Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_x64nomem_operand,
    "Qn,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "+Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_x64nomem_operand,
    "Qn,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=<,<",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "x,*roF",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<,<,<",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,r,*r,oF",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<,<,<,<,<",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,r,*r,oF,rmF,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<,<",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,rmF,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m,?*r,!o",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "C,xm,x,*roF,*rC",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,?r,!o,?*r,!o,!o,!o,r,o",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "fm,f,G,roF,r,*roF,*r,F,C,roF,rF",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=Yf*f,m,Yf*f,?r,!o,?*r,!o,!o,?r,?m,?r,?r,v,v,v,m,*x,*x,*x,m,r,Yi,r,o,r,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Yf*fm,Yf*f,G,roF,r,*roF,*r,F,rm,rC,C,F,C,v,m,v,C,*x,m,*x,Yj,r,roF,rF,rmF,rC",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=Yf*f,m,Yf*f,?r,?m,v,v,v,m,?r,?Yi,!*y,!*y,!m,!r,!*Ym,r,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Yf*fm,Yf*f,G,rmF,rF,C,v,m,v,Yj,r,*y,m,*y,*Yn,r,rmF,rF",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,?r,?o,r,o,?*Ym,?!*y,?r,?r,?*Yi,?*x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_zext_operand,
    "0,rm,r,rmWz,0,r,m,*Yj,*x,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,?&q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,?&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,?&q",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&q",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=*A,r,?r,?*o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,X,X,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=*a,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=*a,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "*0,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,v",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f,vm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=fm,v",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f,vm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,?f,?x,?*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f,xm,f,f,f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,X,m,m,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f,f,f,f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m,m,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&x,&x",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&x,&x",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,v,v",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,v,v",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=x",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    address_no_seg_operand,
    "Ts",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "ronF,rnF",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0,le",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0,le",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r,Yp",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,Yp",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm,0,ln",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,q,r,r,Yp",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,q,0,r,Yp",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm,0,rn,0,ln",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmn,rn,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=q,q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r,r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmn,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=qm",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=rm",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=rm",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "=Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0,0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_x64nomem_operand,
    "Qn,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "%0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    sext_operand,
    "qmWe,qWe",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    sext_operand,
    "rmWe,rWe",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_sext_operand,
    "rmWe,rWe",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_sext_operand,
    "rmWe,rWe",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_immediate_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_immediate_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_immediate_operand,
    "e",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_immediate_operand,
    "e",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const248_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "ri",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const248_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "ronF,rnF",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    sext_operand,
    "qWe,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    sext_operand,
    "rWe,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_sext_operand,
    "rWe,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_sext_operand,
    "rWe,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "K,n,mr",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "K,e,mr",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%rm,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_sext_operand,
    "We,mr",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "mr",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "K,n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "K,i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_immediate_operand,
    "K,e",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "K,i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=d",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%d",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%d,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "1",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "n,n,qn,n",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "n,n,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "n,n,rn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "e,e,re",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_x64nomem_operand,
    "Q,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "=k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "=k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "=k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "=k",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "k",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    mask_reg_operand,
    "k",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,Ya,!k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm,k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm,L,k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,Ya,!k",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm,k",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm,L,k",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r,!k",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,k",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qmn,rn,k",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,&r,!k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,0,k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,&r,!k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,0,k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=q,qm,*r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn,n",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmn,rn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "=Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0,0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_x64nomem_operand,
    "Q,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,k",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,k",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,k",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,!k",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,k",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "<g>,r<i>,k",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,m,r,!k",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,k",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn,rn,k",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+q,m",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,!k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,!k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,!k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,!k",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,k",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,k",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=k",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=ro",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,f,!r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,f,!r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,0",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    TFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xmC",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xmC",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xmC",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1,x,1,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1,x,1,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    TFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1,x,1,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,k",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,k",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,k",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,!k",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,k",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r,!k",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0,k",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=k",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "k",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_pm1_operand,
    "n,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Jc,Jc",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+r*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Ic",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,l,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,M,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,l,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cJ,M,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,Yp",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm,r,Yp",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0,l",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,cI,M",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_63_operand,
    "J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_63_operand,
    "J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Jc",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cJ,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cJ,J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "rN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPUmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPUmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPUmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    indirect_branch_operand,
    "rBw",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    indirect_branch_operand,
    "rBw",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    indirect_branch_operand,
    "rBw",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    indirect_branch_operand,
    "rBw",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "lBwBz",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "rBwBz",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    GOT_memory_operand,
    "Bg",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_no_elim_operand,
    "U",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    GOT32_symbol_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "UBsBz",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "UBsBz",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "lmBz",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "UBsBz",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "UBsBz",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&q",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "N",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "N",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,m,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+Q,r",
    HImode,
    1,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=Q",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&Q",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=Q",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "Bz",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "Bz",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "Bz",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_modbase_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,x,v",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm,vm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,x,v",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm,vm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,x,v",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_mixssei387nonimm_operand,
    "0,fm,0,v",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm,vm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x,v",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_mixssei387nonimm_operand,
    "0,fm,0,v",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm,vm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=v",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "F",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "F",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "F",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r,0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f,&r,&r,r,r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0,rm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm,0,rm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,r,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,v",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,vm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,v",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,vm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,vm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,vm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "re,le",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "re,le",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=a,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=w",
    BND32mode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    address_mpx_no_base_operand,
    "Tb",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    bnd_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=w",
    BND64mode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    address_mpx_no_base_operand,
    "Tb",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    bnd_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,m",
    BND32mode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "wm,w",
    BND32mode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=w,m",
    BND64mode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "wm,w",
    BND64mode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "w",
    BND32mode,
    0,
    0,
    1,
    0
  },
  {
    address_no_seg_operand,
    "Ts",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    bnd_mem_operator,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "w",
    BND64mode,
    0,
    0,
    1,
    0
  },
  {
    address_no_seg_operand,
    "Ts",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    bnd_mem_operator,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=w",
    BND32mode,
    0,
    0,
    1,
    0
  },
  {
    address_mpx_no_index_operand,
    "Ti",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    bnd_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=w",
    BND64mode,
    0,
    0,
    1,
    0
  },
  {
    address_mpx_no_index_operand,
    "Ti",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    bnd_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    address_mpx_no_index_operand,
    "Ti",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    BND32mode,
    0,
    0,
    1,
    0
  },
  {
    bnd_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    bnd_mem_operator,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    address_mpx_no_index_operand,
    "Ti",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "w",
    BND64mode,
    0,
    0,
    1,
    0
  },
  {
    bnd_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    bnd_mem_operator,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    symbol_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,o,r,r,m,?!y,!y,?!y,m,r,?!Ym,v,v,v,m,*x,*x,*x,m,r,Yi,!Ym,*Yi",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "rCo,rC,C,rm,rC,C,!y,m,?!y,?!Yn,r,C,v,m,v,C,*x,m,*x,Yj,r,*Yj,!Yn",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,r,r,m,?!y,!y,?!y,m,r,?!Ym,v,v,v,m,*x,*x,*x,m,r,Yi,!Ym,*Yi",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "rCo,rC,C,rm,rC,C,!y,m,?!y,?!Yn,r,C,v,m,v,C,*x,m,*x,Yj,r,*Yj,!Yn",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,r,r,m,?!y,!y,?!y,m,r,?!Ym,v,v,v,m,*x,*x,*x,m,r,Yi,!Ym,*Yi",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "rCo,rC,C,rm,rC,C,!y,m,?!y,?!Yn,r,C,v,m,v,C,*x,m,*x,Yj,r,*Yj,!Yn",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,r,r,m,?!y,!y,?!y,m,r,?!Ym,v,v,v,m,*x,*x,*x,m,r,Yi,!Ym,*Yi",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "rCo,rC,C,rm,rC,C,!y,m,?!y,?!Yn,r,C,v,m,v,C,*x,m,*x,Yj,r,*Yj,!Yn",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,r,r,m,?!y,!y,?!y,m,r,?!Ym,v,v,v,m,*x,*x,*x,m,r,Yi,!Ym,*Yi",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "rCo,rC,C,rm,rC,C,!y,m,?!y,?!Yn,r,C,v,m,v,C,*x,m,*x,Yj,r,*Yj,!Yn",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym,0",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,y,m,f,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,ym,y,m,m",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,x,y,x,f,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,x,o,o,o,o",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,y,m,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,ym,y,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,x,y,x,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,x,o,o,o",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    emms_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V64QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V64QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V32HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V32HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V4TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V4TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V1TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V1TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "BC,vm,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V64QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V64QImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V64QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V32HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V32HImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V32HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V64QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V64QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V64QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V32HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V32HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V32HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V64QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V64QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V32HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V32HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=?x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&x,X",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V64QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V64QImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V64QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V32HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V32HImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V32HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,xBm,v,m",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,0,vm,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V16SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,v,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,xBm,v,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,0,vm,v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,xBm,v,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,0,vm,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,xBm,v,m",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,0,vm,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V8DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,v,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,xBm,v,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,0,vm,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,xBm,v,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,0,vm,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V64QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V64QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V32HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V32HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,x",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "xBm,xm",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,0,v",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v,vm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,0,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v,vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm,0",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v,0",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,0,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v,vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm,0",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "C,C,C",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v,0",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "C,C,C",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,0,v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v,vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm,0",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "C,C,C",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,0,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "C,C,C",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,0,v",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v,vm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,0,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm,0",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v,0",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,0,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm,0",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "C,C,C",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v,0",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "C,C,C",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,0,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v,vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm,0",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "C,C,C",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "%0,0,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "C,C,C",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm,v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "C,C,C,C,C",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk,Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "C,C,C,C,C",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk,Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "C,C,C,C,C",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk,Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v,v,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,v,x,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v,vm,x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,vm,0,xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "C,C,C,C,C",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk,Yk,Yk,Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "0,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "vm,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_operand,
    "v,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,m,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xBm,v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vBm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vBm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "y,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vBm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,m,v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vBm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const48_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V64QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V64QImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V64QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V32HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V32HImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V32HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    constm1_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o,o,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,m,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vBm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "xBm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,x,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,m,m,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yr,*x,x,Yr,*x,x,x,*y,*y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,0,x,0,0,x,m,0,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "Yr,*x,x,m,m,m,C,*ym,C",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,m,0,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,x",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,x,m,m",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=Yr,*v,v,Yi,x,x,v,Yr,*x,x,m,m,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,C,C,C,C,0,v,0,0,x,0,0,0",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Yr,*v,m,r,m,x,v,*rm,*rm,*rm,!x,!*re,!*fF",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=Yr,*v,v,Yi,x,x,v,Yr,*x,x,m,m,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,C,C,C,C,0,v,0,0,x,0,0,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Yr,*v,m,r,m,x,v,*rm,*rm,*rm,!x,!*re,!*fF",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=Yr,*x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Yrm,*xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yr,*x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "Yrm,*xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m,f,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,m,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm,x,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yr,*x,0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "n,n,n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,*r,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "o,o,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n,n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,m",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm,v",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "v,m",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V8DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm,vm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,vm",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm,vm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v,v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,vm",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,m",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm,v",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,m",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm,v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,vm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v,v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C,0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "k",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "k",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "k",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=xm,vm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=xm,vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,m",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v",
    V32HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,m",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v,v",
    V32HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,v",
    V64QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "v,v",
    V64QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,o,o,o,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,1,0,x,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v,v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm,v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "1,vm",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "vm,1",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C,0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk,Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,m,0,x,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,1,m,m,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_operand,
    "vm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V16SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V8DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "v",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "0C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yk",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_4_or_8_to_11_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V16SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "C",
    V16SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Yk",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "C",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,