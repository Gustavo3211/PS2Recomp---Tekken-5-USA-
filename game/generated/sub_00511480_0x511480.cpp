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

// Function: sub_00511480
// Address: 0x511480 - 0x511518
void sub_00511480_0x511480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511480_0x511480");
#endif

    switch (ctx->pc) {
        case 0x511498u: goto label_511498;
        case 0x5114d0u: goto label_5114d0;
        default: break;
    }

    ctx->pc = 0x511480u;

    // 0x511480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x511480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x511484: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x511484u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x511488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x511488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x51148c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x51148cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x511490: 0x8143512  j           func_50D448
    ctx->pc = 0x511490u;
    ctx->pc = 0x511494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511490u;
    // 0x511494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50D448u;
    sub_0050D448_0x50d448(rdram, ctx, runtime); return;
    ctx->pc = 0x511498u;
label_511498:
    // 0x511498: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x511498u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x51149c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x51149cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x5114a0: 0x52b83  sra         $a1, $a1, 14
    ctx->pc = 0x5114a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 14));
    // 0x5114a4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x5114a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x5114a8: 0x3c080090  lui         $t0, 0x90
    ctx->pc = 0x5114a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)144 << 16));
    // 0x5114ac: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x5114acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x5114b0: 0x8d083140  lw          $t0, 0x3140($t0)
    ctx->pc = 0x5114b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12608)));
    // 0x5114b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x5114b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5114b8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x5114b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5114bc: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x5114bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x5114c0: 0x11020012  beq         $t0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x5114C0u;
    {
        const bool branch_taken_0x5114c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x5114C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5114C0u;
        // 0x5114c4: 0x73c03  sra         $a3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5114c0) {
            ctx->pc = 0x51150Cu;
            goto label_51150c;
        }
    }
    ctx->pc = 0x5114C8u;
    // 0x5114c8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x5114c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5114cc: 0x0  nop
    ctx->pc = 0x5114ccu;
    // NOP
label_5114d0:
    // 0x5114d0: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x5114D0u;
    {
        const bool branch_taken_0x5114d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x5114D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5114D0u;
        // 0x5114d4: 0x2504002a  addiu       $a0, $t0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5114d0) {
            ctx->pc = 0x5114F8u;
            goto label_5114f8;
        }
    }
    ctx->pc = 0x5114D8u;
    // 0x5114d8: 0x2505002c  addiu       $a1, $t0, 0x2C
    ctx->pc = 0x5114d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 44));
    // 0x5114dc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x5114dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5114e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x5114e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x5114e4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x5114e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5114e8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x5114e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5114ec: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x5114ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x5114f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x5114F0u;
    {
        const bool branch_taken_0x5114f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5114F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5114F0u;
        // 0x5114f4: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5114f0) {
            ctx->pc = 0x511500u;
            goto label_511500;
        }
    }
    ctx->pc = 0x5114F8u;
label_5114f8:
    // 0x5114f8: 0xa506002a  sh          $a2, 0x2A($t0)
    ctx->pc = 0x5114f8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 42), (uint16_t)GPR_U32(ctx, 6));
    // 0x5114fc: 0xa507002c  sh          $a3, 0x2C($t0)
    ctx->pc = 0x5114fcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 44), (uint16_t)GPR_U32(ctx, 7));
label_511500:
    // 0x511500: 0x8d020040  lw          $v0, 0x40($t0)
    ctx->pc = 0x511500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x511504: 0x144afff2  bne         $v0, $t2, . + 4 + (-0xE << 2)
    ctx->pc = 0x511504u;
    {
        const bool branch_taken_0x511504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x511508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511504u;
        // 0x511508: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511504) {
            ctx->pc = 0x5114D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5114d0;
        }
    }
    ctx->pc = 0x51150Cu;
label_51150c:
    // 0x51150c: 0x3e00008  jr          $ra
    ctx->pc = 0x51150Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x51150Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511514u;
    // 0x511514: 0x0  nop
    ctx->pc = 0x511514u;
    // NOP
    ctx->pc = 0x511518u;
}
