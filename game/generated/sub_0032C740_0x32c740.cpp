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

// Function: sub_0032C740
// Address: 0x32c740 - 0x32c890
void sub_0032C740_0x32c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C740_0x32c740");
#endif

    switch (ctx->pc) {
        case 0x32c768u: goto label_32c768;
        case 0x32c7b8u: goto label_32c7b8;
        case 0x32c850u: goto label_32c850;
        default: break;
    }

    ctx->pc = 0x32c740u;

    // 0x32c740: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x32c740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x32c744: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x32c744u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x32c748: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32C748u;
    {
        const bool branch_taken_0x32c748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c748) {
            ctx->pc = 0x32C74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C748u;
            // 0x32c74c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C750u;
            goto label_32c750;
        }
    }
    ctx->pc = 0x32C750u;
label_32c750:
    // 0x32c750: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x32c750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x32c754: 0x1810  mfhi        $v1
    ctx->pc = 0x32c754u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32c758: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32c758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32c75c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32c760: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32C760u;
    {
        const bool branch_taken_0x32c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C760u;
        // 0x32c764: 0x24680040  addiu       $t0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c760) {
            ctx->pc = 0x32C774u;
            goto label_32c774;
        }
    }
    ctx->pc = 0x32C768u;
label_32c768:
    // 0x32c768: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x32c768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c76c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x32c76cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x32c770: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x32c770u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_32c774:
    // 0x32c774: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x32c774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32c778: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x32c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32c77c: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32C77Cu;
    {
        const bool branch_taken_0x32c77c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C77Cu;
        // 0x32c780: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c77c) {
            ctx->pc = 0x32C768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c768;
        }
    }
    ctx->pc = 0x32C784u;
    // 0x32c784: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x32c784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x32c788: 0x10c70020  beq         $a2, $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x32C788u;
    {
        const bool branch_taken_0x32c788 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x32C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C788u;
        // 0x32c78c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c788) {
            ctx->pc = 0x32C80Cu;
            goto label_32c80c;
        }
    }
    ctx->pc = 0x32C790u;
    // 0x32c790: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x32c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32c794: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C794u;
    {
        const bool branch_taken_0x32c794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x32C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C794u;
        // 0x32c798: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c794) {
            ctx->pc = 0x32C7A8u;
            goto label_32c7a8;
        }
    }
    ctx->pc = 0x32C79Cu;
    // 0x32c79c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x32C79Cu;
    {
        const bool branch_taken_0x32c79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C79Cu;
        // 0x32c7a0: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c79c) {
            ctx->pc = 0x32C7F0u;
            goto label_32c7f0;
        }
    }
    ctx->pc = 0x32C7A4u;
    // 0x32c7a4: 0x0  nop
    ctx->pc = 0x32c7a4u;
    // NOP
label_32c7a8:
    // 0x32c7a8: 0x54470003  bnel        $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C7A8u;
    {
        const bool branch_taken_0x32c7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x32c7a8) {
            ctx->pc = 0x32C7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C7A8u;
            // 0x32c7ac: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C7B8u;
            goto label_32c7b8;
        }
    }
    ctx->pc = 0x32C7B0u;
    // 0x32c7b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32C7B0u;
    {
        const bool branch_taken_0x32c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7B0u;
        // 0x32c7b4: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c7b0) {
            ctx->pc = 0x32C7F0u;
            goto label_32c7f0;
        }
    }
    ctx->pc = 0x32C7B8u;
label_32c7b8:
    // 0x32c7b8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x32c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32c7bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32c7c0: 0x0  nop
    ctx->pc = 0x32c7c0u;
    // NOP
    // 0x32c7c4: 0x0  nop
    ctx->pc = 0x32c7c4u;
    // NOP
    // 0x32c7c8: 0x0  nop
    ctx->pc = 0x32c7c8u;
    // NOP
    // 0x32c7cc: 0x5447fffa  bnel        $v0, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32C7CCu;
    {
        const bool branch_taken_0x32c7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x32c7cc) {
            ctx->pc = 0x32C7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C7CCu;
            // 0x32c7d0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c7b8;
        }
    }
    ctx->pc = 0x32C7D4u;
    // 0x32c7d4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x32c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32c7d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32c7dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x32c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32c7e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x32c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x32c7e4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x32c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32c7e8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x32c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x32c7ec: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x32c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_32c7f0:
    // 0x32c7f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x32c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32c7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c7f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x32c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x32c7fc: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x32c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x32c800: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x32c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32c804: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32c804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32c808: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x32c808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_32c80c:
    // 0x32c80c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C814u;
    // 0x32c814: 0x0  nop
    ctx->pc = 0x32c814u;
    // NOP
    // 0x32c818: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x32c818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x32c81c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32c81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c820: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x32c820u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x32c824: 0xacc50018  sw          $a1, 0x18($a2)
    ctx->pc = 0x32c824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
    // 0x32c828: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32C828u;
    {
        const bool branch_taken_0x32c828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c828) {
            ctx->pc = 0x32C82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C828u;
            // 0x32c82c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C830u;
            goto label_32c830;
        }
    }
    ctx->pc = 0x32C830u;
label_32c830:
    // 0x32c830: 0x1810  mfhi        $v1
    ctx->pc = 0x32c830u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32c834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32c834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32c838: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32c838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32c83c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x32c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x32c840: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x32c840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32c844: 0x50a3000c  beql        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32C844u;
    {
        const bool branch_taken_0x32c844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32c844) {
            ctx->pc = 0x32C848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C844u;
            // 0x32c848: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C878u;
            goto label_32c878;
        }
    }
    ctx->pc = 0x32C84Cu;
    // 0x32c84c: 0x0  nop
    ctx->pc = 0x32c84cu;
    // NOP
label_32c850:
    // 0x32c850: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x32c850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x32c854: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32C854u;
    {
        const bool branch_taken_0x32c854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c854) {
            ctx->pc = 0x32C858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C854u;
            // 0x32c858: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C860u;
            goto label_32c860;
        }
    }
    ctx->pc = 0x32C85Cu;
    // 0x32c85c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x32c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32c860:
    // 0x32c860: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32c864: 0x0  nop
    ctx->pc = 0x32c864u;
    // NOP
    // 0x32c868: 0x0  nop
    ctx->pc = 0x32c868u;
    // NOP
    // 0x32c86c: 0x14a2fff8  bne         $a1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32C86Cu;
    {
        const bool branch_taken_0x32c86c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C86Cu;
        // 0x32c870: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c86c) {
            ctx->pc = 0x32C850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c850;
        }
    }
    ctx->pc = 0x32C874u;
    // 0x32c874: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x32c874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_32c878:
    // 0x32c878: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32c878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c87c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x32c87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x32c880: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x32c880u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x32c884: 0x3e00008  jr          $ra
    ctx->pc = 0x32C884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C884u;
        // 0x32c888: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C88Cu;
    // 0x32c88c: 0x0  nop
    ctx->pc = 0x32c88cu;
    // NOP
    ctx->pc = 0x32c890u;
}
