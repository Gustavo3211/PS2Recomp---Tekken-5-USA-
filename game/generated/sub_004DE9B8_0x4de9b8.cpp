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

// Function: sub_004DE9B8
// Address: 0x4de9b8 - 0x4df3b0
void sub_004DE9B8_0x4de9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE9B8_0x4de9b8");
#endif

    switch (ctx->pc) {
        case 0x4de9f8u: goto label_4de9f8;
        case 0x4dea18u: goto label_4dea18;
        case 0x4dea20u: goto label_4dea20;
        case 0x4deb34u: goto label_4deb34;
        case 0x4deb84u: goto label_4deb84;
        case 0x4deb8cu: goto label_4deb8c;
        case 0x4debd4u: goto label_4debd4;
        case 0x4debf4u: goto label_4debf4;
        case 0x4decf8u: goto label_4decf8;
        case 0x4ded00u: goto label_4ded00;
        case 0x4df1f4u: goto label_4df1f4;
        case 0x4df22cu: goto label_4df22c;
        case 0x4df264u: goto label_4df264;
        case 0x4df2ccu: goto label_4df2cc;
        case 0x4df2f8u: goto label_4df2f8;
        case 0x4df300u: goto label_4df300;
        case 0x4df350u: goto label_4df350;
        case 0x4df360u: goto label_4df360;
        case 0x4df370u: goto label_4df370;
        case 0x4df380u: goto label_4df380;
        default: break;
    }

    ctx->pc = 0x4de9b8u;

    // 0x4de9b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4de9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4de9bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4de9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4de9c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4de9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4de9c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4de9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4de9c8: 0x24521164  addiu       $s2, $v0, 0x1164
    ctx->pc = 0x4de9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4452));
    // 0x4de9cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4de9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4de9d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4de9d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4de9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4de9d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4de9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4de9dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4de9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4de9e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4de9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4de9e4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4de9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4de9e8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4de9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4de9ec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4de9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4de9f0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4DE9F0u;
    SET_GPR_U32(ctx, 31, 0x4DE9F8u);
    ctx->pc = 0x4DE9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE9F0u;
    // 0x4de9f4: 0x267101b4  addiu       $s1, $s3, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4DE9F0u, 0x4DE9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE9F8u;
label_4de9f8:
    // 0x4de9f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4de9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4de9fc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4de9fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4dea00: 0x440004a  bltz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x4DEA00u;
    {
        const bool branch_taken_0x4dea00 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4dea00) {
            ctx->pc = 0x4DEB2Cu;
            goto label_4deb2c;
        }
    }
    ctx->pc = 0x4DEA08u;
    // 0x4dea08: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4dea08u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4dea0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4dea0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dea10: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4DEA10u;
    SET_GPR_U32(ctx, 31, 0x4DEA18u);
    ctx->pc = 0x4DEA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEA10u;
    // 0x4dea14: 0x27d01148  addiu       $s0, $fp, 0x1148 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4DEA10u, 0x4DEA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEA18u;
label_4dea18:
    // 0x4dea18: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4DEA18u;
    SET_GPR_U32(ctx, 31, 0x4DEA20u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4DEA18u, 0x4DEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEA20u;
label_4dea20:
    // 0x4dea20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4dea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dea24: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4dea24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4dea28: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x4dea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4dea2c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4dea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4dea30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dea30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dea34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dea34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dea38: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x4dea38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4dea3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dea40: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4dea40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dea44: 0xa6650158  sh          $a1, 0x158($s3)
    ctx->pc = 0x4dea44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 344), (uint16_t)GPR_U32(ctx, 5));
    // 0x4dea48: 0xa662015e  sh          $v0, 0x15E($s3)
    ctx->pc = 0x4dea48u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dea4c: 0xa664014a  sh          $a0, 0x14A($s3)
    ctx->pc = 0x4dea4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 330), (uint16_t)GPR_U32(ctx, 4));
    // 0x4dea50: 0x866201b6  lh          $v0, 0x1B6($s3)
    ctx->pc = 0x4dea50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 438)));
    // 0x4dea54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4dea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dea58: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4dea58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4dea5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dea5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dea60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dea60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dea64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dea64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dea68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dea68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dea6c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4dea6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dea70: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4dea70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x4dea74: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4dea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4dea78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dea78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dea7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dea80: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4dea80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dea84: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4DEA84u;
    {
        const bool branch_taken_0x4dea84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEA84u;
        // 0x4dea88: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dea84) {
            ctx->pc = 0x4DEB20u;
            goto label_4deb20;
        }
    }
    ctx->pc = 0x4DEA8Cu;
    // 0x4dea8c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4dea8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dea90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4dea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dea94: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4dea94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dea98: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4dea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4dea9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dea9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4deaa0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4deaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4deaa4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4deaa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4deaa8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4deaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4deaac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4deaacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4deab0: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x4deab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4deab4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4deab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4deab8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4deab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4deabc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4deabcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4deac0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4deac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4deac4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4deac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4deac8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4deac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4deacc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4deaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4dead0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4dead0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dead4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4dead4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dead8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dead8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4deadc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4deadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4deae0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4deae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4deae4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4deae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4deae8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4deae8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4deaec: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4deaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4deaf0: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4deaf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4deaf4: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x4deaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x4deaf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4deaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4deafc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4deafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4deb00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4deb00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4deb04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4deb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4deb08: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4deb08u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4deb0c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4deb0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4deb10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4deb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4deb14: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4deb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4deb18: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4deb18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4deb1c: 0xa6620132  sh          $v0, 0x132($s3)
    ctx->pc = 0x4deb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 2));
