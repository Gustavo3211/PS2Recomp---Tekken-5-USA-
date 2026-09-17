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

// Function: sub_00369398
// Address: 0x369398 - 0x3695d8
void sub_00369398_0x369398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369398_0x369398");
#endif

    switch (ctx->pc) {
        case 0x3693bcu: goto label_3693bc;
        case 0x3693d4u: goto label_3693d4;
        default: break;
    }

    ctx->pc = 0x369398u;

    // 0x369398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36939c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36939cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3693a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3693a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3693a4: 0x24506c08  addiu       $s0, $v0, 0x6C08
    ctx->pc = 0x3693a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27656));
    // 0x3693a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3693a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6C08u));
    // 0x3693ac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3693ACu;
    {
        const bool branch_taken_0x3693ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3693B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3693ACu;
        // 0x3693b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3693ac) {
            ctx->pc = 0x3693D4u;
            goto label_3693d4;
        }
    }
    ctx->pc = 0x3693B4u;
    // 0x3693b4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x3693B4u;
    SET_GPR_U32(ctx, 31, 0x3693BCu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x3693B4u, 0x3693BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3693BCu;
label_3693bc:
    // 0x3693bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3693bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3693c0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3693c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3693c4: 0x24a52f58  addiu       $a1, $a1, 0x2F58
    ctx->pc = 0x3693c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12120));
    // 0x3693c8: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x3693c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x3693cc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3693CCu;
    SET_GPR_U32(ctx, 31, 0x3693D4u);
    ctx->pc = 0x3693D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3693CCu;
    // 0x3693d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3693CCu, 0x3693D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3693D4u;
label_3693d4:
    // 0x3693d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3693d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3693d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3693dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3693dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3693e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3693E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3693E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3693E0u;
        // 0x3693e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3693E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3693E8u;
    // 0x3693e8: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x3693e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x3693ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3693ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3693f0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3693f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3693f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3693F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3693F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3693F4u;
        // 0x3693f8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3693F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3693FCu;
    // 0x3693fc: 0x0  nop
    ctx->pc = 0x3693fcu;
    // NOP
    // 0x369400: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x369400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x369404: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x369404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x369408: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x369408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36940c: 0x3e00008  jr          $ra
    ctx->pc = 0x36940Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36940Cu;
        // 0x369410: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36940Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369414u;
    // 0x369414: 0x0  nop
    ctx->pc = 0x369414u;
    // NOP
    // 0x369418: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x369418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x36941c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x36941cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x369420: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x369420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x369424: 0x3e00008  jr          $ra
    ctx->pc = 0x369424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369424u;
        // 0x369428: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36942Cu;
    // 0x36942c: 0x0  nop
    ctx->pc = 0x36942cu;
    // NOP
    // 0x369430: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x369430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x369434: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x369434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x369438: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x369438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36943c: 0x3e00008  jr          $ra
    ctx->pc = 0x36943Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36943Cu;
        // 0x369440: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36943Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369444u;
    // 0x369444: 0x0  nop
    ctx->pc = 0x369444u;
    // NOP
    // 0x369448: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x369448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36944c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36944cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x369450: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x369450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x369454: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x369454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x369458: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x369458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x36945c: 0x3e00008  jr          $ra
    ctx->pc = 0x36945Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36945Cu;
        // 0x369460: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36945Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369464u;
    // 0x369464: 0x0  nop
    ctx->pc = 0x369464u;
    // NOP
    // 0x369468: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x369468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x36946c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x36946cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x369470: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x369470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x369474: 0x3e00008  jr          $ra
    ctx->pc = 0x369474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369474u;
        // 0x369478: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36947Cu;
    // 0x36947c: 0x0  nop
    ctx->pc = 0x36947cu;
    // NOP
    // 0x369480: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x369480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x369484: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x369484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369488: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369488u;
    {
        const bool branch_taken_0x369488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369488u;
        // 0x36948c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369488) {
            ctx->pc = 0x3694A0u;
            goto label_3694a0;
        }
    }
    ctx->pc = 0x369490u;
    // 0x369490: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x369490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x369494: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x369494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x369498: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369498u;
    {
        const bool branch_taken_0x369498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x369498) {
            ctx->pc = 0x3694ACu;
            goto label_3694ac;
        }
    }
    ctx->pc = 0x3694A0u;
