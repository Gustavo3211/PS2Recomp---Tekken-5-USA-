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

// Function: sub_0024C3A8
// Address: 0x24c3a8 - 0x24c410
void sub_0024C3A8_0x24c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C3A8_0x24c3a8");
#endif

    switch (ctx->pc) {
        case 0x24c3d0u: goto label_24c3d0;
        default: break;
    }

    ctx->pc = 0x24c3a8u;

    // 0x24c3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c3ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c3b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c3b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24c3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24c3b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24c3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c3bc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x24c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x24c3c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24c3c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24c3c8: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x24C3C8u;
    SET_GPR_U32(ctx, 31, 0x24C3D0u);
    ctx->pc = 0x24C3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C3C8u;
    // 0x24c3cc: 0xac450048  sw          $a1, 0x48($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x24C3C8u, 0x24C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3D0u;
label_24c3d0:
    // 0x24c3d0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x24c3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24c3d4: 0x3845001f  xori        $a1, $v0, 0x1F
    ctx->pc = 0x24c3d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x24c3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c3dc: 0xc5100a  movz        $v0, $a2, $a1
    ctx->pc = 0x24c3dcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x24c3e0: 0xde040028  ld          $a0, 0x28($s0)
    ctx->pc = 0x24c3e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24c3e4: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x24c3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x24c3e8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x24c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x24c3ec: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x24c3ecu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x24c3f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24c3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c3f4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x24c3f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24c3f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24c3fc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x24c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x24c400: 0xfe040028  sd          $a0, 0x28($s0)
    ctx->pc = 0x24c400u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
    // 0x24c404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c408: 0x3e00008  jr          $ra
    ctx->pc = 0x24C408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C408u;
        // 0x24c40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C410u;
}
