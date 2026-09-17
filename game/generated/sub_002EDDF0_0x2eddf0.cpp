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

// Function: sub_002EDDF0
// Address: 0x2eddf0 - 0x2edea8
void sub_002EDDF0_0x2eddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDDF0_0x2eddf0");
#endif

    switch (ctx->pc) {
        case 0x2ede34u: goto label_2ede34;
        case 0x2ede48u: goto label_2ede48;
        case 0x2ede68u: goto label_2ede68;
        case 0x2ede7cu: goto label_2ede7c;
        default: break;
    }

    ctx->pc = 0x2eddf0u;

    // 0x2eddf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2eddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eddf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eddf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eddf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2eddf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eddfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ede00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ede00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ede04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ede08: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ede08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ede0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ede10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ede10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede14: 0x1a000019  blez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EDE14u;
    {
        const bool branch_taken_0x2ede14 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2EDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE14u;
        // 0x2ede18: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede14) {
            ctx->pc = 0x2EDE7Cu;
            goto label_2ede7c;
        }
    }
    ctx->pc = 0x2EDE1Cu;
    // 0x2ede1c: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EDE1Cu;
    {
        const bool branch_taken_0x2ede1c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2EDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE1Cu;
        // 0x2ede20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede1c) {
            ctx->pc = 0x2EDE50u;
            goto label_2ede50;
        }
    }
    ctx->pc = 0x2EDE24u;
    // 0x2ede24: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EDE24u;
    {
        const bool branch_taken_0x2ede24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ede24) {
            ctx->pc = 0x2EDE50u;
            goto label_2ede50;
        }
    }
    ctx->pc = 0x2EDE2Cu;
    // 0x2ede2c: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2EDE2Cu;
    SET_GPR_U32(ctx, 31, 0x2EDE34u);
    ctx->pc = 0x2EDE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE2Cu;
    // 0x2ede30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2EDE2Cu, 0x2EDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE34u;
label_2ede34:
    // 0x2ede34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ede34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ede38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ede3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede40: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2EDE40u;
    SET_GPR_U32(ctx, 31, 0x2EDE48u);
    ctx->pc = 0x2EDE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE40u;
    // 0x2ede44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2EDE40u, 0x2EDE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE48u;
label_2ede48:
    // 0x2ede48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EDE48u;
    {
        const bool branch_taken_0x2ede48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE48u;
        // 0x2ede4c: 0xae720174  sw          $s2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede48) {
            ctx->pc = 0x2EDE80u;
            goto label_2ede80;
        }
    }
    ctx->pc = 0x2EDE50u;
label_2ede50:
    // 0x2ede50: 0x5a00000b  blezl       $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EDE50u;
    {
        const bool branch_taken_0x2ede50 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2ede50) {
            ctx->pc = 0x2EDE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDE50u;
            // 0x2ede54: 0xae720174  sw          $s2, 0x174($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDE80u;
            goto label_2ede80;
        }
    }
    ctx->pc = 0x2EDE58u;
    // 0x2ede58: 0x5a200009  blezl       $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EDE58u;
    {
        const bool branch_taken_0x2ede58 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2ede58) {
            ctx->pc = 0x2EDE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDE58u;
            // 0x2ede5c: 0xae720174  sw          $s2, 0x174($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDE80u;
            goto label_2ede80;
        }
    }
    ctx->pc = 0x2EDE60u;
    // 0x2ede60: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2EDE60u;
    SET_GPR_U32(ctx, 31, 0x2EDE68u);
    ctx->pc = 0x2EDE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE60u;
    // 0x2ede64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2EDE60u, 0x2EDE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE68u;
label_2ede68:
    // 0x2ede68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ede68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ede6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ede70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede74: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2EDE74u;
    SET_GPR_U32(ctx, 31, 0x2EDE7Cu);
    ctx->pc = 0x2EDE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE74u;
    // 0x2ede78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2EDE74u, 0x2EDE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE7Cu;
label_2ede7c:
    // 0x2ede7c: 0xae720174  sw          $s2, 0x174($s3)
    ctx->pc = 0x2ede7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 18));
label_2ede80:
    // 0x2ede80: 0xae700150  sw          $s0, 0x150($s3)
    ctx->pc = 0x2ede80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 16));
    // 0x2ede84: 0xae710170  sw          $s1, 0x170($s3)
    ctx->pc = 0x2ede84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 17));
    // 0x2ede88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ede88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ede8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ede8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ede90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ede90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ede94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ede94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ede98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ede98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ede9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE9Cu;
        // 0x2edea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDEA4u;
    // 0x2edea4: 0x0  nop
    ctx->pc = 0x2edea4u;
    // NOP
    ctx->pc = 0x2edea8u;
}
