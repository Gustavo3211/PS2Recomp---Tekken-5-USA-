#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285060
// Address: 0x285060 - 0x2852b8
void sub_00285060_0x285060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285060_0x285060");
#endif

    switch (ctx->pc) {
        case 0x285060u: goto label_285060;
        case 0x285064u: goto label_285064;
        case 0x285068u: goto label_285068;
        case 0x28506cu: goto label_28506c;
        case 0x285070u: goto label_285070;
        case 0x285074u: goto label_285074;
        case 0x285078u: goto label_285078;
        case 0x28507cu: goto label_28507c;
        case 0x285080u: goto label_285080;
        case 0x285084u: goto label_285084;
        case 0x285088u: goto label_285088;
        case 0x28508cu: goto label_28508c;
        case 0x285090u: goto label_285090;
        case 0x285094u: goto label_285094;
        case 0x285098u: goto label_285098;
        case 0x28509cu: goto label_28509c;
        case 0x2850a0u: goto label_2850a0;
        case 0x2850a4u: goto label_2850a4;
        case 0x2850a8u: goto label_2850a8;
        case 0x2850acu: goto label_2850ac;
        case 0x2850b0u: goto label_2850b0;
        case 0x2850b4u: goto label_2850b4;
        case 0x2850b8u: goto label_2850b8;
        case 0x2850bcu: goto label_2850bc;
        case 0x2850c0u: goto label_2850c0;
        case 0x2850c4u: goto label_2850c4;
        case 0x2850c8u: goto label_2850c8;
        case 0x2850ccu: goto label_2850cc;
        case 0x2850d0u: goto label_2850d0;
        case 0x2850d4u: goto label_2850d4;
        case 0x2850d8u: goto label_2850d8;
        case 0x2850dcu: goto label_2850dc;
        case 0x2850e0u: goto label_2850e0;
        case 0x2850e4u: goto label_2850e4;
        case 0x2850e8u: goto label_2850e8;
        case 0x2850ecu: goto label_2850ec;
        case 0x2850f0u: goto label_2850f0;
        case 0x2850f4u: goto label_2850f4;
        case 0x2850f8u: goto label_2850f8;
        case 0x2850fcu: goto label_2850fc;
        case 0x285100u: goto label_285100;
        case 0x285104u: goto label_285104;
        case 0x285108u: goto label_285108;
        case 0x28510cu: goto label_28510c;
        case 0x285110u: goto label_285110;
        case 0x285114u: goto label_285114;
        case 0x285118u: goto label_285118;
        case 0x28511cu: goto label_28511c;
        case 0x285120u: goto label_285120;
        case 0x285124u: goto label_285124;
        case 0x285128u: goto label_285128;
        case 0x28512cu: goto label_28512c;
        case 0x285130u: goto label_285130;
        case 0x285134u: goto label_285134;
        case 0x285138u: goto label_285138;
        case 0x28513cu: goto label_28513c;
        case 0x285140u: goto label_285140;
        case 0x285144u: goto label_285144;
        case 0x285148u: goto label_285148;
        case 0x28514cu: goto label_28514c;
        case 0x285150u: goto label_285150;
        case 0x285154u: goto label_285154;
        case 0x285158u: goto label_285158;
        case 0x28515cu: goto label_28515c;
        case 0x285160u: goto label_285160;
        case 0x285164u: goto label_285164;
        case 0x285168u: goto label_285168;
        case 0x28516cu: goto label_28516c;
        case 0x285170u: goto label_285170;
        case 0x285174u: goto label_285174;
        case 0x285178u: goto label_285178;
        case 0x28517cu: goto label_28517c;
        case 0x285180u: goto label_285180;
        case 0x285184u: goto label_285184;
        case 0x285188u: goto label_285188;
        case 0x28518cu: goto label_28518c;
        case 0x285190u: goto label_285190;
        case 0x285194u: goto label_285194;
        case 0x285198u: goto label_285198;
        case 0x28519cu: goto label_28519c;
        case 0x2851a0u: goto label_2851a0;
        case 0x2851a4u: goto label_2851a4;
        case 0x2851a8u: goto label_2851a8;
        case 0x2851acu: goto label_2851ac;
        case 0x2851b0u: goto label_2851b0;
        case 0x2851b4u: goto label_2851b4;
        case 0x2851b8u: goto label_2851b8;
        case 0x2851bcu: goto label_2851bc;
        case 0x2851c0u: goto label_2851c0;
        case 0x2851c4u: goto label_2851c4;
        case 0x2851c8u: goto label_2851c8;
        case 0x2851ccu: goto label_2851cc;
        case 0x2851d0u: goto label_2851d0;
        case 0x2851d4u: goto label_2851d4;
        case 0x2851d8u: goto label_2851d8;
        case 0x2851dcu: goto label_2851dc;
        case 0x2851e0u: goto label_2851e0;
        case 0x2851e4u: goto label_2851e4;
        case 0x2851e8u: goto label_2851e8;
        case 0x2851ecu: goto label_2851ec;
        case 0x2851f0u: goto label_2851f0;
        case 0x2851f4u: goto label_2851f4;
        case 0x2851f8u: goto label_2851f8;
        case 0x2851fcu: goto label_2851fc;
        case 0x285200u: goto label_285200;
        case 0x285204u: goto label_285204;
        case 0x285208u: goto label_285208;
        case 0x28520cu: goto label_28520c;
        case 0x285210u: goto label_285210;
        case 0x285214u: goto label_285214;
        case 0x285218u: goto label_285218;
        case 0x28521cu: goto label_28521c;
        case 0x285220u: goto label_285220;
        case 0x285224u: goto label_285224;
        case 0x285228u: goto label_285228;
        case 0x28522cu: goto label_28522c;
        case 0x285230u: goto label_285230;
        case 0x285234u: goto label_285234;
        case 0x285238u: goto label_285238;
        case 0x28523cu: goto label_28523c;
        case 0x285240u: goto label_285240;
        case 0x285244u: goto label_285244;
        case 0x285248u: goto label_285248;
        case 0x28524cu: goto label_28524c;
        case 0x285250u: goto label_285250;
        case 0x285254u: goto label_285254;
        case 0x285258u: goto label_285258;
        case 0x28525cu: goto label_28525c;
        case 0x285260u: goto label_285260;
        case 0x285264u: goto label_285264;
        case 0x285268u: goto label_285268;
        case 0x28526cu: goto label_28526c;
        case 0x285270u: goto label_285270;
        case 0x285274u: goto label_285274;
        case 0x285278u: goto label_285278;
        case 0x28527cu: goto label_28527c;
        case 0x285280u: goto label_285280;
        case 0x285284u: goto label_285284;
        case 0x285288u: goto label_285288;
        case 0x28528cu: goto label_28528c;
        case 0x285290u: goto label_285290;
        case 0x285294u: goto label_285294;
        case 0x285298u: goto label_285298;
        case 0x28529cu: goto label_28529c;
        case 0x2852a0u: goto label_2852a0;
        case 0x2852a4u: goto label_2852a4;
        case 0x2852a8u: goto label_2852a8;
        case 0x2852acu: goto label_2852ac;
        case 0x2852b0u: goto label_2852b0;
        case 0x2852b4u: goto label_2852b4;
        default: break;
    }

    ctx->pc = 0x285060u;

