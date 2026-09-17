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

// Function: sub_0036F888
// Address: 0x36f888 - 0x36f918
void sub_0036F888_0x36f888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F888_0x36f888");
#endif

    switch (ctx->pc) {
        case 0x36f8acu: goto label_36f8ac;
        case 0x36f910u: goto label_36f910;
        default: break;
    }

    ctx->pc = 0x36f888u;

    // 0x36f888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f88c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f894: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36f898: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f89c: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x36f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x36f8a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36f8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8a4: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x36F8A4u;
    SET_GPR_U32(ctx, 31, 0x36F8ACu);
    ctx->pc = 0x36F8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F8A4u;
    // 0x36f8a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x36F8A4u, 0x36F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8ACu;
label_36f8ac:
    // 0x36f8ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f8b0: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x36f8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x36f8b4: 0x24420250  addiu       $v0, $v0, 0x250
    ctx->pc = 0x36f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x36f8b8: 0x26030068  addiu       $v1, $s0, 0x68
    ctx->pc = 0x36f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x36f8bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36f8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36f8c0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x36f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x36f8c4: 0x26050078  addiu       $a1, $s0, 0x78
    ctx->pc = 0x36f8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x36f8c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36f8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f8cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f8d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36f8d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36f8d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36f8dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36f8e0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x36f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x36f8e4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x36f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x36f8e8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x36f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x36f8ec: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x36f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x36f8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36F8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F8F0u;
        // 0x36f8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F8F8u;
    // 0x36f8f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f8fc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x36f900: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36f900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36f904: 0x2484066c  addiu       $a0, $a0, 0x66C
    ctx->pc = 0x36f904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1644));
    // 0x36f908: 0xc048b90  jal         func_122E40
    ctx->pc = 0x36F908u;
    SET_GPR_U32(ctx, 31, 0x36F910u);
    ctx->pc = 0x36F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F908u;
    // 0x36f90c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x36F908u, 0x36F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F910u;
label_36f910:
    // 0x36f910: 0x3e00008  jr          $ra
    ctx->pc = 0x36F910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F910u;
        // 0x36f914: 0x8c820088  lw          $v0, 0x88($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F918u;
}
