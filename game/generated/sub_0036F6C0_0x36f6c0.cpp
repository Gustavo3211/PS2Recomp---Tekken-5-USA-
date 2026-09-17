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

// Function: sub_0036F6C0
// Address: 0x36f6c0 - 0x36f750
void sub_0036F6C0_0x36f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F6C0_0x36f6c0");
#endif

    switch (ctx->pc) {
        case 0x36f6e4u: goto label_36f6e4;
        case 0x36f6fcu: goto label_36f6fc;
        default: break;
    }

    ctx->pc = 0x36f6c0u;

    // 0x36f6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f6c4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36f6c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f6cc: 0x245072d0  addiu       $s0, $v0, 0x72D0
    ctx->pc = 0x36f6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29392));
    // 0x36f6d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D72D0u));
    // 0x36f6d4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F6D4u;
    {
        const bool branch_taken_0x36f6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F6D4u;
        // 0x36f6d8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f6d4) {
            ctx->pc = 0x36F6FCu;
            goto label_36f6fc;
        }
    }
    ctx->pc = 0x36F6DCu;
    // 0x36f6dc: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36F6DCu;
    SET_GPR_U32(ctx, 31, 0x36F6E4u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36F6DCu, 0x36F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F6E4u;
label_36f6e4:
    // 0x36f6e4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36f6e8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36f6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36f6ec: 0x24a5fe88  addiu       $a1, $a1, -0x178
    ctx->pc = 0x36f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966920));
    // 0x36f6f0: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36f6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36f6f4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36F6F4u;
    SET_GPR_U32(ctx, 31, 0x36F6FCu);
    ctx->pc = 0x36F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F6F4u;
    // 0x36f6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36F6F4u, 0x36F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F6FCu;
label_36f6fc:
    // 0x36f6fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36f6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36f704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f708: 0x3e00008  jr          $ra
    ctx->pc = 0x36F708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F708u;
        // 0x36f70c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F710u;
    // 0x36f710: 0x3e00008  jr          $ra
    ctx->pc = 0x36F710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F710u;
        // 0x36f714: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F718u;
    // 0x36f718: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f71c: 0x24860164  addiu       $a2, $a0, 0x164
    ctx->pc = 0x36f71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    // 0x36f720: 0x2442ee40  addiu       $v0, $v0, -0x11C0
    ctx->pc = 0x36f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x36f724: 0x24830154  addiu       $v1, $a0, 0x154
    ctx->pc = 0x36f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    // 0x36f728: 0x2485015c  addiu       $a1, $a0, 0x15C
    ctx->pc = 0x36f728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    // 0x36f72c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36f730: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36f730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36f734: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36f734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36f738: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x36f738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x36f73c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x36f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x36f740: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x36f740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x36f744: 0x3e00008  jr          $ra
    ctx->pc = 0x36F744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F744u;
        // 0x36f748: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F74Cu;
    // 0x36f74c: 0x0  nop
    ctx->pc = 0x36f74cu;
    // NOP
    ctx->pc = 0x36f750u;
}
