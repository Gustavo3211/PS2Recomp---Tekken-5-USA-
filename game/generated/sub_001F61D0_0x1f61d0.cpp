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

// Function: sub_001F61D0
// Address: 0x1f61d0 - 0x1f64a8
void sub_001F61D0_0x1f61d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F61D0_0x1f61d0");
#endif

    switch (ctx->pc) {
        case 0x1f6208u: goto label_1f6208;
        case 0x1f6210u: goto label_1f6210;
        case 0x1f6284u: goto label_1f6284;
        case 0x1f629cu: goto label_1f629c;
        case 0x1f62c8u: goto label_1f62c8;
        case 0x1f62e0u: goto label_1f62e0;
        case 0x1f6308u: goto label_1f6308;
        case 0x1f63c8u: goto label_1f63c8;
        case 0x1f63d4u: goto label_1f63d4;
        case 0x1f63e0u: goto label_1f63e0;
        case 0x1f6408u: goto label_1f6408;
        case 0x1f6448u: goto label_1f6448;
        case 0x1f6468u: goto label_1f6468;
        default: break;
    }

    ctx->pc = 0x1f61d0u;

    // 0x1f61d0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1f61d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x1f61d4: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x1f61d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x1f61d8: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x1f61d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x1f61dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f61dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f61e0: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x1f61e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x1f61e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f61e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f61e8: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x1f61e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x1f61ec: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x1f61ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x1f61f0: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x1f61f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x1f61f4: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x1f61f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x1f61f8: 0xffb70238  sd          $s7, 0x238($sp)
    ctx->pc = 0x1f61f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 23));
    // 0x1f61fc: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x1f61fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x1f6200: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F6200u;
    SET_GPR_U32(ctx, 31, 0x1F6208u);
    ctx->pc = 0x1F6204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6200u;
    // 0x1f6204: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F6200u, 0x1F6208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6208u;
label_1f6208:
    // 0x1f6208: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F6208u;
    SET_GPR_U32(ctx, 31, 0x1F6210u);
    ctx->pc = 0x1F620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6208u;
    // 0x1f620c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F6208u, 0x1F6210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6210u;
label_1f6210:
    // 0x1f6210: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f6210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6214: 0x8f829750  lw          $v0, -0x68B0($gp)
    ctx->pc = 0x1f6214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940496)));
    // 0x1f6218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6218u;
    {
        const bool branch_taken_0x1f6218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6218u;
        // 0x1f621c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6218) {
            ctx->pc = 0x1F6228u;
            goto label_1f6228;
        }
    }
    ctx->pc = 0x1F6220u;
    // 0x1f6220: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1F6220u;
    {
        const bool branch_taken_0x1f6220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6220u;
        // 0x1f6224: 0xaf809750  sw          $zero, -0x68B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6220) {
            ctx->pc = 0x1F6478u;
            goto label_1f6478;
        }
    }
    ctx->pc = 0x1F6228u;
label_1f6228:
    // 0x1f6228: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1f6228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f622c: 0x244423b0  addiu       $a0, $v0, 0x23B0
    ctx->pc = 0x1f622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x1f6230: 0x24730002  addiu       $s3, $v1, 0x2
    ctx->pc = 0x1f6230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1f6234: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f6234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f6238: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x1f6238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x1f623c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F623Cu;
    {
        const bool branch_taken_0x1f623c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F623Cu;
        // 0x1f6240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f623c) {
            ctx->pc = 0x1F6250u;
            goto label_1f6250;
        }
    }
    ctx->pc = 0x1F6244u;
    // 0x1f6244: 0x248200b8  addiu       $v0, $a0, 0xB8
    ctx->pc = 0x1f6244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x1f6248: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6248u;
    {
        const bool branch_taken_0x1f6248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6248u;
        // 0x1f624c: 0x8f829720  lw          $v0, -0x68E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6248) {
            ctx->pc = 0x1F6258u;
            goto label_1f6258;
        }
    }
    ctx->pc = 0x1F6250u;
label_1f6250:
    // 0x1f6250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f6250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6254: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x1f6254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