label_4deb20:
    // 0x4deb20: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4deb20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4deb24: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4deb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4deb28: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4deb28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4deb2c:
    // 0x4deb2c: 0xc125792  jal         func_495E48
    ctx->pc = 0x4DEB2Cu;
    SET_GPR_U32(ctx, 31, 0x4DEB34u);
    ctx->pc = 0x4DEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEB2Cu;
    // 0x4deb30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495E48u, 0x4DEB2Cu, 0x4DEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEB34u;
label_4deb34:
    // 0x4deb34: 0x10400212  beqz        $v0, . + 4 + (0x212 << 2)
    ctx->pc = 0x4DEB34u;
    {
        const bool branch_taken_0x4deb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEB34u;
        // 0x4deb38: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4deb34) {
            ctx->pc = 0x4DF380u;
            goto label_4df380;
        }
    }
    ctx->pc = 0x4DEB3Cu;
    // 0x4deb3c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4deb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4deb40: 0x24881158  addiu       $t0, $a0, 0x1158
    ctx->pc = 0x4deb40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4440));
    // 0x4deb44: 0x24751154  addiu       $s5, $v1, 0x1154
    ctx->pc = 0x4deb44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4436));
    // 0x4deb48: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4deb48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1158u));
    // 0x4deb4c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4deb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4deb50: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4deb50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4deb54: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x4deb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x4deb58: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4deb58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4deb5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4deb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4deb60: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4deb60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4deb64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4deb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4deb68: 0xf43824  and         $a3, $a3, $s4
    ctx->pc = 0x4deb68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
    // 0x4deb6c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4deb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4deb70: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x4deb70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x4deb74: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4deb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4deb78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4deb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4deb7c: 0xc127d62  jal         func_49F588
    ctx->pc = 0x4DEB7Cu;
    SET_GPR_U32(ctx, 31, 0x4DEB84u);
    ctx->pc = 0x4DEB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEB7Cu;
    // 0x4deb80: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F588u, 0x4DEB7Cu, 0x4DEB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEB84u;
label_4deb84:
    // 0x4deb84: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4DEB84u;
    SET_GPR_U32(ctx, 31, 0x4DEB8Cu);
    ctx->pc = 0x4DEB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEB84u;
    // 0x4deb88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4DEB84u, 0x4DEB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEB8Cu;
label_4deb8c:
    // 0x4deb8c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4deb8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4deb90: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4deb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4deb94: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x4DEB94u;
    {
        const bool branch_taken_0x4deb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEB94u;
        // 0x4deb98: 0x3c1e007f  lui         $fp, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4deb94) {
            ctx->pc = 0x4DECA8u;
            goto label_4deca8;
        }
    }
    ctx->pc = 0x4DEB9Cu;
    // 0x4deb9c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4deb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4deba0: 0x27d01148  addiu       $s0, $fp, 0x1148
    ctx->pc = 0x4deba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    // 0x4deba4: 0x8483fb22  lh          $v1, -0x4DE($a0)
    ctx->pc = 0x4deba4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72FB22u));
    // 0x4deba8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4deba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4debac: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4debacu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4debb0: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4debb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4debb4: 0x26d2115c  addiu       $s2, $s6, 0x115C
    ctx->pc = 0x4debb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4444));
    // 0x4debb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4debb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4debbc: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4debbcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4debc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4debc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4debc4: 0x26f1114c  addiu       $s1, $s7, 0x114C
    ctx->pc = 0x4debc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4428));
    // 0x4debc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4debc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4debcc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DEBCCu;
    SET_GPR_U32(ctx, 31, 0x4DEBD4u);
    ctx->pc = 0x4DEBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEBCCu;
    // 0x4debd0: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DEBCCu, 0x4DEBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEBD4u;
