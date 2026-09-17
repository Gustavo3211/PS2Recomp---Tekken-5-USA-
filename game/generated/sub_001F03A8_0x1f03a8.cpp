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

// Function: sub_001F03A8
// Address: 0x1f03a8 - 0x1f0430
void sub_001F03A8_0x1f03a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F03A8_0x1f03a8");
#endif

    switch (ctx->pc) {
        case 0x1f03c0u: goto label_1f03c0;
        case 0x1f03f0u: goto label_1f03f0;
        case 0x1f03fcu: goto label_1f03fc;
        case 0x1f0404u: goto label_1f0404;
        case 0x1f040cu: goto label_1f040c;
        case 0x1f0414u: goto label_1f0414;
        case 0x1f041cu: goto label_1f041c;
        default: break;
    }

    ctx->pc = 0x1f03a8u;

    // 0x1f03a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f03a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f03ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f03acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f03b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f03b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f03b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f03b8: 0xc07c10c  jal         func_1F0430
    ctx->pc = 0x1F03B8u;
    SET_GPR_U32(ctx, 31, 0x1F03C0u);
    ctx->pc = 0x1F03BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03B8u;
    // 0x1f03bc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0430u, 0x1F03B8u, 0x1F03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03C0u;
label_1f03c0:
    // 0x1f03c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f03c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f03c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F03C4u;
    {
        const bool branch_taken_0x1f03c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f03c4) {
            ctx->pc = 0x1F03C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F03C4u;
            // 0x1f03c8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F03E0u;
            goto label_1f03e0;
        }
    }
    ctx->pc = 0x1F03CCu;
    // 0x1f03cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1f03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f03d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f03d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F03D4u;
    {
        const bool branch_taken_0x1f03d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f03d4) {
            ctx->pc = 0x1F03E8u;
            goto label_1f03e8;
        }
    }
    ctx->pc = 0x1F03DCu;
    // 0x1f03dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f03dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1f03e0:
    // 0x1f03e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f03e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f03e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1f03e8:
    // 0x1f03e8: 0xc0b7e80  jal         func_2DFA00
    ctx->pc = 0x1F03E8u;
    SET_GPR_U32(ctx, 31, 0x1F03F0u);
    ctx->pc = 0x2DFA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFA00u, 0x1F03E8u, 0x1F03F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03F0u;
label_1f03f0:
    // 0x1f03f0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1f03f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1f03f4: 0xc07c432  jal         func_1F10C8
    ctx->pc = 0x1F03F4u;
    SET_GPR_U32(ctx, 31, 0x1F03FCu);
    ctx->pc = 0x1F03F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03F4u;
    // 0x1f03f8: 0x24848858  addiu       $a0, $a0, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F10C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F10C8u, 0x1F03F4u, 0x1F03FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F03FCu;
label_1f03fc:
    // 0x1f03fc: 0xc08b8cc  jal         func_22E330
    ctx->pc = 0x1F03FCu;
    SET_GPR_U32(ctx, 31, 0x1F0404u);
    ctx->pc = 0x22E330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E330u, 0x1F03FCu, 0x1F0404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0404u;
label_1f0404:
    // 0x1f0404: 0xc08b92e  jal         func_22E4B8
    ctx->pc = 0x1F0404u;
    SET_GPR_U32(ctx, 31, 0x1F040Cu);
    ctx->pc = 0x22E4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E4B8u, 0x1F0404u, 0x1F040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F040Cu;
label_1f040c:
    // 0x1f040c: 0xc08ae38  jal         func_22B8E0
    ctx->pc = 0x1F040Cu;
    SET_GPR_U32(ctx, 31, 0x1F0414u);
    ctx->pc = 0x22B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8E0u, 0x1F040Cu, 0x1F0414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0414u;
label_1f0414:
    // 0x1f0414: 0xc0af7f6  jal         func_2BDFD8
    ctx->pc = 0x1F0414u;
    SET_GPR_U32(ctx, 31, 0x1F041Cu);
    ctx->pc = 0x2BDFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDFD8u, 0x1F0414u, 0x1F041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F041Cu;
label_1f041c:
    // 0x1f041c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f041cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0424: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f0424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0428: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0428u;
        // 0x1f042c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0430u;
}
