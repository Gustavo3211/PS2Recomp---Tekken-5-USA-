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

// Function: sub_0036F440
// Address: 0x36f440 - 0x36f550
void sub_0036F440_0x36f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F440_0x36f440");
#endif

    switch (ctx->pc) {
        case 0x36f464u: goto label_36f464;
        case 0x36f47cu: goto label_36f47c;
        case 0x36f4e0u: goto label_36f4e0;
        default: break;
    }

    ctx->pc = 0x36f440u;

    // 0x36f440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f444: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36f448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f44c: 0x245072a0  addiu       $s0, $v0, 0x72A0
    ctx->pc = 0x36f44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29344));
    // 0x36f450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36f450u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D72A0u));
    // 0x36f454: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F454u;
    {
        const bool branch_taken_0x36f454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F454u;
        // 0x36f458: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f454) {
            ctx->pc = 0x36F47Cu;
            goto label_36f47c;
        }
    }
    ctx->pc = 0x36F45Cu;
    // 0x36f45c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36F45Cu;
    SET_GPR_U32(ctx, 31, 0x36F464u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36F45Cu, 0x36F464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F464u;
label_36f464:
    // 0x36f464: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36f464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36f468: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36f468u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36f46c: 0x24a5fd88  addiu       $a1, $a1, -0x278
    ctx->pc = 0x36f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966664));
    // 0x36f470: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36f470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36f474: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36F474u;
    SET_GPR_U32(ctx, 31, 0x36F47Cu);
    ctx->pc = 0x36F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F474u;
    // 0x36f478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36F474u, 0x36F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F47Cu;
label_36f47c:
    // 0x36f47c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36f47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f484: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36f484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f488: 0x3e00008  jr          $ra
    ctx->pc = 0x36F488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F488u;
        // 0x36f48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F490u;
    // 0x36f490: 0x3e00008  jr          $ra
    ctx->pc = 0x36F490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F490u;
        // 0x36f494: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F498u;
    // 0x36f498: 0x3e00008  jr          $ra
    ctx->pc = 0x36F498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F498u;
        // 0x36f49c: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F4A0u;
    // 0x36f4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36F4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F4A0u;
        // 0x36f4a4: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F4A8u;
    // 0x36f4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36F4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F4A8u;
        // 0x36f4ac: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F4B0u;
    // 0x36f4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x36F4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F4B0u;
        // 0x36f4b4: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F4B8u;
    // 0x36f4b8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f4bc: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x36f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x36f4c0: 0x2442ed80  addiu       $v0, $v0, -0x1280
    ctx->pc = 0x36f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962560));
    // 0x36f4c4: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x36f4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x36f4c8: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x36f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x36f4cc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x36f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x36f4d0: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x36f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x36f4d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36f4d8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36f4dc: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x36f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_36f4e0:
    // 0x36f4e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36f4e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36f4e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36f4ec: 0x0  nop
    ctx->pc = 0x36f4ecu;
    // NOP
    // 0x36f4f0: 0x0  nop
    ctx->pc = 0x36f4f0u;
    // NOP
    // 0x36f4f4: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36F4F4u;
    {
        const bool branch_taken_0x36f4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x36F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F4F4u;
        // 0x36f4f8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f4f4) {
            ctx->pc = 0x36F4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f4e0;
        }
    }
    ctx->pc = 0x36F4FCu;
    // 0x36f4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x36F4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F504u;
    // 0x36f504: 0x0  nop
    ctx->pc = 0x36f504u;
    // NOP
    // 0x36f508: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x36f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x36f50c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36F50Cu;
    {
        const bool branch_taken_0x36f50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f50c) {
            ctx->pc = 0x36F510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F50Cu;
            // 0x36f510: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F514u;
            goto label_36f514;
        }
    }
    ctx->pc = 0x36F514u;
label_36f514:
    // 0x36f514: 0x3e00008  jr          $ra
    ctx->pc = 0x36F514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F51Cu;
    // 0x36f51c: 0x0  nop
    ctx->pc = 0x36f51cu;
    // NOP
    // 0x36f520: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x36f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x36f524: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36F524u;
    {
        const bool branch_taken_0x36f524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f524) {
            ctx->pc = 0x36F528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F524u;
            // 0x36f528: 0xac850058  sw          $a1, 0x58($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F52Cu;
            goto label_36f52c;
        }
    }
    ctx->pc = 0x36F52Cu;
label_36f52c:
    // 0x36f52c: 0x3e00008  jr          $ra
    ctx->pc = 0x36F52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F534u;
    // 0x36f534: 0x0  nop
    ctx->pc = 0x36f534u;
    // NOP
    // 0x36f538: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x36f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x36f53c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x36F53Cu;
    {
        const bool branch_taken_0x36f53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f53c) {
            ctx->pc = 0x36F540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F53Cu;
            // 0x36f540: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F544u;
            goto label_36f544;
        }
    }
    ctx->pc = 0x36F544u;
label_36f544:
    // 0x36f544: 0x3e00008  jr          $ra
    ctx->pc = 0x36F544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F54Cu;
    // 0x36f54c: 0x0  nop
    ctx->pc = 0x36f54cu;
    // NOP
    ctx->pc = 0x36f550u;
}