label_4debd4:
    // 0x4debd4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4debd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4debd8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4debd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4debdc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4debdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4debe0: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4debe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4debe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4debe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4debe8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4debe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4debec: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DEBECu;
    SET_GPR_U32(ctx, 31, 0x4DEBF4u);
    ctx->pc = 0x4DEBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DEBECu;
    // 0x4debf0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DEBECu, 0x4DEBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DEBF4u;
label_4debf4:
    // 0x4debf4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4debf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4debf8: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4debf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4debfc: 0x26680124  addiu       $t0, $s3, 0x124
    ctx->pc = 0x4debfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
    // 0x4dec00: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4dec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4dec04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4dec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dec08: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4dec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4dec0c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4dec0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4dec10: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4dec10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4dec14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dec14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dec18: 0x2669012c  addiu       $t1, $s3, 0x12C
    ctx->pc = 0x4dec18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
    // 0x4dec1c: 0x8662015a  lh          $v0, 0x15A($s3)
    ctx->pc = 0x4dec1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 346)));
    // 0x4dec20: 0x86a40000  lh          $a0, 0x0($s5)
    ctx->pc = 0x4dec20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4dec24: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dec24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dec28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dec28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dec2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dec30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dec34: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4dec34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dec38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dec38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dec3c: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4dec3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4dec40: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dec44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dec44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dec48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dec48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dec4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dec4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dec50: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4dec50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dec54: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4dec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4dec58: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4dec58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4dec5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dec5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dec60: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dec60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4dec64: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4dec64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dec68: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x4dec68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4dec6c: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x4dec6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4dec70: 0x24a70007  addiu       $a3, $a1, 0x7
    ctx->pc = 0x4dec70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x4dec74: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x4dec74u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4dec78: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x4dec78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4dec7c: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x4dec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x4dec80: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x4dec80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x4dec84: 0xe6280b  movn        $a1, $a3, $a2
    ctx->pc = 0x4dec84u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x4dec88: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x4dec88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x4dec8c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x4dec8cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x4dec90: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x4dec90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x4dec94: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4dec94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4dec98: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4dec98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4dec9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4dec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4deca0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4DECA0u;
    {
        const bool branch_taken_0x4deca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DECA0u;
        // 0x4deca4: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4deca0) {
            ctx->pc = 0x4DECB8u;
            goto label_4decb8;
        }
    }
    ctx->pc = 0x4DECA8u;
label_4deca8:
    // 0x4deca8: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4deca8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4decac: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4decacu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4decb0: 0x26680124  addiu       $t0, $s3, 0x124
    ctx->pc = 0x4decb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
    // 0x4decb4: 0x2669012c  addiu       $t1, $s3, 0x12C
    ctx->pc = 0x4decb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
label_4decb8:
    // 0x4decb8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4decb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4decbc: 0x26d0115c  addiu       $s0, $s6, 0x115C
    ctx->pc = 0x4decbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4444));
    // 0x4decc0: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x4decc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4decc4: 0x26720018  addiu       $s2, $s3, 0x18
    ctx->pc = 0x4decc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4decc8: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4decc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4deccc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4decccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4decd0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4decd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4decd4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4decd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4decd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4decd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4decdc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4decdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4dece0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4dece0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4dece4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dece8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4dece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4decec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4dececu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4decf0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DECF0u;
    SET_GPR_U32(ctx, 31, 0x4DECF8u);
    ctx->pc = 0x4DECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DECF0u;
    // 0x4decf4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DECF0u, 0x4DECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DECF8u;
label_4decf8:
    // 0x4decf8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4DECF8u;
    SET_GPR_U32(ctx, 31, 0x4DED00u);
    ctx->pc = 0x4DECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DECF8u;
    // 0x4decfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4DECF8u, 0x4DED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DED00u;
