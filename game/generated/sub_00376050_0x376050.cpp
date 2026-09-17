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

// Function: sub_00376050
// Address: 0x376050 - 0x3760a0
void sub_00376050_0x376050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376050_0x376050");
#endif

    switch (ctx->pc) {
        case 0x376074u: goto label_376074;
        case 0x376088u: goto label_376088;
        default: break;
    }

    ctx->pc = 0x376050u;

    // 0x376050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x376054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376058: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x376058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37605c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x376060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x376060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376064: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x376064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x376068: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x376068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x37606c: 0xc0dd83e  jal         func_3760F8
    ctx->pc = 0x37606Cu;
    SET_GPR_U32(ctx, 31, 0x376074u);
    ctx->pc = 0x376070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37606Cu;
    // 0x376070: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F8u, 0x37606Cu, 0x376074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376074u;
label_376074:
    // 0x376074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x376074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37607c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37607cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376080: 0xc0cb152  jal         func_32C548
    ctx->pc = 0x376080u;
    SET_GPR_U32(ctx, 31, 0x376088u);
    ctx->pc = 0x376084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376080u;
    // 0x376084: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C548u, 0x376080u, 0x376088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376088u;
label_376088:
    // 0x376088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37608c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37608cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x376090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x376090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376094: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x376094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x376098: 0x3e00008  jr          $ra
    ctx->pc = 0x376098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376098u;
        // 0x37609c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3760A0u;
}