label_285060:
    // 0x285060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_285064:
    // 0x285064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x285064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285068:
    // 0x285068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28506c:
    // 0x28506c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28506cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285070:
    // 0x285070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x285070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_285074:
    // 0x285074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x285074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_285078:
    // 0x285078: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x285078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28507c:
    // 0x28507c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_285080:
    // 0x285080: 0x14640087  bne         $v1, $a0, . + 4 + (0x87 << 2)
label_285084:
    if (ctx->pc == 0x285084u) {
        ctx->pc = 0x285084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285080u;
        // 0x285084: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285088u;
        goto label_285088;
    }
    ctx->pc = 0x285080u;
    {
        const bool branch_taken_0x285080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x285084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285080u;
        // 0x285084: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285080) {
            ctx->pc = 0x2852A0u;
            goto label_2852a0;
        }
    }
    ctx->pc = 0x285088u;
label_285088:
    // 0x285088: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x285088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28508c:
    // 0x28508c: 0x50600085  beql        $v1, $zero, . + 4 + (0x85 << 2)
label_285090:
    if (ctx->pc == 0x285090u) {
        ctx->pc = 0x285090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28508Cu;
        // 0x285090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285094u;
        goto label_285094;
    }
    ctx->pc = 0x28508Cu;
    {
        const bool branch_taken_0x28508c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28508c) {
            ctx->pc = 0x285090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28508Cu;
            // 0x285090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2852A4u;
            goto label_2852a4;
        }
    }
    ctx->pc = 0x285094u;
