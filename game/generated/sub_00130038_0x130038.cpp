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

// Function: sub_00130038
// Address: 0x130038 - 0x1300b0
void sub_00130038_0x130038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130038_0x130038");
#endif

    switch (ctx->pc) {
        case 0x13005cu: goto label_13005c;
        case 0x130078u: goto label_130078;
        case 0x130084u: goto label_130084;
        default: break;
    }

    ctx->pc = 0x130038u;

    // 0x130038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13003c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13003cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130040: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x130040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13004c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130054: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x130054u;
    SET_GPR_U32(ctx, 31, 0x13005Cu);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x130054u, 0x13005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13005Cu;
label_13005c:
    // 0x13005c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130064: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x130064u;
    {
        const bool branch_taken_0x130064 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x130064) {
            ctx->pc = 0x130068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130064u;
            // 0x130068: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1300A0u;
            goto label_1300a0;
        }
    }
    ctx->pc = 0x13006Cu;
    // 0x13006c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130070: 0xc048ca6  jal         func_123298
    ctx->pc = 0x130070u;
    SET_GPR_U32(ctx, 31, 0x130078u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x130070u, 0x130078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130078u;
label_130078:
    // 0x130078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13007c: 0xc048626  jal         func_121898
    ctx->pc = 0x13007Cu;
    SET_GPR_U32(ctx, 31, 0x130084u);
    ctx->pc = 0x121898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121898u, 0x13007Cu, 0x130084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130084u;
label_130084:
    // 0x130084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130088: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x130088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x13008c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13008cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130094: 0x3e00008  jr          $ra
    ctx->pc = 0x130094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130094u;
        // 0x130098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13009Cu;
    // 0x13009c: 0x0  nop
    ctx->pc = 0x13009cu;
    // NOP
label_1300a0:
    // 0x1300a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1300a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1300a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1300a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1300a8: 0x8048626  j           func_121898
    ctx->pc = 0x1300A8u;
    ctx->pc = 0x1300ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300A8u;
    // 0x1300ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121898u;
    sub_00121898_0x121898(rdram, ctx, runtime); return;
    ctx->pc = 0x1300B0u;
}
