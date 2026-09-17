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

// Function: sub_0049A3C0
// Address: 0x49a3c0 - 0x49a430
void sub_0049A3C0_0x49a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A3C0_0x49a3c0");
#endif

    switch (ctx->pc) {
        case 0x49a3f4u: goto label_49a3f4;
        default: break;
    }

    ctx->pc = 0x49a3c0u;

    // 0x49a3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49a3c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49a3c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a3cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49a3d0: 0x8602014a  lh          $v0, 0x14A($s0)
    ctx->pc = 0x49a3d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 330)));
    // 0x49a3d4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x49A3D4u;
    {
        const bool branch_taken_0x49a3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49a3d4) {
            ctx->pc = 0x49A3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A3D4u;
            // 0x49a3d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A424u;
            goto label_49a424;
        }
    }
    ctx->pc = 0x49A3DCu;
    // 0x49a3dc: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x49a3dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x49a3e0: 0x2c4201c0  sltiu       $v0, $v0, 0x1C0
    ctx->pc = 0x49a3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)448) ? 1 : 0);
    // 0x49a3e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49A3E4u;
    {
        const bool branch_taken_0x49a3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A3E4u;
        // 0x49a3e8: 0x2603014c  addiu       $v1, $s0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a3e4) {
            ctx->pc = 0x49A3F8u;
            goto label_49a3f8;
        }
    }
    ctx->pc = 0x49A3ECu;
    // 0x49a3ec: 0xc1268b2  jal         func_49A2C8
    ctx->pc = 0x49A3ECu;
    SET_GPR_U32(ctx, 31, 0x49A3F4u);
    ctx->pc = 0x49A2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A2C8u, 0x49A3ECu, 0x49A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A3F4u;
label_49a3f4:
    // 0x49a3f4: 0x2603014c  addiu       $v1, $s0, 0x14C
    ctx->pc = 0x49a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
label_49a3f8:
    // 0x49a3f8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49a3f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49a3fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x49a3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x49a400: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49A400u;
    {
        const bool branch_taken_0x49a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A400u;
        // 0x49a404: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a400) {
            ctx->pc = 0x49A420u;
            goto label_49a420;
        }
    }
    ctx->pc = 0x49A408u;
    // 0x49a408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a40c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49a40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a410: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49a410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49a414: 0x8128b10  j           func_4A2C40
    ctx->pc = 0x49A414u;
    ctx->pc = 0x49A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A414u;
    // 0x49a418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    sub_004A2C40_0x4a2c40(rdram, ctx, runtime); return;
    ctx->pc = 0x49A41Cu;
    // 0x49a41c: 0x0  nop
    ctx->pc = 0x49a41cu;
    // NOP
label_49a420:
    // 0x49a420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49a420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a424:
    // 0x49a424: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49a424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49a428: 0x3e00008  jr          $ra
    ctx->pc = 0x49A428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A428u;
        // 0x49a42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A430u;
}