label_3694a0:
    // 0x3694a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3694a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3694a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3694a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3694a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3694ac:
    // 0x3694ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3694ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3694B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3694ACu;
        // 0x3694b0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3694ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3694B4u;
    // 0x3694b4: 0x0  nop
    ctx->pc = 0x3694b4u;
    // NOP
    // 0x3694b8: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x3694b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x3694bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3694bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3694c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3694C0u;
    {
        const bool branch_taken_0x3694c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3694C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3694C0u;
        // 0x3694c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3694c0) {
            ctx->pc = 0x3694D8u;
            goto label_3694d8;
        }
    }
    ctx->pc = 0x3694C8u;
    // 0x3694c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3694c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3694cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3694ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3694d0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3694D0u;
    {
        const bool branch_taken_0x3694d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3694d0) {
            ctx->pc = 0x3694E4u;
            goto label_3694e4;
        }
    }
    ctx->pc = 0x3694D8u;
label_3694d8:
    // 0x3694d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3694d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3694dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3694dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3694e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3694e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3694e4:
    // 0x3694e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3694E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3694E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3694E4u;
        // 0x3694e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3694E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3694ECu;
    // 0x3694ec: 0x0  nop
    ctx->pc = 0x3694ecu;
    // NOP
    // 0x3694f0: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x3694f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x3694f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3694f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3694f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3694F8u;
    {
        const bool branch_taken_0x3694f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3694FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3694F8u;
        // 0x3694fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3694f8) {
            ctx->pc = 0x369510u;
            goto label_369510;
        }
    }
    ctx->pc = 0x369500u;
    // 0x369500: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x369500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x369504: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x369504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x369508: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369508u;
    {
        const bool branch_taken_0x369508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x369508) {
            ctx->pc = 0x36951Cu;
            goto label_36951c;
        }
    }
    ctx->pc = 0x369510u;
label_369510:
    // 0x369510: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x369510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x369514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369518: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x369518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36951c:
    // 0x36951c: 0x3e00008  jr          $ra
    ctx->pc = 0x36951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36951Cu;
        // 0x369520: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36951Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369524u;
    // 0x369524: 0x0  nop
    ctx->pc = 0x369524u;
    // NOP
    // 0x369528: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x369528u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36952c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x369530: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x369530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x369534: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x369534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369538: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369538u;
    {
        const bool branch_taken_0x369538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369538u;
        // 0x36953c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369538) {
            ctx->pc = 0x369550u;
            goto label_369550;
        }
    }
    ctx->pc = 0x369540u;
    // 0x369540: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x369540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x369544: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x369544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x369548: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369548u;
    {
        const bool branch_taken_0x369548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x369548) {
            ctx->pc = 0x36955Cu;
            goto label_36955c;
        }
    }
    ctx->pc = 0x369550u;
label_369550:
    // 0x369550: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x369550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x369554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369558: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x369558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36955c:
    // 0x36955c: 0x3e00008  jr          $ra
    ctx->pc = 0x36955Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36955Cu;
        // 0x369560: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36955Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369564u;
    // 0x369564: 0x0  nop
    ctx->pc = 0x369564u;
    // NOP
    // 0x369568: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x369568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x36956c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369570u;
    {
        const bool branch_taken_0x369570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369570u;
        // 0x369574: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369570) {
            ctx->pc = 0x369588u;
            goto label_369588;
        }
    }
    ctx->pc = 0x369578u;
    // 0x369578: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x369578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36957c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x369580: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369580u;
    {
        const bool branch_taken_0x369580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x369580) {
            ctx->pc = 0x369594u;
            goto label_369594;
        }
    }
    ctx->pc = 0x369588u;
label_369588:
    // 0x369588: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x369588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36958c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36958cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369590: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x369590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_369594:
    // 0x369594: 0x3e00008  jr          $ra
    ctx->pc = 0x369594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369594u;
        // 0x369598: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36959Cu;
    // 0x36959c: 0x0  nop
    ctx->pc = 0x36959cu;
    // NOP
    // 0x3695a0: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x3695a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x3695a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3695a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3695a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3695A8u;
    {
        const bool branch_taken_0x3695a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3695ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3695A8u;
        // 0x3695ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3695a8) {
            ctx->pc = 0x3695C0u;
            goto label_3695c0;
        }
    }
    ctx->pc = 0x3695B0u;
    // 0x3695b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3695b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3695b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3695b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3695b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3695B8u;
    {
        const bool branch_taken_0x3695b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3695b8) {
            ctx->pc = 0x3695CCu;
            goto label_3695cc;
        }
    }
    ctx->pc = 0x3695C0u;
label_3695c0:
    // 0x3695c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3695c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3695c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3695c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3695c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3695cc:
    // 0x3695cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3695CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3695D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3695CCu;
        // 0x3695d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3695CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3695D4u;
    // 0x3695d4: 0x0  nop
    ctx->pc = 0x3695d4u;
    // NOP
    ctx->pc = 0x3695d8u;
}