label_285094:
    // 0x285094: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x285094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_285098:
    // 0x285098: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x285098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28509c:
    // 0x28509c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2850a0:
    if (ctx->pc == 0x2850A0u) {
        ctx->pc = 0x2850A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28509Cu;
        // 0x2850a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850A4u;
        goto label_2850a4;
    }
    ctx->pc = 0x28509Cu;
    {
        const bool branch_taken_0x28509c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2850A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28509Cu;
        // 0x2850a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28509c) {
            ctx->pc = 0x2850B4u;
            goto label_2850b4;
        }
    }
    ctx->pc = 0x2850A4u;
label_2850a4:
    // 0x2850a4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2850a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2850a8:
    // 0x2850a8: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_2850ac:
    if (ctx->pc == 0x2850ACu) {
        ctx->pc = 0x2850ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850A8u;
        // 0x2850ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850B0u;
        goto label_2850b0;
    }
    ctx->pc = 0x2850A8u;
    {
        const bool branch_taken_0x2850a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850A8u;
        // 0x2850ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850a8) {
            ctx->pc = 0x2852A0u;
            goto label_2852a0;
        }
    }
    ctx->pc = 0x2850B0u;
label_2850b0:
    // 0x2850b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2850b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2850b4:
    // 0x2850b4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2850b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2850b8:
    // 0x2850b8: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_2850bc:
    if (ctx->pc == 0x2850BCu) {
        ctx->pc = 0x2850BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850B8u;
        // 0x2850bc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850C0u;
        goto label_2850c0;
    }
    ctx->pc = 0x2850B8u;
    {
        const bool branch_taken_0x2850b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2850BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850B8u;
        // 0x2850bc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850b8) {
            ctx->pc = 0x2850D0u;
            goto label_2850d0;
        }
    }
    ctx->pc = 0x2850C0u;
label_2850c0:
    // 0x2850c0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2850c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_2850c4:
    // 0x2850c4: 0x24425620  addiu       $v0, $v0, 0x5620
    ctx->pc = 0x2850c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22048));
label_2850c8:
    // 0x2850c8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2850cc:
    if (ctx->pc == 0x2850CCu) {
        ctx->pc = 0x2850CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850C8u;
        // 0x2850cc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850D0u;
        goto label_2850d0;
    }
    ctx->pc = 0x2850C8u;
    {
        const bool branch_taken_0x2850c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850C8u;
        // 0x2850cc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850c8) {
            ctx->pc = 0x285184u;
            goto label_285184;
        }
    }
    ctx->pc = 0x2850D0u;
label_2850d0:
    // 0x2850d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2850d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2850d4:
    // 0x2850d4: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_2850d8:
    if (ctx->pc == 0x2850D8u) {
        ctx->pc = 0x2850D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850D4u;
        // 0x2850d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850DCu;
        goto label_2850dc;
    }
    ctx->pc = 0x2850D4u;
    {
        const bool branch_taken_0x2850d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2850D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850D4u;
        // 0x2850d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850d4) {
            ctx->pc = 0x2850F0u;
            goto label_2850f0;
        }
    }
    ctx->pc = 0x2850DCu;
