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

// Function: sub_00327768
// Address: 0x327768 - 0x3277d0
void sub_00327768_0x327768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327768_0x327768");
#endif

    switch (ctx->pc) {
        case 0x32779cu: goto label_32779c;
        case 0x3277acu: goto label_3277ac;
        case 0x3277b4u: goto label_3277b4;
        default: break;
    }

    ctx->pc = 0x327768u;

    // 0x327768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32776c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32776cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327770: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x327770u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x327774: 0x2610f300  addiu       $s0, $s0, -0xD00
    ctx->pc = 0x327774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963968));
    // 0x327778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32777c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32777cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x327780: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x327780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327784: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x327784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327788: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x327788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32778c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32778cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327790: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x327790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x327794: 0xc0c9df4  jal         func_3277D0
    ctx->pc = 0x327794u;
    SET_GPR_U32(ctx, 31, 0x32779Cu);
    ctx->pc = 0x327798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327794u;
    // 0x327798: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277D0u, 0x327794u, 0x32779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32779Cu;
label_32779c:
    // 0x32779c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32779cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3277a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3277a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3277a4: 0xc0c9e66  jal         func_327998
    ctx->pc = 0x3277A4u;
    SET_GPR_U32(ctx, 31, 0x3277ACu);
    ctx->pc = 0x3277A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3277A4u;
    // 0x3277a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327998u, 0x3277A4u, 0x3277ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3277ACu;
label_3277ac:
    // 0x3277ac: 0xc0c9e1e  jal         func_327878
    ctx->pc = 0x3277ACu;
    SET_GPR_U32(ctx, 31, 0x3277B4u);
    ctx->pc = 0x3277B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3277ACu;
    // 0x3277b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327878u, 0x3277ACu, 0x3277B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3277B4u;
label_3277b4:
    // 0x3277b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3277b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3277b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3277b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3277bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3277bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3277c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3277c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3277c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3277C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3277C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277C4u;
        // 0x3277c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3277C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3277CCu;
    // 0x3277cc: 0x0  nop
    ctx->pc = 0x3277ccu;
    // NOP
    ctx->pc = 0x3277d0u;
}