label_4ded00:
    // 0x4ded00: 0x26640130  addiu       $a0, $s3, 0x130
    ctx->pc = 0x4ded00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    // 0x4ded04: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4ded04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ded08: 0x26660134  addiu       $a2, $s3, 0x134
    ctx->pc = 0x4ded08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 308));
    // 0x4ded0c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ded0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ded10: 0x266b0014  addiu       $t3, $s3, 0x14
    ctx->pc = 0x4ded10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4ded14: 0x27c51148  addiu       $a1, $fp, 0x1148
    ctx->pc = 0x4ded14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    // 0x4ded18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ded18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ded1c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4ded1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ded20: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4ded20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ded24: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ded24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ded28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ded28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ded2c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4ded2cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ded30: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4ded30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ded34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ded34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ded38: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4ded38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4ded3c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ded3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ded40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ded40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ded44: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4ded44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4ded48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ded48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ded4c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ded4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ded50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ded50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ded54: 0x8664011e  lh          $a0, 0x11E($s3)
    ctx->pc = 0x4ded54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 286)));
    // 0x4ded58: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4ded58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ded5c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4ded5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ded60: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4ded60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4ded64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ded64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ded68: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ded68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ded6c: 0x542024  and         $a0, $v0, $s4
    ctx->pc = 0x4ded6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4ded70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ded70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ded74: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4ded74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ded78: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x4ded78u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4ded7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ded7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ded80: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4ded80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ded84: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DED84u;
    {
        const bool branch_taken_0x4ded84 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4DED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DED84u;
        // 0x4ded88: 0x26e8114c  addiu       $t0, $s7, 0x114C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 4428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ded84) {
            ctx->pc = 0x4DED98u;
            goto label_4ded98;
        }
    }
    ctx->pc = 0x4DED8Cu;
    // 0x4ded8c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ded8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ded90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DED90u;
    {
        const bool branch_taken_0x4ded90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DED90u;
        // 0x4ded94: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ded90) {
            ctx->pc = 0x4DEDA4u;
            goto label_4deda4;
        }
    }
    ctx->pc = 0x4DED98u;
