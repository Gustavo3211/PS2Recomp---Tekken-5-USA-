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

// Function: sub_0028B310
// Address: 0x28b310 - 0x28b370
void sub_0028B310_0x28b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B310_0x28b310");
#endif

    switch (ctx->pc) {
        case 0x28b358u: goto label_28b358;
        default: break;
    }

    ctx->pc = 0x28b310u;

    // 0x28b310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28b314: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28b314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b31c: 0x24450158  addiu       $a1, $v0, 0x158
    ctx->pc = 0x28b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
    // 0x28b320: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28b320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28b324: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28b324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28b328: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B328u;
    {
        const bool branch_taken_0x28b328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B328u;
        // 0x28b32c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b328) {
            ctx->pc = 0x28B340u;
            goto label_28b340;
        }
    }
    ctx->pc = 0x28B330u;
    // 0x28b330: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28b330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28b334: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28b334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28b338: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B338u;
    {
        const bool branch_taken_0x28b338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b338) {
            ctx->pc = 0x28B33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B338u;
            // 0x28b33c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B350u;
            goto label_28b350;
        }
    }
    ctx->pc = 0x28B340u;
label_28b340:
    // 0x28b340: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28b340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x28b344: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28b344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b348: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28b348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28b34c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28b34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28b350:
    // 0x28b350: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28B350u;
    SET_GPR_U32(ctx, 31, 0x28B358u);
    ctx->pc = 0x28B354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B350u;
    // 0x28b354: 0x24a59be8  addiu       $a1, $a1, -0x6418 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28B350u, 0x28B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B358u;
label_28b358:
    // 0x28b358: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x28b358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x28b35c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28b35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28b360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b364: 0x3e00008  jr          $ra
    ctx->pc = 0x28B364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B364u;
        // 0x28b368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B36Cu;
    // 0x28b36c: 0x0  nop
    ctx->pc = 0x28b36cu;
    // NOP
    ctx->pc = 0x28b370u;
}
