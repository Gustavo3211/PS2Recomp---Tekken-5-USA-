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

// Function: sub_00217320
// Address: 0x217320 - 0x2173b8
void sub_00217320_0x217320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217320_0x217320");
#endif

    switch (ctx->pc) {
        case 0x21734cu: goto label_21734c;
        case 0x217368u: goto label_217368;
        case 0x217370u: goto label_217370;
        case 0x21739cu: goto label_21739c;
        case 0x2173a4u: goto label_2173a4;
        default: break;
    }

    ctx->pc = 0x217320u;

    // 0x217320: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x217324: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217328: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x217328u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x21732c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x21732cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x217330: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217330u;
    {
        const bool branch_taken_0x217330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217330u;
        // 0x217334: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217330) {
            ctx->pc = 0x217344u;
            goto label_217344;
        }
    }
    ctx->pc = 0x217338u;
    // 0x217338: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x217338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x21733c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21733Cu;
    {
        const bool branch_taken_0x21733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21733Cu;
        // 0x217340: 0x8f829718  lw          $v0, -0x68E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21733c) {
            ctx->pc = 0x217350u;
            goto label_217350;
        }
    }
    ctx->pc = 0x217344u;
label_217344:
    // 0x217344: 0xc07cfc8  jal         func_1F3F20
    ctx->pc = 0x217344u;
    SET_GPR_U32(ctx, 31, 0x21734Cu);
    ctx->pc = 0x1F3F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3F20u, 0x217344u, 0x21734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21734Cu;
label_21734c:
    // 0x21734c: 0x8f829718  lw          $v0, -0x68E8($gp)
    ctx->pc = 0x21734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940440)));
label_217350:
    // 0x217350: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x217350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x217354: 0x284300b5  slti        $v1, $v0, 0xB5
    ctx->pc = 0x217354u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x217358: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x217358u;
    {
        const bool branch_taken_0x217358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217358u;
        // 0x21735c: 0xaf829718  sw          $v0, -0x68E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217358) {
            ctx->pc = 0x2173A4u;
            goto label_2173a4;
        }
    }
    ctx->pc = 0x217360u;
    // 0x217360: 0xc085116  jal         func_214458
    ctx->pc = 0x217360u;
    SET_GPR_U32(ctx, 31, 0x217368u);
    ctx->pc = 0x214458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214458u, 0x217360u, 0x217368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217368u;
label_217368:
    // 0x217368: 0xc0a0f6a  jal         func_283DA8
    ctx->pc = 0x217368u;
    SET_GPR_U32(ctx, 31, 0x217370u);
    ctx->pc = 0x283DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283DA8u, 0x217368u, 0x217370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217370u;
label_217370:
    // 0x217370: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x217370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x217374: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x217374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x217378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x217378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21737c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x21737cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x217380: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x217380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x217384: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x217384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x217388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21738c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21738cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217390: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x217390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217394: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x217394u;
    SET_GPR_U32(ctx, 31, 0x21739Cu);
    ctx->pc = 0x217398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217394u;
    // 0x217398: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x217394u, 0x21739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21739Cu;
label_21739c:
    // 0x21739c: 0xc0a5048  jal         func_294120
    ctx->pc = 0x21739Cu;
    SET_GPR_U32(ctx, 31, 0x2173A4u);
    ctx->pc = 0x294120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294120u, 0x21739Cu, 0x2173A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173A4u;
label_2173a4:
    // 0x2173a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2173a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2173a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2173a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2173ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2173B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173ACu;
        // 0x2173b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2173ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2173B4u;
    // 0x2173b4: 0x0  nop
    ctx->pc = 0x2173b4u;
    // NOP
    ctx->pc = 0x2173b8u;
}
