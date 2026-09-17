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

// Function: sub_00240480
// Address: 0x240480 - 0x240528
void sub_00240480_0x240480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240480_0x240480");
#endif

    switch (ctx->pc) {
        case 0x240494u: goto label_240494;
        case 0x2404c0u: goto label_2404c0;
        case 0x2404d0u: goto label_2404d0;
        case 0x2404e0u: goto label_2404e0;
        case 0x2404f4u: goto label_2404f4;
        case 0x240510u: goto label_240510;
        default: break;
    }

    ctx->pc = 0x240480u;

    // 0x240480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240488: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x240488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24048c: 0xc0900d0  jal         func_240340
    ctx->pc = 0x24048Cu;
    SET_GPR_U32(ctx, 31, 0x240494u);
    ctx->pc = 0x240490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24048Cu;
    // 0x240490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240340u, 0x24048Cu, 0x240494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240494u;
label_240494:
    // 0x240494: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240494u;
    {
        const bool branch_taken_0x240494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240494u;
        // 0x240498: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240494) {
            ctx->pc = 0x2404A8u;
            goto label_2404a8;
        }
    }
    ctx->pc = 0x24049Cu;
    // 0x24049c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x24049Cu;
    {
        const bool branch_taken_0x24049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2404A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24049Cu;
        // 0x2404a0: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24049c) {
            ctx->pc = 0x240518u;
            goto label_240518;
        }
    }
    ctx->pc = 0x2404A4u;
    // 0x2404a4: 0x0  nop
    ctx->pc = 0x2404a4u;
    // NOP
label_2404a8:
    // 0x2404a8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2404a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2404ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2404acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2404b0: 0x1c400019  bgtz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2404B0u;
    {
        const bool branch_taken_0x2404b0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2404B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404B0u;
        // 0x2404b4: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404b0) {
            ctx->pc = 0x240518u;
            goto label_240518;
        }
    }
    ctx->pc = 0x2404B8u;
    // 0x2404b8: 0xc092656  jal         func_249958
    ctx->pc = 0x2404B8u;
    SET_GPR_U32(ctx, 31, 0x2404C0u);
    ctx->pc = 0x2404BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404B8u;
    // 0x2404bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249958u, 0x2404B8u, 0x2404C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404C0u;
label_2404c0:
    // 0x2404c0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2404C0u;
    {
        const bool branch_taken_0x2404c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2404c0) {
            ctx->pc = 0x2404C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2404C0u;
            // 0x2404c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24051Cu;
            goto label_24051c;
        }
    }
    ctx->pc = 0x2404C8u;
    // 0x2404c8: 0xc0b6aea  jal         func_2DABA8
    ctx->pc = 0x2404C8u;
    SET_GPR_U32(ctx, 31, 0x2404D0u);
    ctx->pc = 0x2DABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DABA8u, 0x2404C8u, 0x2404D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404D0u;
label_2404d0:
    // 0x2404d0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2404D0u;
    {
        const bool branch_taken_0x2404d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2404d0) {
            ctx->pc = 0x2404D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2404D0u;
            // 0x2404d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24051Cu;
            goto label_24051c;
        }
    }
    ctx->pc = 0x2404D8u;
    // 0x2404d8: 0xc0b6afe  jal         func_2DABF8
    ctx->pc = 0x2404D8u;
    SET_GPR_U32(ctx, 31, 0x2404E0u);
    ctx->pc = 0x2DABF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DABF8u, 0x2404D8u, 0x2404E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404E0u;
label_2404e0:
    // 0x2404e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2404e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2404E4u;
    {
        const bool branch_taken_0x2404e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2404E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404E4u;
        // 0x2404e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404e4) {
            ctx->pc = 0x240518u;
            goto label_240518;
        }
    }
    ctx->pc = 0x2404ECu;
    // 0x2404ec: 0xc090074  jal         func_2401D0
    ctx->pc = 0x2404ECu;
    SET_GPR_U32(ctx, 31, 0x2404F4u);
    ctx->pc = 0x2401D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401D0u, 0x2404ECu, 0x2404F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404F4u;
label_2404f4:
    // 0x2404f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2404F4u;
    {
        const bool branch_taken_0x2404f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2404F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404F4u;
        // 0x2404f8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404f4) {
            ctx->pc = 0x240508u;
            goto label_240508;
        }
    }
    ctx->pc = 0x2404FCu;
    // 0x2404fc: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2404fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x240500: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x240500u;
    {
        const bool branch_taken_0x240500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240500u;
        // 0x240504: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240500) {
            ctx->pc = 0x240518u;
            goto label_240518;
        }
    }
    ctx->pc = 0x240508u;
label_240508:
    // 0x240508: 0xc0c59c2  jal         func_316708
    ctx->pc = 0x240508u;
    SET_GPR_U32(ctx, 31, 0x240510u);
    ctx->pc = 0x316708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316708u, 0x240508u, 0x240510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240510u;
label_240510:
    // 0x240510: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x240510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x240514: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x240514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_240518:
    // 0x240518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24051c:
    // 0x24051c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24051cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240520: 0x3e00008  jr          $ra
    ctx->pc = 0x240520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240520u;
        // 0x240524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240528u;
}