label_2850dc:
    // 0x2850dc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2850dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_2850e0:
    // 0x2850e0: 0x24425700  addiu       $v0, $v0, 0x5700
    ctx->pc = 0x2850e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22272));
label_2850e4:
    // 0x2850e4: 0x10000027  b           . + 4 + (0x27 << 2)
label_2850e8:
    if (ctx->pc == 0x2850E8u) {
        ctx->pc = 0x2850E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850E4u;
        // 0x2850e8: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850ECu;
        goto label_2850ec;
    }
    ctx->pc = 0x2850E4u;
    {
        const bool branch_taken_0x2850e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2850E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850E4u;
        // 0x2850e8: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850e4) {
            ctx->pc = 0x285184u;
            goto label_285184;
        }
    }
    ctx->pc = 0x2850ECu;
label_2850ec:
    // 0x2850ec: 0x0  nop
    ctx->pc = 0x2850ecu;
    // NOP
label_2850f0:
    // 0x2850f0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_2850f4:
    if (ctx->pc == 0x2850F4u) {
        ctx->pc = 0x2850F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850F0u;
        // 0x2850f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850F8u;
        goto label_2850f8;
    }
    ctx->pc = 0x2850F0u;
    {
        const bool branch_taken_0x2850f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2850F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850F0u;
        // 0x2850f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850f0) {
            ctx->pc = 0x285108u;
            goto label_285108;
        }
    }
    ctx->pc = 0x2850F8u;
label_2850f8:
    // 0x2850f8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x2850f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_2850fc:
    // 0x2850fc: 0x244257e0  addiu       $v0, $v0, 0x57E0
    ctx->pc = 0x2850fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22496));
label_285100:
    // 0x285100: 0x10000020  b           . + 4 + (0x20 << 2)
label_285104:
    if (ctx->pc == 0x285104u) {
        ctx->pc = 0x285104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285100u;
        // 0x285104: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285108u;
        goto label_285108;
    }
    ctx->pc = 0x285100u;
    {
        const bool branch_taken_0x285100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285100u;
        // 0x285104: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285100) {
            ctx->pc = 0x285184u;
            goto label_285184;
        }
    }
    ctx->pc = 0x285108u;
label_285108:
    // 0x285108: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_28510c:
    if (ctx->pc == 0x28510Cu) {
        ctx->pc = 0x28510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285108u;
        // 0x28510c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285110u;
        goto label_285110;
    }
    ctx->pc = 0x285108u;
    {
        const bool branch_taken_0x285108 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285108u;
        // 0x28510c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285108) {
            ctx->pc = 0x285120u;
            goto label_285120;
        }
    }
    ctx->pc = 0x285110u;
label_285110:
    // 0x285110: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x285110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_285114:
    // 0x285114: 0x24425770  addiu       $v0, $v0, 0x5770
    ctx->pc = 0x285114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22384));
label_285118:
    // 0x285118: 0x1000001a  b           . + 4 + (0x1A << 2)
label_28511c:
    if (ctx->pc == 0x28511Cu) {
        ctx->pc = 0x28511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285118u;
        // 0x28511c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285120u;
        goto label_285120;
    }
    ctx->pc = 0x285118u;
    {
        const bool branch_taken_0x285118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285118u;
        // 0x28511c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285118) {
            ctx->pc = 0x285184u;
            goto label_285184;
        }
    }
    ctx->pc = 0x285120u;
label_285120:
    // 0x285120: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_285124:
    if (ctx->pc == 0x285124u) {
        ctx->pc = 0x285124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285120u;
        // 0x285124: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285128u;
        goto label_285128;
    }
    ctx->pc = 0x285120u;
    {
        const bool branch_taken_0x285120 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x285124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285120u;
        // 0x285124: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285120) {
            ctx->pc = 0x285140u;
            goto label_285140;
        }
    }
    ctx->pc = 0x285128u;
