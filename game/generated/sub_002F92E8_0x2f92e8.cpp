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

// Function: sub_002F92E8
// Address: 0x2f92e8 - 0x2f9390
void sub_002F92E8_0x2f92e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F92E8_0x2f92e8");
#endif

    switch (ctx->pc) {
        case 0x2f9314u: goto label_2f9314;
        case 0x2f9348u: goto label_2f9348;
        case 0x2f937cu: goto label_2f937c;
        default: break;
    }

    ctx->pc = 0x2f92e8u;

    // 0x2f92e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f92e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f92ec: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2f92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2f92f0: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2f92f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x2f92f4: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x2f92f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
    // 0x2f92f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f92f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f92fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f92fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9300: 0x34a50021  ori         $a1, $a1, 0x21
    ctx->pc = 0x2f9300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33);
    // 0x2f9304: 0x34c60022  ori         $a2, $a2, 0x22
    ctx->pc = 0x2f9304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)34);
    // 0x2f9308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f9308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f930c: 0xc0bbe04  jal         func_2EF810
    ctx->pc = 0x2F930Cu;
    SET_GPR_U32(ctx, 31, 0x2F9314u);
    ctx->pc = 0x2F9310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F930Cu;
    // 0x2f9310: 0x34e70023  ori         $a3, $a3, 0x23 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)35);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF810u, 0x2F930Cu, 0x2F9314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9314u;
label_2f9314:
    // 0x2f9314: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2f9314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2f9318: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f9318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f931c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F931Cu;
    {
        const bool branch_taken_0x2f931c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f931c) {
            ctx->pc = 0x2F9320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F931Cu;
            // 0x2f9320: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9338u;
            goto label_2f9338;
        }
    }
    ctx->pc = 0x2F9324u;
    // 0x2f9324: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9328: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f9328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f932c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F932Cu;
    {
        const bool branch_taken_0x2f932c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f932c) {
            ctx->pc = 0x2F9340u;
            goto label_2f9340;
        }
    }
    ctx->pc = 0x2F9334u;
    // 0x2f9334: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f9338:
    // 0x2f9338: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f933c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f933cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9340:
    // 0x2f9340: 0xc0bdc94  jal         func_2F7250
    ctx->pc = 0x2F9340u;
    SET_GPR_U32(ctx, 31, 0x2F9348u);
    ctx->pc = 0x2F7250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7250u, 0x2F9340u, 0x2F9348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9348u;
label_2f9348:
    // 0x2f9348: 0x26050158  addiu       $a1, $s0, 0x158
    ctx->pc = 0x2f9348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x2f934c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f934cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9350: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9350u;
    {
        const bool branch_taken_0x2f9350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9350) {
            ctx->pc = 0x2F9354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9350u;
            // 0x2f9354: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F936Cu;
            goto label_2f936c;
        }
    }
    ctx->pc = 0x2F9358u;
    // 0x2f9358: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f935c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9360: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9360u;
    {
        const bool branch_taken_0x2f9360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9360) {
            ctx->pc = 0x2F9374u;
            goto label_2f9374;
        }
    }
    ctx->pc = 0x2F9368u;
    // 0x2f9368: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f936c:
    // 0x2f936c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9370: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9374:
    // 0x2f9374: 0xc0bdfc4  jal         func_2F7F10
    ctx->pc = 0x2F9374u;
    SET_GPR_U32(ctx, 31, 0x2F937Cu);
    ctx->pc = 0x2F7F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7F10u, 0x2F9374u, 0x2F937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F937Cu;
label_2f937c:
    // 0x2f937c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f937cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f9380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9384: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9384u;
        // 0x2f9388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F938Cu;
    // 0x2f938c: 0x0  nop
    ctx->pc = 0x2f938cu;
    // NOP
    ctx->pc = 0x2f9390u;
}