label_1f6258:
    // 0x1f6258: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f6258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f625c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F625Cu;
    {
        const bool branch_taken_0x1f625c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F625Cu;
        // 0x1f6260: 0x58040  sll         $s0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f625c) {
            ctx->pc = 0x1F62A8u;
            goto label_1f62a8;
        }
    }
    ctx->pc = 0x1F6264u;
    // 0x1f6264: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f6264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f6268: 0x245188d0  addiu       $s1, $v0, -0x7730
    ctx->pc = 0x1f6268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f626c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f626cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f6270: 0x8c820310  lw          $v0, 0x310($a0)
    ctx->pc = 0x1f6270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1f6274: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6274u;
    {
        const bool branch_taken_0x1f6274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6274) {
            ctx->pc = 0x1F6278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6274u;
            // 0x1f6278: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6288u;
            goto label_1f6288;
        }
    }
    ctx->pc = 0x1F627Cu;
    // 0x1f627c: 0xc0842ee  jal         func_210BB8
    ctx->pc = 0x1F627Cu;
    SET_GPR_U32(ctx, 31, 0x1F6284u);
    ctx->pc = 0x210BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210BB8u, 0x1F627Cu, 0x1F6284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6284u;
label_1f6284:
    // 0x1f6284: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f6284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f6288:
    // 0x1f6288: 0x8c820310  lw          $v0, 0x310($a0)
    ctx->pc = 0x1f6288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1f628c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F628Cu;
    {
        const bool branch_taken_0x1f628c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f628c) {
            ctx->pc = 0x1F6290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F628Cu;
            // 0x1f6290: 0x213102a  slt         $v0, $s0, $s3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F62E4u;
            goto label_1f62e4;
        }
    }
    ctx->pc = 0x1F6294u;
    // 0x1f6294: 0xc0842ee  jal         func_210BB8
    ctx->pc = 0x1F6294u;
    SET_GPR_U32(ctx, 31, 0x1F629Cu);
    ctx->pc = 0x210BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210BB8u, 0x1F6294u, 0x1F629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F629Cu;
label_1f629c:
    // 0x1f629c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F629Cu;
    {
        const bool branch_taken_0x1f629c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F629Cu;
        // 0x1f62a0: 0x213102a  slt         $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f629c) {
            ctx->pc = 0x1F62E4u;
            goto label_1f62e4;
        }
    }
    ctx->pc = 0x1F62A4u;
    // 0x1f62a4: 0x0  nop
    ctx->pc = 0x1f62a4u;
    // NOP
label_1f62a8:
    // 0x1f62a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f62ac: 0x245188d0  addiu       $s1, $v0, -0x7730
    ctx->pc = 0x1f62acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f62b0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f62b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f62b4: 0x8c820310  lw          $v0, 0x310($a0)
    ctx->pc = 0x1f62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1f62b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F62B8u;
    {
        const bool branch_taken_0x1f62b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f62b8) {
            ctx->pc = 0x1F62BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F62B8u;
            // 0x1f62bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F62CCu;
            goto label_1f62cc;
        }
    }
    ctx->pc = 0x1F62C0u;
    // 0x1f62c0: 0xc0842ee  jal         func_210BB8
    ctx->pc = 0x1F62C0u;
    SET_GPR_U32(ctx, 31, 0x1F62C8u);
    ctx->pc = 0x210BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210BB8u, 0x1F62C0u, 0x1F62C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F62C8u;
label_1f62c8:
    // 0x1f62c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f62c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f62cc:
    // 0x1f62cc: 0x8c820310  lw          $v0, 0x310($a0)
    ctx->pc = 0x1f62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1f62d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F62D0u;
    {
        const bool branch_taken_0x1f62d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f62d0) {
            ctx->pc = 0x1F62D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F62D0u;
            // 0x1f62d4: 0x213102a  slt         $v0, $s0, $s3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F62E4u;
            goto label_1f62e4;
        }
    }
    ctx->pc = 0x1F62D8u;
    // 0x1f62d8: 0xc0842ee  jal         func_210BB8
    ctx->pc = 0x1F62D8u;
    SET_GPR_U32(ctx, 31, 0x1F62E0u);
    ctx->pc = 0x210BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210BB8u, 0x1F62D8u, 0x1F62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F62E0u;
