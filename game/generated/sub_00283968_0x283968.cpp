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

// Function: sub_00283968
// Address: 0x283968 - 0x2839e0
void sub_00283968_0x283968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283968_0x283968");
#endif

    ctx->pc = 0x283968u;

    // 0x283968: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x283968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28396c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x28396cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x283970: 0x8c4583c0  lw          $a1, -0x7C40($v0)
    ctx->pc = 0x283970u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x283974: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x283974u;
    {
        const bool branch_taken_0x283974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x283978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283974u;
        // 0x283978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283974) {
            ctx->pc = 0x283988u;
            goto label_283988;
        }
    }
    ctx->pc = 0x28397Cu;
    // 0x28397c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283980: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x283980u;
    {
        const bool branch_taken_0x283980 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x283980) {
            ctx->pc = 0x28398Cu;
            goto label_28398c;
        }
    }
    ctx->pc = 0x283988u;
label_283988:
    // 0x283988: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x283988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28398c:
    // 0x28398c: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x28398Cu;
    {
        const bool branch_taken_0x28398c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x283990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28398Cu;
        // 0x283990: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28398c) {
            ctx->pc = 0x2839D8u;
            goto label_2839d8;
        }
    }
    ctx->pc = 0x283994u;
    // 0x283994: 0x28830016  slti        $v1, $a0, 0x16
    ctx->pc = 0x283994u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x283998: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x283998u;
    {
        const bool branch_taken_0x283998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283998u;
        // 0x28399c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283998) {
            ctx->pc = 0x2839D8u;
            goto label_2839d8;
        }
    }
    ctx->pc = 0x2839A0u;
    // 0x2839a0: 0x28830013  slti        $v1, $a0, 0x13
    ctx->pc = 0x2839a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2839a4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2839A4u;
    {
        const bool branch_taken_0x2839a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839A4u;
        // 0x2839a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839a4) {
            ctx->pc = 0x2839D8u;
            goto label_2839d8;
        }
    }
    ctx->pc = 0x2839ACu;
    // 0x2839ac: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x2839acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2839b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2839B0u;
    {
        const bool branch_taken_0x2839b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839B0u;
        // 0x2839b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839b0) {
            ctx->pc = 0x2839D8u;
            goto label_2839d8;
        }
    }
    ctx->pc = 0x2839B8u;
    // 0x2839b8: 0x2883000d  slti        $v1, $a0, 0xD
    ctx->pc = 0x2839b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2839bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2839BCu;
    {
        const bool branch_taken_0x2839bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839BCu;
        // 0x2839c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839bc) {
            ctx->pc = 0x2839D8u;
            goto label_2839d8;
        }
    }
    ctx->pc = 0x2839C4u;
    // 0x2839c4: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x2839c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2839c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2839C8u;
    {
        const bool branch_taken_0x2839c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839C8u;
        // 0x2839cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839c8) {
            ctx->pc = 0x2839D8u;
            goto label_2839d8;
        }
    }
    ctx->pc = 0x2839D0u;
    // 0x2839d0: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x2839d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2839d4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2839d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2839d8:
    // 0x2839d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2839D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2839D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2839E0u;
}