label_4ded98:
    // 0x4ded98: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ded98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ded9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ded9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4deda0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4deda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4deda4:
    // 0x4deda4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4deda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4deda8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4deda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4dedac: 0x24a51150  addiu       $a1, $a1, 0x1150
    ctx->pc = 0x4dedacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4432));
    // 0x4dedb0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4dedb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4dedb4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4dedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1150u));
    // 0x4dedb8: 0x27cc1148  addiu       $t4, $fp, 0x1148
    ctx->pc = 0x4dedb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    // 0x4dedbc: 0x95870000  lhu         $a3, 0x0($t4)
    ctx->pc = 0x4dedbcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4dedc0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4dedc0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4dedc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dedc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dedc8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4dedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4dedcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dedccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dedd0: 0x26ed114c  addiu       $t5, $s7, 0x114C
    ctx->pc = 0x4dedd0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 23), 4428));
    // 0x4dedd4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dedd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dedd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dedd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4deddc: 0x26680128  addiu       $t0, $s3, 0x128
    ctx->pc = 0x4deddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
    // 0x4dede0: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4dede0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4dede4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dede4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dede8: 0x25cf1164  addiu       $t7, $t6, 0x1164
    ctx->pc = 0x4dede8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4452));
    // 0x4dedec: 0x95a60000  lhu         $a2, 0x0($t5)
    ctx->pc = 0x4dedecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4dedf0: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4dedf0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4dedf4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4dedf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4dedf8: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4dedf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4dedfc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dee00: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x4dee00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4dee04: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dee04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dee08: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4dee08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4dee0c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dee10: 0x25c91154  addiu       $t1, $t6, 0x1154
    ctx->pc = 0x4dee10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 4436));
    // 0x4dee14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dee14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dee18: 0x24ee1158  addiu       $t6, $a3, 0x1158
    ctx->pc = 0x4dee18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 4440));
    // 0x4dee1c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dee20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dee20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dee24: 0x26c7115c  addiu       $a3, $s6, 0x115C
    ctx->pc = 0x4dee24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4444));
    // 0x4dee28: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dee28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dee2c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4dee2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4dee30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dee30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dee34: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dee34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dee38: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dee38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dee3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dee3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dee40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dee40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dee44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dee44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dee48: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4dee48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dee4c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4dee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4dee50: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dee54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dee58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dee58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4dee5c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4dee5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dee60: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4dee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dee64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dee64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dee68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dee6c: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4dee6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4dee70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dee70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dee74: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4dee74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4dee78: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4dee78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dee7c: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4dee7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dee80: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4dee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4dee84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4dee84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dee88: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4dee88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4dee8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4dee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4dee90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dee90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dee94: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4dee94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x4dee98: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4dee98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4dee9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4dee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4deea0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4deea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4deea4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4deea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4deea8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4deea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4deeac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4deeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4deeb0: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4deeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4deeb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4deeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4deeb8: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4deeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4deebc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x4deebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4deec0: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4deec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4deec4: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4deec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x4deec8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4deec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4deecc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4deeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4deed0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4deed0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4deed4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4deed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4deed8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4deed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4deedc: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4deedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4deee0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4deee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4deee4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4deee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4deee8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4deee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4deeec: 0xa6630132  sh          $v1, 0x132($s3)
    ctx->pc = 0x4deeecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 3));
    // 0x4deef0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4deef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4deef4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4deef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4deef8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4deef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4deefc: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x4deefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4def00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4def00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4def04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4def04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4def08: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4def08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4def0c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4def0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4def10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4def10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4def14: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4def14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4def18: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4def18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4def1c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4def1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4def20: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4def20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4def24: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4def24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4def28: 0x824824  and         $t1, $a0, $v0
    ctx->pc = 0x4def28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4def2c: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x4def2cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x4def30: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4def30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4def34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4def34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4def38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4def38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4def3c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4def3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4def40: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4def40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4def44: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4def44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x4def48: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4def48u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4def4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4def4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4def50: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4def50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4def54: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4def54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4def58: 0x85840000  lh          $a0, 0x0($t4)
    ctx->pc = 0x4def58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4def5c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4def5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4def60: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4def60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4def64: 0x85c60000  lh          $a2, 0x0($t6)
    ctx->pc = 0x4def64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4def68: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4def68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4def6c: 0x95c80000  lhu         $t0, 0x0($t6)
    ctx->pc = 0x4def6cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4def70: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4def70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x4def74: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4def74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4def78: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4def78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4def7c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4def7cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4def80: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4def80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4def84: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4def84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4def88: 0x4c30007  bgezl       $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4DEF88u;
    {
        const bool branch_taken_0x4def88 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x4def88) {
            ctx->pc = 0x4DEF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DEF88u;
            // 0x4def8c: 0x8d620000  lw          $v0, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DEFA8u;
            goto label_4defa8;
        }
    }
    ctx->pc = 0x4DEF90u;
    // 0x4def90: 0x12a1024  and         $v0, $t1, $t2
    ctx->pc = 0x4def90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x4def94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4def94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4def98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4def98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4def9c: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4def9cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4defa0: 0x95c80000  lhu         $t0, 0x0($t6)
    ctx->pc = 0x4defa0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4defa4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4defa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4defa8:
    // 0x4defa8: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x4defa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4defac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4defacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4defb0: 0x26680118  addiu       $t0, $s3, 0x118
    ctx->pc = 0x4defb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x4defb4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4defb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4defb8: 0x2675013a  addiu       $s5, $s3, 0x13A
    ctx->pc = 0x4defb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 314));
    // 0x4defbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4defbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4defc0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4defc0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4defc4: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x4defc4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4defc8: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x4defc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4defcc: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4defccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4defd0: 0x84820022  lh          $v0, 0x22($a0)
    ctx->pc = 0x4defd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x4defd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4defd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4defd8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4defd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4defdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4defdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4defe0: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4defe0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4defe4: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4defe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4defe8: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x4defe8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4defec: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4defecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4deff0: 0x8662011c  lh          $v0, 0x11C($s3)
    ctx->pc = 0x4deff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x4deff4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4deff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4deff8: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x4deff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4deffc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4deffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4df000: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df004: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4df004u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4df008: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df00c: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4df00cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4df010: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4df010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4df014: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4df014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4df018: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df01c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4df01cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4df020: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df024: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4df024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4df028: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x4df028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x4df02c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4df02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4df030: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df034: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4df034u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4df038: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x4df038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4df03c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DF03Cu;
    {
        const bool branch_taken_0x4df03c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4DF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF03Cu;
        // 0x4df040: 0x8da20000  lw          $v0, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df03c) {
            ctx->pc = 0x4DF050u;
            goto label_4df050;
        }
    }
    ctx->pc = 0x4DF044u;
    // 0x4df044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4DF044u;
    {
        const bool branch_taken_0x4df044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF044u;
        // 0x4df048: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df044) {
            ctx->pc = 0x4DF054u;
            goto label_4df054;
        }
    }
    ctx->pc = 0x4DF04Cu;
    // 0x4df04c: 0x0  nop
    ctx->pc = 0x4df04cu;
    // NOP
