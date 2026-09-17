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

// Function: sub_002ED2C0
// Address: 0x2ed2c0 - 0x2ed368
void sub_002ED2C0_0x2ed2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED2C0_0x2ed2c0");
#endif

    switch (ctx->pc) {
        case 0x2ed2e4u: goto label_2ed2e4;
        case 0x2ed324u: goto label_2ed324;
        case 0x2ed358u: goto label_2ed358;
        default: break;
    }

    ctx->pc = 0x2ed2c0u;

    // 0x2ed2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed2c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed2cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ed2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ed2d0: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x2ed2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
    // 0x2ed2d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ed2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ed2d8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2ed2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2ed2dc: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x2ED2DCu;
    SET_GPR_U32(ctx, 31, 0x2ED2E4u);
    ctx->pc = 0x2ED2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED2DCu;
    // 0x2ed2e0: 0x26100068  addiu       $s0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x2ED2DCu, 0x2ED2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED2E4u;
label_2ed2e4:
    // 0x2ed2e4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2ed2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2ed2e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ed2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ed2ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ed2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed2f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED2F0u;
    {
        const bool branch_taken_0x2ed2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2F0u;
        // 0x2ed2f4: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed2f0) {
            ctx->pc = 0x2ED30Cu;
            goto label_2ed30c;
        }
    }
    ctx->pc = 0x2ED2F8u;
    // 0x2ed2f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ed2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ed2fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ed2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed300: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ed300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ed304: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED304u;
    {
        const bool branch_taken_0x2ed304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED304u;
        // 0x2ed308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed304) {
            ctx->pc = 0x2ED31Cu;
            goto label_2ed31c;
        }
    }
    ctx->pc = 0x2ED30Cu;
label_2ed30c:
    // 0x2ed30c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ed30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ed310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed314: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ed314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ed318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed31c:
    // 0x2ed31c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2ED31Cu;
    SET_GPR_U32(ctx, 31, 0x2ED324u);
    ctx->pc = 0x2ED320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED31Cu;
    // 0x2ed320: 0xa0c20130  sb          $v0, 0x130($a2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 6), 304), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2ED31Cu, 0x2ED324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED324u;
label_2ed324:
    // 0x2ed324: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x2ed324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2ed328: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ed328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ed32c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED32Cu;
    {
        const bool branch_taken_0x2ed32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed32c) {
            ctx->pc = 0x2ED330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED32Cu;
            // 0x2ed330: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED348u;
            goto label_2ed348;
        }
    }
    ctx->pc = 0x2ED334u;
    // 0x2ed334: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ed334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ed338: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ed338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ed33c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED33Cu;
    {
        const bool branch_taken_0x2ed33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed33c) {
            ctx->pc = 0x2ED350u;
            goto label_2ed350;
        }
    }
    ctx->pc = 0x2ED344u;
    // 0x2ed344: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ed344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ed348:
    // 0x2ed348: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ed348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed34c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ed34cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ed350:
    // 0x2ed350: 0xc0a1648  jal         func_285920
    ctx->pc = 0x2ED350u;
    SET_GPR_U32(ctx, 31, 0x2ED358u);
    ctx->pc = 0x285920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285920u, 0x2ED350u, 0x2ED358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED358u;
label_2ed358:
    // 0x2ed358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed35c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ed35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed360: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED360u;
        // 0x2ed364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED368u;
}
