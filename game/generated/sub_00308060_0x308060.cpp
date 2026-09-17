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

// Function: sub_00308060
// Address: 0x308060 - 0x308270
void sub_00308060_0x308060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308060_0x308060");
#endif

    switch (ctx->pc) {
        case 0x3080acu: goto label_3080ac;
        case 0x3080dcu: goto label_3080dc;
        case 0x30810cu: goto label_30810c;
        case 0x30813cu: goto label_30813c;
        case 0x30816cu: goto label_30816c;
        case 0x30819cu: goto label_30819c;
        case 0x3081ccu: goto label_3081cc;
        case 0x3081fcu: goto label_3081fc;
        case 0x30822cu: goto label_30822c;
        default: break;
    }

    ctx->pc = 0x308060u;

    // 0x308060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308064: 0x2486004c  addiu       $a2, $a0, 0x4C
    ctx->pc = 0x308064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x308068: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x308068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30806c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x308070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x308074: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x308074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x308078: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x308078u;
    {
        const bool branch_taken_0x308078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308078u;
        // 0x30807c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308078) {
            ctx->pc = 0x308090u;
            goto label_308090;
        }
    }
    ctx->pc = 0x308080u;
    // 0x308080: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x308080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x308084: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x308084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x308088: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308088u;
    {
        const bool branch_taken_0x308088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308088u;
        // 0x30808c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308088) {
            ctx->pc = 0x30809Cu;
            goto label_30809c;
        }
    }
    ctx->pc = 0x308090u;
label_308090:
    // 0x308090: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x308090u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x308094: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x308094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308098: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x308098u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_30809c:
    // 0x30809c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x30809cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3080a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3080a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3080a4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3080A4u;
    SET_GPR_U32(ctx, 31, 0x3080ACu);
    ctx->pc = 0x3080A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3080A4u;
    // 0x3080a8: 0x24a52538  addiu       $a1, $a1, 0x2538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3080A4u, 0x3080ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3080ACu;
label_3080ac:
    // 0x3080ac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3080ACu;
    {
        const bool branch_taken_0x3080ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3080ac) {
            ctx->pc = 0x3080B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3080ACu;
            // 0x3080b0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3080D0u;
            goto label_3080d0;
        }
    }
    ctx->pc = 0x3080B4u;
    // 0x3080b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3080b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3080b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3080B8u;
    {
        const bool branch_taken_0x3080b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080B8u;
        // 0x3080bc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080b8) {
            ctx->pc = 0x3080CCu;
            goto label_3080cc;
        }
    }
    ctx->pc = 0x3080C0u;
    // 0x3080c0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3080c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3080c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3080c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3080c8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3080c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_3080cc:
    // 0x3080cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3080ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3080d0:
    // 0x3080d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3080d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3080d4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3080D4u;
    SET_GPR_U32(ctx, 31, 0x3080DCu);
    ctx->pc = 0x3080D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3080D4u;
    // 0x3080d8: 0x24a52558  addiu       $a1, $a1, 0x2558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3080D4u, 0x3080DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3080DCu;
label_3080dc:
    // 0x3080dc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3080DCu;
    {
        const bool branch_taken_0x3080dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3080dc) {
            ctx->pc = 0x3080E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3080DCu;
            // 0x3080e0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308100u;
            goto label_308100;
        }
    }
    ctx->pc = 0x3080E4u;
    // 0x3080e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3080e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3080e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3080E8u;
    {
        const bool branch_taken_0x3080e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080E8u;
        // 0x3080ec: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080e8) {
            ctx->pc = 0x3080FCu;
            goto label_3080fc;
        }
    }
    ctx->pc = 0x3080F0u;
    // 0x3080f0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3080f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3080f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3080f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3080f8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3080f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_3080fc:
    // 0x3080fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3080fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_308100:
    // 0x308100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308104: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308104u;
    SET_GPR_U32(ctx, 31, 0x30810Cu);
    ctx->pc = 0x308108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308104u;
    // 0x308108: 0x24a52578  addiu       $a1, $a1, 0x2578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308104u, 0x30810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30810Cu;
label_30810c:
    // 0x30810c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30810Cu;
    {
        const bool branch_taken_0x30810c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30810c) {
            ctx->pc = 0x308110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30810Cu;
            // 0x308110: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308130u;
            goto label_308130;
        }
    }
    ctx->pc = 0x308114u;
    // 0x308114: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308118: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308118u;
    {
        const bool branch_taken_0x308118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308118u;
        // 0x30811c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308118) {
            ctx->pc = 0x30812Cu;
            goto label_30812c;
        }
    }
    ctx->pc = 0x308120u;
    // 0x308120: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x308120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x308124: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x308128: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x308128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_30812c:
    // 0x30812c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x30812cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_308130:
    // 0x308130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308134: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308134u;
    SET_GPR_U32(ctx, 31, 0x30813Cu);
    ctx->pc = 0x308138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308134u;
    // 0x308138: 0x24a52598  addiu       $a1, $a1, 0x2598 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308134u, 0x30813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30813Cu;
label_30813c:
    // 0x30813c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30813Cu;
    {
        const bool branch_taken_0x30813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30813c) {
            ctx->pc = 0x308140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30813Cu;
            // 0x308140: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308160u;
            goto label_308160;
        }
    }
    ctx->pc = 0x308144u;
    // 0x308144: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308148: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308148u;
    {
        const bool branch_taken_0x308148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308148u;
        // 0x30814c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308148) {
            ctx->pc = 0x30815Cu;
            goto label_30815c;
        }
    }
    ctx->pc = 0x308150u;
    // 0x308150: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x308150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x308154: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x308158: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x308158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_30815c:
    // 0x30815c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x30815cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_308160:
    // 0x308160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308164: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308164u;
    SET_GPR_U32(ctx, 31, 0x30816Cu);
    ctx->pc = 0x308168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308164u;
    // 0x308168: 0x24a526f0  addiu       $a1, $a1, 0x26F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308164u, 0x30816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30816Cu;
