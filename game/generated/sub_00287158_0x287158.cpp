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

// Function: sub_00287158
// Address: 0x287158 - 0x2871e8
void sub_00287158_0x287158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287158_0x287158");
#endif

    switch (ctx->pc) {
        case 0x287188u: goto label_287188;
        case 0x2871a4u: goto label_2871a4;
        case 0x2871c0u: goto label_2871c0;
        case 0x2871ccu: goto label_2871cc;
        default: break;
    }

    ctx->pc = 0x287158u;

    // 0x287158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28715c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x287160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x287160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287164: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x287164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x287168: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x287168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28716c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28716cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287170: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x287170u;
    {
        const bool branch_taken_0x287170 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x287174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287170u;
        // 0x287174: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287170) {
            ctx->pc = 0x287190u;
            goto label_287190;
        }
    }
    ctx->pc = 0x287178u;
    // 0x287178: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x287178u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x28717c: 0x2604f5d4  addiu       $a0, $s0, -0xA2C
    ctx->pc = 0x28717cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964692));
    // 0x287180: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x287180u;
    SET_GPR_U32(ctx, 31, 0x287188u);
    ctx->pc = 0x287184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287180u;
    // 0x287184: 0x80850001  lb          $a1, 0x1($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x287180u, 0x287188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287188u;
label_287188:
    // 0x287188: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x287188u;
    {
        const bool branch_taken_0x287188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287188u;
        // 0x28718c: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287188) {
            ctx->pc = 0x287198u;
            goto label_287198;
        }
    }
    ctx->pc = 0x287190u;
label_287190:
    // 0x287190: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x287190u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x287194: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x287194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_287198:
    // 0x287198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x287198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28719c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x28719Cu;
    SET_GPR_U32(ctx, 31, 0x2871A4u);
    ctx->pc = 0x2871A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28719Cu;
    // 0x2871a0: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x28719Cu, 0x2871A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871A4u;
label_2871a4:
    // 0x2871a4: 0x2603f5d4  addiu       $v1, $s0, -0xA2C
    ctx->pc = 0x2871a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964692));
    // 0x2871a8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2871a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2871ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2871acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2871b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2871b4: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x2871b4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2871b8: 0xc0b7692  jal         func_2DDA48
    ctx->pc = 0x2871B8u;
    SET_GPR_U32(ctx, 31, 0x2871C0u);
    ctx->pc = 0x2871BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871B8u;
    // 0x2871bc: 0x80450000  lb          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA48u, 0x2871B8u, 0x2871C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871C0u;
label_2871c0:
    // 0x2871c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2871c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871c4: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2871C4u;
    SET_GPR_U32(ctx, 31, 0x2871CCu);
    ctx->pc = 0x2871C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871C4u;
    // 0x2871c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2871C4u, 0x2871CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871CCu;
label_2871cc:
    // 0x2871cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2871ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2871d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2871d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2871d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2871d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2871d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2871d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2871dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2871DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2871E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871DCu;
        // 0x2871e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2871DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2871E4u;
    // 0x2871e4: 0x0  nop
    ctx->pc = 0x2871e4u;
    // NOP
    ctx->pc = 0x2871e8u;
}