label_285128:
    // 0x285128: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x285128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_28512c:
    // 0x28512c: 0x24425850  addiu       $v0, $v0, 0x5850
    ctx->pc = 0x28512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22608));
label_285130:
    // 0x285130: 0x2443006c  addiu       $v1, $v0, 0x6C
    ctx->pc = 0x285130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_285134:
    // 0x285134: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x285134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_285138:
    // 0x285138: 0x10000012  b           . + 4 + (0x12 << 2)
label_28513c:
    if (ctx->pc == 0x28513Cu) {
        ctx->pc = 0x28513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285138u;
        // 0x28513c: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285140u;
        goto label_285140;
    }
    ctx->pc = 0x285138u;
    {
        const bool branch_taken_0x285138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285138u;
        // 0x28513c: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285138) {
            ctx->pc = 0x285184u;
            goto label_285184;
        }
    }
    ctx->pc = 0x285140u;
label_285140:
    // 0x285140: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_285144:
    if (ctx->pc == 0x285144u) {
        ctx->pc = 0x285144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285140u;
        // 0x285144: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285148u;
        goto label_285148;
    }
    ctx->pc = 0x285140u;
    {
        const bool branch_taken_0x285140 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x285144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285140u;
        // 0x285144: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285140) {
            ctx->pc = 0x285158u;
            goto label_285158;
        }
    }
    ctx->pc = 0x285148u;
label_285148:
    // 0x285148: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x285148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_28514c:
    // 0x28514c: 0x24425998  addiu       $v0, $v0, 0x5998
    ctx->pc = 0x28514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22936));
label_285150:
    // 0x285150: 0x1000000c  b           . + 4 + (0xC << 2)
label_285154:
    if (ctx->pc == 0x285154u) {
        ctx->pc = 0x285154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285150u;
        // 0x285154: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285158u;
        goto label_285158;
    }
    ctx->pc = 0x285150u;
    {
        const bool branch_taken_0x285150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285150u;
        // 0x285154: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285150) {
            ctx->pc = 0x285184u;
            goto label_285184;
        }
    }
    ctx->pc = 0x285158u;
label_285158:
    // 0x285158: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_28515c:
    if (ctx->pc == 0x28515Cu) {
        ctx->pc = 0x28515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285158u;
        // 0x28515c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285160u;
        goto label_285160;
    }
    ctx->pc = 0x285158u;
    {
        const bool branch_taken_0x285158 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285158u;
        // 0x28515c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285158) {
            ctx->pc = 0x285170u;
            goto label_285170;
        }
    }
    ctx->pc = 0x285160u;
label_285160:
    // 0x285160: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x285160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_285164:
    // 0x285164: 0x24425928  addiu       $v0, $v0, 0x5928
    ctx->pc = 0x285164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22824));
label_285168:
    // 0x285168: 0x10000006  b           . + 4 + (0x6 << 2)
label_28516c:
    if (ctx->pc == 0x28516Cu) {
        ctx->pc = 0x28516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285168u;
        // 0x28516c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285170u;
        goto label_285170;
    }
    ctx->pc = 0x285168u;
    {
        const bool branch_taken_0x285168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285168u;
        // 0x28516c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285168) {
            ctx->pc = 0x285184u;
            goto label_285184;
        }
    }
    ctx->pc = 0x285170u;
label_285170:
    // 0x285170: 0x1622004b  bne         $s1, $v0, . + 4 + (0x4B << 2)
label_285174:
    if (ctx->pc == 0x285174u) {
        ctx->pc = 0x285174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285170u;
        // 0x285174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285178u;
        goto label_285178;
    }
    ctx->pc = 0x285170u;
    {
        const bool branch_taken_0x285170 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x285174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285170u;
        // 0x285174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285170) {
            ctx->pc = 0x2852A0u;
            goto label_2852a0;
        }
    }
    ctx->pc = 0x285178u;