label_1f62e0:
    // 0x1f62e0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1f62e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1f62e4:
    // 0x1f62e4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F62E4u;
    {
        const bool branch_taken_0x1f62e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62E4u;
        // 0x1f62e8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62e4) {
            ctx->pc = 0x1F639Cu;
            goto label_1f639c;
        }
    }
    ctx->pc = 0x1F62ECu;
    // 0x1f62ec: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f62f0: 0x8c468880  lw          $a2, -0x7780($v0)
    ctx->pc = 0x1f62f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x1f62f4: 0x246588d0  addiu       $a1, $v1, -0x7730
    ctx->pc = 0x1f62f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x1f62f8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1f62f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f62fc: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x1f62fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f6300: 0x24071800  addiu       $a3, $zero, 0x1800
    ctx->pc = 0x1f6300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1f6304: 0x0  nop
    ctx->pc = 0x1f6304u;
    // NOP
label_1f6308:
    // 0x1f6308: 0x14c9000f  bne         $a2, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F6308u;
    {
        const bool branch_taken_0x1f6308 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        ctx->pc = 0x1F630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6308u;
        // 0x1f630c: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6308) {
            ctx->pc = 0x1F6348u;
            goto label_1f6348;
        }
    }
    ctx->pc = 0x1F6310u;
    // 0x1f6310: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1f6310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f6314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f6314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6318: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x1f6318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1f631c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F631Cu;
    {
        const bool branch_taken_0x1f631c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F631Cu;
        // 0x1f6320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f631c) {
            ctx->pc = 0x1F6338u;
            goto label_1f6338;
        }
    }
    ctx->pc = 0x1F6324u;
    // 0x1f6324: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x1f6324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f6328: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6328u;
    {
        const bool branch_taken_0x1f6328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6328u;
        // 0x1f632c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6328) {
            ctx->pc = 0x1F6338u;
            goto label_1f6338;
        }
    }
    ctx->pc = 0x1F6330u;
    // 0x1f6330: 0x54680001  bnel        $v1, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6330u;
    {
        const bool branch_taken_0x1f6330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1f6330) {
            ctx->pc = 0x1F6334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6330u;
            // 0x1f6334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6338u;
            goto label_1f6338;
        }
    }
    ctx->pc = 0x1F6338u;
label_1f6338:
    // 0x1f6338: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F6338u;
    {
        const bool branch_taken_0x1f6338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6338) {
            ctx->pc = 0x1F633Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6338u;
            // 0x1f633c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6390u;
            goto label_1f6390;
        }
    }
    ctx->pc = 0x1F6340u;
    // 0x1f6340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6340u;
    {
        const bool branch_taken_0x1f6340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6340u;
        // 0x1f6344: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6340) {
            ctx->pc = 0x1F634Cu;
            goto label_1f634c;
        }
    }
    ctx->pc = 0x1F6348u;
