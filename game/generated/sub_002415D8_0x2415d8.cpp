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

// Function: sub_002415D8
// Address: 0x2415d8 - 0x241648
void sub_002415D8_0x2415d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002415D8_0x2415d8");
#endif

    switch (ctx->pc) {
        case 0x2415f0u: goto label_2415f0;
        case 0x241608u: goto label_241608;
        case 0x241630u: goto label_241630;
        default: break;
    }

    ctx->pc = 0x2415d8u;

    // 0x2415d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2415d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2415dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2415dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2415e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2415e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2415e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2415e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2415e8: 0xc090534  jal         func_2414D0
    ctx->pc = 0x2415E8u;
    SET_GPR_U32(ctx, 31, 0x2415F0u);
    ctx->pc = 0x2415ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2415E8u;
    // 0x2415ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2414D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2414D0u, 0x2415E8u, 0x2415F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415F0u;
label_2415f0:
    // 0x2415f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2415f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2415f4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2415f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2415f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2415F8u;
    {
        const bool branch_taken_0x2415f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2415f8) {
            ctx->pc = 0x2415FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2415F8u;
            // 0x2415fc: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24160Cu;
            goto label_24160c;
        }
    }
    ctx->pc = 0x241600u;
    // 0x241600: 0xc092978  jal         func_24A5E0
    ctx->pc = 0x241600u;
    SET_GPR_U32(ctx, 31, 0x241608u);
    ctx->pc = 0x24A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A5E0u, 0x241600u, 0x241608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241608u;
label_241608:
    // 0x241608: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x241608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_24160c:
    // 0x24160c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24160Cu;
    {
        const bool branch_taken_0x24160c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24160Cu;
        // 0x241610: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24160c) {
            ctx->pc = 0x241634u;
            goto label_241634;
        }
    }
    ctx->pc = 0x241614u;
    // 0x241614: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x241614u;
    {
        const bool branch_taken_0x241614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x241614) {
            ctx->pc = 0x241618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241614u;
            // 0x241618: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241638u;
            goto label_241638;
        }
    }
    ctx->pc = 0x24161Cu;
    // 0x24161c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x24161cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x241620: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241620u;
    {
        const bool branch_taken_0x241620 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x241624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241620u;
        // 0x241624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241620) {
            ctx->pc = 0x241634u;
            goto label_241634;
        }
    }
    ctx->pc = 0x241628u;
    // 0x241628: 0xc092984  jal         func_24A610
    ctx->pc = 0x241628u;
    SET_GPR_U32(ctx, 31, 0x241630u);
    ctx->pc = 0x24A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A610u, 0x241628u, 0x241630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241630u;
label_241630:
    // 0x241630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_241634:
    // 0x241634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x241634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_241638:
    // 0x241638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x241638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24163c: 0x3e00008  jr          $ra
    ctx->pc = 0x24163Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24163Cu;
        // 0x241640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24163Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241644u;
    // 0x241644: 0x0  nop
    ctx->pc = 0x241644u;
    // NOP
    ctx->pc = 0x241648u;
}