label_4df050:
    // 0x4df050: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x4df050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_4df054:
    // 0x4df054: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4df054u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4df058: 0x27c41148  addiu       $a0, $fp, 0x1148
    ctx->pc = 0x4df058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    // 0x4df05c: 0x26e7114c  addiu       $a3, $s7, 0x114C
    ctx->pc = 0x4df05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4428));
    // 0x4df060: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4df060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4df064: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x4df064u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4df068: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4df068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4df06c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4df06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4df070: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4df070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4df074: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4df074u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4df078: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4df078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4df07c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df080: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4df080u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4df084: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4df084u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4df088: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4df088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4df08c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df090: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4df090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4df094: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df098: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4df098u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4df09c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4df09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4df0a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4df0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4df0a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df0a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4df0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4df0ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df0b0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4df0b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4df0b4: 0x2442c000  addiu       $v0, $v0, -0x4000
    ctx->pc = 0x4df0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
    // 0x4df0b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4df0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4df0bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df0c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4df0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4df0c4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4df0c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4df0c8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DF0C8u;
    {
        const bool branch_taken_0x4df0c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4DF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF0C8u;
        // 0x4df0cc: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df0c8) {
            ctx->pc = 0x4DF0D8u;
            goto label_4df0d8;
        }
    }
    ctx->pc = 0x4DF0D0u;
    // 0x4df0d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4DF0D0u;
    {
        const bool branch_taken_0x4df0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF0D0u;
        // 0x4df0d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df0d0) {
            ctx->pc = 0x4DF0DCu;
            goto label_4df0dc;
        }
    }
    ctx->pc = 0x4DF0D8u;
label_4df0d8:
    // 0x4df0d8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4df0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4df0dc:
    // 0x4df0dc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4df0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4df0e0: 0x27d21148  addiu       $s2, $fp, 0x1148
    ctx->pc = 0x4df0e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4424));
    // 0x4df0e4: 0x26f4114c  addiu       $s4, $s7, 0x114C
    ctx->pc = 0x4df0e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4428));
    // 0x4df0e8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4df0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4df0ec: 0x96860000  lhu         $a2, 0x0($s4)
    ctx->pc = 0x4df0ecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4df0f0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4df0f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df0f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4df0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df0f8: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x4df0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4df0fc: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4df0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4df100: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4df100u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4df104: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4df104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4df108: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df10c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4df10cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4df110: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4df110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4df114: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df118: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4df118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4df11c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df120: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4df120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df124: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4df124u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4df128: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4df128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4df12c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df130: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4df130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4df134: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4df134u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df138: 0x2ca22000  sltiu       $v0, $a1, 0x2000
    ctx->pc = 0x4df138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    // 0x4df13c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4DF13Cu;
    {
        const bool branch_taken_0x4df13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4df13c) {
            ctx->pc = 0x4DF140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF13Cu;
            // 0x4df140: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF160u;
            goto label_4df160;
        }
    }
    ctx->pc = 0x4DF144u;
    // 0x4df144: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4df144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4df148: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df14c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4df14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x4df150: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df154: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4df154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4df158: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x4df158u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df15c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4df15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4df160:
    // 0x4df160: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4df160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4df164: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4df164u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4df168: 0x26700120  addiu       $s0, $s3, 0x120
    ctx->pc = 0x4df168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x4df16c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4df16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4df170: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df174: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df178: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4df178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4df17c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df180: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4df180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df184: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4df184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4df188: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4df188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4df18c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df190: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4df190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4df194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df198: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4df198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df19c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x4df19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x4df1a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4df1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4df1a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4df1a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4df1a8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4df1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4df1ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df1b0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4df1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4df1b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df1b8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4df1b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df1bc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4df1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4df1c0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4df1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4df1c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4df1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4df1c8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4df1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4df1cc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4df1ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df1d0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4df1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4df1d4: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4df1d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4df1d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4df1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df1dc: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4df1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4df1e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df1e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4df1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4df1e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4df1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4df1ec: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DF1ECu;
    SET_GPR_U32(ctx, 31, 0x4DF1F4u);
    ctx->pc = 0x4DF1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF1ECu;
    // 0x4df1f0: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DF1ECu, 0x4DF1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF1F4u;
