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

// Function: sub_00219EE8
// Address: 0x219ee8 - 0x219f30
void sub_00219EE8_0x219ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219EE8_0x219ee8");
#endif

    switch (ctx->pc) {
        case 0x219f04u: goto label_219f04;
        case 0x219f10u: goto label_219f10;
        case 0x219f1cu: goto label_219f1c;
        default: break;
    }

    ctx->pc = 0x219ee8u;

    // 0x219ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ef8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x219efc: 0xc0867a6  jal         func_219E98
    ctx->pc = 0x219EFCu;
    SET_GPR_U32(ctx, 31, 0x219F04u);
    ctx->pc = 0x219F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219EFCu;
    // 0x219f00: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219E98u, 0x219EFCu, 0x219F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F04u;
label_219f04:
    // 0x219f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f08: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x219F08u;
    SET_GPR_U32(ctx, 31, 0x219F10u);
    ctx->pc = 0x219F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F08u;
    // 0x219f0c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x219F08u, 0x219F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F10u;
label_219f10:
    // 0x219f10: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x219f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x219f14: 0xc0867b4  jal         func_219ED0
    ctx->pc = 0x219F14u;
    SET_GPR_U32(ctx, 31, 0x219F1Cu);
    ctx->pc = 0x219F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F14u;
    // 0x219f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219ED0u, 0x219F14u, 0x219F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F1Cu;
label_219f1c:
    // 0x219f1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219f20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x219f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219f24: 0x3e00008  jr          $ra
    ctx->pc = 0x219F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F24u;
        // 0x219f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219F2Cu;
    // 0x219f2c: 0x0  nop
    ctx->pc = 0x219f2cu;
    // NOP
    ctx->pc = 0x219f30u;
}
