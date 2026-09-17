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

// Function: sub_00262B80
// Address: 0x262b80 - 0x262be0
void sub_00262B80_0x262b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262B80_0x262b80");
#endif

    switch (ctx->pc) {
        case 0x262ba0u: goto label_262ba0;
        case 0x262bacu: goto label_262bac;
        default: break;
    }

    ctx->pc = 0x262b80u;

    // 0x262b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262b84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x262b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x262b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262b8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x262b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x262b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x262b94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x262b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x262b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x262b9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x262b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262ba0:
    // 0x262ba0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x262ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x262ba4: 0xc098ab4  jal         func_262AD0
    ctx->pc = 0x262BA4u;
    SET_GPR_U32(ctx, 31, 0x262BACu);
    ctx->pc = 0x262BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262BA4u;
    // 0x262ba8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AD0u, 0x262BA4u, 0x262BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BACu;
label_262bac:
    // 0x262bac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x262bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x262bb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x262bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x262bb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x262bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x262bb8: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x262bb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x262bbc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x262BBCu;
    {
        const bool branch_taken_0x262bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x262BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BBCu;
        // 0x262bc0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bbc) {
            ctx->pc = 0x262BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262ba0;
        }
    }
    ctx->pc = 0x262BC4u;
    // 0x262bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262bc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x262bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x262bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x262bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262bd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x262bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x262bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x262BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BD4u;
        // 0x262bd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262BDCu;
    // 0x262bdc: 0x0  nop
    ctx->pc = 0x262bdcu;
    // NOP
    ctx->pc = 0x262be0u;
}
