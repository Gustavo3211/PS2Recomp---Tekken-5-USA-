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

// Function: sub_002C9300
// Address: 0x2c9300 - 0x2c93b0
void sub_002C9300_0x2c9300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9300_0x2c9300");
#endif

    switch (ctx->pc) {
        case 0x2c9348u: goto label_2c9348;
        case 0x2c9350u: goto label_2c9350;
        case 0x2c935cu: goto label_2c935c;
        case 0x2c9368u: goto label_2c9368;
        case 0x2c9374u: goto label_2c9374;
        case 0x2c9398u: goto label_2c9398;
        default: break;
    }

    ctx->pc = 0x2c9300u;

    // 0x2c9300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c930c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c9310: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c9310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9314: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c9314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c9318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c9318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c931c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c931cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2c9320: 0x246388d0  addiu       $v1, $v1, -0x7730
    ctx->pc = 0x2c9320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x2c9324: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c9324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c9328: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C9328u;
    {
        const bool branch_taken_0x2c9328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9328u;
        // 0x2c932c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9328) {
            ctx->pc = 0x2C9398u;
            goto label_2c9398;
        }
    }
    ctx->pc = 0x2C9330u;
    // 0x2c9330: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2c9330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9338: 0xaca208bc  sw          $v0, 0x8BC($a1)
    ctx->pc = 0x2c9338u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2236), GPR_U32(ctx, 2));
    // 0x2c933c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9340: 0xc0b7050  jal         func_2DC140
    ctx->pc = 0x2C9340u;
    SET_GPR_U32(ctx, 31, 0x2C9348u);
    ctx->pc = 0x2C9344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9340u;
    // 0x2c9344: 0x84650042  lh          $a1, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC140u, 0x2C9340u, 0x2C9348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9348u;
label_2c9348:
    // 0x2c9348: 0xc0b23a8  jal         func_2C8EA0
    ctx->pc = 0x2C9348u;
    SET_GPR_U32(ctx, 31, 0x2C9350u);
    ctx->pc = 0x2C934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9348u;
    // 0x2c934c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8EA0u, 0x2C9348u, 0x2C9350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9350u;
label_2c9350:
    // 0x2c9350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9354: 0xc0b23f2  jal         func_2C8FC8
    ctx->pc = 0x2C9354u;
    SET_GPR_U32(ctx, 31, 0x2C935Cu);
    ctx->pc = 0x2C9358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9354u;
    // 0x2c9358: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8FC8u, 0x2C9354u, 0x2C935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C935Cu;
label_2c935c:
    // 0x2c935c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9360: 0xc0b240a  jal         func_2C9028
    ctx->pc = 0x2C9360u;
    SET_GPR_U32(ctx, 31, 0x2C9368u);
    ctx->pc = 0x2C9364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9360u;
    // 0x2c9364: 0x26250034  addiu       $a1, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9028u, 0x2C9360u, 0x2C9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9368u;
label_2c9368:
    // 0x2c9368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c936c: 0xc0b2378  jal         func_2C8DE0
    ctx->pc = 0x2C936Cu;
    SET_GPR_U32(ctx, 31, 0x2C9374u);
    ctx->pc = 0x2C9370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C936Cu;
    // 0x2c9370: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8DE0u, 0x2C936Cu, 0x2C9374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9374u;
label_2c9374:
    // 0x2c9374: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2c9374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2c9378: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2c9378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2c937c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2c937cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c9380: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x2c9380u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2c9384: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c9384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c9388: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x2c9388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x2c938c: 0x24218d10  addiu       $at, $at, -0x72F0
    ctx->pc = 0x2c938cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294937872));
    // 0x2c9390: 0xc0b244e  jal         func_2C9138
    ctx->pc = 0x2C9390u;
    SET_GPR_U32(ctx, 31, 0x2C9398u);
    ctx->pc = 0x2C9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9390u;
    // 0x2c9394: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9138u, 0x2C9390u, 0x2C9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9398u;
label_2c9398:
    // 0x2c9398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c939c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c939cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c93a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c93a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c93a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C93A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93A4u;
        // 0x2c93a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C93A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C93ACu;
    // 0x2c93ac: 0x0  nop
    ctx->pc = 0x2c93acu;
    // NOP
    ctx->pc = 0x2c93b0u;
}
