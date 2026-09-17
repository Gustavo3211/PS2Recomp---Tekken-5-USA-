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

// Function: sub_001261E8
// Address: 0x1261e8 - 0x126300
void sub_001261E8_0x1261e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001261E8_0x1261e8");
#endif

    switch (ctx->pc) {
        case 0x126228u: goto label_126228;
        case 0x126258u: goto label_126258;
        default: break;
    }

    ctx->pc = 0x1261e8u;

    // 0x1261e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1261e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1261ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1261ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1261f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1261f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1261f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1261F8u;
    {
        const bool branch_taken_0x1261f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1261FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1261F8u;
        // 0x1261fc: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261f8) {
            ctx->pc = 0x126228u;
            goto label_126228;
        }
    }
    ctx->pc = 0x126200u;
    // 0x126200: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x126200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x126204: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x126204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x126208: 0x3c080013  lui         $t0, 0x13
    ctx->pc = 0x126208u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)19 << 16));
    // 0x12620c: 0x24a50698  addiu       $a1, $a1, 0x698
    ctx->pc = 0x12620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
    // 0x126210: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x126210u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126214: 0x25080150  addiu       $t0, $t0, 0x150
    ctx->pc = 0x126214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x126218: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x126218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12621c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12621cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126220: 0xc0498e2  jal         func_126388
    ctx->pc = 0x126220u;
    SET_GPR_U32(ctx, 31, 0x126228u);
    ctx->pc = 0x126224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126220u;
    // 0x126224: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x126220u, 0x126228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126228u;
label_126228:
    // 0x126228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12622c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12622cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x126230: 0x3e00008  jr          $ra
    ctx->pc = 0x126230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126230u;
        // 0x126234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126238u;
    // 0x126238: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126238u;
    {
        const bool branch_taken_0x126238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126238u;
        // 0x12623c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126238) {
            ctx->pc = 0x126250u;
            goto label_126250;
        }
    }
    ctx->pc = 0x126240u;
    // 0x126240: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x126240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x126244: 0x24424d10  addiu       $v0, $v0, 0x4D10
    ctx->pc = 0x126244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19728));
    // 0x126248: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x126248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x12624c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x12624cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_126250:
    // 0x126250: 0x3e00008  jr          $ra
    ctx->pc = 0x126250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126258u;
label_126258:
    // 0x126258: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126258u;
    {
        const bool branch_taken_0x126258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126258u;
        // 0x12625c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126258) {
            ctx->pc = 0x126274u;
            goto label_126274;
        }
    }
    ctx->pc = 0x126260u;
    // 0x126260: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x126260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x126264: 0x24424cf8  addiu       $v0, $v0, 0x4CF8
    ctx->pc = 0x126264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19704));
    // 0x126268: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x126268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x12626c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x12626cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x126270: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x126270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_126274:
    // 0x126274: 0x3e00008  jr          $ra
    ctx->pc = 0x126274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12627Cu;
    // 0x12627c: 0x0  nop
    ctx->pc = 0x12627cu;
    // NOP
    // 0x126280: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126280u;
    {
        const bool branch_taken_0x126280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x126284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126280u;
        // 0x126284: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126280) {
            ctx->pc = 0x126294u;
            goto label_126294;
        }
    }
    ctx->pc = 0x126288u;
    // 0x126288: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x126288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x12628c: 0x24424cc8  addiu       $v0, $v0, 0x4CC8
    ctx->pc = 0x12628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19656));
    // 0x126290: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x126290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_126294:
    // 0x126294: 0x3e00008  jr          $ra
    ctx->pc = 0x126294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12629Cu;
    // 0x12629c: 0x0  nop
    ctx->pc = 0x12629cu;
    // NOP
    // 0x1262a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1262A0u;
    {
        const bool branch_taken_0x1262a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262A0u;
        // 0x1262a4: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262a0) {
            ctx->pc = 0x1262B4u;
            goto label_1262b4;
        }
    }
    ctx->pc = 0x1262A8u;
    // 0x1262a8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1262a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1262ac: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x1262acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
    // 0x1262b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1262b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1262b4:
    // 0x1262b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1262B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1262B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1262BCu;
    // 0x1262bc: 0x0  nop
    ctx->pc = 0x1262bcu;
    // NOP
    // 0x1262c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1262C0u;
    {
        const bool branch_taken_0x1262c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262C0u;
        // 0x1262c4: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262c0) {
            ctx->pc = 0x1262D4u;
            goto label_1262d4;
        }
    }
    ctx->pc = 0x1262C8u;
    // 0x1262c8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1262c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1262cc: 0x24424c98  addiu       $v0, $v0, 0x4C98
    ctx->pc = 0x1262ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19608));
    // 0x1262d0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1262d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1262d4:
    // 0x1262d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1262D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1262D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1262DCu;
    // 0x1262dc: 0x0  nop
    ctx->pc = 0x1262dcu;
    // NOP
    // 0x1262e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1262E0u;
    {
        const bool branch_taken_0x1262e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262E0u;
        // 0x1262e4: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262e0) {
            ctx->pc = 0x1262F4u;
            goto label_1262f4;
        }
    }
    ctx->pc = 0x1262E8u;
    // 0x1262e8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1262e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1262ec: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x1262ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
    // 0x1262f0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1262f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1262f4:
    // 0x1262f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1262F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1262F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1262FCu;
    // 0x1262fc: 0x0  nop
    ctx->pc = 0x1262fcu;
    // NOP
    ctx->pc = 0x126300u;
}