label_4df1f4:
    // 0x4df1f4: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4df1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4df1f8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4df1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4df1fc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4df1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4df200: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x4df200u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4df204: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4df204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4df208: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x4df208u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4df20c: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4df20cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4df210: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4df210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df214: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4df214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4df218: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df21c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4df21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4df220: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4df220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4df224: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DF224u;
    SET_GPR_U32(ctx, 31, 0x4DF22Cu);
    ctx->pc = 0x4DF228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF224u;
    // 0x4df228: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DF224u, 0x4DF22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF22Cu;
label_4df22c:
    // 0x4df22c: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4df22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4df230: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4df230u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4df234: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4df234u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4df238: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x4df238u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4df23c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4df23cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4df240: 0xa6620028  sh          $v0, 0x28($s3)
    ctx->pc = 0x4df240u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x4df244: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4df244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4df248: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4df248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4df24c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4df24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4df250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df254: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4df254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4df258: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4df258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4df25c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4DF25Cu;
    SET_GPR_U32(ctx, 31, 0x4DF264u);
    ctx->pc = 0x4DF260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF25Cu;
    // 0x4df260: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4DF25Cu, 0x4DF264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF264u;
label_4df264:
    // 0x4df264: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4df264u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4df268: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4df268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4df26c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4df26cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4df270: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4df270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4df274: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4df274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4df278: 0xa663002a  sh          $v1, 0x2A($s3)
    ctx->pc = 0x4df278u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x4df27c: 0x24491158  addiu       $t1, $v0, 0x1158
    ctx->pc = 0x4df27cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4440));
    // 0x4df280: 0x25ca1154  addiu       $t2, $t6, 0x1154
    ctx->pc = 0x4df280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 4436));
    // 0x4df284: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4df284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4df288: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4df288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4df28c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4df28cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4df290: 0x34e70433  ori         $a3, $a3, 0x433
    ctx->pc = 0x4df290u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1075);
    // 0x4df294: 0x350804b6  ori         $t0, $t0, 0x4B6
    ctx->pc = 0x4df294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1206);
    // 0x4df298: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x4df298u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x4df29c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4df29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df2a0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x4df2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df2a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4df2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df2a8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4df2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4df2ac: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4df2acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1158u));
    // 0x4df2b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df2b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4df2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4df2b8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4df2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4df2bc: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4df2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4df2c0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4df2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4df2c4: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4DF2C4u;
    SET_GPR_U32(ctx, 31, 0x4DF2CCu);
    ctx->pc = 0x4DF2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF2C4u;
    // 0x4df2c8: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4DF2C4u, 0x4DF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF2CCu;
label_4df2cc:
    // 0x4df2cc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4df2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4df2d0: 0x24c61160  addiu       $a2, $a2, 0x1160
    ctx->pc = 0x4df2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4448));
    // 0x4df2d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4df2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4df2d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4df2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1160u));
    // 0x4df2dc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4df2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4df2e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4df2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4df2e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4df2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4df2e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4df2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4df2ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4df2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4df2f0: 0xc12b280  jal         func_4ACA00
    ctx->pc = 0x4DF2F0u;
    SET_GPR_U32(ctx, 31, 0x4DF2F8u);
    ctx->pc = 0x4DF2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF2F0u;
    // 0x4df2f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACA00u, 0x4DF2F0u, 0x4DF2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF2F8u;
label_4df2f8:
    // 0x4df2f8: 0xc12b34c  jal         func_4ACD30
    ctx->pc = 0x4DF2F8u;
    SET_GPR_U32(ctx, 31, 0x4DF300u);
    ctx->pc = 0x4DF2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF2F8u;
    // 0x4df2fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACD30u, 0x4DF2F8u, 0x4DF300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF300u;
