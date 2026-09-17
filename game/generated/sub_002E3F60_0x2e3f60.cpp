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

// Function: sub_002E3F60
// Address: 0x2e3f60 - 0x2e3fc8
void sub_002E3F60_0x2e3f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3F60_0x2e3f60");
#endif

    switch (ctx->pc) {
        case 0x2e3f90u: goto label_2e3f90;
        case 0x2e3fb8u: goto label_2e3fb8;
        default: break;
    }

    ctx->pc = 0x2e3f60u;

    // 0x2e3f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e3f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e3f70: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e3f74: 0x2442ecb8  addiu       $v0, $v0, -0x1348
    ctx->pc = 0x2e3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962360));
    // 0x2e3f78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e3f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e3f7c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e3f80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e3f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e3f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3f88: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2E3F88u;
    SET_GPR_U32(ctx, 31, 0x2E3F90u);
    ctx->pc = 0x2E3F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F88u;
    // 0x2e3f8c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2E3F88u, 0x2E3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F90u;
label_2e3f90:
    // 0x2e3f90: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e3f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e3f94: 0x2463fbe0  addiu       $v1, $v1, -0x420
    ctx->pc = 0x2e3f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966240));
    // 0x2e3f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3F98u;
    {
        const bool branch_taken_0x2e3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3F98u;
        // 0x2e3f9c: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f98) {
            ctx->pc = 0x2E3FB8u;
            goto label_2e3fb8;
        }
    }
    ctx->pc = 0x2E3FA0u;
    // 0x2e3fa0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e3fa4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e3fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e3fa8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e3fac: 0x24840458  addiu       $a0, $a0, 0x458
    ctx->pc = 0x2e3facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1112));
    // 0x2e3fb0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E3FB0u;
    SET_GPR_U32(ctx, 31, 0x2E3FB8u);
    ctx->pc = 0x2E3FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3FB0u;
    // 0x2e3fb4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E3FB0u, 0x2E3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FB8u;
label_2e3fb8:
    // 0x2e3fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e3fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3fbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e3fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3FC0u;
        // 0x2e3fc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3FC8u;
}
