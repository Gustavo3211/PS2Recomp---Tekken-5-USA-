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

// Function: sub_00345090
// Address: 0x345090 - 0x3450f0
void sub_00345090_0x345090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345090_0x345090");
#endif

    switch (ctx->pc) {
        case 0x3450b4u: goto label_3450b4;
        case 0x3450d8u: goto label_3450d8;
        default: break;
    }

    ctx->pc = 0x345090u;

    // 0x345090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34509c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3450a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3450a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3450a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3450a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3450a8: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x3450a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x3450ac: 0xc0430e2  jal         func_10C388
    ctx->pc = 0x3450ACu;
    SET_GPR_U32(ctx, 31, 0x3450B4u);
    ctx->pc = 0x3450B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3450ACu;
    // 0x3450b0: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C388u, 0x3450ACu, 0x3450B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450B4u;
label_3450b4:
    // 0x3450b4: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3450B4u;
    {
        const bool branch_taken_0x3450b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3450b4) {
            ctx->pc = 0x3450C8u;
            goto label_3450c8;
        }
    }
    ctx->pc = 0x3450BCu;
    // 0x3450bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3450bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3450c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3450C0u;
    {
        const bool branch_taken_0x3450c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3450C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450C0u;
        // 0x3450c4: 0xa2020047  sb          $v0, 0x47($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3450c0) {
            ctx->pc = 0x3450DCu;
            goto label_3450dc;
        }
    }
    ctx->pc = 0x3450C8u;
label_3450c8:
    // 0x3450c8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3450C8u;
    {
        const bool branch_taken_0x3450c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3450c8) {
            ctx->pc = 0x3450CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3450C8u;
            // 0x3450cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3450E0u;
            goto label_3450e0;
        }
    }
    ctx->pc = 0x3450D0u;
    // 0x3450d0: 0xc0d143c  jal         func_3450F0
    ctx->pc = 0x3450D0u;
    SET_GPR_U32(ctx, 31, 0x3450D8u);
    ctx->pc = 0x3450D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3450D0u;
    // 0x3450d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3450F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3450F0u, 0x3450D0u, 0x3450D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450D8u;
label_3450d8:
    // 0x3450d8: 0xa2110048  sb          $s1, 0x48($s0)
    ctx->pc = 0x3450d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 17));
label_3450dc:
    // 0x3450dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3450dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3450e0:
    // 0x3450e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3450e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3450e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3450e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3450e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3450E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3450ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450E8u;
        // 0x3450ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3450E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3450F0u;
}