label_4df300:
    // 0x4df300: 0x966201bc  lhu         $v0, 0x1BC($s3)
    ctx->pc = 0x4df300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x4df304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4df304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4df308: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4df308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4df30c: 0x22443  sra         $a0, $v0, 17
    ctx->pc = 0x4df30cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4df310: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4DF310u;
    {
        const bool branch_taken_0x4df310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4DF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF310u;
        // 0x4df314: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df310) {
            ctx->pc = 0x4DF358u;
            goto label_4df358;
        }
    }
    ctx->pc = 0x4DF318u;
    // 0x4df318: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DF318u;
    {
        const bool branch_taken_0x4df318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4df318) {
            ctx->pc = 0x4DF31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DF318u;
            // 0x4df31c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DF330u;
            goto label_4df330;
        }
    }
    ctx->pc = 0x4DF320u;
    // 0x4df320: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4DF320u;
    {
        const bool branch_taken_0x4df320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF320u;
        // 0x4df324: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df320) {
            ctx->pc = 0x4DF348u;
            goto label_4df348;
        }
    }
    ctx->pc = 0x4DF328u;
    // 0x4df328: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4DF328u;
    {
        const bool branch_taken_0x4df328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF328u;
        // 0x4df32c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df328) {
            ctx->pc = 0x4DF388u;
            goto label_4df388;
        }
    }
    ctx->pc = 0x4DF330u;
label_4df330:
    // 0x4df330: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4DF330u;
    {
        const bool branch_taken_0x4df330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF330u;
        // 0x4df334: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df330) {
            ctx->pc = 0x4DF368u;
            goto label_4df368;
        }
    }
    ctx->pc = 0x4DF338u;
    // 0x4df338: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4DF338u;
    {
        const bool branch_taken_0x4df338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF338u;
        // 0x4df33c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df338) {
            ctx->pc = 0x4DF378u;
            goto label_4df378;
        }
    }
    ctx->pc = 0x4DF340u;
    // 0x4df340: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4DF340u;
    {
        const bool branch_taken_0x4df340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF340u;
        // 0x4df344: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df340) {
            ctx->pc = 0x4DF388u;
            goto label_4df388;
        }
    }
    ctx->pc = 0x4DF348u;
label_4df348:
    // 0x4df348: 0xc137cec  jal         func_4DF3B0
    ctx->pc = 0x4DF348u;
    SET_GPR_U32(ctx, 31, 0x4DF350u);
    ctx->pc = 0x4DF34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF348u;
    // 0x4df34c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF3B0u, 0x4DF348u, 0x4DF350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF350u;
label_4df350:
    // 0x4df350: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4DF350u;
    {
        const bool branch_taken_0x4df350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF350u;
        // 0x4df354: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df350) {
            ctx->pc = 0x4DF384u;
            goto label_4df384;
        }
    }
    ctx->pc = 0x4DF358u;
label_4df358:
    // 0x4df358: 0xc137cfc  jal         func_4DF3F0
    ctx->pc = 0x4DF358u;
    SET_GPR_U32(ctx, 31, 0x4DF360u);
    ctx->pc = 0x4DF35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF358u;
    // 0x4df35c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF3F0u, 0x4DF358u, 0x4DF360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF360u;
label_4df360:
    // 0x4df360: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4DF360u;
    {
        const bool branch_taken_0x4df360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF360u;
        // 0x4df364: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df360) {
            ctx->pc = 0x4DF384u;
            goto label_4df384;
        }
    }
    ctx->pc = 0x4DF368u;
label_4df368:
    // 0x4df368: 0xc137d22  jal         func_4DF488
    ctx->pc = 0x4DF368u;
    SET_GPR_U32(ctx, 31, 0x4DF370u);
    ctx->pc = 0x4DF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF368u;
    // 0x4df36c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF488u, 0x4DF368u, 0x4DF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF370u;
label_4df370:
    // 0x4df370: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4DF370u;
    {
        const bool branch_taken_0x4df370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF370u;
        // 0x4df374: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df370) {
            ctx->pc = 0x4DF384u;
            goto label_4df384;
        }
    }
    ctx->pc = 0x4DF378u;
label_4df378:
    // 0x4df378: 0xc137d6c  jal         func_4DF5B0
    ctx->pc = 0x4DF378u;
    SET_GPR_U32(ctx, 31, 0x4DF380u);
    ctx->pc = 0x4DF37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DF378u;
    // 0x4df37c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF5B0u, 0x4DF378u, 0x4DF380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DF380u;
label_4df380:
    // 0x4df380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4df380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4df384:
    // 0x4df384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4df384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4df388:
    // 0x4df388: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4df388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4df38c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4df38cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4df390: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4df390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4df394: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4df394u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4df398: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4df398u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4df39c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4df39cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4df3a0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4df3a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4df3a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4df3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4df3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DF3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF3A8u;
        // 0x4df3ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DF3B0u;
}
