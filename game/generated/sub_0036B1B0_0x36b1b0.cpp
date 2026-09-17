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

// Function: sub_0036B1B0
// Address: 0x36b1b0 - 0x36b278
void sub_0036B1B0_0x36b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B1B0_0x36b1b0");
#endif

    switch (ctx->pc) {
        case 0x36b1d4u: goto label_36b1d4;
        case 0x36b1ecu: goto label_36b1ec;
        default: break;
    }

    ctx->pc = 0x36b1b0u;

    // 0x36b1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b1b4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b1b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b1bc: 0x24506e18  addiu       $s0, $v0, 0x6E18
    ctx->pc = 0x36b1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28184));
    // 0x36b1c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6E18u));
    // 0x36b1c4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B1C4u;
    {
        const bool branch_taken_0x36b1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B1C4u;
        // 0x36b1c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b1c4) {
            ctx->pc = 0x36B1ECu;
            goto label_36b1ec;
        }
    }
    ctx->pc = 0x36B1CCu;
    // 0x36b1cc: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36B1CCu;
    SET_GPR_U32(ctx, 31, 0x36B1D4u);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36B1CCu, 0x36B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1D4u;
label_36b1d4:
    // 0x36b1d4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b1d8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36b1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36b1dc: 0x24a5b428  addiu       $a1, $a1, -0x4BD8
    ctx->pc = 0x36b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947880));
    // 0x36b1e0: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36b1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36b1e4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36B1E4u;
    SET_GPR_U32(ctx, 31, 0x36B1ECu);
    ctx->pc = 0x36B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B1E4u;
    // 0x36b1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36B1E4u, 0x36B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B1ECu;
label_36b1ec:
    // 0x36b1ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36b1ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b1f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b1f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36b1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x36B1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B1F8u;
        // 0x36b1fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B200u;
    // 0x36b200: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36b200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b204: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x36b204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x36b208: 0xdca30150  ld          $v1, 0x150($a1)
    ctx->pc = 0x36b208u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x36b20c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x36b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x36b210: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x36b210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x36b214: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x36b214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36b218: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36B218u;
    {
        const bool branch_taken_0x36b218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x36B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B218u;
        // 0x36b21c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b218) {
            ctx->pc = 0x36B224u;
            goto label_36b224;
        }
    }
    ctx->pc = 0x36B220u;
    // 0x36b220: 0xa0a20151  sb          $v0, 0x151($a1)
    ctx->pc = 0x36b220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 337), (uint8_t)GPR_U32(ctx, 2));
label_36b224:
    // 0x36b224: 0x3e00008  jr          $ra
    ctx->pc = 0x36B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B22Cu;
    // 0x36b22c: 0x0  nop
    ctx->pc = 0x36b22cu;
    // NOP
    // 0x36b230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b234: 0x3e00008  jr          $ra
    ctx->pc = 0x36B234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B234u;
        // 0x36b238: 0xa0820150  sb          $v0, 0x150($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 336), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B23Cu;
    // 0x36b23c: 0x0  nop
    ctx->pc = 0x36b23cu;
    // NOP
    // 0x36b240: 0x3e00008  jr          $ra
    ctx->pc = 0x36B240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B240u;
        // 0x36b244: 0x90820151  lbu         $v0, 0x151($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 337)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B248u;
    // 0x36b248: 0x90840152  lbu         $a0, 0x152($a0)
    ctx->pc = 0x36b248u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 338)));
    // 0x36b24c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36B24Cu;
    {
        const bool branch_taken_0x36b24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B24Cu;
        // 0x36b250: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b24c) {
            ctx->pc = 0x36B25Cu;
            goto label_36b25c;
        }
    }
    ctx->pc = 0x36B254u;
    // 0x36b254: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x36B254u;
    {
        const bool branch_taken_0x36b254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x36B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B254u;
        // 0x36b258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b254) {
            ctx->pc = 0x36B260u;
            goto label_36b260;
        }
    }
    ctx->pc = 0x36B25Cu;
label_36b25c:
    // 0x36b25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b260:
    // 0x36b260: 0x3e00008  jr          $ra
    ctx->pc = 0x36B260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B268u;
    // 0x36b268: 0x3e00008  jr          $ra
    ctx->pc = 0x36B268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B268u;
        // 0x36b26c: 0x90820153  lbu         $v0, 0x153($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 339)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B270u;
    // 0x36b270: 0x3e00008  jr          $ra
    ctx->pc = 0x36B270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B270u;
        // 0x36b274: 0x90820156  lbu         $v0, 0x156($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 342)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B278u;
}