label_1f6348:
    // 0x1f6348: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1f6348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f634c:
    // 0x1f634c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f634cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6350: 0x8c830310  lw          $v1, 0x310($a0)
    ctx->pc = 0x1f6350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1f6354: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1F6354u;
    {
        const bool branch_taken_0x1f6354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6354) {
            ctx->pc = 0x1F6358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6354u;
            // 0x1f6358: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6390u;
            goto label_1f6390;
        }
    }
    ctx->pc = 0x1F635Cu;
    // 0x1f635c: 0x84820096  lh          $v0, 0x96($a0)
    ctx->pc = 0x1f635cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x1f6360: 0x848302fe  lh          $v1, 0x2FE($a0)
    ctx->pc = 0x1f6360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x1f6364: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f6364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f6368: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6368u;
    {
        const bool branch_taken_0x1f6368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6368u;
        // 0x1f636c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6368) {
            ctx->pc = 0x1F6390u;
            goto label_1f6390;
        }
    }
    ctx->pc = 0x1F6370u;
    // 0x1f6370: 0x94820300  lhu         $v0, 0x300($a0)
    ctx->pc = 0x1f6370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 768)));
    // 0x1f6374: 0x30423c00  andi        $v0, $v0, 0x3C00
    ctx->pc = 0x1f6374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x1f6378: 0x14470005  bne         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6378u;
    {
        const bool branch_taken_0x1f6378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f6378) {
            ctx->pc = 0x1F6390u;
            goto label_1f6390;
        }
    }
    ctx->pc = 0x1F6380u;
    // 0x1f6380: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1f6380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f6384: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f6384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f6388: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1f6388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1f638c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f638cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f6390:
    // 0x1f6390: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1f6390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1f6394: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F6394u;
    {
        const bool branch_taken_0x1f6394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6394) {
            ctx->pc = 0x1F6308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6308;
        }
    }
    ctx->pc = 0x1F639Cu;
label_1f639c:
    // 0x1f639c: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F639Cu;
    {
        const bool branch_taken_0x1f639c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F639Cu;
        // 0x1f63a0: 0x8f839720  lw          $v1, -0x68E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f639c) {
            ctx->pc = 0x1F63E0u;
            goto label_1f63e0;
        }
    }
    ctx->pc = 0x1F63A4u;
    // 0x1f63a4: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x1f63a4u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1f63a8: 0x1010  mfhi        $v0
    ctx->pc = 0x1f63a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f63ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f63acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f63b0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1f63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f63b4: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x1f63b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f63b8: 0x8e950060  lw          $s5, 0x60($s4)
    ctx->pc = 0x1f63b8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1f63bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f63bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f63c0: 0xc09ed3a  jal         func_27B4E8
    ctx->pc = 0x1F63C0u;
    SET_GPR_U32(ctx, 31, 0x1F63C8u);
    ctx->pc = 0x1F63C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F63C0u;
    // 0x1f63c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B4E8u, 0x1F63C0u, 0x1F63C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63C8u;
label_1f63c8:
    // 0x1f63c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f63c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f63cc: 0xc09f15c  jal         func_27C570
    ctx->pc = 0x1F63CCu;
    SET_GPR_U32(ctx, 31, 0x1F63D4u);
    ctx->pc = 0x1F63D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F63CCu;
    // 0x1f63d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C570u, 0x1F63CCu, 0x1F63D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63D4u;
label_1f63d4:
    // 0x1f63d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f63d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f63d8: 0xc09f15c  jal         func_27C570
    ctx->pc = 0x1F63D8u;
    SET_GPR_U32(ctx, 31, 0x1F63E0u);
    ctx->pc = 0x1F63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F63D8u;
    // 0x1f63dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C570u, 0x1F63D8u, 0x1F63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63E0u;
label_1f63e0:
    // 0x1f63e0: 0x1a600025  blez        $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F63E0u;
    {
        const bool branch_taken_0x1f63e0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1F63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63E0u;
        // 0x1f63e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63e0) {
            ctx->pc = 0x1F6478u;
            goto label_1f6478;
        }
    }
    ctx->pc = 0x1F63E8u;
    // 0x1f63e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f63ec: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f63f0: 0x245788d0  addiu       $s7, $v0, -0x7730
    ctx->pc = 0x1f63f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f63f4: 0x24768858  addiu       $s6, $v1, -0x77A8
    ctx->pc = 0x1f63f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x1f63f8: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1f63f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f63fc: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x1f63fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f6400: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f6400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f6404: 0x0  nop
    ctx->pc = 0x1f6404u;
    // NOP