label_30816c:
    // 0x30816c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30816Cu;
    {
        const bool branch_taken_0x30816c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30816c) {
            ctx->pc = 0x308170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30816Cu;
            // 0x308170: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308190u;
            goto label_308190;
        }
    }
    ctx->pc = 0x308174u;
    // 0x308174: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308178: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308178u;
    {
        const bool branch_taken_0x308178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308178u;
        // 0x30817c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308178) {
            ctx->pc = 0x30818Cu;
            goto label_30818c;
        }
    }
    ctx->pc = 0x308180u;
    // 0x308180: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x308180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x308184: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x308188: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x308188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_30818c:
    // 0x30818c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x30818cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_308190:
    // 0x308190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308194: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308194u;
    SET_GPR_U32(ctx, 31, 0x30819Cu);
    ctx->pc = 0x308198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308194u;
    // 0x308198: 0x24a526e0  addiu       $a1, $a1, 0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308194u, 0x30819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30819Cu;
label_30819c:
    // 0x30819c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30819Cu;
    {
        const bool branch_taken_0x30819c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30819c) {
            ctx->pc = 0x3081A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30819Cu;
            // 0x3081a0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3081C0u;
            goto label_3081c0;
        }
    }
    ctx->pc = 0x3081A4u;
    // 0x3081a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3081a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3081a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3081A8u;
    {
        const bool branch_taken_0x3081a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081A8u;
        // 0x3081ac: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081a8) {
            ctx->pc = 0x3081BCu;
            goto label_3081bc;
        }
    }
    ctx->pc = 0x3081B0u;
    // 0x3081b0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3081b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3081b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3081b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3081b8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3081b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_3081bc:
    // 0x3081bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3081bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3081c0:
    // 0x3081c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3081c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3081c4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3081C4u;
    SET_GPR_U32(ctx, 31, 0x3081CCu);
    ctx->pc = 0x3081C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3081C4u;
    // 0x3081c8: 0x24a526d0  addiu       $a1, $a1, 0x26D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3081C4u, 0x3081CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3081CCu;
label_3081cc:
    // 0x3081cc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3081CCu;
    {
        const bool branch_taken_0x3081cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3081cc) {
            ctx->pc = 0x3081D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3081CCu;
            // 0x3081d0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3081F0u;
            goto label_3081f0;
        }
    }
    ctx->pc = 0x3081D4u;
    // 0x3081d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3081d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3081d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3081D8u;
    {
        const bool branch_taken_0x3081d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081D8u;
        // 0x3081dc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081d8) {
            ctx->pc = 0x3081ECu;
            goto label_3081ec;
        }
    }
    ctx->pc = 0x3081E0u;
    // 0x3081e0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3081e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3081e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3081e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3081e8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3081e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_3081ec:
    // 0x3081ec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3081ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3081f0:
    // 0x3081f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3081f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3081f4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3081F4u;
    SET_GPR_U32(ctx, 31, 0x3081FCu);
    ctx->pc = 0x3081F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3081F4u;
    // 0x3081f8: 0x24a52700  addiu       $a1, $a1, 0x2700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3081F4u, 0x3081FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3081FCu;
label_3081fc:
    // 0x3081fc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3081FCu;
    {
        const bool branch_taken_0x3081fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3081fc) {
            ctx->pc = 0x308200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3081FCu;
            // 0x308200: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308220u;
            goto label_308220;
        }
    }
    ctx->pc = 0x308204u;
    // 0x308204: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308208: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308208u;
    {
        const bool branch_taken_0x308208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308208u;
        // 0x30820c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308208) {
            ctx->pc = 0x30821Cu;
            goto label_30821c;
        }
    }
    ctx->pc = 0x308210u;
    // 0x308210: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x308210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x308214: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x308218: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x308218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_30821c:
    // 0x30821c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x30821cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_308220:
    // 0x308220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308224: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308224u;
    SET_GPR_U32(ctx, 31, 0x30822Cu);
    ctx->pc = 0x308228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308224u;
    // 0x308228: 0x24a525b8  addiu       $a1, $a1, 0x25B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308224u, 0x30822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30822Cu;
label_30822c:
    // 0x30822c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30822Cu;
    {
        const bool branch_taken_0x30822c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30822Cu;
        // 0x308230: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30822c) {
            ctx->pc = 0x308260u;
            goto label_308260;
        }
    }
    ctx->pc = 0x308234u;
    // 0x308234: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308238: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x308238u;
    {
        const bool branch_taken_0x308238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308238) {
            ctx->pc = 0x30823Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308238u;
            // 0x30823c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308264u;
            goto label_308264;
        }
    }
    ctx->pc = 0x308240u;
    // 0x308240: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308240u;
    {
        const bool branch_taken_0x308240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x308244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308240u;
        // 0x308244: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308240) {
            ctx->pc = 0x308250u;
            goto label_308250;
        }
    }
    ctx->pc = 0x308248u;
    // 0x308248: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x308248u;
    {
        const bool branch_taken_0x308248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308248u;
        // 0x30824c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308248) {
            ctx->pc = 0x308258u;
            goto label_308258;
        }
    }
    ctx->pc = 0x308250u;
label_308250:
    // 0x308250: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x308250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x308254: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_308258:
    // 0x308258: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x308258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x30825c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30825cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308260:
    // 0x308260: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x308260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308264:
    // 0x308264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308268: 0x3e00008  jr          $ra
    ctx->pc = 0x308268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308268u;
        // 0x30826c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308270u;
}
