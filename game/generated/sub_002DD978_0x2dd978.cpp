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

// Function: sub_002DD978
// Address: 0x2dd978 - 0x2dda48
void sub_002DD978_0x2dd978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD978_0x2dd978");
#endif

    switch (ctx->pc) {
        case 0x2dd9d0u: goto label_2dd9d0;
        case 0x2dda00u: goto label_2dda00;
        case 0x2dda28u: goto label_2dda28;
        case 0x2dda34u: goto label_2dda34;
        default: break;
    }

    ctx->pc = 0x2dd978u;

    // 0x2dd978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dd978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd97c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2dd97cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd980: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2dd980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dd984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dd988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dd98c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD98Cu;
    {
        const bool branch_taken_0x2dd98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD98Cu;
        // 0x2dd990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd98c) {
            ctx->pc = 0x2DD9B0u;
            goto label_2dd9b0;
        }
    }
    ctx->pc = 0x2DD994u;
    // 0x2dd994: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2dd994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2dd998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd99c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dd99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd9a0: 0x2484f5d4  addiu       $a0, $a0, -0xA2C
    ctx->pc = 0x2dd9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964692));
    // 0x2dd9a4: 0x80da5fc  j           func_3697F0
    ctx->pc = 0x2DD9A4u;
    ctx->pc = 0x2DD9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9A4u;
    // 0x2dd9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    sub_003697F0_0x3697f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2DD9ACu;
    // 0x2dd9ac: 0x0  nop
    ctx->pc = 0x2dd9acu;
    // NOP
label_2dd9b0:
    // 0x2dd9b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2dd9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dd9b4: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DD9B4u;
    {
        const bool branch_taken_0x2dd9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dd9b4) {
            ctx->pc = 0x2DD9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD9B4u;
            // 0x2dd9b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9E8u;
            goto label_2dd9e8;
        }
    }
    ctx->pc = 0x2DD9BCu;
    // 0x2dd9bc: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x2dd9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x2dd9c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9c4: 0x2610f5d4  addiu       $s0, $s0, -0xA2C
    ctx->pc = 0x2dd9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964692));
    // 0x2dd9c8: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x2DD9C8u;
    SET_GPR_U32(ctx, 31, 0x2DD9D0u);
    ctx->pc = 0x2DD9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9C8u;
    // 0x2dd9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2DD9C8u, 0x2DD9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9D0u;
label_2dd9d0:
    // 0x2dd9d0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2dd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2dd9d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dd9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd9d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dd9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd9e0: 0x80da5fc  j           func_3697F0
    ctx->pc = 0x2DD9E0u;
    ctx->pc = 0x2DD9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9E0u;
    // 0x2dd9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    sub_003697F0_0x3697f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2DD9E8u;
label_2dd9e8:
    // 0x2dd9e8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DD9E8u;
    {
        const bool branch_taken_0x2dd9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9E8u;
        // 0x2dd9ec: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9e8) {
            ctx->pc = 0x2DDA18u;
            goto label_2dda18;
        }
    }
    ctx->pc = 0x2DD9F0u;
    // 0x2dd9f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9f4: 0x2610f5d4  addiu       $s0, $s0, -0xA2C
    ctx->pc = 0x2dd9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964692));
    // 0x2dd9f8: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x2DD9F8u;
    SET_GPR_U32(ctx, 31, 0x2DDA00u);
    ctx->pc = 0x2DD9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9F8u;
    // 0x2dd9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2DD9F8u, 0x2DDA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA00u;
label_2dda00:
    // 0x2dda00: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2dda00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2dda04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dda04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dda08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dda08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dda0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dda10: 0x80da5fc  j           func_3697F0
    ctx->pc = 0x2DDA10u;
    ctx->pc = 0x2DDA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA10u;
    // 0x2dda14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    sub_003697F0_0x3697f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2DDA18u;
label_2dda18:
    // 0x2dda18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dda18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda1c: 0x2610f5d4  addiu       $s0, $s0, -0xA2C
    ctx->pc = 0x2dda1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964692));
    // 0x2dda20: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x2DDA20u;
    SET_GPR_U32(ctx, 31, 0x2DDA28u);
    ctx->pc = 0x2DDA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA20u;
    // 0x2dda24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2DDA20u, 0x2DDA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA28u;
label_2dda28:
    // 0x2dda28: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2dda28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2dda2c: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x2DDA2Cu;
    SET_GPR_U32(ctx, 31, 0x2DDA34u);
    ctx->pc = 0x2DDA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA2Cu;
    // 0x2dda30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2DDA2Cu, 0x2DDA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA34u;
label_2dda34:
    // 0x2dda34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dda34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dda38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dda38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dda3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA3Cu;
        // 0x2dda40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDA44u;
    // 0x2dda44: 0x0  nop
    ctx->pc = 0x2dda44u;
    // NOP
    ctx->pc = 0x2dda48u;
}