label_1f6408:
    // 0x1f6408: 0x8ec30028  lw          $v1, 0x28($s6)
    ctx->pc = 0x1f6408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x1f640c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1f640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1f6410: 0x1472000f  bne         $v1, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1F6410u;
    {
        const bool branch_taken_0x1f6410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1F6414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6410u;
        // 0x1f6414: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6410) {
            ctx->pc = 0x1F6450u;
            goto label_1f6450;
        }
    }
    ctx->pc = 0x1F6418u;
    // 0x1f6418: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1f6418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1f641c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F641Cu;
    {
        const bool branch_taken_0x1f641c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F641Cu;
        // 0x1f6420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f641c) {
            ctx->pc = 0x1F6438u;
            goto label_1f6438;
        }
    }
    ctx->pc = 0x1F6424u;
    // 0x1f6424: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x1f6424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f6428: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6428u;
    {
        const bool branch_taken_0x1f6428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6428u;
        // 0x1f642c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6428) {
            ctx->pc = 0x1F6438u;
            goto label_1f6438;
        }
    }
    ctx->pc = 0x1F6430u;
    // 0x1f6430: 0x54710001  bnel        $v1, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6430u;
    {
        const bool branch_taken_0x1f6430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1f6430) {
            ctx->pc = 0x1F6434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6430u;
            // 0x1f6434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6438u;
            goto label_1f6438;
        }
    }
    ctx->pc = 0x1F6438u;
label_1f6438:
    // 0x1f6438: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6438u;
    {
        const bool branch_taken_0x1f6438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6438) {
            ctx->pc = 0x1F6450u;
            goto label_1f6450;
        }
    }
    ctx->pc = 0x1F6440u;
    // 0x1f6440: 0xc0b3e4c  jal         func_2CF930
    ctx->pc = 0x1F6440u;
    SET_GPR_U32(ctx, 31, 0x1F6448u);
    ctx->pc = 0x1F6444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6440u;
    // 0x1f6444: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF930u, 0x1F6440u, 0x1F6448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6448u;
label_1f6448:
    // 0x1f6448: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6448u;
    {
        const bool branch_taken_0x1f6448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6448u;
        // 0x1f644c: 0x213102a  slt         $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6448) {
            ctx->pc = 0x1F6470u;
            goto label_1f6470;
        }
    }
    ctx->pc = 0x1F6450u;
label_1f6450:
    // 0x1f6450: 0x50940006  beql        $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6450u;
    {
        const bool branch_taken_0x1f6450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x1f6450) {
            ctx->pc = 0x1F6454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6450u;
            // 0x1f6454: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F646Cu;
            goto label_1f646c;
        }
    }
    ctx->pc = 0x1F6458u;
    // 0x1f6458: 0x50950004  beql        $a0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6458u;
    {
        const bool branch_taken_0x1f6458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        if (branch_taken_0x1f6458) {
            ctx->pc = 0x1F645Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6458u;
            // 0x1f645c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F646Cu;
            goto label_1f646c;
        }
    }
    ctx->pc = 0x1F6460u;
    // 0x1f6460: 0xc09f15c  jal         func_27C570
    ctx->pc = 0x1F6460u;
    SET_GPR_U32(ctx, 31, 0x1F6468u);
    ctx->pc = 0x1F6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6460u;
    // 0x1f6464: 0x8c85005c  lw          $a1, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C570u, 0x1F6460u, 0x1F6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6468u;
label_1f6468:
    // 0x1f6468: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f646c:
    // 0x1f646c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1f646cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1f6470:
    // 0x1f6470: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F6470u;
    {
        const bool branch_taken_0x1f6470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6470u;
        // 0x1f6474: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6470) {
            ctx->pc = 0x1F6408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6408;
        }
    }
    ctx->pc = 0x1F6478u;
label_1f6478:
    // 0x1f6478: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x1f6478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1f647c: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1f647cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1f6480: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1f6480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1f6484: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x1f6484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1f6488: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x1f6488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1f648c: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x1f648cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1f6490: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x1f6490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1f6494: 0xdfb70238  ld          $s7, 0x238($sp)
    ctx->pc = 0x1f6494u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1f6498: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x1f6498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1f649c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F649Cu;
        // 0x1f64a0: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F649Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F64A4u;
    // 0x1f64a4: 0x0  nop
    ctx->pc = 0x1f64a4u;
    // NOP
    ctx->pc = 0x1f64a8u;
}
