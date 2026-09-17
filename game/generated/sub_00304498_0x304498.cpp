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

// Function: sub_00304498
// Address: 0x304498 - 0x3044e0
void sub_00304498_0x304498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304498_0x304498");
#endif

    switch (ctx->pc) {
        case 0x3044bcu: goto label_3044bc;
        default: break;
    }

    ctx->pc = 0x304498u;

    // 0x304498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30449c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x30449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3044a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3044a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3044a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3044a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3044a8: 0x24421198  addiu       $v0, $v0, 0x1198
    ctx->pc = 0x3044a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
    // 0x3044ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3044acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3044b0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x3044b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x3044b4: 0xc0bee24  jal         func_2FB890
    ctx->pc = 0x3044B4u;
    SET_GPR_U32(ctx, 31, 0x3044BCu);
    ctx->pc = 0x3044B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3044B4u;
    // 0x3044b8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB890u, 0x3044B4u, 0x3044BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3044BCu;
label_3044bc:
    // 0x3044bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3044bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3044c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3044c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3044c4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x3044c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x3044c8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3044c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3044cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3044ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3044d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3044d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3044d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3044d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3044d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3044D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3044DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044D8u;
        // 0x3044dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3044D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3044E0u;
}