label_285178:
    // 0x285178: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x285178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_28517c:
    // 0x28517c: 0x24425690  addiu       $v0, $v0, 0x5690
    ctx->pc = 0x28517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22160));
label_285180:
    // 0x285180: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x285180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_285184:
    // 0x285184: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x285184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_285188:
    // 0x285188: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x285188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_28518c:
    // 0x28518c: 0x246337e0  addiu       $v1, $v1, 0x37E0
    ctx->pc = 0x28518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14304));
label_285190:
    // 0x285190: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x285190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_285194:
    // 0x285194: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x285194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_285198:
    // 0x285198: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x285198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28519c:
    // 0x28519c: 0x16250026  bne         $s1, $a1, . + 4 + (0x26 << 2)
label_2851a0:
    if (ctx->pc == 0x2851A0u) {
        ctx->pc = 0x2851A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28519Cu;
        // 0x2851a0: 0xac620064  sw          $v0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851A4u;
        goto label_2851a4;
    }
    ctx->pc = 0x28519Cu;
    {
        const bool branch_taken_0x28519c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x2851A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28519Cu;
        // 0x2851a0: 0xac620064  sw          $v0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28519c) {
            ctx->pc = 0x285238u;
            goto label_285238;
        }
    }
    ctx->pc = 0x2851A4u;
label_2851a4:
    // 0x2851a4: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x2851a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2851a8:
    // 0x2851a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2851a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2851ac:
    // 0x2851ac: 0x8d020068  lw          $v0, 0x68($t0)
    ctx->pc = 0x2851acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 104)));
label_2851b0:
    // 0x2851b0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2851b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2851b4:
    // 0x2851b4: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2851b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2851b8:
    // 0x2851b8: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x2851b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2851bc:
    // 0x2851bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2851bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2851c0:
    // 0x2851c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2851c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2851c4:
    // 0x2851c4: 0x60f809  jalr        $v1
label_2851c8:
    if (ctx->pc == 0x2851C8u) {
        ctx->pc = 0x2851C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851C4u;
        // 0x2851c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851CCu;
        goto label_2851cc;
    }
    ctx->pc = 0x2851C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2851CCu);
        ctx->pc = 0x2851C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851C4u;
        // 0x2851c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2851C4u, 0x2851CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2851CCu;
label_2851cc:
    // 0x2851cc: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x2851ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2851d0:
    // 0x2851d0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2851d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2851d4:
    // 0x2851d4: 0x8d020068  lw          $v0, 0x68($t0)
    ctx->pc = 0x2851d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 104)));
label_2851d8:
    // 0x2851d8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2851d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2851dc:
    // 0x2851dc: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2851dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2851e0:
    // 0x2851e0: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x2851e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2851e4:
    // 0x2851e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2851e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2851e8:
    // 0x2851e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2851e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2851ec:
    // 0x2851ec: 0x60f809  jalr        $v1
label_2851f0:
    if (ctx->pc == 0x2851F0u) {
        ctx->pc = 0x2851F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851ECu;
        // 0x2851f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851F4u;
        goto label_2851f4;
    }
    ctx->pc = 0x2851ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2851F4u);
        ctx->pc = 0x2851F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851ECu;
        // 0x2851f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2851ECu, 0x2851F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2851F4u;
label_2851f4:
    // 0x2851f4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2851f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2851f8:
    // 0x2851f8: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x2851f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_2851fc:
    // 0x2851fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2851fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_285200:
    // 0x285200: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x285200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_285204:
    // 0x285204: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x285204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285208:
    // 0x285208: 0x60f809  jalr        $v1
label_28520c:
    if (ctx->pc == 0x28520Cu) {
        ctx->pc = 0x28520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285208u;
        // 0x28520c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285210u;
        goto label_285210;
    }
    ctx->pc = 0x285208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x285210u);
        ctx->pc = 0x28520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285208u;
        // 0x28520c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285208u, 0x285210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285210u;
