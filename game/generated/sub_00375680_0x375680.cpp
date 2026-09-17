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

// Function: sub_00375680
// Address: 0x375680 - 0x3756e0
void sub_00375680_0x375680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375680_0x375680");
#endif

    ctx->pc = 0x375680u;

    // 0x375680: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375684: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375688: 0x24422130  addiu       $v0, $v0, 0x2130
    ctx->pc = 0x375688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8496));
    // 0x37568c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x37568cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x375690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375694: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x375694u;
    {
        const bool branch_taken_0x375694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375694u;
        // 0x375698: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375694) {
            ctx->pc = 0x3756A8u;
            goto label_3756a8;
        }
    }
    ctx->pc = 0x37569Cu;
    // 0x37569c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37569cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3756a0: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x3756A0u;
    ctx->pc = 0x3756A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3756A0u;
    // 0x3756a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x3756A8u;
label_3756a8:
    // 0x3756a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3756a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3756ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3756ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3756B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756ACu;
        // 0x3756b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3756ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3756B4u;
    // 0x3756b4: 0x0  nop
    ctx->pc = 0x3756b4u;
    // NOP
    // 0x3756b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3756b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3756bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3756bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3756c0: 0x24421fd0  addiu       $v0, $v0, 0x1FD0
    ctx->pc = 0x3756c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8144));
    // 0x3756c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3756c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3756c8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x3756c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3756cc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3756ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3756d0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x3756d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3756d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3756D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3756D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756D4u;
        // 0x3756d8: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3756D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3756DCu;
    // 0x3756dc: 0x0  nop
    ctx->pc = 0x3756dcu;
    // NOP
    ctx->pc = 0x3756e0u;
}
