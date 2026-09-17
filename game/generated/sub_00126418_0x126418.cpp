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

// Function: sub_00126418
// Address: 0x126418 - 0x126858
void sub_00126418_0x126418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126418_0x126418");
#endif

    ctx->pc = 0x126418u;

    // 0x126418: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12641c: 0x24454398  addiu       $a1, $v0, 0x4398
    ctx->pc = 0x12641cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17304));
    // 0x126420: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126420u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x134398u));
    // 0x126424: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x126424u;
    {
        const bool branch_taken_0x126424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126424u;
        // 0x126428: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126424) {
            ctx->pc = 0x126444u;
            goto label_126444;
        }
    }
    ctx->pc = 0x12642Cu;
    // 0x12642c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x12642cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126430: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x126434: 0x2463f368  addiu       $v1, $v1, -0xC98
    ctx->pc = 0x126434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964072));
    // 0x126438: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x12643c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12643cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126440: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_126444:
    // 0x126444: 0x3e00008  jr          $ra
    ctx->pc = 0x126444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12644Cu;
    // 0x12644c: 0x0  nop
    ctx->pc = 0x12644cu;
    // NOP
    // 0x126450: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126454: 0x244543a0  addiu       $a1, $v0, 0x43A0
    ctx->pc = 0x126454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17312));
    // 0x126458: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343A0u));
    // 0x12645c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12645Cu;
    {
        const bool branch_taken_0x12645c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12645Cu;
        // 0x126460: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12645c) {
            ctx->pc = 0x12647Cu;
            goto label_12647c;
        }
    }
    ctx->pc = 0x126464u;
    // 0x126464: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x126464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126468: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x12646c: 0x2463f370  addiu       $v1, $v1, -0xC90
    ctx->pc = 0x12646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964080));
    // 0x126470: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x126474: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x126474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126478: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_12647c:
    // 0x12647c: 0x3e00008  jr          $ra
    ctx->pc = 0x12647Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12647Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126484u;
    // 0x126484: 0x0  nop
    ctx->pc = 0x126484u;
    // NOP
    // 0x126488: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12648c: 0x244543a8  addiu       $a1, $v0, 0x43A8
    ctx->pc = 0x12648cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17320));
    // 0x126490: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126490u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343A8u));
    // 0x126494: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x126494u;
    {
        const bool branch_taken_0x126494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126494u;
        // 0x126498: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126494) {
            ctx->pc = 0x1264B4u;
            goto label_1264b4;
        }
    }
    ctx->pc = 0x12649Cu;
    // 0x12649c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x12649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1264a0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1264a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1264a4: 0x2463f378  addiu       $v1, $v1, -0xC88
    ctx->pc = 0x1264a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964088));
    // 0x1264a8: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x1264a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x1264ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1264acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1264b0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1264b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1264b4:
    // 0x1264b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1264B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1264B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1264BCu;
    // 0x1264bc: 0x0  nop
    ctx->pc = 0x1264bcu;
    // NOP
    // 0x1264c0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1264c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1264c4: 0x244543b0  addiu       $a1, $v0, 0x43B0
    ctx->pc = 0x1264c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17328));
    // 0x1264c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1264c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343B0u));
    // 0x1264cc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1264CCu;
    {
        const bool branch_taken_0x1264cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1264D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264CCu;
        // 0x1264d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264cc) {
            ctx->pc = 0x1264ECu;
            goto label_1264ec;
        }
    }
    ctx->pc = 0x1264D4u;
    // 0x1264d4: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1264d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1264d8: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1264d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1264dc: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x1264dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
    // 0x1264e0: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x1264e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x1264e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1264e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1264e8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1264e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1264ec:
    // 0x1264ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1264ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1264ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1264F4u;
    // 0x1264f4: 0x0  nop
    ctx->pc = 0x1264f4u;
    // NOP
    // 0x1264f8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1264f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1264fc: 0x244543b8  addiu       $a1, $v0, 0x43B8
    ctx->pc = 0x1264fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17336));
    // 0x126500: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343B8u));
    // 0x126504: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x126504u;
    {
        const bool branch_taken_0x126504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126504u;
        // 0x126508: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126504) {
            ctx->pc = 0x126524u;
            goto label_126524;
        }
    }
    ctx->pc = 0x12650Cu;
    // 0x12650c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x12650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126510: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x126514: 0x2463f388  addiu       $v1, $v1, -0xC78
    ctx->pc = 0x126514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964104));
    // 0x126518: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x12651c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12651cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126520: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_126524:
    // 0x126524: 0x3e00008  jr          $ra
    ctx->pc = 0x126524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12652Cu;
    // 0x12652c: 0x0  nop
    ctx->pc = 0x12652cu;
    // NOP
    // 0x126530: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126534: 0x244543c0  addiu       $a1, $v0, 0x43C0
    ctx->pc = 0x126534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17344));
    // 0x126538: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126538u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343C0u));
    // 0x12653c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12653Cu;
    {
        const bool branch_taken_0x12653c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12653Cu;
        // 0x126540: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12653c) {
            ctx->pc = 0x12655Cu;
            goto label_12655c;
        }
    }
    ctx->pc = 0x126544u;
    // 0x126544: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x126544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126548: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x12654c: 0x2463f390  addiu       $v1, $v1, -0xC70
    ctx->pc = 0x12654cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964112));
    // 0x126550: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x126554: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x126554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126558: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_12655c:
    // 0x12655c: 0x3e00008  jr          $ra
    ctx->pc = 0x12655Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12655Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126564u;
    // 0x126564: 0x0  nop
    ctx->pc = 0x126564u;
    // NOP
    // 0x126568: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12656c: 0x244543c8  addiu       $a1, $v0, 0x43C8
    ctx->pc = 0x12656cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17352));
    // 0x126570: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126570u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343C8u));
    // 0x126574: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x126574u;
    {
        const bool branch_taken_0x126574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126574u;
        // 0x126578: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126574) {
            ctx->pc = 0x126594u;
            goto label_126594;
        }
    }
    ctx->pc = 0x12657Cu;
    // 0x12657c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x12657cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126580: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x126584: 0x2463f398  addiu       $v1, $v1, -0xC68
    ctx->pc = 0x126584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964120));
    // 0x126588: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x12658c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12658cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126590: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_126594:
    // 0x126594: 0x3e00008  jr          $ra
    ctx->pc = 0x126594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12659Cu;
    // 0x12659c: 0x0  nop
    ctx->pc = 0x12659cu;
    // NOP
    // 0x1265a0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1265a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1265a4: 0x244543d0  addiu       $a1, $v0, 0x43D0
    ctx->pc = 0x1265a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x1265a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1265a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343D0u));
    // 0x1265ac: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1265ACu;
    {
        const bool branch_taken_0x1265ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1265B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265ACu;
        // 0x1265b0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265ac) {
            ctx->pc = 0x1265CCu;
            goto label_1265cc;
        }
    }
    ctx->pc = 0x1265B4u;
    // 0x1265b4: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1265b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1265b8: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1265b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1265bc: 0x2463f3a0  addiu       $v1, $v1, -0xC60
    ctx->pc = 0x1265bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964128));
    // 0x1265c0: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x1265c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x1265c4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1265c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1265c8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1265c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1265cc:
    // 0x1265cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1265CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1265CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1265D4u;
    // 0x1265d4: 0x0  nop
    ctx->pc = 0x1265d4u;
    // NOP
    // 0x1265d8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1265d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1265dc: 0x244543d8  addiu       $a1, $v0, 0x43D8
    ctx->pc = 0x1265dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17368));
    // 0x1265e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1265e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343D8u));
    // 0x1265e4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1265E4u;
    {
        const bool branch_taken_0x1265e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1265E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265E4u;
        // 0x1265e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265e4) {
            ctx->pc = 0x126604u;
            goto label_126604;
        }
    }
    ctx->pc = 0x1265ECu;
    // 0x1265ec: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1265ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1265f0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1265f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1265f4: 0x2463f3a8  addiu       $v1, $v1, -0xC58
    ctx->pc = 0x1265f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964136));
    // 0x1265f8: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x1265f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x1265fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1265fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126600: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_126604:
    // 0x126604: 0x3e00008  jr          $ra
    ctx->pc = 0x126604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12660Cu;
    // 0x12660c: 0x0  nop
    ctx->pc = 0x12660cu;
    // NOP
    // 0x126610: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126614: 0x244543e0  addiu       $a1, $v0, 0x43E0
    ctx->pc = 0x126614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
    // 0x126618: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126618u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343E0u));
    // 0x12661c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12661Cu;
    {
        const bool branch_taken_0x12661c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12661Cu;
        // 0x126620: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12661c) {
            ctx->pc = 0x12663Cu;
            goto label_12663c;
        }
    }
    ctx->pc = 0x126624u;
    // 0x126624: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x126624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126628: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x12662c: 0x2463f3b0  addiu       $v1, $v1, -0xC50
    ctx->pc = 0x12662cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964144));
    // 0x126630: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x126634: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x126634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126638: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_12663c:
    // 0x12663c: 0x3e00008  jr          $ra
    ctx->pc = 0x12663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126644u;
    // 0x126644: 0x0  nop
    ctx->pc = 0x126644u;
    // NOP
    // 0x126648: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12664c: 0x244543e8  addiu       $a1, $v0, 0x43E8
    ctx->pc = 0x12664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17384));
    // 0x126650: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126650u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343E8u));
    // 0x126654: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x126654u;
    {
        const bool branch_taken_0x126654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126654u;
        // 0x126658: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126654) {
            ctx->pc = 0x126674u;
            goto label_126674;
        }
    }
    ctx->pc = 0x12665Cu;
    // 0x12665c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x12665cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126660: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x126664: 0x2463f3b8  addiu       $v1, $v1, -0xC48
    ctx->pc = 0x126664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964152));
    // 0x126668: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x12666c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12666cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126670: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_126674:
    // 0x126674: 0x3e00008  jr          $ra
    ctx->pc = 0x126674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12667Cu;
    // 0x12667c: 0x0  nop
    ctx->pc = 0x12667cu;
    // NOP
    // 0x126680: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126684: 0x244543f0  addiu       $a1, $v0, 0x43F0
    ctx->pc = 0x126684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17392));
    // 0x126688: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126688u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343F0u));
    // 0x12668c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12668Cu;
    {
        const bool branch_taken_0x12668c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12668Cu;
        // 0x126690: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12668c) {
            ctx->pc = 0x1266ACu;
            goto label_1266ac;
        }
    }
    ctx->pc = 0x126694u;
    // 0x126694: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x126694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126698: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x12669c: 0x2463f3c0  addiu       $v1, $v1, -0xC40
    ctx->pc = 0x12669cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964160));
    // 0x1266a0: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x1266a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x1266a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1266a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1266a8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1266a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1266ac:
    // 0x1266ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1266ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1266ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1266B4u;
    // 0x1266b4: 0x0  nop
    ctx->pc = 0x1266b4u;
    // NOP
    // 0x1266b8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1266b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1266bc: 0x244543f8  addiu       $a1, $v0, 0x43F8
    ctx->pc = 0x1266bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17400));
    // 0x1266c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1266c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1343F8u));
    // 0x1266c4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1266C4u;
    {
        const bool branch_taken_0x1266c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1266C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266C4u;
        // 0x1266c8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266c4) {
            ctx->pc = 0x1266E4u;
            goto label_1266e4;
        }
    }
    ctx->pc = 0x1266CCu;
    // 0x1266cc: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1266ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1266d0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1266d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1266d4: 0x2463f3c8  addiu       $v1, $v1, -0xC38
    ctx->pc = 0x1266d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964168));
    // 0x1266d8: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x1266d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x1266dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1266dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1266e0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1266e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1266e4:
    // 0x1266e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1266E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1266E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1266ECu;
    // 0x1266ec: 0x0  nop
    ctx->pc = 0x1266ecu;
    // NOP
    // 0x1266f0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1266f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1266f4: 0x24454400  addiu       $a1, $v0, 0x4400
    ctx->pc = 0x1266f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17408));
    // 0x1266f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1266f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x134400u));
    // 0x1266fc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1266FCu;
    {
        const bool branch_taken_0x1266fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266FCu;
        // 0x126700: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266fc) {
            ctx->pc = 0x12671Cu;
            goto label_12671c;
        }
    }
    ctx->pc = 0x126704u;
    // 0x126704: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x126704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126708: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x12670c: 0x2463f3d0  addiu       $v1, $v1, -0xC30
    ctx->pc = 0x12670cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964176));
    // 0x126710: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x126714: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x126714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126718: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_12671c:
    // 0x12671c: 0x3e00008  jr          $ra
    ctx->pc = 0x12671Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12671Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126724u;
    // 0x126724: 0x0  nop
    ctx->pc = 0x126724u;
    // NOP
    // 0x126728: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12672c: 0x24454408  addiu       $a1, $v0, 0x4408
    ctx->pc = 0x12672cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17416));
    // 0x126730: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126730u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x134408u));
    // 0x126734: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x126734u;
    {
        const bool branch_taken_0x126734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126734u;
        // 0x126738: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126734) {
            ctx->pc = 0x126754u;
            goto label_126754;
        }
    }
    ctx->pc = 0x12673Cu;
    // 0x12673c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x12673cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126740: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x126744: 0x2463f3d8  addiu       $v1, $v1, -0xC28
    ctx->pc = 0x126744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964184));
    // 0x126748: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x12674c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12674cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126750: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126750u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_126754:
    // 0x126754: 0x3e00008  jr          $ra
    ctx->pc = 0x126754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12675Cu;
    // 0x12675c: 0x0  nop
    ctx->pc = 0x12675cu;
    // NOP
    // 0x126760: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126764: 0x24454410  addiu       $a1, $v0, 0x4410
    ctx->pc = 0x126764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17424));
    // 0x126768: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126768u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x134410u));
    // 0x12676c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12676Cu;
    {
        const bool branch_taken_0x12676c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12676Cu;
        // 0x126770: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12676c) {
            ctx->pc = 0x12678Cu;
            goto label_12678c;
        }
    }
    ctx->pc = 0x126774u;
    // 0x126774: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x126774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126778: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x12677c: 0x2463f3e0  addiu       $v1, $v1, -0xC20
    ctx->pc = 0x12677cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964192));
    // 0x126780: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x126784: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x126784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126788: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126788u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_12678c:
    // 0x12678c: 0x3e00008  jr          $ra
    ctx->pc = 0x12678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12678Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126794u;
    // 0x126794: 0x0  nop
    ctx->pc = 0x126794u;
    // NOP
    // 0x126798: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12679c: 0x24454418  addiu       $a1, $v0, 0x4418
    ctx->pc = 0x12679cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17432));
    // 0x1267a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1267a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x134418u));
    // 0x1267a4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1267A4u;
    {
        const bool branch_taken_0x1267a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1267A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267A4u;
        // 0x1267a8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267a4) {
            ctx->pc = 0x1267C4u;
            goto label_1267c4;
        }
    }
    ctx->pc = 0x1267ACu;
    // 0x1267ac: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1267acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1267b0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1267b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1267b4: 0x2463f3e8  addiu       $v1, $v1, -0xC18
    ctx->pc = 0x1267b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964200));
    // 0x1267b8: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x1267b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x1267bc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1267bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1267c0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1267c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1267c4:
    // 0x1267c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1267C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1267C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1267CCu;
    // 0x1267cc: 0x0  nop
    ctx->pc = 0x1267ccu;
    // NOP
    // 0x1267d0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1267d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1267d4: 0x24454420  addiu       $a1, $v0, 0x4420
    ctx->pc = 0x1267d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17440));
    // 0x1267d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1267d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x134420u));
    // 0x1267dc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1267DCu;
    {
        const bool branch_taken_0x1267dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1267E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267DCu;
        // 0x1267e0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267dc) {
            ctx->pc = 0x1267FCu;
            goto label_1267fc;
        }
    }
    ctx->pc = 0x1267E4u;
    // 0x1267e4: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x1267e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x1267e8: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1267e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1267ec: 0x2463f3f0  addiu       $v1, $v1, -0xC10
    ctx->pc = 0x1267ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964208));
    // 0x1267f0: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x1267f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x1267f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1267f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1267f8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1267f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1267fc:
    // 0x1267fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1267FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1267FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126804u;
    // 0x126804: 0x0  nop
    ctx->pc = 0x126804u;
    // NOP
    // 0x126808: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12680c: 0x24454428  addiu       $a1, $v0, 0x4428
    ctx->pc = 0x12680cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17448));
    // 0x126810: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126810u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x134428u));
    // 0x126814: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x126814u;
    {
        const bool branch_taken_0x126814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126814u;
        // 0x126818: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126814) {
            ctx->pc = 0x126834u;
            goto label_126834;
        }
    }
    ctx->pc = 0x12681Cu;
    // 0x12681c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x12681cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x126820: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x126820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x126824: 0x2463f3f8  addiu       $v1, $v1, -0xC08
    ctx->pc = 0x126824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964216));
    // 0x126828: 0x24844ce0  addiu       $a0, $a0, 0x4CE0
    ctx->pc = 0x126828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19680));
    // 0x12682c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12682cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126830: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x126830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_126834:
    // 0x126834: 0x3e00008  jr          $ra
    ctx->pc = 0x126834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12683Cu;
    // 0x12683c: 0x0  nop
    ctx->pc = 0x12683cu;
    // NOP
    // 0x126840: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x126840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x126844: 0x24634430  addiu       $v1, $v1, 0x4430
    ctx->pc = 0x126844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17456));
    // 0x126848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x126848u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x134430u));
    // 0x12684c: 0x3e00008  jr          $ra
    ctx->pc = 0x12684Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12684Cu;
        // 0x126850: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12684Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126854u;
    // 0x126854: 0x0  nop
    ctx->pc = 0x126854u;
    // NOP
    ctx->pc = 0x126858u;
}