label_285210:
    // 0x285210: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x285210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_285214:
    // 0x285214: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x285214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_285218:
    // 0x285218: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x285218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_28521c:
    // 0x28521c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x28521cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_285220:
    // 0x285220: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x285220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285224:
    // 0x285224: 0x60f809  jalr        $v1
label_285228:
    if (ctx->pc == 0x285228u) {
        ctx->pc = 0x285228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285224u;
        // 0x285228: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28522Cu;
        goto label_28522c;
    }
    ctx->pc = 0x285224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28522Cu);
        ctx->pc = 0x285228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285224u;
        // 0x285228: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285224u, 0x28522Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28522Cu;
label_28522c:
    // 0x28522c: 0x10000013  b           . + 4 + (0x13 << 2)
label_285230:
    if (ctx->pc == 0x285230u) {
        ctx->pc = 0x285234u;
        goto label_285234;
    }
    ctx->pc = 0x28522Cu;
    {
        const bool branch_taken_0x28522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28522c) {
            ctx->pc = 0x28527Cu;
            goto label_28527c;
        }
    }
    ctx->pc = 0x285234u;
label_285234:
    // 0x285234: 0x0  nop
    ctx->pc = 0x285234u;
    // NOP
label_285238:
    // 0x285238: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x285238u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_28523c:
    // 0x28523c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28523cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285240:
    // 0x285240: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x285240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_285244:
    // 0x285244: 0x8d020068  lw          $v0, 0x68($t0)
    ctx->pc = 0x285244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 104)));
label_285248:
    // 0x285248: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x285248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28524c:
    // 0x28524c: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x28524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_285250:
    // 0x285250: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x285250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_285254:
    // 0x285254: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x285254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285258:
    // 0x285258: 0x60f809  jalr        $v1
label_28525c:
    if (ctx->pc == 0x28525Cu) {
        ctx->pc = 0x28525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285258u;
        // 0x28525c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285260u;
        goto label_285260;
    }
    ctx->pc = 0x285258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x285260u);
        ctx->pc = 0x28525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285258u;
        // 0x28525c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285258u, 0x285260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285260u;
label_285260:
    // 0x285260: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x285260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_285264:
    // 0x285264: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x285264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_285268:
    // 0x285268: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x285268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_28526c:
    // 0x28526c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x28526cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_285270:
    // 0x285270: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x285270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285274:
    // 0x285274: 0x60f809  jalr        $v1
label_285278:
    if (ctx->pc == 0x285278u) {
        ctx->pc = 0x285278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285274u;
        // 0x285278: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28527Cu;
        goto label_28527c;
    }
    ctx->pc = 0x285274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28527Cu);
        ctx->pc = 0x285278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285274u;
        // 0x285278: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285274u, 0x28527Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28527Cu;
label_28527c:
    // 0x28527c: 0x2783b2d8  addiu       $v1, $gp, -0x4D28
    ctx->pc = 0x28527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947544));
label_285280:
    // 0x285280: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x285280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285284:
    // 0x285284: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x285284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_285288:
    // 0x285288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28528c:
    // 0x28528c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x28528cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_285290:
    // 0x285290: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x285290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_285294:
    // 0x285294: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x285294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_285298:
    // 0x285298: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x285298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_28529c:
    // 0x28529c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x28529cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2852a0:
    // 0x2852a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2852a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2852a4:
    // 0x2852a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2852a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2852a8:
    // 0x2852a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2852a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2852ac:
    // 0x2852ac: 0x3e00008  jr          $ra
label_2852b0:
    if (ctx->pc == 0x2852B0u) {
        ctx->pc = 0x2852B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852ACu;
        // 0x2852b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2852B4u;
        goto label_2852b4;
    }
    ctx->pc = 0x2852ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2852B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852ACu;
        // 0x2852b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2852ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2852B4u;
label_2852b4:
    // 0x2852b4: 0x0  nop
    ctx->pc = 0x2852b4u;
    // NOP
    ctx->pc = 0x2852b8u;
}
