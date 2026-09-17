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

// Function: sub_00376700
// Address: 0x376700 - 0x376750
void sub_00376700_0x376700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376700_0x376700");
#endif

    switch (ctx->pc) {
        case 0x376724u: goto label_376724;
        case 0x376738u: goto label_376738;
        default: break;
    }

    ctx->pc = 0x376700u;

    // 0x376700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x376704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376708: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x376708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37670c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x376710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x376710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376714: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x376714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x376718: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x376718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x37671c: 0xc0dd9d4  jal         func_376750
    ctx->pc = 0x37671Cu;
    SET_GPR_U32(ctx, 31, 0x376724u);
    ctx->pc = 0x376720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37671Cu;
    // 0x376720: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376750u, 0x37671Cu, 0x376724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376724u;
label_376724:
    // 0x376724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x376724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37672c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37672cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376730: 0xc0cb152  jal         func_32C548
    ctx->pc = 0x376730u;
    SET_GPR_U32(ctx, 31, 0x376738u);
    ctx->pc = 0x376734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376730u;
    // 0x376734: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C548u, 0x376730u, 0x376738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376738u;
label_376738:
    // 0x376738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37673c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37673cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x376740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x376740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376744: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x376744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x376748: 0x3e00008  jr          $ra
    ctx->pc = 0x376748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376748u;
        // 0x37674c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376750u;
}
