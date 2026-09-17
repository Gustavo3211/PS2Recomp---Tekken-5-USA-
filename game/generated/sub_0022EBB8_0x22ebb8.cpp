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

// Function: sub_0022EBB8
// Address: 0x22ebb8 - 0x22ec08
void sub_0022EBB8_0x22ebb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EBB8_0x22ebb8");
#endif

    switch (ctx->pc) {
        case 0x22ebd8u: goto label_22ebd8;
        case 0x22ebe0u: goto label_22ebe0;
        case 0x22ebf0u: goto label_22ebf0;
        default: break;
    }

    ctx->pc = 0x22ebb8u;

    // 0x22ebb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ebb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22ebbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ebbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ebc0: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x22ebc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x22ebc4: 0x26109a40  addiu       $s0, $s0, -0x65C0
    ctx->pc = 0x22ebc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941248));
    // 0x22ebc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22ebcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22ebd0: 0xc094756  jal         func_251D58
    ctx->pc = 0x22EBD0u;
    SET_GPR_U32(ctx, 31, 0x22EBD8u);
    ctx->pc = 0x22EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBD0u;
    // 0x22ebd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251D58u, 0x22EBD0u, 0x22EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBD8u;
label_22ebd8:
    // 0x22ebd8: 0xc08ba9e  jal         func_22EA78
    ctx->pc = 0x22EBD8u;
    SET_GPR_U32(ctx, 31, 0x22EBE0u);
    ctx->pc = 0x22EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBD8u;
    // 0x22ebdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA78u, 0x22EBD8u, 0x22EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBE0u;
label_22ebe0:
    // 0x22ebe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebe4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22ebe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebe8: 0xc08bab0  jal         func_22EAC0
    ctx->pc = 0x22EBE8u;
    SET_GPR_U32(ctx, 31, 0x22EBF0u);
    ctx->pc = 0x22EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EBE8u;
    // 0x22ebec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EAC0u, 0x22EBE8u, 0x22EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBF0u;
label_22ebf0:
    // 0x22ebf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ebf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ebf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22ebf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ebf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22ebf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ebfc: 0x3e00008  jr          $ra
    ctx->pc = 0x22EBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EBFCu;
        // 0x22ec00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EC04u;
    // 0x22ec04: 0x0  nop
    ctx->pc = 0x22ec04u;
    // NOP
    ctx->pc = 0x22ec08u;
}
