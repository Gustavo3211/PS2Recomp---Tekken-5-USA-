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

// Function: sub_0012C1B0
// Address: 0x12c1b0 - 0x12c370
void sub_0012C1B0_0x12c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C1B0_0x12c1b0");
#endif

    switch (ctx->pc) {
        case 0x12c244u: goto label_12c244;
        case 0x12c270u: goto label_12c270;
        case 0x12c2bcu: goto label_12c2bc;
        case 0x12c2e4u: goto label_12c2e4;
        case 0x12c308u: goto label_12c308;
        default: break;
    }

    ctx->pc = 0x12c1b0u;

    // 0x12c1b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12c1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12c1b4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x12c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12c1b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12c1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12c1bc: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x12c1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12c1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12c1c4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12c1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12c1cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12c1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12c1d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12c1d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1d8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12c1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12c1dc: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x12c1dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12c1e0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12c1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12c1e4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x12c1e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1e8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12c1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12c1ec: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12c1ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1f0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12c1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12c1f4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x12c1f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c1f8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12c1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12c1fc: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x12c1fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c200: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C200u;
    {
        const bool branch_taken_0x12c200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C200u;
        // 0x12c204: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c200) {
            ctx->pc = 0x12C224u;
            goto label_12c224;
        }
    }
    ctx->pc = 0x12C208u;
    // 0x12c208: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x12c208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12c20c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C20Cu;
    {
        const bool branch_taken_0x12c20c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C20Cu;
        // 0x12c210: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c20c) {
            ctx->pc = 0x12C21Cu;
            goto label_12c21c;
        }
    }
    ctx->pc = 0x12C214u;
    // 0x12c214: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C214u;
    {
        const bool branch_taken_0x12c214 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C214u;
        // 0x12c218: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c214) {
            ctx->pc = 0x12C224u;
            goto label_12c224;
        }
    }
    ctx->pc = 0x12C21Cu;
label_12c21c:
    // 0x12c21c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x12c21cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x12c220: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x12c220u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12c224:
    // 0x12c224: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12c224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c228: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12c228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12c22c: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C22Cu;
    {
        const bool branch_taken_0x12c22c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12c22c) {
            ctx->pc = 0x12C230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C22Cu;
            // 0x12c230: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C250u;
            goto label_12c250;
        }
    }
    ctx->pc = 0x12C234u;
    // 0x12c234: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12c234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c238: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c23c: 0xc048ca6  jal         func_123298
    ctx->pc = 0x12C23Cu;
    SET_GPR_U32(ctx, 31, 0x12C244u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x12C23Cu, 0x12C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C244u;
label_12c244:
    // 0x12c244: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c248: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x12c248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12c24c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x12c24cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_12c250:
    // 0x12c250: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x12c250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c254: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12c254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c258: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12c258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c25c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x12c25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c260: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x12c260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c264: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x12c264u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c268: 0xc04b210  jal         func_12C840
    ctx->pc = 0x12C268u;
    SET_GPR_U32(ctx, 31, 0x12C270u);
    ctx->pc = 0x12C26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C268u;
    // 0x12c26c: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C840u, 0x12C268u, 0x12C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C270u;
label_12c270:
    // 0x12c270: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12c270u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c274: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x12c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12c278: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C278u;
    {
        const bool branch_taken_0x12c278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C278u;
        // 0x12c27c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c278) {
            ctx->pc = 0x12C288u;
            goto label_12c288;
        }
    }
    ctx->pc = 0x12C280u;
    // 0x12c280: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C280u;
    {
        const bool branch_taken_0x12c280 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C280u;
        // 0x12c284: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c280) {
            ctx->pc = 0x12C294u;
            goto label_12c294;
        }
    }
    ctx->pc = 0x12C288u;
label_12c288:
    // 0x12c288: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x12c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12c28c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x12C28Cu;
    {
        const bool branch_taken_0x12c28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C28Cu;
        // 0x12c290: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c28c) {
            ctx->pc = 0x12C330u;
            goto label_12c330;
        }
    }
    ctx->pc = 0x12C294u;
label_12c294:
    // 0x12c294: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12C294u;
    {
        const bool branch_taken_0x12c294 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C294u;
        // 0x12c298: 0x2938021  addu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c294) {
            ctx->pc = 0x12C2D4u;
            goto label_12c2d4;
        }
    }
    ctx->pc = 0x12C29Cu;
    // 0x12c29c: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x12c29cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12c2a0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x12c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12c2a4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12C2A4u;
    {
        const bool branch_taken_0x12c2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12c2a4) {
            ctx->pc = 0x12C2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C2A4u;
            // 0x12c2a8: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C2D0u;
            goto label_12c2d0;
        }
    }
    ctx->pc = 0x12C2ACu;
    // 0x12c2ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2b4: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12C2B4u;
    SET_GPR_U32(ctx, 31, 0x12C2BCu);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12C2B4u, 0x12C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2BCu;
label_12c2bc:
    // 0x12c2bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C2BCu;
    {
        const bool branch_taken_0x12c2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2BCu;
        // 0x12c2c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2bc) {
            ctx->pc = 0x12C2CCu;
            goto label_12c2cc;
        }
    }
    ctx->pc = 0x12C2C4u;
    // 0x12c2c4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x12c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x12c2c8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x12c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_12c2cc:
    // 0x12c2cc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x12c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_12c2d0:
    // 0x12c2d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12c2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_12c2d4:
    // 0x12c2d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c2dc: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x12C2DCu;
    SET_GPR_U32(ctx, 31, 0x12C2E4u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x12C2DCu, 0x12C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C2E4u;
label_12c2e4:
    // 0x12c2e4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12c2e8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x12c2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x12c2ec: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x12c2ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x12c2f0: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x12c2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12c2f4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x12c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x12c2f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12C2F8u;
    {
        const bool branch_taken_0x12c2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2F8u;
        // 0x12c2fc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2f8) {
            ctx->pc = 0x12C334u;
            goto label_12c334;
        }
    }
    ctx->pc = 0x12C300u;
    // 0x12c300: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x12c300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12c304: 0x0  nop
    ctx->pc = 0x12c304u;
    // NOP
label_12c308:
    // 0x12c308: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x12c308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c30c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x12c30cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x12c310: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x12c310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12c314: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x12c314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x12c318: 0x0  nop
    ctx->pc = 0x12c318u;
    // NOP
    // 0x12c31c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12C31Cu;
    {
        const bool branch_taken_0x12c31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C31Cu;
        // 0x12c320: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c31c) {
            ctx->pc = 0x12C308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c308;
        }
    }
    ctx->pc = 0x12C324u;
    // 0x12c324: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12C324u;
    {
        const bool branch_taken_0x12c324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C324u;
        // 0x12c328: 0x741823  subu        $v1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c324) {
            ctx->pc = 0x12C338u;
            goto label_12c338;
        }
    }
    ctx->pc = 0x12C32Cu;
    // 0x12c32c: 0x0  nop
    ctx->pc = 0x12c32cu;
    // NOP
label_12c330:
    // 0x12c330: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12c334:
    // 0x12c334: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x12c334u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_12c338:
    // 0x12c338: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x12c338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c33c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x12c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x12c340: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12c340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c344: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12c344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c348: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12c348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c34c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12c34cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12c350: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12c350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c354: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12c354u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12c358: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12c358u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c35c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12c35cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12c360: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12c360u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c364: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12c364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12c368: 0x3e00008  jr          $ra
    ctx->pc = 0x12C368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C368u;
        // 0x12c36c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C370u;
}
